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
#define STATE_COUNT 540
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 30

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_CR = 2,
  anon_sym_LF = 3,
  aux_sym__statement_token1 = 4,
  aux_sym__whitespace_token1 = 5,
  sym_line_comment = 6,
  sym_block_comment = 7,
  sym_preprocessor = 8,
  sym__wrong_preprocessor = 9,
  anon_sym_LPAREN = 10,
  anon_sym_SPACE = 11,
  anon_sym_TAB = 12,
  anon_sym_RPAREN = 13,
  sym_macro_mnemonic = 14,
  anon_sym_COMMA = 15,
  anon_sym_DOTbyte = 16,
  anon_sym_DOT2byte = 17,
  anon_sym_DOTshort = 18,
  anon_sym_DOThalf = 19,
  anon_sym_DOThword = 20,
  anon_sym_DOT4byte = 21,
  anon_sym_DOTword = 22,
  anon_sym_DOTint = 23,
  anon_sym_DOT8byte = 24,
  anon_sym_DOTdword = 25,
  anon_sym_DOTlong = 26,
  anon_sym_DOTquad = 27,
  anon_sym_DOTcomm = 28,
  anon_sym_DOTlcomm = 29,
  anon_sym_DOTalign = 30,
  anon_sym_DOTbalign = 31,
  anon_sym_DOTp2align = 32,
  anon_sym_DOTsleb128 = 33,
  anon_sym_DOTuleb128 = 34,
  anon_sym_DOTdtprelword = 35,
  anon_sym_DOTdtpreldword = 36,
  anon_sym_DOTskip = 37,
  anon_sym_DOTspace = 38,
  anon_sym_DOTfloat = 39,
  anon_sym_DOTdouble = 40,
  anon_sym_DOTsingle = 41,
  aux_sym__string_directive_token1 = 42,
  anon_sym_DOTasciz = 43,
  anon_sym_DOTascii = 44,
  anon_sym_DOTasciiz = 45,
  anon_sym_DOTstring = 46,
  anon_sym_DOTstringz = 47,
  aux_sym_control_mnemonic_token1 = 48,
  aux_sym__control_operand_separator_token1 = 49,
  aux_sym_section_type_token1 = 50,
  aux_sym_option_flag_token1 = 51,
  sym_opcode = 52,
  sym_assignment_operator = 53,
  sym_logical_or_operator = 54,
  sym_logical_and_operator = 55,
  sym_bitwise_or_operator = 56,
  sym_bitwise_xor_operator = 57,
  sym_bitwise_and_operator = 58,
  sym_equality_operator = 59,
  sym_relational_operator = 60,
  sym_shift_operator = 61,
  sym_additive_operator = 62,
  sym_multiplicative_operator = 63,
  sym_unary_minus_operator = 64,
  sym_bitwise_not_operator = 65,
  sym_logical_not_operator = 66,
  sym_relocation_type = 67,
  sym_octal = 68,
  sym_binary = 69,
  aux_sym_decimal_token1 = 70,
  sym_hexadecimal = 71,
  sym_float = 72,
  anon_sym_SQUOTE = 73,
  aux_sym_char_token1 = 74,
  anon_sym_DQUOTE = 75,
  aux_sym_string_token1 = 76,
  sym__escape_sequence = 77,
  sym_register = 78,
  sym_macro_variable = 79,
  sym_macro_parameter = 80,
  sym_macro_name = 81,
  sym_local_label = 82,
  aux_sym_local_label_reference_token1 = 83,
  sym_global_label = 84,
  aux_sym_symbol_token1 = 85,
  sym_global_numeric_label = 86,
  sym_local_numeric_label = 87,
  sym_local_numeric_label_reference = 88,
  sym__operand_separator = 89,
  sym__operator_space = 90,
  sym__line_separator = 91,
  sym__data_separator = 92,
  sym_program = 93,
  sym__statement = 94,
  sym__comment = 95,
  sym_directive = 96,
  sym__macro_directive = 97,
  sym_macro_parameters = 98,
  sym__numeric_directive = 99,
  sym_numeric_mnemonic = 100,
  sym_numeric_operands = 101,
  sym__string_directive = 102,
  sym_string_mnemonic = 103,
  sym__string_operand = 104,
  sym__control_directive = 105,
  sym_control_mnemonic = 106,
  sym_control_operands = 107,
  sym__control_operand = 108,
  sym__control_operand_separator = 109,
  sym_section_type = 110,
  sym_option_flag = 111,
  sym_instruction = 112,
  sym_operands = 113,
  sym__operand = 114,
  sym__call_expression = 115,
  sym__assignment_expression = 116,
  sym__wrapped_assignment_expression = 117,
  sym__logical_or_expression = 118,
  sym__wrapped_logical_or_expression = 119,
  sym__logical_and_expression = 120,
  sym__wrapped_logical_and_expression = 121,
  sym__bitwise_or_expression = 122,
  sym__wrapped_bitwise_or_expression = 123,
  sym__bitwise_xor_expression = 124,
  sym__wrapped_bitwise_xor_expression = 125,
  sym__bitwise_and_expression = 126,
  sym__wrapped_bitwise_and_expression = 127,
  sym__equality_expression = 128,
  sym__wrapped_equality_expression = 129,
  sym__relational_expression = 130,
  sym__wrapped_relational_expression = 131,
  sym__shift_expression = 132,
  sym__wrapped_shift_expression = 133,
  sym__additive_expression = 134,
  sym__wrapped_additive_expression = 135,
  sym__multiplicative_expression = 136,
  sym__wrapped_multiplicative_expression = 137,
  sym__simple_expression = 138,
  sym_parenthesized_expression = 139,
  sym_unary_expression = 140,
  sym_relocation_expression = 141,
  sym_decimal = 142,
  sym_char = 143,
  sym_string = 144,
  sym__label = 145,
  sym_local_label_reference = 146,
  sym_symbol = 147,
  sym_address = 148,
  aux_sym_program_repeat1 = 149,
  aux_sym_macro_parameters_repeat1 = 150,
  aux_sym__numeric_directive_repeat1 = 151,
  aux_sym_numeric_operands_repeat1 = 152,
  aux_sym_numeric_operands_repeat2 = 153,
  aux_sym_control_operands_repeat1 = 154,
  aux_sym_operands_repeat1 = 155,
  aux_sym_string_repeat1 = 156,
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
  [sym_preprocessor] = "preprocessor",
  [sym__wrong_preprocessor] = "line_comment",
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
  [sym_preprocessor] = sym_preprocessor,
  [sym__wrong_preprocessor] = sym_line_comment,
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
  [sym_preprocessor] = {
    .visible = true,
    .named = true,
  },
  [sym__wrong_preprocessor] = {
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
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 3},
  [14] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 2},
  [17] = {.index = 25, .length = 2},
  [18] = {.index = 27, .length = 1},
  [19] = {.index = 28, .length = 2},
  [20] = {.index = 30, .length = 3},
  [21] = {.index = 33, .length = 1},
  [22] = {.index = 34, .length = 1},
  [23] = {.index = 35, .length = 1},
  [24] = {.index = 36, .length = 2},
  [25] = {.index = 38, .length = 3},
  [26] = {.index = 41, .length = 2},
  [27] = {.index = 43, .length = 2},
  [28] = {.index = 45, .length = 2},
  [29] = {.index = 47, .length = 3},
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
  [7] = {
    [1] = sym_line_comment,
  },
  [8] = {
    [2] = sym_line_comment,
  },
  [15] = {
    [3] = sym_line_comment,
  },
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
  [17] = 17,
  [18] = 9,
  [19] = 17,
  [20] = 17,
  [21] = 14,
  [22] = 8,
  [23] = 17,
  [24] = 14,
  [25] = 17,
  [26] = 14,
  [27] = 17,
  [28] = 28,
  [29] = 29,
  [30] = 28,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 37,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 40,
  [50] = 36,
  [51] = 37,
  [52] = 40,
  [53] = 41,
  [54] = 42,
  [55] = 43,
  [56] = 44,
  [57] = 45,
  [58] = 46,
  [59] = 47,
  [60] = 48,
  [61] = 36,
  [62] = 37,
  [63] = 40,
  [64] = 41,
  [65] = 42,
  [66] = 43,
  [67] = 44,
  [68] = 45,
  [69] = 46,
  [70] = 47,
  [71] = 48,
  [72] = 72,
  [73] = 37,
  [74] = 40,
  [75] = 41,
  [76] = 42,
  [77] = 43,
  [78] = 44,
  [79] = 45,
  [80] = 46,
  [81] = 47,
  [82] = 48,
  [83] = 72,
  [84] = 36,
  [85] = 36,
  [86] = 36,
  [87] = 36,
  [88] = 36,
  [89] = 72,
  [90] = 72,
  [91] = 72,
  [92] = 32,
  [93] = 41,
  [94] = 42,
  [95] = 43,
  [96] = 44,
  [97] = 45,
  [98] = 32,
  [99] = 46,
  [100] = 47,
  [101] = 32,
  [102] = 48,
  [103] = 103,
  [104] = 36,
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
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 151,
  [163] = 155,
  [164] = 156,
  [165] = 157,
  [166] = 158,
  [167] = 159,
  [168] = 160,
  [169] = 139,
  [170] = 142,
  [171] = 143,
  [172] = 144,
  [173] = 145,
  [174] = 146,
  [175] = 147,
  [176] = 148,
  [177] = 149,
  [178] = 152,
  [179] = 153,
  [180] = 154,
  [181] = 120,
  [182] = 121,
  [183] = 122,
  [184] = 123,
  [185] = 124,
  [186] = 125,
  [187] = 187,
  [188] = 127,
  [189] = 128,
  [190] = 129,
  [191] = 130,
  [192] = 131,
  [193] = 132,
  [194] = 133,
  [195] = 134,
  [196] = 135,
  [197] = 136,
  [198] = 138,
  [199] = 161,
  [200] = 140,
  [201] = 119,
  [202] = 141,
  [203] = 150,
  [204] = 151,
  [205] = 152,
  [206] = 153,
  [207] = 154,
  [208] = 120,
  [209] = 121,
  [210] = 122,
  [211] = 123,
  [212] = 124,
  [213] = 125,
  [214] = 126,
  [215] = 127,
  [216] = 128,
  [217] = 129,
  [218] = 130,
  [219] = 131,
  [220] = 132,
  [221] = 133,
  [222] = 134,
  [223] = 135,
  [224] = 136,
  [225] = 138,
  [226] = 161,
  [227] = 140,
  [228] = 141,
  [229] = 119,
  [230] = 155,
  [231] = 156,
  [232] = 157,
  [233] = 158,
  [234] = 159,
  [235] = 160,
  [236] = 139,
  [237] = 142,
  [238] = 143,
  [239] = 144,
  [240] = 145,
  [241] = 146,
  [242] = 150,
  [243] = 147,
  [244] = 148,
  [245] = 149,
  [246] = 137,
  [247] = 137,
  [248] = 126,
  [249] = 249,
  [250] = 137,
  [251] = 251,
  [252] = 137,
  [253] = 135,
  [254] = 136,
  [255] = 138,
  [256] = 161,
  [257] = 140,
  [258] = 141,
  [259] = 259,
  [260] = 260,
  [261] = 119,
  [262] = 155,
  [263] = 156,
  [264] = 157,
  [265] = 158,
  [266] = 159,
  [267] = 160,
  [268] = 139,
  [269] = 142,
  [270] = 143,
  [271] = 144,
  [272] = 145,
  [273] = 146,
  [274] = 150,
  [275] = 147,
  [276] = 148,
  [277] = 149,
  [278] = 278,
  [279] = 279,
  [280] = 134,
  [281] = 151,
  [282] = 152,
  [283] = 153,
  [284] = 154,
  [285] = 120,
  [286] = 121,
  [287] = 122,
  [288] = 123,
  [289] = 124,
  [290] = 125,
  [291] = 126,
  [292] = 127,
  [293] = 128,
  [294] = 129,
  [295] = 130,
  [296] = 131,
  [297] = 297,
  [298] = 132,
  [299] = 297,
  [300] = 260,
  [301] = 133,
  [302] = 297,
  [303] = 260,
  [304] = 297,
  [305] = 260,
  [306] = 297,
  [307] = 260,
  [308] = 297,
  [309] = 260,
  [310] = 310,
  [311] = 123,
  [312] = 312,
  [313] = 150,
  [314] = 151,
  [315] = 152,
  [316] = 153,
  [317] = 154,
  [318] = 120,
  [319] = 121,
  [320] = 122,
  [321] = 124,
  [322] = 125,
  [323] = 126,
  [324] = 127,
  [325] = 128,
  [326] = 129,
  [327] = 130,
  [328] = 131,
  [329] = 132,
  [330] = 133,
  [331] = 137,
  [332] = 135,
  [333] = 136,
  [334] = 138,
  [335] = 161,
  [336] = 140,
  [337] = 141,
  [338] = 119,
  [339] = 155,
  [340] = 156,
  [341] = 157,
  [342] = 158,
  [343] = 159,
  [344] = 160,
  [345] = 139,
  [346] = 142,
  [347] = 143,
  [348] = 144,
  [349] = 145,
  [350] = 146,
  [351] = 147,
  [352] = 148,
  [353] = 149,
  [354] = 119,
  [355] = 150,
  [356] = 148,
  [357] = 149,
  [358] = 134,
  [359] = 359,
  [360] = 137,
  [361] = 361,
  [362] = 137,
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
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 383,
  [388] = 386,
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
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 137,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 372,
  [423] = 367,
  [424] = 419,
  [425] = 425,
  [426] = 419,
  [427] = 427,
  [428] = 378,
  [429] = 429,
  [430] = 430,
  [431] = 419,
  [432] = 419,
  [433] = 376,
  [434] = 434,
  [435] = 435,
  [436] = 435,
  [437] = 437,
  [438] = 438,
  [439] = 137,
  [440] = 440,
  [441] = 373,
  [442] = 437,
  [443] = 443,
  [444] = 435,
  [445] = 377,
  [446] = 375,
  [447] = 379,
  [448] = 381,
  [449] = 437,
  [450] = 450,
  [451] = 437,
  [452] = 435,
  [453] = 453,
  [454] = 454,
  [455] = 454,
  [456] = 456,
  [457] = 380,
  [458] = 454,
  [459] = 383,
  [460] = 460,
  [461] = 386,
  [462] = 454,
  [463] = 463,
  [464] = 454,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 466,
  [471] = 468,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 467,
  [476] = 467,
  [477] = 477,
  [478] = 467,
  [479] = 467,
  [480] = 466,
  [481] = 466,
  [482] = 466,
  [483] = 466,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 489,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 486,
  [497] = 494,
  [498] = 498,
  [499] = 489,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 494,
  [504] = 486,
  [505] = 489,
  [506] = 490,
  [507] = 489,
  [508] = 494,
  [509] = 486,
  [510] = 510,
  [511] = 489,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 386,
  [517] = 517,
  [518] = 486,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 486,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 488,
  [531] = 531,
  [532] = 488,
  [533] = 512,
  [534] = 488,
  [535] = 535,
  [536] = 488,
  [537] = 537,
  [538] = 494,
  [539] = 383,
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
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '!', 526,
        '"', 549,
        '#', 155,
        '$', 53,
        '&', 512,
        '\'', 545,
        '(', 199,
        ')', 210,
        '+', 518,
        ',', 213,
        '-', 522,
        '.', 652,
        '/', 521,
        '0', 560,
        '3', 561,
        ';', 127,
        '<', 515,
        '=', 507,
        '>', 516,
        '@', 90,
        'A', 640,
        'S', 629,
        'T', 642,
        '\\', 5,
        '^', 511,
        'a', 641,
        'f', 631,
        'g', 636,
        'r', 633,
        's', 630,
        't', 643,
        'z', 634,
        '|', 510,
        '~', 524,
        '%', 519,
        '*', 519,
        'C', 639,
        'c', 639,
        'K', 638,
        'k', 638,
        'V', 638,
        'v', 638,
        '1', 562,
        '2', 562,
        'F', 632,
        'R', 632,
        'X', 632,
        'x', 632,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(563);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(644);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 205,
        '\n', 135,
        '\r', 128,
        ' ', 200,
        '!', 525,
        '#', 155,
        '$', 57,
        '%', 63,
        '\'', 545,
        '(', 199,
        ',', 213,
        '-', 523,
        '.', 657,
        '/', 43,
        '0', 530,
        '3', 534,
        ';', 127,
        '=', 506,
        'A', 665,
        'S', 650,
        'T', 667,
        '\\', 15,
        'a', 666,
        'f', 653,
        'g', 660,
        'r', 655,
        's', 651,
        't', 668,
        'z', 658,
        '|', 68,
        '~', 524,
        'C', 664,
        'c', 664,
        'K', 663,
        'k', 663,
        'V', 663,
        'v', 663,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(1);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(535);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(654);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(669);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(208);
      if (lookahead == ' ') ADVANCE(203);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(628);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(209);
      if (lookahead == ' ') ADVANCE(204);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') SKIP(21);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(36);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(36);
      if (lookahead == '\r') SKIP(4);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(555);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(553);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '\r') ADVANCE(149);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(37);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(37);
      if (lookahead == '\r') SKIP(9);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 138,
        '\r', 131,
        '!', 525,
        '"', 549,
        '#', 155,
        '$', 57,
        '%', 63,
        '\'', 545,
        '(', 199,
        ',', 213,
        '-', 523,
        '.', 657,
        '/', 43,
        '0', 530,
        '3', 534,
        ';', 127,
        '=', 506,
        'A', 665,
        'S', 650,
        'T', 667,
        '\\', 13,
        'a', 666,
        'f', 653,
        'g', 660,
        'r', 655,
        's', 651,
        't', 668,
        'z', 658,
        '|', 68,
        '~', 524,
        'C', 664,
        'c', 664,
        'K', 663,
        'k', 663,
        'V', 663,
        'v', 663,
        '1', 535,
        '2', 535,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(11);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(654);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(669);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(11);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '\r') SKIP(12);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(1);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(14);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(38);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '\r') SKIP(16);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(39);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(39);
      if (lookahead == '\r') SKIP(18);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(3);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '\r') SKIP(20);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(40);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(40);
      if (lookahead == '\r') SKIP(22);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(555);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(553);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(49);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(49);
      if (lookahead == '\r') SKIP(24);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(555);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(553);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') SKIP(28);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(26);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(26);
      if (lookahead == '\r') SKIP(27);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(31);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '\r') SKIP(29);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') SKIP(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(48);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(48);
      if (lookahead == '\r') SKIP(32);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 35:
      if (lookahead == '\r') ADVANCE(185);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        '!', 526,
        '"', 549,
        '#', 155,
        '$', 53,
        '&', 512,
        '\'', 545,
        '(', 199,
        ')', 210,
        '+', 518,
        ',', 213,
        '-', 522,
        '.', 652,
        '/', 521,
        '0', 560,
        '3', 561,
        ';', 127,
        '<', 515,
        '=', 507,
        '>', 516,
        '@', 90,
        'A', 640,
        'S', 629,
        'T', 642,
        '\\', 5,
        '^', 511,
        'a', 641,
        'f', 631,
        'g', 636,
        'r', 633,
        's', 630,
        't', 643,
        'z', 634,
        '|', 510,
        '~', 524,
        '%', 519,
        '*', 519,
        'C', 639,
        'c', 639,
        'K', 638,
        'k', 638,
        'V', 638,
        'v', 638,
        '1', 562,
        '2', 562,
        'F', 632,
        'R', 632,
        'X', 632,
        'x', 632,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(563);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(644);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        '!', 525,
        '"', 549,
        '#', 155,
        '$', 57,
        '%', 63,
        '\'', 545,
        '(', 199,
        ')', 210,
        '+', 91,
        ',', 501,
        '-', 523,
        '.', 657,
        '/', 43,
        '0', 530,
        '3', 534,
        ';', 127,
        '=', 506,
        '@', 90,
        'A', 665,
        'S', 650,
        'T', 667,
        '\\', 10,
        'a', 666,
        'f', 653,
        'g', 660,
        'r', 655,
        's', 651,
        't', 668,
        'z', 658,
        '|', 68,
        '~', 524,
        '\t', 37,
        ' ', 37,
        'C', 664,
        'c', 664,
        'K', 663,
        'k', 663,
        'V', 663,
        'v', 663,
        '1', 535,
        '2', 535,
        'F', 654,
        'R', 654,
        'X', 654,
        'x', 654,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(37);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(669);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '!', 62,
        '#', 155,
        '&', 512,
        '(', 199,
        ',', 501,
        '/', 521,
        ';', 127,
        '<', 515,
        '=', 507,
        '>', 516,
      );
      if (lookahead == '\\') SKIP(17);
      if (lookahead == '^') ADVANCE(511);
      if (lookahead == '|') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(519);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(518);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        '!', 62,
        '&', 512,
        '(', 199,
        ')', 210,
        ',', 213,
        '/', 520,
        '<', 515,
        '=', 507,
        '>', 516,
      );
      if (lookahead == '\\') SKIP(19);
      if (lookahead == '^') ADVANCE(511);
      if (lookahead == '|') ADVANCE(510);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(519);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(518);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(549);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == '\\') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(552);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 41:
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(628);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(184);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == ':') ADVANCE(646);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') SKIP(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(146);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(547);
      if (lookahead == '\\') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(546);
      END_STATE();
    case 50:
      if (lookahead == '1') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 51:
      if (lookahead == '1') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(556);
      END_STATE();
    case 52:
      ADVANCE_MAP(
        '2', 307,
        '4', 314,
        '8', 316,
        ':', 649,
        'L', 47,
        'a', 395,
        'b', 301,
        'c', 436,
        'd', 435,
        'f', 396,
        'h', 302,
        'i', 425,
        'l', 323,
        'm', 297,
        'p', 286,
        'q', 490,
        's', 374,
        'u', 401,
        'w', 438,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      END_STATE();
    case 53:
      ADVANCE_MAP(
        '3', 565,
        'A', 74,
        'S', 50,
        'T', 76,
        'a', 75,
        'f', 54,
        'g', 66,
        'r', 56,
        's', 51,
        't', 80,
        'z', 64,
        'C', 73,
        'c', 73,
        'K', 71,
        'k', 71,
        'V', 71,
        'v', 71,
        '1', 568,
        '2', 568,
        'F', 55,
        'R', 55,
        'X', 55,
        'x', 55,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 54:
      if (lookahead == '3') ADVANCE(565);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(568);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(556);
      END_STATE();
    case 55:
      if (lookahead == '3') ADVANCE(565);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 56:
      if (lookahead == '3') ADVANCE(565);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 57:
      ADVANCE_MAP(
        '3', 566,
        'A', 622,
        'S', 573,
        'T', 624,
        'a', 623,
        'f', 578,
        'g', 610,
        'r', 580,
        's', 574,
        't', 625,
        'z', 593,
        'C', 621,
        'c', 621,
        'K', 620,
        'k', 620,
        'V', 620,
        'v', 620,
        '1', 569,
        '2', 569,
        'F', 579,
        'R', 579,
        'X', 579,
        'x', 579,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(627);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(671);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '=') ADVANCE(513);
      END_STATE();
    case 63:
      ADVANCE_MAP(
        'a', 588,
        'c', 586,
        'd', 617,
        'g', 608,
        'h', 599,
        'l', 607,
        'p', 589,
        't', 603,
      );
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(556);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 68:
      if (lookahead == '|') ADVANCE(508);
      END_STATE();
    case 69:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 70:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      END_STATE();
    case 71:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(556);
      END_STATE();
    case 72:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(533);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(556);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(556);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(556);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(556);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(553);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(502);
      END_STATE();
    case 91:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 92:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 93:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\t', 205,
        '\n', 135,
        '\r', 128,
        ' ', 200,
        '!', 525,
        '#', 155,
        '$', 57,
        '%', 63,
        '\'', 545,
        '(', 199,
        ',', 213,
        '-', 523,
        '.', 657,
        '/', 43,
        '0', 530,
        '3', 534,
        ';', 127,
        '=', 506,
        'A', 665,
        'S', 650,
        'T', 667,
        '\\', 15,
        'a', 666,
        'f', 653,
        'g', 660,
        'r', 655,
        's', 651,
        't', 668,
        'z', 658,
        '|', 68,
        '~', 524,
        'C', 664,
        'c', 664,
        'K', 663,
        'k', 663,
        'V', 663,
        'v', 663,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(93);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(535);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(654);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(669);
      END_STATE();
    case 94:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\t', 206,
        '\n', 136,
        '\r', 129,
        ' ', 201,
        '!', 62,
        '#', 155,
        '&', 512,
        '(', 199,
        ',', 213,
        '/', 521,
        ';', 127,
        '<', 515,
        '=', 507,
        '>', 516,
      );
      if (lookahead == '\\') SKIP(101);
      if (lookahead == '^') ADVANCE(511);
      if (lookahead == '|') ADVANCE(510);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(519);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(518);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(94);
      END_STATE();
    case 95:
      if (eof) ADVANCE(126);
      if (lookahead == '\t') ADVANCE(207);
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ';') ADVANCE(127);
      if (lookahead == '\\') SKIP(108);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(95);
      END_STATE();
    case 96:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(98);
      END_STATE();
    case 97:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '\r') SKIP(96);
      END_STATE();
    case 98:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 137,
        '\r', 130,
        '#', 155,
        '%', 92,
        '.', 52,
        '/', 43,
        '0', 59,
        ';', 127,
      );
      if (lookahead == '\\') SKIP(97);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(98);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 99:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 138,
        '\r', 131,
        '!', 525,
        '"', 549,
        '#', 155,
        '$', 57,
        '%', 63,
        '\'', 545,
        '(', 199,
        ',', 213,
        '-', 523,
        '.', 657,
        '/', 43,
        '0', 530,
        '3', 534,
        ';', 127,
        '=', 506,
        'A', 665,
        'S', 650,
        'T', 667,
        '\\', 13,
        'a', 666,
        'f', 653,
        'g', 660,
        'r', 655,
        's', 651,
        't', 668,
        'z', 658,
        '|', 68,
        '~', 524,
        'C', 664,
        'c', 664,
        'K', 663,
        'k', 663,
        'V', 663,
        'v', 663,
        '1', 535,
        '2', 535,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(99);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(654);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(669);
      END_STATE();
    case 100:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(94);
      END_STATE();
    case 101:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(94);
      if (lookahead == '\r') SKIP(100);
      END_STATE();
    case 102:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(104);
      END_STATE();
    case 103:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(104);
      if (lookahead == '\r') SKIP(102);
      END_STATE();
    case 104:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 139,
        '\r', 132,
        '!', 62,
        '#', 155,
        '&', 512,
        '(', 199,
        ',', 213,
        '/', 521,
        ';', 127,
        '<', 515,
        '=', 507,
        '>', 516,
      );
      if (lookahead == '\\') SKIP(103);
      if (lookahead == '^') ADVANCE(511);
      if (lookahead == '|') ADVANCE(510);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(519);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(518);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(104);
      END_STATE();
    case 105:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(123);
      END_STATE();
    case 106:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(123);
      if (lookahead == '\r') SKIP(105);
      END_STATE();
    case 107:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(95);
      END_STATE();
    case 108:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(95);
      if (lookahead == '\r') SKIP(107);
      END_STATE();
    case 109:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(111);
      END_STATE();
    case 110:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(111);
      if (lookahead == '\r') SKIP(109);
      END_STATE();
    case 111:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ';') ADVANCE(127);
      if (lookahead == '\\') SKIP(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(111);
      END_STATE();
    case 112:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(124);
      END_STATE();
    case 113:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(124);
      if (lookahead == '\r') SKIP(112);
      END_STATE();
    case 114:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(116);
      END_STATE();
    case 115:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(116);
      if (lookahead == '\r') SKIP(114);
      END_STATE();
    case 116:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\\') SKIP(115);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(116);
      END_STATE();
    case 117:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(125);
      END_STATE();
    case 118:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(125);
      if (lookahead == '\r') SKIP(117);
      END_STATE();
    case 119:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(121);
      END_STATE();
    case 120:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(121);
      if (lookahead == '\r') SKIP(119);
      END_STATE();
    case 121:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') SKIP(120);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(121);
      END_STATE();
    case 122:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '!', 525,
        '"', 549,
        '#', 155,
        '$', 57,
        '%', 63,
        '\'', 545,
        '(', 199,
        ')', 210,
        '+', 91,
        ',', 501,
        '-', 523,
        '.', 657,
        '/', 43,
        '0', 530,
        '3', 534,
        ';', 127,
        '=', 506,
        '@', 90,
        'A', 665,
        'S', 650,
        'T', 667,
        '\\', 10,
        'a', 666,
        'f', 653,
        'g', 660,
        'r', 655,
        's', 651,
        't', 668,
        'z', 658,
        '|', 68,
        '~', 524,
        '\t', 37,
        ' ', 37,
        'C', 664,
        'c', 664,
        'K', 663,
        'k', 663,
        'V', 663,
        'v', 663,
        '1', 535,
        '2', 535,
        'F', 654,
        'R', 654,
        'X', 654,
        'x', 654,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(122);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(669);
      END_STATE();
    case 123:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '!', 62,
        '#', 155,
        '&', 512,
        '(', 199,
        ',', 501,
        '/', 521,
        ';', 127,
        '<', 515,
        '=', 507,
        '>', 516,
      );
      if (lookahead == '\\') SKIP(106);
      if (lookahead == '^') ADVANCE(511);
      if (lookahead == '|') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(519);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(518);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 124:
      if (eof) ADVANCE(126);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ';') ADVANCE(127);
      if (lookahead == '\\') SKIP(113);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(145);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(124);
      END_STATE();
    case 125:
      if (eof) ADVANCE(126);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\\') SKIP(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(205);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(15);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(206);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '\r') ADVANCE(129);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '#') ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(130);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '0') ADVANCE(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(131);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(13);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '\r') ADVANCE(132);
      if (lookahead == '#') ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(205);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(15);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(206);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '\r') ADVANCE(129);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '#') ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(130);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '0') ADVANCE(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(131);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(13);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '\r') ADVANCE(132);
      if (lookahead == '#') ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(26);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_line_comment);
      ADVANCE_MAP(
        '\\', 35,
        'd', 159,
        'e', 171,
        'i', 163,
        'l', 167,
        'p', 180,
        'u', 175,
        'w', 153,
        '\t', 155,
        ' ', 155,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'g') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_preprocessor);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__wrong_preprocessor);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__wrong_preprocessor);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__wrong_preprocessor);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__wrong_preprocessor);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(205);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(15);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(206);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '\r') ADVANCE(129);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '#') ADVANCE(155);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(207);
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '#') ADVANCE(155);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(208);
      if (lookahead == ' ') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(628);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(209);
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(205);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(15);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(206);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '\r') ADVANCE(129);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '#') ADVANCE(155);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(207);
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '#') ADVANCE(155);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(208);
      if (lookahead == ' ') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(628);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(209);
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__string_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'z') ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(499);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'z') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(500);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'z') ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(499);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'z') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(500);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(281);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(283);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(284);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(285);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(287);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(303);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(288);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(289);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(290);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(304);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(248);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(250);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(249);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(251);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'y') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'w') ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'y') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'w') ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'b') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'b') ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'b') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'b') ADVANCE(279);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'b') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'b') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'b') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'b') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'b') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'b') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'b') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'b') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'c') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'c') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'c') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'c') ADVANCE(443);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'c') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead == 'w') ADVANCE(447);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(237);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(227);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead == 'w') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(273);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(235);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'h') ADVANCE(437);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == 'k') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == 'p') ADVANCE(294);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'h') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'p') ADVANCE(298);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'z') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(499);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'z') ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(500);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(375);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(382);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(439);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'm') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'm') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'm') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'm') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead == 'w') ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(455);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead == 'w') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'p') ADVANCE(257);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'p') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'u') ADVANCE(309);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'u') ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'u') ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'w') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'w') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'y') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'y') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'y') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'y') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'y') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'y') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__control_operand_separator_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_assignment_operator);
      if (lookahead == '=') ADVANCE(513);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_logical_or_operator);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_logical_and_operator);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_bitwise_or_operator);
      if (lookahead == '|') ADVANCE(508);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_bitwise_xor_operator);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_bitwise_and_operator);
      if (lookahead == '&') ADVANCE(509);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '<') ADVANCE(517);
      if (lookahead == '=') ADVANCE(514);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(514);
      if (lookahead == '>') ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_shift_operator);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(184);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '0') ADVANCE(531);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(536);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_bitwise_not_operator);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_logical_not_operator);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_logical_not_operator);
      if (lookahead == '=') ADVANCE(513);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(598);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 541,
        'b', 673,
        'f', 672,
        'E', 69,
        'e', 69,
        'X', 82,
        'x', 82,
        '8', 536,
        '9', 536,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(532);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(541);
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(82);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(532);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(541);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(541);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(672);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(536);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(536);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(541);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(541);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(547);
      if (lookahead == '\\') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(546);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == '\\') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(550);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(553);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(554);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(559);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(671);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(672);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(671);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(672);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(564);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(671);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(671);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(556);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(582);
      if (lookahead == '3') ADVANCE(577);
      if (lookahead == 'r') ADVANCE(595);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(582);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '2') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(569);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(566);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(566);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '4') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(581);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(598);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(591);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(592);
      if (lookahead == 'h') ADVANCE(599);
      if (lookahead == 'l') ADVANCE(607);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'b') ADVANCE(615);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'c') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(590);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'g') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'h') ADVANCE(599);
      if (lookahead == 'l') ADVANCE(607);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'i') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(576);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(616);
      if (lookahead == 'p') ADVANCE(614);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(601);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(618);
      if (lookahead == 'p') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(619);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(613);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(606);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(594);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(596);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(583);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(585);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(527);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('4' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_macro_parameter);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == '1') ADVANCE(557);
      if (lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == '1') ADVANCE(557);
      if (lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(559);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == '3') ADVANCE(557);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(558);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(559);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == '3') ADVANCE(557);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == '3') ADVANCE(557);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(559);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(559);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(559);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(559);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(646);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 305,
        '4', 313,
        '8', 315,
        ':', 649,
        'L', 647,
        'a', 389,
        'b', 293,
        'c', 429,
        'd', 431,
        'f', 394,
        'h', 296,
        'i', 418,
        'l', 324,
        'm', 292,
        'p', 282,
        'q', 488,
        's', 373,
        'u', 403,
        'w', 432,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(567);
      if (lookahead == 'a') ADVANCE(665);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(570);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(567);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(567);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'p') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(659);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(533);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 98, .external_lex_state = 2},
  [2] = {.lex_state = 122, .external_lex_state = 3},
  [3] = {.lex_state = 99, .external_lex_state = 2},
  [4] = {.lex_state = 98, .external_lex_state = 2},
  [5] = {.lex_state = 98, .external_lex_state = 2},
  [6] = {.lex_state = 98, .external_lex_state = 2},
  [7] = {.lex_state = 93, .external_lex_state = 4},
  [8] = {.lex_state = 99, .external_lex_state = 2},
  [9] = {.lex_state = 99, .external_lex_state = 2},
  [10] = {.lex_state = 98, .external_lex_state = 2},
  [11] = {.lex_state = 122, .external_lex_state = 2},
  [12] = {.lex_state = 122, .external_lex_state = 2},
  [13] = {.lex_state = 122, .external_lex_state = 2},
  [14] = {.lex_state = 122, .external_lex_state = 2},
  [15] = {.lex_state = 122, .external_lex_state = 2},
  [16] = {.lex_state = 122, .external_lex_state = 2},
  [17] = {.lex_state = 122, .external_lex_state = 2},
  [18] = {.lex_state = 122, .external_lex_state = 2},
  [19] = {.lex_state = 122, .external_lex_state = 2},
  [20] = {.lex_state = 122, .external_lex_state = 2},
  [21] = {.lex_state = 122, .external_lex_state = 2},
  [22] = {.lex_state = 122, .external_lex_state = 2},
  [23] = {.lex_state = 122, .external_lex_state = 2},
  [24] = {.lex_state = 122, .external_lex_state = 2},
  [25] = {.lex_state = 122, .external_lex_state = 2},
  [26] = {.lex_state = 122, .external_lex_state = 2},
  [27] = {.lex_state = 122, .external_lex_state = 2},
  [28] = {.lex_state = 122, .external_lex_state = 2},
  [29] = {.lex_state = 122, .external_lex_state = 2},
  [30] = {.lex_state = 122, .external_lex_state = 2},
  [31] = {.lex_state = 122, .external_lex_state = 2},
  [32] = {.lex_state = 122, .external_lex_state = 2},
  [33] = {.lex_state = 122, .external_lex_state = 2},
  [34] = {.lex_state = 122, .external_lex_state = 2},
  [35] = {.lex_state = 122, .external_lex_state = 2},
  [36] = {.lex_state = 122, .external_lex_state = 2},
  [37] = {.lex_state = 122, .external_lex_state = 2},
  [38] = {.lex_state = 122, .external_lex_state = 2},
  [39] = {.lex_state = 122, .external_lex_state = 2},
  [40] = {.lex_state = 122, .external_lex_state = 2},
  [41] = {.lex_state = 122, .external_lex_state = 2},
  [42] = {.lex_state = 122, .external_lex_state = 2},
  [43] = {.lex_state = 122, .external_lex_state = 2},
  [44] = {.lex_state = 122, .external_lex_state = 2},
  [45] = {.lex_state = 122, .external_lex_state = 2},
  [46] = {.lex_state = 122, .external_lex_state = 2},
  [47] = {.lex_state = 122, .external_lex_state = 2},
  [48] = {.lex_state = 122, .external_lex_state = 2},
  [49] = {.lex_state = 122, .external_lex_state = 2},
  [50] = {.lex_state = 122, .external_lex_state = 2},
  [51] = {.lex_state = 122, .external_lex_state = 2},
  [52] = {.lex_state = 122, .external_lex_state = 2},
  [53] = {.lex_state = 122, .external_lex_state = 2},
  [54] = {.lex_state = 122, .external_lex_state = 2},
  [55] = {.lex_state = 122, .external_lex_state = 2},
  [56] = {.lex_state = 122, .external_lex_state = 2},
  [57] = {.lex_state = 122, .external_lex_state = 2},
  [58] = {.lex_state = 122, .external_lex_state = 2},
  [59] = {.lex_state = 122, .external_lex_state = 2},
  [60] = {.lex_state = 122, .external_lex_state = 2},
  [61] = {.lex_state = 122, .external_lex_state = 2},
  [62] = {.lex_state = 122, .external_lex_state = 2},
  [63] = {.lex_state = 122, .external_lex_state = 2},
  [64] = {.lex_state = 122, .external_lex_state = 2},
  [65] = {.lex_state = 122, .external_lex_state = 2},
  [66] = {.lex_state = 122, .external_lex_state = 2},
  [67] = {.lex_state = 122, .external_lex_state = 2},
  [68] = {.lex_state = 122, .external_lex_state = 2},
  [69] = {.lex_state = 122, .external_lex_state = 2},
  [70] = {.lex_state = 122, .external_lex_state = 2},
  [71] = {.lex_state = 122, .external_lex_state = 2},
  [72] = {.lex_state = 122, .external_lex_state = 2},
  [73] = {.lex_state = 122, .external_lex_state = 2},
  [74] = {.lex_state = 122, .external_lex_state = 2},
  [75] = {.lex_state = 122, .external_lex_state = 2},
  [76] = {.lex_state = 122, .external_lex_state = 2},
  [77] = {.lex_state = 122, .external_lex_state = 2},
  [78] = {.lex_state = 122, .external_lex_state = 2},
  [79] = {.lex_state = 122, .external_lex_state = 2},
  [80] = {.lex_state = 122, .external_lex_state = 2},
  [81] = {.lex_state = 122, .external_lex_state = 2},
  [82] = {.lex_state = 122, .external_lex_state = 2},
  [83] = {.lex_state = 122, .external_lex_state = 2},
  [84] = {.lex_state = 122, .external_lex_state = 2},
  [85] = {.lex_state = 122, .external_lex_state = 2},
  [86] = {.lex_state = 122, .external_lex_state = 2},
  [87] = {.lex_state = 122, .external_lex_state = 2},
  [88] = {.lex_state = 122, .external_lex_state = 2},
  [89] = {.lex_state = 122, .external_lex_state = 2},
  [90] = {.lex_state = 122, .external_lex_state = 2},
  [91] = {.lex_state = 122, .external_lex_state = 2},
  [92] = {.lex_state = 122, .external_lex_state = 2},
  [93] = {.lex_state = 122, .external_lex_state = 2},
  [94] = {.lex_state = 122, .external_lex_state = 2},
  [95] = {.lex_state = 122, .external_lex_state = 2},
  [96] = {.lex_state = 122, .external_lex_state = 2},
  [97] = {.lex_state = 122, .external_lex_state = 2},
  [98] = {.lex_state = 122, .external_lex_state = 2},
  [99] = {.lex_state = 122, .external_lex_state = 2},
  [100] = {.lex_state = 122, .external_lex_state = 2},
  [101] = {.lex_state = 122, .external_lex_state = 2},
  [102] = {.lex_state = 122, .external_lex_state = 2},
  [103] = {.lex_state = 122, .external_lex_state = 2},
  [104] = {.lex_state = 122, .external_lex_state = 2},
  [105] = {.lex_state = 98, .external_lex_state = 2},
  [106] = {.lex_state = 98, .external_lex_state = 2},
  [107] = {.lex_state = 98, .external_lex_state = 2},
  [108] = {.lex_state = 98, .external_lex_state = 2},
  [109] = {.lex_state = 98, .external_lex_state = 2},
  [110] = {.lex_state = 98, .external_lex_state = 2},
  [111] = {.lex_state = 98, .external_lex_state = 2},
  [112] = {.lex_state = 98, .external_lex_state = 2},
  [113] = {.lex_state = 98, .external_lex_state = 2},
  [114] = {.lex_state = 98, .external_lex_state = 2},
  [115] = {.lex_state = 98, .external_lex_state = 2},
  [116] = {.lex_state = 98, .external_lex_state = 2},
  [117] = {.lex_state = 98, .external_lex_state = 2},
  [118] = {.lex_state = 98, .external_lex_state = 2},
  [119] = {.lex_state = 94, .external_lex_state = 1},
  [120] = {.lex_state = 94, .external_lex_state = 1},
  [121] = {.lex_state = 94, .external_lex_state = 1},
  [122] = {.lex_state = 94, .external_lex_state = 1},
  [123] = {.lex_state = 94, .external_lex_state = 1},
  [124] = {.lex_state = 94, .external_lex_state = 1},
  [125] = {.lex_state = 94, .external_lex_state = 1},
  [126] = {.lex_state = 94, .external_lex_state = 1},
  [127] = {.lex_state = 94, .external_lex_state = 1},
  [128] = {.lex_state = 94, .external_lex_state = 1},
  [129] = {.lex_state = 94, .external_lex_state = 1},
  [130] = {.lex_state = 94, .external_lex_state = 1},
  [131] = {.lex_state = 94, .external_lex_state = 1},
  [132] = {.lex_state = 94, .external_lex_state = 1},
  [133] = {.lex_state = 94, .external_lex_state = 1},
  [134] = {.lex_state = 94, .external_lex_state = 1},
  [135] = {.lex_state = 94, .external_lex_state = 1},
  [136] = {.lex_state = 94, .external_lex_state = 1},
  [137] = {.lex_state = 94, .external_lex_state = 1},
  [138] = {.lex_state = 94, .external_lex_state = 1},
  [139] = {.lex_state = 94, .external_lex_state = 1},
  [140] = {.lex_state = 94, .external_lex_state = 1},
  [141] = {.lex_state = 94, .external_lex_state = 1},
  [142] = {.lex_state = 94, .external_lex_state = 1},
  [143] = {.lex_state = 94, .external_lex_state = 1},
  [144] = {.lex_state = 94, .external_lex_state = 1},
  [145] = {.lex_state = 94, .external_lex_state = 1},
  [146] = {.lex_state = 94, .external_lex_state = 1},
  [147] = {.lex_state = 94, .external_lex_state = 1},
  [148] = {.lex_state = 94, .external_lex_state = 1},
  [149] = {.lex_state = 94, .external_lex_state = 1},
  [150] = {.lex_state = 94, .external_lex_state = 1},
  [151] = {.lex_state = 94, .external_lex_state = 1},
  [152] = {.lex_state = 94, .external_lex_state = 1},
  [153] = {.lex_state = 94, .external_lex_state = 1},
  [154] = {.lex_state = 94, .external_lex_state = 1},
  [155] = {.lex_state = 94, .external_lex_state = 1},
  [156] = {.lex_state = 94, .external_lex_state = 1},
  [157] = {.lex_state = 94, .external_lex_state = 1},
  [158] = {.lex_state = 94, .external_lex_state = 1},
  [159] = {.lex_state = 94, .external_lex_state = 1},
  [160] = {.lex_state = 94, .external_lex_state = 1},
  [161] = {.lex_state = 94, .external_lex_state = 1},
  [162] = {.lex_state = 104, .external_lex_state = 5},
  [163] = {.lex_state = 104, .external_lex_state = 5},
  [164] = {.lex_state = 104, .external_lex_state = 5},
  [165] = {.lex_state = 104, .external_lex_state = 5},
  [166] = {.lex_state = 104, .external_lex_state = 5},
  [167] = {.lex_state = 104, .external_lex_state = 5},
  [168] = {.lex_state = 104, .external_lex_state = 5},
  [169] = {.lex_state = 104, .external_lex_state = 5},
  [170] = {.lex_state = 104, .external_lex_state = 5},
  [171] = {.lex_state = 104, .external_lex_state = 5},
  [172] = {.lex_state = 104, .external_lex_state = 5},
  [173] = {.lex_state = 104, .external_lex_state = 5},
  [174] = {.lex_state = 104, .external_lex_state = 5},
  [175] = {.lex_state = 104, .external_lex_state = 5},
  [176] = {.lex_state = 104, .external_lex_state = 5},
  [177] = {.lex_state = 104, .external_lex_state = 5},
  [178] = {.lex_state = 104, .external_lex_state = 5},
  [179] = {.lex_state = 104, .external_lex_state = 5},
  [180] = {.lex_state = 104, .external_lex_state = 5},
  [181] = {.lex_state = 104, .external_lex_state = 5},
  [182] = {.lex_state = 104, .external_lex_state = 5},
  [183] = {.lex_state = 104, .external_lex_state = 5},
  [184] = {.lex_state = 104, .external_lex_state = 5},
  [185] = {.lex_state = 104, .external_lex_state = 5},
  [186] = {.lex_state = 104, .external_lex_state = 5},
  [187] = {.lex_state = 104, .external_lex_state = 5},
  [188] = {.lex_state = 104, .external_lex_state = 5},
  [189] = {.lex_state = 104, .external_lex_state = 5},
  [190] = {.lex_state = 104, .external_lex_state = 5},
  [191] = {.lex_state = 104, .external_lex_state = 5},
  [192] = {.lex_state = 104, .external_lex_state = 5},
  [193] = {.lex_state = 104, .external_lex_state = 5},
  [194] = {.lex_state = 104, .external_lex_state = 5},
  [195] = {.lex_state = 104, .external_lex_state = 5},
  [196] = {.lex_state = 104, .external_lex_state = 5},
  [197] = {.lex_state = 104, .external_lex_state = 5},
  [198] = {.lex_state = 104, .external_lex_state = 5},
  [199] = {.lex_state = 104, .external_lex_state = 5},
  [200] = {.lex_state = 104, .external_lex_state = 5},
  [201] = {.lex_state = 104, .external_lex_state = 5},
  [202] = {.lex_state = 104, .external_lex_state = 5},
  [203] = {.lex_state = 123, .external_lex_state = 1},
  [204] = {.lex_state = 123, .external_lex_state = 1},
  [205] = {.lex_state = 123, .external_lex_state = 1},
  [206] = {.lex_state = 123, .external_lex_state = 1},
  [207] = {.lex_state = 123, .external_lex_state = 1},
  [208] = {.lex_state = 123, .external_lex_state = 1},
  [209] = {.lex_state = 123, .external_lex_state = 1},
  [210] = {.lex_state = 123, .external_lex_state = 1},
  [211] = {.lex_state = 123, .external_lex_state = 1},
  [212] = {.lex_state = 123, .external_lex_state = 1},
  [213] = {.lex_state = 123, .external_lex_state = 1},
  [214] = {.lex_state = 123, .external_lex_state = 1},
  [215] = {.lex_state = 123, .external_lex_state = 1},
  [216] = {.lex_state = 123, .external_lex_state = 1},
  [217] = {.lex_state = 123, .external_lex_state = 1},
  [218] = {.lex_state = 123, .external_lex_state = 1},
  [219] = {.lex_state = 123, .external_lex_state = 1},
  [220] = {.lex_state = 123, .external_lex_state = 1},
  [221] = {.lex_state = 123, .external_lex_state = 1},
  [222] = {.lex_state = 123, .external_lex_state = 1},
  [223] = {.lex_state = 123, .external_lex_state = 1},
  [224] = {.lex_state = 123, .external_lex_state = 1},
  [225] = {.lex_state = 123, .external_lex_state = 1},
  [226] = {.lex_state = 123, .external_lex_state = 1},
  [227] = {.lex_state = 123, .external_lex_state = 1},
  [228] = {.lex_state = 123, .external_lex_state = 1},
  [229] = {.lex_state = 123, .external_lex_state = 1},
  [230] = {.lex_state = 123, .external_lex_state = 1},
  [231] = {.lex_state = 123, .external_lex_state = 1},
  [232] = {.lex_state = 123, .external_lex_state = 1},
  [233] = {.lex_state = 123, .external_lex_state = 1},
  [234] = {.lex_state = 123, .external_lex_state = 1},
  [235] = {.lex_state = 123, .external_lex_state = 1},
  [236] = {.lex_state = 123, .external_lex_state = 1},
  [237] = {.lex_state = 123, .external_lex_state = 1},
  [238] = {.lex_state = 123, .external_lex_state = 1},
  [239] = {.lex_state = 123, .external_lex_state = 1},
  [240] = {.lex_state = 123, .external_lex_state = 1},
  [241] = {.lex_state = 123, .external_lex_state = 1},
  [242] = {.lex_state = 104, .external_lex_state = 5},
  [243] = {.lex_state = 123, .external_lex_state = 1},
  [244] = {.lex_state = 123, .external_lex_state = 1},
  [245] = {.lex_state = 123, .external_lex_state = 1},
  [246] = {.lex_state = 104, .external_lex_state = 5},
  [247] = {.lex_state = 123, .external_lex_state = 1},
  [248] = {.lex_state = 104, .external_lex_state = 5},
  [249] = {.lex_state = 93, .external_lex_state = 1},
  [250] = {.lex_state = 93, .external_lex_state = 1},
  [251] = {.lex_state = 93, .external_lex_state = 1},
  [252] = {.lex_state = 39, .external_lex_state = 5},
  [253] = {.lex_state = 39, .external_lex_state = 5},
  [254] = {.lex_state = 39, .external_lex_state = 5},
  [255] = {.lex_state = 39, .external_lex_state = 5},
  [256] = {.lex_state = 39, .external_lex_state = 5},
  [257] = {.lex_state = 39, .external_lex_state = 5},
  [258] = {.lex_state = 39, .external_lex_state = 5},
  [259] = {.lex_state = 93, .external_lex_state = 1},
  [260] = {.lex_state = 39, .external_lex_state = 5},
  [261] = {.lex_state = 39, .external_lex_state = 5},
  [262] = {.lex_state = 39, .external_lex_state = 5},
  [263] = {.lex_state = 39, .external_lex_state = 5},
  [264] = {.lex_state = 39, .external_lex_state = 5},
  [265] = {.lex_state = 39, .external_lex_state = 5},
  [266] = {.lex_state = 39, .external_lex_state = 5},
  [267] = {.lex_state = 39, .external_lex_state = 5},
  [268] = {.lex_state = 39, .external_lex_state = 5},
  [269] = {.lex_state = 39, .external_lex_state = 5},
  [270] = {.lex_state = 39, .external_lex_state = 5},
  [271] = {.lex_state = 39, .external_lex_state = 5},
  [272] = {.lex_state = 39, .external_lex_state = 5},
  [273] = {.lex_state = 39, .external_lex_state = 5},
  [274] = {.lex_state = 39, .external_lex_state = 5},
  [275] = {.lex_state = 39, .external_lex_state = 5},
  [276] = {.lex_state = 39, .external_lex_state = 5},
  [277] = {.lex_state = 39, .external_lex_state = 5},
  [278] = {.lex_state = 93, .external_lex_state = 1},
  [279] = {.lex_state = 93, .external_lex_state = 1},
  [280] = {.lex_state = 39, .external_lex_state = 5},
  [281] = {.lex_state = 39, .external_lex_state = 5},
  [282] = {.lex_state = 39, .external_lex_state = 5},
  [283] = {.lex_state = 39, .external_lex_state = 5},
  [284] = {.lex_state = 39, .external_lex_state = 5},
  [285] = {.lex_state = 39, .external_lex_state = 5},
  [286] = {.lex_state = 39, .external_lex_state = 5},
  [287] = {.lex_state = 39, .external_lex_state = 5},
  [288] = {.lex_state = 39, .external_lex_state = 5},
  [289] = {.lex_state = 39, .external_lex_state = 5},
  [290] = {.lex_state = 39, .external_lex_state = 5},
  [291] = {.lex_state = 39, .external_lex_state = 5},
  [292] = {.lex_state = 39, .external_lex_state = 5},
  [293] = {.lex_state = 39, .external_lex_state = 5},
  [294] = {.lex_state = 39, .external_lex_state = 5},
  [295] = {.lex_state = 39, .external_lex_state = 5},
  [296] = {.lex_state = 39, .external_lex_state = 5},
  [297] = {.lex_state = 39, .external_lex_state = 5},
  [298] = {.lex_state = 39, .external_lex_state = 5},
  [299] = {.lex_state = 39, .external_lex_state = 5},
  [300] = {.lex_state = 39, .external_lex_state = 5},
  [301] = {.lex_state = 39, .external_lex_state = 5},
  [302] = {.lex_state = 39, .external_lex_state = 5},
  [303] = {.lex_state = 39, .external_lex_state = 5},
  [304] = {.lex_state = 39, .external_lex_state = 5},
  [305] = {.lex_state = 39, .external_lex_state = 5},
  [306] = {.lex_state = 39, .external_lex_state = 5},
  [307] = {.lex_state = 39, .external_lex_state = 5},
  [308] = {.lex_state = 39, .external_lex_state = 5},
  [309] = {.lex_state = 39, .external_lex_state = 5},
  [310] = {.lex_state = 93, .external_lex_state = 1},
  [311] = {.lex_state = 39, .external_lex_state = 2},
  [312] = {.lex_state = 266, .external_lex_state = 2},
  [313] = {.lex_state = 266, .external_lex_state = 2},
  [314] = {.lex_state = 39, .external_lex_state = 2},
  [315] = {.lex_state = 39, .external_lex_state = 2},
  [316] = {.lex_state = 39, .external_lex_state = 2},
  [317] = {.lex_state = 39, .external_lex_state = 2},
  [318] = {.lex_state = 39, .external_lex_state = 2},
  [319] = {.lex_state = 39, .external_lex_state = 2},
  [320] = {.lex_state = 39, .external_lex_state = 2},
  [321] = {.lex_state = 39, .external_lex_state = 2},
  [322] = {.lex_state = 39, .external_lex_state = 2},
  [323] = {.lex_state = 39, .external_lex_state = 2},
  [324] = {.lex_state = 39, .external_lex_state = 2},
  [325] = {.lex_state = 39, .external_lex_state = 2},
  [326] = {.lex_state = 39, .external_lex_state = 2},
  [327] = {.lex_state = 39, .external_lex_state = 2},
  [328] = {.lex_state = 39, .external_lex_state = 2},
  [329] = {.lex_state = 39, .external_lex_state = 2},
  [330] = {.lex_state = 39, .external_lex_state = 2},
  [331] = {.lex_state = 39, .external_lex_state = 2},
  [332] = {.lex_state = 39, .external_lex_state = 2},
  [333] = {.lex_state = 39, .external_lex_state = 2},
  [334] = {.lex_state = 39, .external_lex_state = 2},
  [335] = {.lex_state = 39, .external_lex_state = 2},
  [336] = {.lex_state = 39, .external_lex_state = 2},
  [337] = {.lex_state = 39, .external_lex_state = 2},
  [338] = {.lex_state = 266, .external_lex_state = 2},
  [339] = {.lex_state = 39, .external_lex_state = 2},
  [340] = {.lex_state = 39, .external_lex_state = 2},
  [341] = {.lex_state = 39, .external_lex_state = 2},
  [342] = {.lex_state = 39, .external_lex_state = 2},
  [343] = {.lex_state = 39, .external_lex_state = 2},
  [344] = {.lex_state = 39, .external_lex_state = 2},
  [345] = {.lex_state = 39, .external_lex_state = 2},
  [346] = {.lex_state = 39, .external_lex_state = 2},
  [347] = {.lex_state = 39, .external_lex_state = 2},
  [348] = {.lex_state = 39, .external_lex_state = 2},
  [349] = {.lex_state = 39, .external_lex_state = 2},
  [350] = {.lex_state = 39, .external_lex_state = 2},
  [351] = {.lex_state = 39, .external_lex_state = 2},
  [352] = {.lex_state = 266, .external_lex_state = 2},
  [353] = {.lex_state = 266, .external_lex_state = 2},
  [354] = {.lex_state = 39, .external_lex_state = 2},
  [355] = {.lex_state = 39, .external_lex_state = 2},
  [356] = {.lex_state = 39, .external_lex_state = 2},
  [357] = {.lex_state = 39, .external_lex_state = 2},
  [358] = {.lex_state = 39, .external_lex_state = 2},
  [359] = {.lex_state = 93, .external_lex_state = 4},
  [360] = {.lex_state = 99, .external_lex_state = 5},
  [361] = {.lex_state = 93, .external_lex_state = 4},
  [362] = {.lex_state = 122, .external_lex_state = 1},
  [363] = {.lex_state = 93, .external_lex_state = 4},
  [364] = {.lex_state = 93, .external_lex_state = 3},
  [365] = {.lex_state = 93, .external_lex_state = 3},
  [366] = {.lex_state = 122, .external_lex_state = 1},
  [367] = {.lex_state = 99, .external_lex_state = 5},
  [368] = {.lex_state = 122, .external_lex_state = 1},
  [369] = {.lex_state = 122, .external_lex_state = 1},
  [370] = {.lex_state = 93, .external_lex_state = 3},
  [371] = {.lex_state = 122, .external_lex_state = 1},
  [372] = {.lex_state = 95, .external_lex_state = 3},
  [373] = {.lex_state = 99, .external_lex_state = 5},
  [374] = {.lex_state = 111, .external_lex_state = 2},
  [375] = {.lex_state = 99, .external_lex_state = 5},
  [376] = {.lex_state = 95, .external_lex_state = 3},
  [377] = {.lex_state = 99, .external_lex_state = 5},
  [378] = {.lex_state = 95, .external_lex_state = 3},
  [379] = {.lex_state = 95, .external_lex_state = 3},
  [380] = {.lex_state = 99, .external_lex_state = 5},
  [381] = {.lex_state = 95, .external_lex_state = 3},
  [382] = {.lex_state = 122, .external_lex_state = 1},
  [383] = {.lex_state = 122, .external_lex_state = 1},
  [384] = {.lex_state = 122, .external_lex_state = 1},
  [385] = {.lex_state = 122, .external_lex_state = 1},
  [386] = {.lex_state = 122, .external_lex_state = 1},
  [387] = {.lex_state = 99, .external_lex_state = 5},
  [388] = {.lex_state = 99, .external_lex_state = 5},
  [389] = {.lex_state = 99, .external_lex_state = 2},
  [390] = {.lex_state = 124, .external_lex_state = 3},
  [391] = {.lex_state = 99, .external_lex_state = 2},
  [392] = {.lex_state = 99, .external_lex_state = 2},
  [393] = {.lex_state = 0, .external_lex_state = 3},
  [394] = {.lex_state = 99, .external_lex_state = 2},
  [395] = {.lex_state = 124, .external_lex_state = 3},
  [396] = {.lex_state = 99, .external_lex_state = 2},
  [397] = {.lex_state = 0, .external_lex_state = 3},
  [398] = {.lex_state = 124, .external_lex_state = 3},
  [399] = {.lex_state = 99, .external_lex_state = 2},
  [400] = {.lex_state = 0, .external_lex_state = 3},
  [401] = {.lex_state = 99, .external_lex_state = 2},
  [402] = {.lex_state = 99, .external_lex_state = 2},
  [403] = {.lex_state = 0, .external_lex_state = 3},
  [404] = {.lex_state = 99, .external_lex_state = 2},
  [405] = {.lex_state = 0, .external_lex_state = 3},
  [406] = {.lex_state = 0, .external_lex_state = 3},
  [407] = {.lex_state = 0, .external_lex_state = 3},
  [408] = {.lex_state = 0, .external_lex_state = 3},
  [409] = {.lex_state = 0, .external_lex_state = 3},
  [410] = {.lex_state = 0, .external_lex_state = 3},
  [411] = {.lex_state = 0, .external_lex_state = 3},
  [412] = {.lex_state = 0, .external_lex_state = 3},
  [413] = {.lex_state = 0, .external_lex_state = 3},
  [414] = {.lex_state = 0, .external_lex_state = 3},
  [415] = {.lex_state = 0, .external_lex_state = 3},
  [416] = {.lex_state = 0, .external_lex_state = 5},
  [417] = {.lex_state = 0, .external_lex_state = 3},
  [418] = {.lex_state = 0, .external_lex_state = 3},
  [419] = {.lex_state = 0, .external_lex_state = 5},
  [420] = {.lex_state = 2, .external_lex_state = 2},
  [421] = {.lex_state = 116, .external_lex_state = 2},
  [422] = {.lex_state = 3, .external_lex_state = 2},
  [423] = {.lex_state = 0, .external_lex_state = 5},
  [424] = {.lex_state = 0, .external_lex_state = 5},
  [425] = {.lex_state = 116, .external_lex_state = 2},
  [426] = {.lex_state = 0, .external_lex_state = 5},
  [427] = {.lex_state = 116, .external_lex_state = 2},
  [428] = {.lex_state = 3, .external_lex_state = 2},
  [429] = {.lex_state = 2, .external_lex_state = 2},
  [430] = {.lex_state = 0, .external_lex_state = 3},
  [431] = {.lex_state = 0, .external_lex_state = 5},
  [432] = {.lex_state = 0, .external_lex_state = 5},
  [433] = {.lex_state = 3, .external_lex_state = 2},
  [434] = {.lex_state = 125, .external_lex_state = 6},
  [435] = {.lex_state = 40, .external_lex_state = 2},
  [436] = {.lex_state = 40, .external_lex_state = 2},
  [437] = {.lex_state = 40, .external_lex_state = 2},
  [438] = {.lex_state = 125, .external_lex_state = 3},
  [439] = {.lex_state = 0, .external_lex_state = 2},
  [440] = {.lex_state = 125, .external_lex_state = 3},
  [441] = {.lex_state = 0, .external_lex_state = 5},
  [442] = {.lex_state = 40, .external_lex_state = 2},
  [443] = {.lex_state = 40, .external_lex_state = 2},
  [444] = {.lex_state = 40, .external_lex_state = 2},
  [445] = {.lex_state = 0, .external_lex_state = 5},
  [446] = {.lex_state = 0, .external_lex_state = 5},
  [447] = {.lex_state = 3, .external_lex_state = 2},
  [448] = {.lex_state = 3, .external_lex_state = 2},
  [449] = {.lex_state = 40, .external_lex_state = 2},
  [450] = {.lex_state = 125, .external_lex_state = 3},
  [451] = {.lex_state = 40, .external_lex_state = 2},
  [452] = {.lex_state = 40, .external_lex_state = 2},
  [453] = {.lex_state = 3, .external_lex_state = 2},
  [454] = {.lex_state = 0, .external_lex_state = 2},
  [455] = {.lex_state = 0, .external_lex_state = 2},
  [456] = {.lex_state = 3, .external_lex_state = 2},
  [457] = {.lex_state = 0, .external_lex_state = 5},
  [458] = {.lex_state = 0, .external_lex_state = 2},
  [459] = {.lex_state = 0, .external_lex_state = 5},
  [460] = {.lex_state = 41, .external_lex_state = 2},
  [461] = {.lex_state = 0, .external_lex_state = 5},
  [462] = {.lex_state = 0, .external_lex_state = 2},
  [463] = {.lex_state = 116, .external_lex_state = 2},
  [464] = {.lex_state = 0, .external_lex_state = 2},
  [465] = {.lex_state = 116, .external_lex_state = 2},
  [466] = {.lex_state = 0, .external_lex_state = 2},
  [467] = {.lex_state = 49, .external_lex_state = 2},
  [468] = {.lex_state = 41, .external_lex_state = 2},
  [469] = {.lex_state = 0, .external_lex_state = 6},
  [470] = {.lex_state = 0, .external_lex_state = 2},
  [471] = {.lex_state = 41, .external_lex_state = 2},
  [472] = {.lex_state = 0, .external_lex_state = 6},
  [473] = {.lex_state = 0, .external_lex_state = 3},
  [474] = {.lex_state = 121, .external_lex_state = 2},
  [475] = {.lex_state = 49, .external_lex_state = 2},
  [476] = {.lex_state = 49, .external_lex_state = 2},
  [477] = {.lex_state = 116, .external_lex_state = 2},
  [478] = {.lex_state = 49, .external_lex_state = 2},
  [479] = {.lex_state = 49, .external_lex_state = 2},
  [480] = {.lex_state = 0, .external_lex_state = 2},
  [481] = {.lex_state = 0, .external_lex_state = 2},
  [482] = {.lex_state = 0, .external_lex_state = 2},
  [483] = {.lex_state = 0, .external_lex_state = 2},
  [484] = {.lex_state = 0, .external_lex_state = 2},
  [485] = {.lex_state = 31, .external_lex_state = 2},
  [486] = {.lex_state = 0, .external_lex_state = 2},
  [487] = {.lex_state = 121, .external_lex_state = 2},
  [488] = {.lex_state = 0, .external_lex_state = 2},
  [489] = {.lex_state = 0, .external_lex_state = 2},
  [490] = {.lex_state = 41, .external_lex_state = 2},
  [491] = {.lex_state = 0, .external_lex_state = 2},
  [492] = {.lex_state = 0, .external_lex_state = 2},
  [493] = {.lex_state = 0, .external_lex_state = 2},
  [494] = {.lex_state = 0, .external_lex_state = 2},
  [495] = {.lex_state = 266, .external_lex_state = 2},
  [496] = {.lex_state = 0, .external_lex_state = 2},
  [497] = {.lex_state = 0, .external_lex_state = 2},
  [498] = {.lex_state = 48, .external_lex_state = 2},
  [499] = {.lex_state = 0, .external_lex_state = 2},
  [500] = {.lex_state = 0, .external_lex_state = 2},
  [501] = {.lex_state = 123, .external_lex_state = 2},
  [502] = {.lex_state = 0, .external_lex_state = 2},
  [503] = {.lex_state = 0, .external_lex_state = 2},
  [504] = {.lex_state = 0, .external_lex_state = 2},
  [505] = {.lex_state = 0, .external_lex_state = 2},
  [506] = {.lex_state = 41, .external_lex_state = 2},
  [507] = {.lex_state = 0, .external_lex_state = 2},
  [508] = {.lex_state = 0, .external_lex_state = 2},
  [509] = {.lex_state = 0, .external_lex_state = 2},
  [510] = {.lex_state = 0, .external_lex_state = 2},
  [511] = {.lex_state = 0, .external_lex_state = 2},
  [512] = {.lex_state = 41, .external_lex_state = 2},
  [513] = {.lex_state = 48, .external_lex_state = 2},
  [514] = {.lex_state = 0, .external_lex_state = 2},
  [515] = {.lex_state = 0, .external_lex_state = 3},
  [516] = {.lex_state = 266, .external_lex_state = 2},
  [517] = {.lex_state = 0, .external_lex_state = 3},
  [518] = {.lex_state = 0, .external_lex_state = 2},
  [519] = {.lex_state = 48, .external_lex_state = 2},
  [520] = {.lex_state = 48, .external_lex_state = 2},
  [521] = {.lex_state = 0, .external_lex_state = 2},
  [522] = {.lex_state = 0, .external_lex_state = 2},
  [523] = {.lex_state = 31, .external_lex_state = 2},
  [524] = {.lex_state = 266, .external_lex_state = 2},
  [525] = {.lex_state = 31, .external_lex_state = 2},
  [526] = {.lex_state = 0, .external_lex_state = 2},
  [527] = {.lex_state = 0, .external_lex_state = 2},
  [528] = {.lex_state = 48, .external_lex_state = 2},
  [529] = {.lex_state = 0, .external_lex_state = 2},
  [530] = {.lex_state = 0, .external_lex_state = 2},
  [531] = {.lex_state = 0, .external_lex_state = 2},
  [532] = {.lex_state = 0, .external_lex_state = 2},
  [533] = {.lex_state = 41, .external_lex_state = 2},
  [534] = {.lex_state = 0, .external_lex_state = 2},
  [535] = {.lex_state = 0, .external_lex_state = 2},
  [536] = {.lex_state = 0, .external_lex_state = 2},
  [537] = {.lex_state = 0, .external_lex_state = 2},
  [538] = {.lex_state = 0, .external_lex_state = 2},
  [539] = {.lex_state = 266, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
    [sym_preprocessor] = ACTIONS(1),
    [sym__wrong_preprocessor] = ACTIONS(1),
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
    [sym_program] = STATE(500),
    [sym__statement] = STATE(6),
    [sym__comment] = STATE(484),
    [sym_directive] = STATE(393),
    [sym__macro_directive] = STATE(413),
    [sym__numeric_directive] = STATE(414),
    [sym_numeric_mnemonic] = STATE(513),
    [sym__string_directive] = STATE(410),
    [sym_string_mnemonic] = STATE(498),
    [sym__control_directive] = STATE(403),
    [sym_control_mnemonic] = STATE(395),
    [sym_instruction] = STATE(391),
    [sym__label] = STATE(108),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_CR] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(9),
    [sym_block_comment] = ACTIONS(11),
    [sym_preprocessor] = ACTIONS(13),
    [sym__wrong_preprocessor] = ACTIONS(13),
    [sym_macro_mnemonic] = ACTIONS(15),
    [anon_sym_DOTbyte] = ACTIONS(17),
    [anon_sym_DOT2byte] = ACTIONS(17),
    [anon_sym_DOTshort] = ACTIONS(17),
    [anon_sym_DOThalf] = ACTIONS(17),
    [anon_sym_DOThword] = ACTIONS(17),
    [anon_sym_DOT4byte] = ACTIONS(17),
    [anon_sym_DOTword] = ACTIONS(17),
    [anon_sym_DOTint] = ACTIONS(17),
    [anon_sym_DOT8byte] = ACTIONS(17),
    [anon_sym_DOTdword] = ACTIONS(17),
    [anon_sym_DOTlong] = ACTIONS(17),
    [anon_sym_DOTquad] = ACTIONS(17),
    [anon_sym_DOTcomm] = ACTIONS(17),
    [anon_sym_DOTlcomm] = ACTIONS(17),
    [anon_sym_DOTalign] = ACTIONS(17),
    [anon_sym_DOTbalign] = ACTIONS(17),
    [anon_sym_DOTp2align] = ACTIONS(17),
    [anon_sym_DOTsleb128] = ACTIONS(17),
    [anon_sym_DOTuleb128] = ACTIONS(17),
    [anon_sym_DOTdtprelword] = ACTIONS(17),
    [anon_sym_DOTdtpreldword] = ACTIONS(17),
    [anon_sym_DOTskip] = ACTIONS(17),
    [anon_sym_DOTspace] = ACTIONS(17),
    [anon_sym_DOTfloat] = ACTIONS(17),
    [anon_sym_DOTdouble] = ACTIONS(17),
    [anon_sym_DOTsingle] = ACTIONS(17),
    [anon_sym_DOTasciz] = ACTIONS(19),
    [anon_sym_DOTascii] = ACTIONS(19),
    [anon_sym_DOTasciiz] = ACTIONS(19),
    [anon_sym_DOTstring] = ACTIONS(19),
    [anon_sym_DOTstringz] = ACTIONS(19),
    [aux_sym_control_mnemonic_token1] = ACTIONS(21),
    [sym_opcode] = ACTIONS(23),
    [sym_local_label] = ACTIONS(25),
    [sym_global_label] = ACTIONS(25),
    [sym_global_numeric_label] = ACTIONS(25),
    [sym_local_numeric_label] = ACTIONS(25),
    [sym__operator_space] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 40,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_section_type_token1,
    ACTIONS(35), 1,
      aux_sym_option_flag_token1,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
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
      sym__wrapped_bitwise_or_expression,
    STATE(214), 1,
      sym__bitwise_xor_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(216), 1,
      sym__bitwise_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(218), 1,
      sym__equality_expression,
    STATE(219), 1,
      sym__wrapped_equality_expression,
    STATE(220), 1,
      sym__relational_expression,
    STATE(221), 1,
      sym__wrapped_relational_expression,
    STATE(222), 1,
      sym__shift_expression,
    STATE(223), 1,
      sym__wrapped_shift_expression,
    STATE(224), 1,
      sym__additive_expression,
    STATE(225), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(369), 1,
      sym__wrapped_assignment_expression,
    STATE(409), 1,
      sym_control_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(45), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(27), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(29), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(366), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(43), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(227), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [144] = 38,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
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
    STATE(180), 1,
      sym__assignment_expression,
    STATE(181), 1,
      sym__logical_or_expression,
    STATE(182), 1,
      sym__wrapped_logical_or_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__wrapped_logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(194), 1,
      sym__wrapped_relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(248), 1,
      sym__bitwise_xor_expression,
    STATE(367), 1,
      sym__wrapped_assignment_expression,
    STATE(394), 1,
      sym_operands,
    STATE(401), 1,
      sym__call_expression,
    STATE(375), 2,
      sym__operand,
      sym_string,
    ACTIONS(63), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(67), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [282] = 25,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      sym_macro_mnemonic,
    ACTIONS(21), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(23), 1,
      sym_opcode,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym__statement_token1,
    STATE(107), 1,
      sym__label,
    STATE(389), 1,
      sym_instruction,
    STATE(395), 1,
      sym_control_mnemonic,
    STATE(397), 1,
      sym_directive,
    STATE(403), 1,
      sym__control_directive,
    STATE(410), 1,
      sym__string_directive,
    STATE(413), 1,
      sym__macro_directive,
    STATE(414), 1,
      sym__numeric_directive,
    STATE(498), 1,
      sym_string_mnemonic,
    STATE(513), 1,
      sym_numeric_mnemonic,
    STATE(529), 1,
      sym__comment,
    ACTIONS(85), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(5), 2,
      sym__statement,
      aux_sym_program_repeat1,
    ACTIONS(81), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(25), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(19), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(17), 26,
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
  [394] = 24,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      sym_macro_mnemonic,
    ACTIONS(21), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(23), 1,
      sym_opcode,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym__label,
    STATE(392), 1,
      sym_instruction,
    STATE(395), 1,
      sym_control_mnemonic,
    STATE(400), 1,
      sym_directive,
    STATE(403), 1,
      sym__control_directive,
    STATE(410), 1,
      sym__string_directive,
    STATE(413), 1,
      sym__macro_directive,
    STATE(414), 1,
      sym__numeric_directive,
    STATE(498), 1,
      sym_string_mnemonic,
    STATE(513), 1,
      sym_numeric_mnemonic,
    STATE(521), 1,
      sym__comment,
    ACTIONS(85), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(10), 2,
      sym__statement,
      aux_sym_program_repeat1,
    ACTIONS(89), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(25), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(19), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(17), 26,
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
  [503] = 24,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      sym_macro_mnemonic,
    ACTIONS(21), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(23), 1,
      sym_opcode,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      sym__label,
    STATE(389), 1,
      sym_instruction,
    STATE(395), 1,
      sym_control_mnemonic,
    STATE(397), 1,
      sym_directive,
    STATE(403), 1,
      sym__control_directive,
    STATE(410), 1,
      sym__string_directive,
    STATE(413), 1,
      sym__macro_directive,
    STATE(414), 1,
      sym__numeric_directive,
    STATE(498), 1,
      sym_string_mnemonic,
    STATE(513), 1,
      sym_numeric_mnemonic,
    STATE(529), 1,
      sym__comment,
    ACTIONS(85), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(10), 2,
      sym__statement,
      aux_sym_program_repeat1,
    ACTIONS(89), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(25), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(19), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(17), 26,
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
  [612] = 34,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
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
    STATE(132), 1,
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__assignment_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(278), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(91), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(97), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(101), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    ACTIONS(93), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [741] = 36,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(65), 1,
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
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym__assignment_expression,
    STATE(181), 1,
      sym__logical_or_expression,
    STATE(182), 1,
      sym__wrapped_logical_or_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__wrapped_logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(194), 1,
      sym__wrapped_relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(248), 1,
      sym__bitwise_xor_expression,
    STATE(367), 1,
      sym__wrapped_assignment_expression,
    STATE(380), 2,
      sym__operand,
      sym_string,
    ACTIONS(63), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(113), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(67), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [873] = 36,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(65), 1,
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
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(180), 1,
      sym__assignment_expression,
    STATE(181), 1,
      sym__logical_or_expression,
    STATE(182), 1,
      sym__wrapped_logical_or_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__wrapped_logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(194), 1,
      sym__wrapped_relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(248), 1,
      sym__bitwise_xor_expression,
    STATE(367), 1,
      sym__wrapped_assignment_expression,
    STATE(380), 2,
      sym__operand,
      sym_string,
    ACTIONS(63), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(119), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(67), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1005] = 22,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      sym_macro_mnemonic,
    ACTIONS(138), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(141), 1,
      sym_opcode,
    STATE(116), 1,
      sym__label,
    STATE(395), 1,
      sym_control_mnemonic,
    STATE(403), 1,
      sym__control_directive,
    STATE(404), 1,
      sym_instruction,
    STATE(410), 1,
      sym__string_directive,
    STATE(413), 1,
      sym__macro_directive,
    STATE(414), 1,
      sym__numeric_directive,
    STATE(430), 1,
      sym_directive,
    STATE(498), 1,
      sym_string_mnemonic,
    STATE(513), 1,
      sym_numeric_mnemonic,
    STATE(10), 2,
      sym__statement,
      aux_sym_program_repeat1,
    ACTIONS(123), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(126), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(144), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(135), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(132), 26,
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
  [1109] = 37,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym_section_type_token1,
    ACTIONS(35), 1,
      aux_sym_option_flag_token1,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
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
      sym__wrapped_bitwise_or_expression,
    STATE(214), 1,
      sym__bitwise_xor_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(216), 1,
      sym__bitwise_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(218), 1,
      sym__equality_expression,
    STATE(219), 1,
      sym__wrapped_equality_expression,
    STATE(220), 1,
      sym__relational_expression,
    STATE(221), 1,
      sym__wrapped_relational_expression,
    STATE(222), 1,
      sym__shift_expression,
    STATE(223), 1,
      sym__wrapped_shift_expression,
    STATE(224), 1,
      sym__additive_expression,
    STATE(225), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(369), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(45), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(385), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(43), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(227), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1240] = 39,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(297), 1,
      sym_symbol,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(424), 1,
      sym__wrapped_assignment_expression,
    STATE(531), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 2,
      sym_register,
      sym_macro_variable,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1373] = 37,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(423), 1,
      sym__wrapped_assignment_expression,
    STATE(510), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1502] = 38,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(302), 1,
      sym_symbol,
    STATE(419), 1,
      sym__wrapped_assignment_expression,
    STATE(518), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 2,
      sym_register,
      sym_macro_variable,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1632] = 38,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(308), 1,
      sym_symbol,
    STATE(431), 1,
      sym__wrapped_assignment_expression,
    STATE(509), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(175), 2,
      sym_register,
      sym_macro_variable,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1762] = 38,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(299), 1,
      sym_symbol,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(426), 1,
      sym__wrapped_assignment_expression,
    STATE(526), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(177), 2,
      sym_register,
      sym_macro_variable,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1892] = 38,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(300), 1,
      sym_symbol,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(423), 1,
      sym__wrapped_assignment_expression,
    STATE(491), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(179), 2,
      sym_register,
      sym_macro_variable,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2022] = 36,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(423), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(457), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2148] = 38,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(260), 1,
      sym_symbol,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(423), 1,
      sym__wrapped_assignment_expression,
    STATE(505), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(181), 2,
      sym_register,
      sym_macro_variable,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2278] = 38,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(309), 1,
      sym_symbol,
    STATE(423), 1,
      sym__wrapped_assignment_expression,
    STATE(511), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(183), 2,
      sym_register,
      sym_macro_variable,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2408] = 38,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym_symbol,
    STATE(431), 1,
      sym__wrapped_assignment_expression,
    STATE(486), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(185), 2,
      sym_register,
      sym_macro_variable,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2538] = 36,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(423), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(457), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2664] = 38,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(303), 1,
      sym_symbol,
    STATE(423), 1,
      sym__wrapped_assignment_expression,
    STATE(489), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(187), 2,
      sym_register,
      sym_macro_variable,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2794] = 38,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(306), 1,
      sym_symbol,
    STATE(432), 1,
      sym__wrapped_assignment_expression,
    STATE(496), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 2,
      sym_register,
      sym_macro_variable,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2924] = 38,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(305), 1,
      sym_symbol,
    STATE(423), 1,
      sym__wrapped_assignment_expression,
    STATE(499), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 2,
      sym_register,
      sym_macro_variable,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3054] = 38,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(297), 1,
      sym_symbol,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(424), 1,
      sym__wrapped_assignment_expression,
    STATE(504), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 2,
      sym_register,
      sym_macro_variable,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3184] = 38,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(307), 1,
      sym_symbol,
    STATE(423), 1,
      sym__wrapped_assignment_expression,
    STATE(507), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 2,
      sym_register,
      sym_macro_variable,
    STATE(446), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3314] = 35,
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      sym__assignment_expression,
    STATE(181), 1,
      sym__logical_or_expression,
    STATE(182), 1,
      sym__wrapped_logical_or_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__wrapped_logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(194), 1,
      sym__wrapped_relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(248), 1,
      sym__bitwise_xor_expression,
    STATE(367), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(199), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(380), 2,
      sym__operand,
      sym_string,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3437] = 37,
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
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym_address,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(470), 1,
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
    STATE(524), 2,
      sym__string_operand,
      sym_string,
    ACTIONS(213), 4,
      sym_octal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(336), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [3564] = 35,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(423), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(457), 2,
      sym__operand,
      sym_string,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3687] = 34,
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
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
    STATE(132), 1,
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__assignment_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(249), 1,
      sym__wrapped_assignment_expression,
    STATE(365), 1,
      sym_numeric_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(458), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
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
    ACTIONS(213), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
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
    STATE(132), 1,
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__assignment_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(279), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
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
    STATE(132), 1,
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__assignment_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(310), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(181), 1,
      sym__logical_or_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__wrapped_logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(194), 1,
      sym__wrapped_relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(248), 1,
      sym__bitwise_xor_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(360), 1,
      sym__wrapped_logical_or_expression,
    STATE(480), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(199), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(165), 1,
      sym__wrapped_logical_and_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(194), 1,
      sym__wrapped_relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(248), 1,
      sym__bitwise_xor_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(480), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(199), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(416), 1,
      sym__wrapped_logical_or_expression,
    STATE(481), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__wrapped_logical_and_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(481), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(481), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(481), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(481), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5082] = 33,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(268), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(481), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5198] = 33,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(481), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5314] = 33,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(481), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5430] = 33,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(254), 1,
      sym__additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(271), 1,
      sym__wrapped_additive_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(481), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5546] = 33,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(481), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
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
    STATE(272), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5662] = 34,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(336), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(481), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
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
    STATE(273), 9,
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
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(166), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(194), 1,
      sym__wrapped_relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(248), 1,
      sym__bitwise_xor_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(480), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(199), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
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
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(250), 1,
      sym__wrapped_logical_or_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
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
    STATE(132), 1,
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(157), 1,
      sym__wrapped_logical_and_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
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
    STATE(132), 1,
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(158), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
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
    STATE(132), 1,
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(159), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    STATE(128), 1,
      sym__bitwise_and_expression,
    STATE(130), 1,
      sym__equality_expression,
    STATE(131), 1,
      sym__wrapped_equality_expression,
    STATE(132), 1,
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(160), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    STATE(130), 1,
      sym__equality_expression,
    STATE(132), 1,
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(139), 1,
      sym__wrapped_equality_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    STATE(132), 1,
      sym__relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(142), 1,
      sym__wrapped_relational_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6708] = 33,
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    STATE(134), 1,
      sym__shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(143), 1,
      sym__wrapped_shift_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6824] = 33,
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    STATE(136), 1,
      sym__additive_expression,
    STATE(144), 1,
      sym__wrapped_additive_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6940] = 33,
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
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
    STATE(145), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7056] = 34,
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(336), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
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
    STATE(146), 9,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(439), 1,
      sym__wrapped_logical_or_expression,
    STATE(483), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(483), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(342), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(483), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(483), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(344), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(483), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(483), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_relational_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(483), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7986] = 33,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(347), 1,
      sym__wrapped_shift_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(483), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8102] = 33,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(348), 1,
      sym__wrapped_additive_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(483), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8218] = 33,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(483), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
  [8334] = 34,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(336), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(483), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(350), 9,
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
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(180), 1,
      sym__assignment_expression,
    STATE(181), 1,
      sym__logical_or_expression,
    STATE(182), 1,
      sym__wrapped_logical_or_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__wrapped_logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(194), 1,
      sym__wrapped_relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(202), 1,
      sym__wrapped_assignment_expression,
    STATE(248), 1,
      sym__bitwise_xor_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(199), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(214), 1,
      sym__bitwise_xor_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(216), 1,
      sym__bitwise_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(218), 1,
      sym__equality_expression,
    STATE(219), 1,
      sym__wrapped_equality_expression,
    STATE(220), 1,
      sym__relational_expression,
    STATE(221), 1,
      sym__wrapped_relational_expression,
    STATE(222), 1,
      sym__shift_expression,
    STATE(223), 1,
      sym__wrapped_shift_expression,
    STATE(224), 1,
      sym__additive_expression,
    STATE(225), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(232), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(466), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(45), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(43), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(227), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(214), 1,
      sym__bitwise_xor_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(216), 1,
      sym__bitwise_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(218), 1,
      sym__equality_expression,
    STATE(219), 1,
      sym__wrapped_equality_expression,
    STATE(220), 1,
      sym__relational_expression,
    STATE(221), 1,
      sym__wrapped_relational_expression,
    STATE(222), 1,
      sym__shift_expression,
    STATE(223), 1,
      sym__wrapped_shift_expression,
    STATE(224), 1,
      sym__additive_expression,
    STATE(225), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(233), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(466), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(45), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(43), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(227), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(214), 1,
      sym__bitwise_xor_expression,
    STATE(216), 1,
      sym__bitwise_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(218), 1,
      sym__equality_expression,
    STATE(219), 1,
      sym__wrapped_equality_expression,
    STATE(220), 1,
      sym__relational_expression,
    STATE(221), 1,
      sym__wrapped_relational_expression,
    STATE(222), 1,
      sym__shift_expression,
    STATE(223), 1,
      sym__wrapped_shift_expression,
    STATE(224), 1,
      sym__additive_expression,
    STATE(225), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(234), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(466), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(45), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(43), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(227), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(216), 1,
      sym__bitwise_and_expression,
    STATE(218), 1,
      sym__equality_expression,
    STATE(219), 1,
      sym__wrapped_equality_expression,
    STATE(220), 1,
      sym__relational_expression,
    STATE(221), 1,
      sym__wrapped_relational_expression,
    STATE(222), 1,
      sym__shift_expression,
    STATE(223), 1,
      sym__wrapped_shift_expression,
    STATE(224), 1,
      sym__additive_expression,
    STATE(225), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(235), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(466), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(45), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(43), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(227), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(218), 1,
      sym__equality_expression,
    STATE(220), 1,
      sym__relational_expression,
    STATE(221), 1,
      sym__wrapped_relational_expression,
    STATE(222), 1,
      sym__shift_expression,
    STATE(223), 1,
      sym__wrapped_shift_expression,
    STATE(224), 1,
      sym__additive_expression,
    STATE(225), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(236), 1,
      sym__wrapped_equality_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(466), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(45), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(43), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(227), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(220), 1,
      sym__relational_expression,
    STATE(222), 1,
      sym__shift_expression,
    STATE(223), 1,
      sym__wrapped_shift_expression,
    STATE(224), 1,
      sym__additive_expression,
    STATE(225), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(466), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(45), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(43), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(227), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9264] = 33,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(222), 1,
      sym__shift_expression,
    STATE(224), 1,
      sym__additive_expression,
    STATE(225), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(238), 1,
      sym__wrapped_shift_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(466), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(45), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(43), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(227), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9380] = 33,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(224), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(466), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(45), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(43), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(227), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9496] = 33,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(466), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
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
  [9612] = 34,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(336), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(466), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(269), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(267), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(241), 9,
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
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__wrapped_assignment_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__assignment_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(286), 1,
      sym__wrapped_logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(181), 1,
      sym__logical_or_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__wrapped_logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(194), 1,
      sym__wrapped_relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(246), 1,
      sym__wrapped_logical_or_expression,
    STATE(248), 1,
      sym__bitwise_xor_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(480), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(199), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_unary_minus_operator,
    ACTIONS(155), 1,
      sym_relocation_type,
    ACTIONS(161), 1,
      aux_sym_decimal_token1,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(171), 1,
      aux_sym_symbol_token1,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__wrapped_shift_expression,
    STATE(254), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__logical_or_expression,
    STATE(287), 1,
      sym__logical_and_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__bitwise_and_expression,
    STATE(294), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__equality_expression,
    STATE(296), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(301), 1,
      sym__wrapped_relational_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(481), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(153), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(159), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(157), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
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
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(137), 1,
      sym__wrapped_logical_or_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(331), 1,
      sym__wrapped_logical_or_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(483), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(208), 1,
      sym__logical_or_expression,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(211), 1,
      sym__wrapped_logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(214), 1,
      sym__bitwise_xor_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(216), 1,
      sym__bitwise_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(218), 1,
      sym__equality_expression,
    STATE(219), 1,
      sym__wrapped_equality_expression,
    STATE(220), 1,
      sym__relational_expression,
    STATE(221), 1,
      sym__wrapped_relational_expression,
    STATE(222), 1,
      sym__shift_expression,
    STATE(223), 1,
      sym__wrapped_shift_expression,
    STATE(224), 1,
      sym__additive_expression,
    STATE(225), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(247), 1,
      sym__wrapped_logical_or_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(466), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(45), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(43), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(227), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
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
    STATE(132), 1,
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(141), 1,
      sym__wrapped_assignment_expression,
    STATE(154), 1,
      sym__assignment_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10542] = 33,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(337), 1,
      sym__wrapped_assignment_expression,
    STATE(358), 1,
      sym__shift_expression,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10658] = 33,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
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
      sym__wrapped_bitwise_or_expression,
    STATE(214), 1,
      sym__bitwise_xor_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(216), 1,
      sym__bitwise_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(218), 1,
      sym__equality_expression,
    STATE(219), 1,
      sym__wrapped_equality_expression,
    STATE(220), 1,
      sym__relational_expression,
    STATE(221), 1,
      sym__wrapped_relational_expression,
    STATE(222), 1,
      sym__shift_expression,
    STATE(223), 1,
      sym__wrapped_shift_expression,
    STATE(224), 1,
      sym__additive_expression,
    STATE(225), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(228), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(45), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(43), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(227), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10774] = 33,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(454), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10890] = 33,
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(167), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(194), 1,
      sym__wrapped_relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(248), 1,
      sym__bitwise_xor_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(480), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(199), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11006] = 33,
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(168), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(194), 1,
      sym__wrapped_relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(480), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(199), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11122] = 33,
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(169), 1,
      sym__wrapped_equality_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(194), 1,
      sym__wrapped_relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(480), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(199), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11238] = 33,
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(170), 1,
      sym__wrapped_relational_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(480), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(199), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11354] = 33,
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(171), 1,
      sym__wrapped_shift_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(480), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(199), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11470] = 33,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(464), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11586] = 33,
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(480), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(199), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11702] = 33,
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(480), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(273), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(271), 5,
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
  [11818] = 33,
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
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(462), 1,
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
    STATE(336), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11934] = 34,
    ACTIONS(63), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(318), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_logical_or_expression,
    STATE(320), 1,
      sym__logical_and_expression,
    STATE(321), 1,
      sym__bitwise_or_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(323), 1,
      sym__bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__bitwise_and_expression,
    STATE(326), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(327), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(329), 1,
      sym__relational_expression,
    STATE(330), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__multiplicative_expression,
    STATE(336), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__shift_expression,
    STATE(480), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(277), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(275), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(174), 9,
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
    ACTIONS(97), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(103), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(109), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
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
    STATE(132), 1,
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__additive_expression,
    STATE(138), 1,
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__assignment_expression,
    STATE(161), 1,
      sym__multiplicative_expression,
    STATE(278), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(231), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(140), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12168] = 33,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_unary_minus_operator,
    ACTIONS(41), 1,
      sym_relocation_type,
    ACTIONS(47), 1,
      aux_sym_decimal_token1,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(208), 1,
      sym__logical_or_expression,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(211), 1,
      sym__wrapped_logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(214), 1,
      sym__bitwise_xor_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(216), 1,
      sym__bitwise_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(218), 1,
      sym__equality_expression,
    STATE(219), 1,
      sym__wrapped_equality_expression,
    STATE(220), 1,
      sym__relational_expression,
    STATE(221), 1,
      sym__wrapped_relational_expression,
    STATE(222), 1,
      sym__shift_expression,
    STATE(223), 1,
      sym__wrapped_shift_expression,
    STATE(224), 1,
      sym__additive_expression,
    STATE(225), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__multiplicative_expression,
    STATE(317), 1,
      sym__assignment_expression,
    STATE(362), 1,
      sym__wrapped_logical_or_expression,
    STATE(466), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(39), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(45), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(43), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(227), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12284] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(493), 1,
      sym__comment,
    ACTIONS(281), 44,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [12343] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    STATE(514), 1,
      sym__comment,
    ACTIONS(287), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(285), 42,
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
  [12404] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    STATE(521), 1,
      sym__comment,
    ACTIONS(290), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(285), 42,
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
  [12465] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    STATE(529), 1,
      sym__comment,
    ACTIONS(293), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(285), 42,
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
  [12526] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(502), 1,
      sym__comment,
    ACTIONS(281), 44,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [12585] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(522), 1,
      sym__comment,
    ACTIONS(281), 44,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [12644] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 44,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [12700] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 44,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [12756] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 44,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [12812] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 44,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [12868] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 44,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [12924] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(285), 42,
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
  [12982] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 44,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13038] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 44,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13094] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(322), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(324), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13130] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(326), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(328), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13166] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(334), 1,
      sym_logical_or_operator,
    ACTIONS(330), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(332), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13204] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(336), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(338), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13240] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(344), 1,
      sym_logical_and_operator,
    ACTIONS(340), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(342), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13278] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(346), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(348), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13314] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(354), 1,
      sym_bitwise_or_operator,
    ACTIONS(350), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(352), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13352] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(356), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(358), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13388] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(364), 1,
      sym_bitwise_xor_operator,
    ACTIONS(360), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(362), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13426] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(366), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(368), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13462] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(374), 1,
      sym_bitwise_and_operator,
    ACTIONS(370), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(372), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13500] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(376), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(378), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13536] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(384), 1,
      sym_equality_operator,
    ACTIONS(380), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(382), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13574] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(386), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(388), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13610] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(394), 1,
      sym_relational_operator,
    ACTIONS(390), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(392), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13648] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(396), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(398), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13684] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(404), 1,
      sym_shift_operator,
    ACTIONS(400), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(402), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13722] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(406), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(408), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13758] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(410), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(412), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13794] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(418), 1,
      sym_additive_operator,
    ACTIONS(414), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(416), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13832] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(384), 1,
      sym_equality_operator,
    ACTIONS(420), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(422), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13870] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(428), 1,
      sym_multiplicative_operator,
    ACTIONS(424), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(426), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13908] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      sym_assignment_operator,
    ACTIONS(430), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(432), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13948] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(394), 1,
      sym_relational_operator,
    ACTIONS(438), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(440), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [13986] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(404), 1,
      sym_shift_operator,
    ACTIONS(442), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(444), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14024] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(418), 1,
      sym_additive_operator,
    ACTIONS(446), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(448), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14062] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(428), 1,
      sym_multiplicative_operator,
    ACTIONS(450), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(452), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14100] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(454), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(456), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14136] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(458), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(460), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14172] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(462), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(464), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14208] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(466), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(468), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14244] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(470), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(472), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14280] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(474), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(476), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14316] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(478), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(480), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14352] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(482), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(484), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14388] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(486), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(488), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14424] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(490), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(492), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14460] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(494), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(496), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14496] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(344), 1,
      sym_logical_and_operator,
    ACTIONS(498), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(500), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14534] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(354), 1,
      sym_bitwise_or_operator,
    ACTIONS(502), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(504), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14572] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(364), 1,
      sym_bitwise_xor_operator,
    ACTIONS(506), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(508), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14610] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(374), 1,
      sym_bitwise_and_operator,
    ACTIONS(510), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(512), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14648] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(514), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(516), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14684] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(474), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(476), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14716] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(490), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(492), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14748] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(494), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(496), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14780] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(518), 1,
      sym_logical_and_operator,
    ACTIONS(498), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(500), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14814] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(520), 1,
      sym_bitwise_or_operator,
    ACTIONS(502), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(504), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14848] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(522), 1,
      sym_bitwise_xor_operator,
    ACTIONS(506), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(508), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14882] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(524), 1,
      sym_bitwise_and_operator,
    ACTIONS(510), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(512), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14916] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(526), 1,
      sym_equality_operator,
    ACTIONS(420), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(422), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14950] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(528), 1,
      sym_relational_operator,
    ACTIONS(438), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(440), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [14984] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(530), 1,
      sym_shift_operator,
    ACTIONS(442), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(444), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15018] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(532), 1,
      sym_additive_operator,
    ACTIONS(446), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(448), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15052] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(534), 1,
      sym_multiplicative_operator,
    ACTIONS(450), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(452), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15086] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(454), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(456), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15118] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(458), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(460), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15150] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(462), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(464), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15182] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(466), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(468), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15214] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(478), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(480), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15246] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(482), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(484), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15278] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(486), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(488), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15310] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(326), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(328), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15342] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(536), 1,
      sym_logical_or_operator,
    ACTIONS(330), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(332), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15376] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(336), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(338), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15408] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(518), 1,
      sym_logical_and_operator,
    ACTIONS(340), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(342), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15442] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(346), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(348), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15474] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(520), 1,
      sym_bitwise_or_operator,
    ACTIONS(350), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(352), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15508] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(470), 1,
      sym__operand_separator,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(472), 13,
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
  [15544] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(522), 1,
      sym_bitwise_xor_operator,
    ACTIONS(360), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(362), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15578] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(366), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(368), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15610] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(524), 1,
      sym_bitwise_and_operator,
    ACTIONS(370), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(372), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15644] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(376), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(378), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15676] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(526), 1,
      sym_equality_operator,
    ACTIONS(380), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(382), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15710] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(386), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(388), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15742] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(528), 1,
      sym_relational_operator,
    ACTIONS(390), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(392), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15776] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(396), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(398), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15808] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(530), 1,
      sym_shift_operator,
    ACTIONS(400), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(402), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15842] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(406), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(408), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15874] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(532), 1,
      sym_additive_operator,
    ACTIONS(414), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(416), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15908] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(514), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(516), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15940] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(534), 1,
      sym_multiplicative_operator,
    ACTIONS(424), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(426), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [15974] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(322), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(324), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [16006] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      sym_assignment_operator,
    ACTIONS(430), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(432), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [16042] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(472), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(470), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16072] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(476), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(474), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16102] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(480), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(478), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16132] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(484), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(482), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16162] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(488), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(486), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16192] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(328), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(326), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16222] = 4,
    ACTIONS(546), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(332), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(330), 12,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16254] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(338), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(336), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16284] = 4,
    ACTIONS(548), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(342), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(340), 12,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16316] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(348), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(346), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16346] = 4,
    ACTIONS(550), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(352), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(350), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
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
    ACTIONS(358), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(356), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16408] = 4,
    ACTIONS(552), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(362), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(360), 12,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16440] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(368), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(366), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16470] = 4,
    ACTIONS(554), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(372), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(370), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16502] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(378), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(376), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16532] = 4,
    ACTIONS(556), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(382), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(380), 12,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16564] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(388), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(386), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16594] = 4,
    ACTIONS(558), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(392), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(390), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16626] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(398), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(396), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16656] = 4,
    ACTIONS(560), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(402), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(400), 12,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16688] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(408), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(406), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16718] = 4,
    ACTIONS(562), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(416), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(414), 12,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [16750] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(516), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(514), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16780] = 4,
    ACTIONS(564), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(426), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(424), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16812] = 5,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    ACTIONS(568), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(432), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(430), 12,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16846] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(324), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(322), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16876] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(492), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(490), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
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
    ACTIONS(496), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(494), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16936] = 4,
    ACTIONS(548), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(500), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(498), 12,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16968] = 4,
    ACTIONS(550), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(504), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(502), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17000] = 4,
    ACTIONS(552), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(508), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(506), 12,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17032] = 4,
    ACTIONS(554), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(512), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(510), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17064] = 4,
    ACTIONS(556), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(422), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(420), 12,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17096] = 4,
    ACTIONS(558), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(440), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(438), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17128] = 4,
    ACTIONS(560), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(444), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(442), 12,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [17160] = 4,
    ACTIONS(562), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(448), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(446), 12,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [17192] = 4,
    ACTIONS(564), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(452), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(450), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
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
    ACTIONS(456), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(454), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17254] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(470), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(472), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [17286] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(460), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(458), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17316] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(464), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(462), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17346] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(468), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(466), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17376] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(410), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(412), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [17408] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(412), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(410), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17438] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(356), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(358), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
  [17470] = 14,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(574), 1,
      sym_line_comment,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      sym_assignment_operator,
    ACTIONS(584), 1,
      sym__operand_separator,
    ACTIONS(586), 1,
      sym__data_separator,
    STATE(251), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(359), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(469), 1,
      sym__comment,
    ACTIONS(570), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(577), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(572), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [17519] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(334), 1,
      sym_logical_or_operator,
    ACTIONS(410), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(412), 11,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
  [17548] = 12,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      sym__operand_separator,
    ACTIONS(586), 1,
      sym__data_separator,
    ACTIONS(592), 1,
      sym_line_comment,
    STATE(259), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(363), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(469), 1,
      sym__comment,
    ACTIONS(588), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(595), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(590), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [17591] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(412), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(410), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17615] = 4,
    ACTIONS(598), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(402), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(400), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [17641] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(408), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(406), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17665] = 4,
    ACTIONS(600), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(416), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(414), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [17691] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(516), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(514), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17715] = 4,
    ACTIONS(602), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(426), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(424), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17741] = 5,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(606), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(432), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(430), 9,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17769] = 10,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(612), 1,
      sym_line_comment,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(469), 1,
      sym__comment,
    ACTIONS(608), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(615), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(621), 2,
      sym__operand_separator,
      sym__data_separator,
    ACTIONS(610), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [17807] = 4,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(628), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(624), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17833] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(324), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(322), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17857] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(492), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(490), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17881] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(496), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(494), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17905] = 4,
    ACTIONS(630), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(500), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(498), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17931] = 4,
    ACTIONS(632), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(504), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(502), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17957] = 4,
    ACTIONS(634), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(508), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(506), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17983] = 4,
    ACTIONS(636), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(512), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(510), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18009] = 4,
    ACTIONS(638), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(422), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(420), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18035] = 4,
    ACTIONS(640), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(440), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(438), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18061] = 4,
    ACTIONS(598), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(444), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(442), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18087] = 4,
    ACTIONS(600), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(448), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(446), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [18113] = 4,
    ACTIONS(602), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(452), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(450), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
    ACTIONS(456), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(454), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18163] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(472), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(470), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18187] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(460), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(458), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18211] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(464), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(462), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18235] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(468), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(466), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18259] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 1,
      sym_assignment_operator,
    ACTIONS(608), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(610), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [18289] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 1,
      sym_assignment_operator,
    ACTIONS(642), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(644), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [18319] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(398), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(396), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18343] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(476), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(474), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18367] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(480), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(478), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
    ACTIONS(484), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(482), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18415] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(488), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(486), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18439] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(328), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(326), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18463] = 4,
    ACTIONS(646), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(332), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(330), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18489] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(338), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(336), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18513] = 4,
    ACTIONS(630), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(342), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(340), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18539] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(348), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(346), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18563] = 4,
    ACTIONS(632), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(352), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(350), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18589] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(358), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(356), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18613] = 4,
    ACTIONS(634), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(362), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(360), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18639] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(368), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(366), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18663] = 4,
    ACTIONS(636), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(372), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(370), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18689] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(378), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(376), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18713] = 4,
    ACTIONS(638), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(382), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(380), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18739] = 4,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(628), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(624), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
    ACTIONS(388), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(386), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18789] = 4,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(628), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(624), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18815] = 4,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(628), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(624), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18841] = 4,
    ACTIONS(640), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(392), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(390), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18867] = 4,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(628), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(624), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18893] = 4,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(628), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(624), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18919] = 4,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(628), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(624), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18945] = 4,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(628), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(624), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18971] = 4,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(628), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(624), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18997] = 4,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(628), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(624), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19023] = 4,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(628), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(624), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19049] = 4,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(628), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(624), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19075] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 1,
      sym_assignment_operator,
    ACTIONS(670), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(672), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [19105] = 4,
    ACTIONS(674), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(342), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(340), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19129] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(676), 1,
      aux_sym__string_directive_token1,
    ACTIONS(628), 12,
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
  [19153] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(470), 1,
      aux_sym__string_directive_token1,
    ACTIONS(472), 12,
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
  [19177] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(476), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(474), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19199] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(480), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(478), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19221] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(484), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(482), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19243] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(488), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(486), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19265] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(328), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(326), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19287] = 4,
    ACTIONS(678), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(332), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(330), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19311] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(338), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(336), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19333] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(348), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(346), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19355] = 4,
    ACTIONS(680), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(352), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(350), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19379] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(358), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(356), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19401] = 4,
    ACTIONS(682), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(362), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(360), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19425] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(368), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(366), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19447] = 4,
    ACTIONS(684), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(372), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(370), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19471] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(378), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(376), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19493] = 4,
    ACTIONS(686), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(382), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(380), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19517] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(388), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(386), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19539] = 4,
    ACTIONS(688), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(392), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(390), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19563] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(412), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(410), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19585] = 4,
    ACTIONS(690), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(402), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(400), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [19609] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(408), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(406), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19631] = 4,
    ACTIONS(692), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(416), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(414), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [19655] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(516), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(514), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19677] = 4,
    ACTIONS(694), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(426), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(424), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19701] = 5,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    ACTIONS(698), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(432), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(430), 7,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19727] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(322), 1,
      aux_sym__string_directive_token1,
    ACTIONS(324), 12,
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
  [19751] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(492), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(490), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19773] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(496), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(494), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19795] = 4,
    ACTIONS(674), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(500), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(498), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19819] = 4,
    ACTIONS(680), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(504), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(502), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19843] = 4,
    ACTIONS(682), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(508), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(506), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19867] = 4,
    ACTIONS(684), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(512), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(510), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19891] = 4,
    ACTIONS(686), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(422), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(420), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19915] = 4,
    ACTIONS(688), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(440), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(438), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19939] = 4,
    ACTIONS(690), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(444), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(442), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [19963] = 4,
    ACTIONS(692), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(448), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(446), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [19987] = 4,
    ACTIONS(694), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(452), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(450), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20011] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(456), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(454), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20033] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(460), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(458), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20055] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(462), 1,
      aux_sym__string_directive_token1,
    ACTIONS(464), 12,
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
  [20079] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(466), 1,
      aux_sym__string_directive_token1,
    ACTIONS(468), 12,
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
  [20103] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(324), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(322), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20125] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(472), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(470), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20147] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(464), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(462), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20169] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(468), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(466), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20191] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(398), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(396), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20213] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(700), 1,
      sym__data_separator,
    STATE(361), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(588), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(590), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20240] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(536), 1,
      sym_logical_or_operator,
    ACTIONS(410), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(412), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [20265] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(706), 1,
      sym__data_separator,
    STATE(361), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(702), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(704), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20292] = 4,
    ACTIONS(546), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(412), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(410), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_assignment_operator,
  [20315] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(700), 1,
      sym__data_separator,
    STATE(361), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(709), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(711), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20342] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(364), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(713), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(715), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(717), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20368] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(370), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(720), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(722), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(724), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20394] = 6,
    STATE(11), 1,
      sym__control_operand_separator,
    STATE(371), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(726), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(728), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(730), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
  [20420] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(736), 1,
      sym_assignment_operator,
    ACTIONS(732), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(734), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_COMMA,
  [20446] = 6,
    STATE(11), 1,
      sym__control_operand_separator,
    STATE(368), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(738), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(740), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(742), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
  [20472] = 5,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(747), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(745), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__control_operand_separator_token1,
  [20496] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(364), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(751), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(753), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(755), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20522] = 6,
    STATE(11), 1,
      sym__control_operand_separator,
    STATE(368), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(730), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(757), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(759), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20548] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(761), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(765), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(763), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20575] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(769), 1,
      ts_builtin_sym_end,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      sym__operand_separator,
    STATE(373), 1,
      aux_sym_operands_repeat1,
    ACTIONS(771), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20602] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(779), 1,
      ts_builtin_sym_end,
    ACTIONS(783), 1,
      aux_sym__whitespace_token1,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
    STATE(396), 1,
      sym__call_expression,
    ACTIONS(781), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20629] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(787), 1,
      ts_builtin_sym_end,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      sym__operand_separator,
    STATE(377), 1,
      aux_sym_operands_repeat1,
    ACTIONS(789), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20656] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(795), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(799), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(797), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20683] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
    ACTIONS(809), 1,
      sym__operand_separator,
    STATE(373), 1,
      aux_sym_operands_repeat1,
    ACTIONS(807), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20710] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(765), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(811), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(813), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20737] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(795), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(797), 7,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [20757] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(815), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(817), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_COMMA,
  [20777] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(819), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(821), 7,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [20797] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(825), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(823), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__control_operand_separator_token1,
  [20815] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(829), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(827), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__control_operand_separator_token1,
  [20833] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(833), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(831), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__control_operand_separator_token1,
  [20851] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(740), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(738), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__control_operand_separator_token1,
  [20869] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(837), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(835), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__control_operand_separator_token1,
  [20887] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(827), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(829), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_COMMA,
  [20907] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(835), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(837), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_COMMA,
  [20927] = 8,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(839), 1,
      anon_sym_CR,
    ACTIONS(841), 1,
      sym_line_comment,
    STATE(521), 1,
      sym__comment,
    ACTIONS(83), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(843), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20954] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(849), 1,
      aux_sym__whitespace_token1,
    ACTIONS(851), 1,
      anon_sym_LPAREN,
    ACTIONS(845), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(847), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20977] = 8,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(839), 1,
      anon_sym_CR,
    ACTIONS(841), 1,
      sym_line_comment,
    STATE(529), 1,
      sym__comment,
    ACTIONS(83), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(853), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21004] = 8,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(839), 1,
      anon_sym_CR,
    ACTIONS(841), 1,
      sym_line_comment,
    ACTIONS(855), 1,
      ts_builtin_sym_end,
    STATE(514), 1,
      sym__comment,
    ACTIONS(83), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(857), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21031] = 6,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(861), 1,
      sym_line_comment,
    STATE(529), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(859), 2,
      sym__line_separator,
      anon_sym_SEMI,
    ACTIONS(863), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21053] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(865), 1,
      ts_builtin_sym_end,
    ACTIONS(867), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21071] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(873), 1,
      aux_sym__whitespace_token1,
    ACTIONS(869), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(871), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21091] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(875), 1,
      ts_builtin_sym_end,
    ACTIONS(877), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21109] = 6,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(861), 1,
      sym_line_comment,
    STATE(521), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(859), 2,
      sym__line_separator,
      anon_sym_SEMI,
    ACTIONS(879), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21131] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(881), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(883), 5,
      anon_sym_SEMI,
      aux_sym__whitespace_token1,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21149] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21167] = 6,
    ACTIONS(855), 1,
      ts_builtin_sym_end,
    ACTIONS(861), 1,
      sym_line_comment,
    STATE(514), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(859), 2,
      sym__line_separator,
      anon_sym_SEMI,
    ACTIONS(885), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21189] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(887), 1,
      ts_builtin_sym_end,
    ACTIONS(889), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21207] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(891), 1,
      ts_builtin_sym_end,
    ACTIONS(893), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21225] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(895), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(897), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21240] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(839), 1,
      anon_sym_CR,
    ACTIONS(899), 1,
      sym_line_comment,
    ACTIONS(83), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(901), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21261] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(903), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(905), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21276] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(907), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(909), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21291] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(911), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(913), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21306] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(915), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(917), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21321] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(919), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(921), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21336] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(923), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(925), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21351] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(927), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(929), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21366] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(931), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(933), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21381] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(935), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(937), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21396] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(895), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(897), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21411] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(939), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(941), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21426] = 3,
    ACTIONS(646), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(410), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [21441] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(943), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(945), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21456] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(947), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(949), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21471] = 5,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    ACTIONS(954), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(732), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [21489] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(958), 1,
      anon_sym_RPAREN,
    ACTIONS(960), 1,
      sym_macro_parameter,
    STATE(453), 1,
      sym_macro_parameters,
    ACTIONS(956), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21509] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(962), 1,
      ts_builtin_sym_end,
    ACTIONS(964), 1,
      anon_sym_CR,
    ACTIONS(966), 1,
      anon_sym_LF,
    ACTIONS(968), 1,
      sym_line_comment,
    STATE(493), 1,
      sym__comment,
  [21531] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(428), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(970), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21551] = 4,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(954), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(732), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21567] = 5,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(954), 1,
      sym_assignment_operator,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(732), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [21585] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(964), 1,
      anon_sym_CR,
    ACTIONS(966), 1,
      anon_sym_LF,
    ACTIONS(978), 1,
      ts_builtin_sym_end,
    ACTIONS(980), 1,
      sym_line_comment,
    STATE(522), 1,
      sym__comment,
  [21607] = 5,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(954), 1,
      sym_assignment_operator,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(732), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [21625] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(964), 1,
      anon_sym_CR,
    ACTIONS(966), 1,
      anon_sym_LF,
    ACTIONS(985), 1,
      ts_builtin_sym_end,
    ACTIONS(987), 1,
      sym_line_comment,
    STATE(502), 1,
      sym__comment,
  [21647] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(989), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21667] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(960), 1,
      sym_macro_parameter,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym_macro_parameters,
    ACTIONS(992), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21687] = 4,
    ACTIONS(996), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(859), 2,
      sym__line_separator,
      anon_sym_SEMI,
    ACTIONS(998), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [21703] = 5,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(954), 1,
      sym_assignment_operator,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(732), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [21721] = 5,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(954), 1,
      sym_assignment_operator,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(732), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [21739] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1006), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21759] = 4,
    ACTIONS(1012), 1,
      sym_line_comment,
    STATE(472), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1014), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [21774] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1016), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      aux_sym_string_repeat1,
    ACTIONS(1018), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [21791] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1020), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      aux_sym_string_repeat1,
    ACTIONS(1018), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [21808] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1022), 1,
      anon_sym_DQUOTE,
    STATE(435), 1,
      aux_sym_string_repeat1,
    ACTIONS(1024), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [21825] = 5,
    ACTIONS(985), 1,
      ts_builtin_sym_end,
    ACTIONS(1026), 1,
      sym_line_comment,
    ACTIONS(1028), 1,
      sym__line_separator,
    STATE(502), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21842] = 3,
    ACTIONS(678), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(410), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [21855] = 5,
    ACTIONS(978), 1,
      ts_builtin_sym_end,
    ACTIONS(1028), 1,
      sym__line_separator,
    ACTIONS(1030), 1,
      sym_line_comment,
    STATE(522), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21872] = 4,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1032), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [21887] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1035), 1,
      anon_sym_DQUOTE,
    STATE(444), 1,
      aux_sym_string_repeat1,
    ACTIONS(1037), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [21904] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1039), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      aux_sym_string_repeat1,
    ACTIONS(1041), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [21921] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1044), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      aux_sym_string_repeat1,
    ACTIONS(1018), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [21938] = 5,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      sym__operand_separator,
    STATE(441), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21955] = 5,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    ACTIONS(1046), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      sym__operand_separator,
    STATE(445), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21972] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(797), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21985] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(821), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21998] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1052), 1,
      anon_sym_DQUOTE,
    STATE(436), 1,
      aux_sym_string_repeat1,
    ACTIONS(1054), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [22015] = 5,
    ACTIONS(962), 1,
      ts_builtin_sym_end,
    ACTIONS(1028), 1,
      sym__line_separator,
    ACTIONS(1056), 1,
      sym_line_comment,
    STATE(493), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22032] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1058), 1,
      anon_sym_DQUOTE,
    STATE(452), 1,
      aux_sym_string_repeat1,
    ACTIONS(1060), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [22049] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1062), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      aux_sym_string_repeat1,
    ACTIONS(1018), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [22066] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    ACTIONS(1064), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22080] = 4,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    ACTIONS(1070), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22094] = 4,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    ACTIONS(1070), 1,
      sym_assignment_operator,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22108] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1076), 1,
      anon_sym_RPAREN,
    ACTIONS(1074), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22122] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(815), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22132] = 4,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    ACTIONS(1070), 1,
      sym_assignment_operator,
    ACTIONS(1078), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22146] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(827), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22156] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1080), 1,
      anon_sym_LPAREN,
    ACTIONS(1082), 1,
      sym_macro_parameter,
    STATE(417), 1,
      sym_macro_parameters,
  [22172] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(835), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22182] = 4,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    ACTIONS(1070), 1,
      sym_assignment_operator,
    ACTIONS(1084), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22196] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1086), 1,
      ts_builtin_sym_end,
    ACTIONS(1088), 1,
      anon_sym_CR,
    ACTIONS(1090), 1,
      anon_sym_LF,
  [22212] = 4,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    ACTIONS(1070), 1,
      sym_assignment_operator,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22226] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(964), 1,
      anon_sym_CR,
    ACTIONS(966), 1,
      anon_sym_LF,
  [22239] = 3,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    ACTIONS(1070), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22250] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1094), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [22261] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    ACTIONS(1098), 1,
      sym_macro_parameter,
  [22274] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1014), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [22283] = 3,
    ACTIONS(1070), 1,
      sym_assignment_operator,
    ACTIONS(1100), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22294] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      sym_macro_parameter,
  [22307] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1106), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [22316] = 3,
    ACTIONS(1086), 1,
      ts_builtin_sym_end,
    ACTIONS(1108), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22327] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      aux_sym__statement_token1,
    ACTIONS(1086), 1,
      ts_builtin_sym_end,
  [22340] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1110), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [22351] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1112), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [22362] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1088), 1,
      anon_sym_CR,
    ACTIONS(1090), 1,
      anon_sym_LF,
  [22375] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1114), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [22386] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1116), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [22397] = 3,
    ACTIONS(1070), 1,
      sym_assignment_operator,
    ACTIONS(1118), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22408] = 3,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    ACTIONS(1070), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22419] = 3,
    ACTIONS(1070), 1,
      sym_assignment_operator,
    ACTIONS(1120), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22430] = 3,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    ACTIONS(1070), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22441] = 2,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22449] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1122), 1,
      anon_sym_LF,
  [22459] = 2,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22467] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(859), 1,
      aux_sym__statement_token1,
  [22477] = 2,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22485] = 2,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22493] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1104), 1,
      sym_macro_parameter,
  [22503] = 2,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22511] = 2,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22519] = 2,
    ACTIONS(1134), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22527] = 2,
    ACTIONS(1136), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22535] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1138), 1,
      aux_sym__string_directive_token1,
  [22545] = 2,
    ACTIONS(1140), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22553] = 2,
    ACTIONS(1142), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22561] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1144), 1,
      aux_sym__whitespace_token1,
  [22571] = 2,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22579] = 2,
    ACTIONS(1148), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22587] = 2,
    ACTIONS(1150), 1,
      sym_macro_name,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22595] = 2,
    ACTIONS(1152), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22603] = 2,
    ACTIONS(1154), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22611] = 2,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22619] = 2,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22627] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1098), 1,
      sym_macro_parameter,
  [22637] = 2,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22645] = 2,
    ACTIONS(1162), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22653] = 2,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22661] = 2,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22669] = 2,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22677] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1170), 1,
      sym_macro_parameter,
  [22687] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1172), 1,
      aux_sym__whitespace_token1,
  [22697] = 2,
    ACTIONS(1174), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22705] = 2,
    ACTIONS(1108), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22713] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(835), 1,
      aux_sym__string_directive_token1,
  [22723] = 2,
    ACTIONS(1028), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22731] = 2,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22739] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1178), 1,
      aux_sym__whitespace_token1,
  [22749] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1180), 1,
      aux_sym__whitespace_token1,
  [22759] = 2,
    ACTIONS(855), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22767] = 2,
    ACTIONS(1182), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22775] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1184), 1,
      anon_sym_LF,
  [22785] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1186), 1,
      aux_sym__string_directive_token1,
  [22795] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1108), 1,
      anon_sym_LF,
  [22805] = 2,
    ACTIONS(1188), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22813] = 2,
    ACTIONS(1190), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22821] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1192), 1,
      aux_sym__whitespace_token1,
  [22831] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22839] = 2,
    ACTIONS(1194), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22847] = 2,
    ACTIONS(1196), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22855] = 2,
    ACTIONS(1198), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22863] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1200), 1,
      sym_macro_parameter,
  [22873] = 2,
    ACTIONS(1202), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22881] = 2,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22889] = 2,
    ACTIONS(1206), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22897] = 2,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22905] = 2,
    ACTIONS(1210), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [22913] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(827), 1,
      aux_sym__string_directive_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 144,
  [SMALL_STATE(4)] = 282,
  [SMALL_STATE(5)] = 394,
  [SMALL_STATE(6)] = 503,
  [SMALL_STATE(7)] = 612,
  [SMALL_STATE(8)] = 741,
  [SMALL_STATE(9)] = 873,
  [SMALL_STATE(10)] = 1005,
  [SMALL_STATE(11)] = 1109,
  [SMALL_STATE(12)] = 1240,
  [SMALL_STATE(13)] = 1373,
  [SMALL_STATE(14)] = 1502,
  [SMALL_STATE(15)] = 1632,
  [SMALL_STATE(16)] = 1762,
  [SMALL_STATE(17)] = 1892,
  [SMALL_STATE(18)] = 2022,
  [SMALL_STATE(19)] = 2148,
  [SMALL_STATE(20)] = 2278,
  [SMALL_STATE(21)] = 2408,
  [SMALL_STATE(22)] = 2538,
  [SMALL_STATE(23)] = 2664,
  [SMALL_STATE(24)] = 2794,
  [SMALL_STATE(25)] = 2924,
  [SMALL_STATE(26)] = 3054,
  [SMALL_STATE(27)] = 3184,
  [SMALL_STATE(28)] = 3314,
  [SMALL_STATE(29)] = 3437,
  [SMALL_STATE(30)] = 3564,
  [SMALL_STATE(31)] = 3687,
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
  [SMALL_STATE(44)] = 5198,
  [SMALL_STATE(45)] = 5314,
  [SMALL_STATE(46)] = 5430,
  [SMALL_STATE(47)] = 5546,
  [SMALL_STATE(48)] = 5662,
  [SMALL_STATE(49)] = 5780,
  [SMALL_STATE(50)] = 5896,
  [SMALL_STATE(51)] = 6012,
  [SMALL_STATE(52)] = 6128,
  [SMALL_STATE(53)] = 6244,
  [SMALL_STATE(54)] = 6360,
  [SMALL_STATE(55)] = 6476,
  [SMALL_STATE(56)] = 6592,
  [SMALL_STATE(57)] = 6708,
  [SMALL_STATE(58)] = 6824,
  [SMALL_STATE(59)] = 6940,
  [SMALL_STATE(60)] = 7056,
  [SMALL_STATE(61)] = 7174,
  [SMALL_STATE(62)] = 7290,
  [SMALL_STATE(63)] = 7406,
  [SMALL_STATE(64)] = 7522,
  [SMALL_STATE(65)] = 7638,
  [SMALL_STATE(66)] = 7754,
  [SMALL_STATE(67)] = 7870,
  [SMALL_STATE(68)] = 7986,
  [SMALL_STATE(69)] = 8102,
  [SMALL_STATE(70)] = 8218,
  [SMALL_STATE(71)] = 8334,
  [SMALL_STATE(72)] = 8452,
  [SMALL_STATE(73)] = 8568,
  [SMALL_STATE(74)] = 8684,
  [SMALL_STATE(75)] = 8800,
  [SMALL_STATE(76)] = 8916,
  [SMALL_STATE(77)] = 9032,
  [SMALL_STATE(78)] = 9148,
  [SMALL_STATE(79)] = 9264,
  [SMALL_STATE(80)] = 9380,
  [SMALL_STATE(81)] = 9496,
  [SMALL_STATE(82)] = 9612,
  [SMALL_STATE(83)] = 9730,
  [SMALL_STATE(84)] = 9846,
  [SMALL_STATE(85)] = 9962,
  [SMALL_STATE(86)] = 10078,
  [SMALL_STATE(87)] = 10194,
  [SMALL_STATE(88)] = 10310,
  [SMALL_STATE(89)] = 10426,
  [SMALL_STATE(90)] = 10542,
  [SMALL_STATE(91)] = 10658,
  [SMALL_STATE(92)] = 10774,
  [SMALL_STATE(93)] = 10890,
  [SMALL_STATE(94)] = 11006,
  [SMALL_STATE(95)] = 11122,
  [SMALL_STATE(96)] = 11238,
  [SMALL_STATE(97)] = 11354,
  [SMALL_STATE(98)] = 11470,
  [SMALL_STATE(99)] = 11586,
  [SMALL_STATE(100)] = 11702,
  [SMALL_STATE(101)] = 11818,
  [SMALL_STATE(102)] = 11934,
  [SMALL_STATE(103)] = 12052,
  [SMALL_STATE(104)] = 12168,
  [SMALL_STATE(105)] = 12284,
  [SMALL_STATE(106)] = 12343,
  [SMALL_STATE(107)] = 12404,
  [SMALL_STATE(108)] = 12465,
  [SMALL_STATE(109)] = 12526,
  [SMALL_STATE(110)] = 12585,
  [SMALL_STATE(111)] = 12644,
  [SMALL_STATE(112)] = 12700,
  [SMALL_STATE(113)] = 12756,
  [SMALL_STATE(114)] = 12812,
  [SMALL_STATE(115)] = 12868,
  [SMALL_STATE(116)] = 12924,
  [SMALL_STATE(117)] = 12982,
  [SMALL_STATE(118)] = 13038,
  [SMALL_STATE(119)] = 13094,
  [SMALL_STATE(120)] = 13130,
  [SMALL_STATE(121)] = 13166,
  [SMALL_STATE(122)] = 13204,
  [SMALL_STATE(123)] = 13240,
  [SMALL_STATE(124)] = 13278,
  [SMALL_STATE(125)] = 13314,
  [SMALL_STATE(126)] = 13352,
  [SMALL_STATE(127)] = 13388,
  [SMALL_STATE(128)] = 13426,
  [SMALL_STATE(129)] = 13462,
  [SMALL_STATE(130)] = 13500,
  [SMALL_STATE(131)] = 13536,
  [SMALL_STATE(132)] = 13574,
  [SMALL_STATE(133)] = 13610,
  [SMALL_STATE(134)] = 13648,
  [SMALL_STATE(135)] = 13684,
  [SMALL_STATE(136)] = 13722,
  [SMALL_STATE(137)] = 13758,
  [SMALL_STATE(138)] = 13794,
  [SMALL_STATE(139)] = 13832,
  [SMALL_STATE(140)] = 13870,
  [SMALL_STATE(141)] = 13908,
  [SMALL_STATE(142)] = 13948,
  [SMALL_STATE(143)] = 13986,
  [SMALL_STATE(144)] = 14024,
  [SMALL_STATE(145)] = 14062,
  [SMALL_STATE(146)] = 14100,
  [SMALL_STATE(147)] = 14136,
  [SMALL_STATE(148)] = 14172,
  [SMALL_STATE(149)] = 14208,
  [SMALL_STATE(150)] = 14244,
  [SMALL_STATE(151)] = 14280,
  [SMALL_STATE(152)] = 14316,
  [SMALL_STATE(153)] = 14352,
  [SMALL_STATE(154)] = 14388,
  [SMALL_STATE(155)] = 14424,
  [SMALL_STATE(156)] = 14460,
  [SMALL_STATE(157)] = 14496,
  [SMALL_STATE(158)] = 14534,
  [SMALL_STATE(159)] = 14572,
  [SMALL_STATE(160)] = 14610,
  [SMALL_STATE(161)] = 14648,
  [SMALL_STATE(162)] = 14684,
  [SMALL_STATE(163)] = 14716,
  [SMALL_STATE(164)] = 14748,
  [SMALL_STATE(165)] = 14780,
  [SMALL_STATE(166)] = 14814,
  [SMALL_STATE(167)] = 14848,
  [SMALL_STATE(168)] = 14882,
  [SMALL_STATE(169)] = 14916,
  [SMALL_STATE(170)] = 14950,
  [SMALL_STATE(171)] = 14984,
  [SMALL_STATE(172)] = 15018,
  [SMALL_STATE(173)] = 15052,
  [SMALL_STATE(174)] = 15086,
  [SMALL_STATE(175)] = 15118,
  [SMALL_STATE(176)] = 15150,
  [SMALL_STATE(177)] = 15182,
  [SMALL_STATE(178)] = 15214,
  [SMALL_STATE(179)] = 15246,
  [SMALL_STATE(180)] = 15278,
  [SMALL_STATE(181)] = 15310,
  [SMALL_STATE(182)] = 15342,
  [SMALL_STATE(183)] = 15376,
  [SMALL_STATE(184)] = 15408,
  [SMALL_STATE(185)] = 15442,
  [SMALL_STATE(186)] = 15474,
  [SMALL_STATE(187)] = 15508,
  [SMALL_STATE(188)] = 15544,
  [SMALL_STATE(189)] = 15578,
  [SMALL_STATE(190)] = 15610,
  [SMALL_STATE(191)] = 15644,
  [SMALL_STATE(192)] = 15676,
  [SMALL_STATE(193)] = 15710,
  [SMALL_STATE(194)] = 15742,
  [SMALL_STATE(195)] = 15776,
  [SMALL_STATE(196)] = 15808,
  [SMALL_STATE(197)] = 15842,
  [SMALL_STATE(198)] = 15874,
  [SMALL_STATE(199)] = 15908,
  [SMALL_STATE(200)] = 15940,
  [SMALL_STATE(201)] = 15974,
  [SMALL_STATE(202)] = 16006,
  [SMALL_STATE(203)] = 16042,
  [SMALL_STATE(204)] = 16072,
  [SMALL_STATE(205)] = 16102,
  [SMALL_STATE(206)] = 16132,
  [SMALL_STATE(207)] = 16162,
  [SMALL_STATE(208)] = 16192,
  [SMALL_STATE(209)] = 16222,
  [SMALL_STATE(210)] = 16254,
  [SMALL_STATE(211)] = 16284,
  [SMALL_STATE(212)] = 16316,
  [SMALL_STATE(213)] = 16346,
  [SMALL_STATE(214)] = 16378,
  [SMALL_STATE(215)] = 16408,
  [SMALL_STATE(216)] = 16440,
  [SMALL_STATE(217)] = 16470,
  [SMALL_STATE(218)] = 16502,
  [SMALL_STATE(219)] = 16532,
  [SMALL_STATE(220)] = 16564,
  [SMALL_STATE(221)] = 16594,
  [SMALL_STATE(222)] = 16626,
  [SMALL_STATE(223)] = 16656,
  [SMALL_STATE(224)] = 16688,
  [SMALL_STATE(225)] = 16718,
  [SMALL_STATE(226)] = 16750,
  [SMALL_STATE(227)] = 16780,
  [SMALL_STATE(228)] = 16812,
  [SMALL_STATE(229)] = 16846,
  [SMALL_STATE(230)] = 16876,
  [SMALL_STATE(231)] = 16906,
  [SMALL_STATE(232)] = 16936,
  [SMALL_STATE(233)] = 16968,
  [SMALL_STATE(234)] = 17000,
  [SMALL_STATE(235)] = 17032,
  [SMALL_STATE(236)] = 17064,
  [SMALL_STATE(237)] = 17096,
  [SMALL_STATE(238)] = 17128,
  [SMALL_STATE(239)] = 17160,
  [SMALL_STATE(240)] = 17192,
  [SMALL_STATE(241)] = 17224,
  [SMALL_STATE(242)] = 17254,
  [SMALL_STATE(243)] = 17286,
  [SMALL_STATE(244)] = 17316,
  [SMALL_STATE(245)] = 17346,
  [SMALL_STATE(246)] = 17376,
  [SMALL_STATE(247)] = 17408,
  [SMALL_STATE(248)] = 17438,
  [SMALL_STATE(249)] = 17470,
  [SMALL_STATE(250)] = 17519,
  [SMALL_STATE(251)] = 17548,
  [SMALL_STATE(252)] = 17591,
  [SMALL_STATE(253)] = 17615,
  [SMALL_STATE(254)] = 17641,
  [SMALL_STATE(255)] = 17665,
  [SMALL_STATE(256)] = 17691,
  [SMALL_STATE(257)] = 17715,
  [SMALL_STATE(258)] = 17741,
  [SMALL_STATE(259)] = 17769,
  [SMALL_STATE(260)] = 17807,
  [SMALL_STATE(261)] = 17833,
  [SMALL_STATE(262)] = 17857,
  [SMALL_STATE(263)] = 17881,
  [SMALL_STATE(264)] = 17905,
  [SMALL_STATE(265)] = 17931,
  [SMALL_STATE(266)] = 17957,
  [SMALL_STATE(267)] = 17983,
  [SMALL_STATE(268)] = 18009,
  [SMALL_STATE(269)] = 18035,
  [SMALL_STATE(270)] = 18061,
  [SMALL_STATE(271)] = 18087,
  [SMALL_STATE(272)] = 18113,
  [SMALL_STATE(273)] = 18139,
  [SMALL_STATE(274)] = 18163,
  [SMALL_STATE(275)] = 18187,
  [SMALL_STATE(276)] = 18211,
  [SMALL_STATE(277)] = 18235,
  [SMALL_STATE(278)] = 18259,
  [SMALL_STATE(279)] = 18289,
  [SMALL_STATE(280)] = 18319,
  [SMALL_STATE(281)] = 18343,
  [SMALL_STATE(282)] = 18367,
  [SMALL_STATE(283)] = 18391,
  [SMALL_STATE(284)] = 18415,
  [SMALL_STATE(285)] = 18439,
  [SMALL_STATE(286)] = 18463,
  [SMALL_STATE(287)] = 18489,
  [SMALL_STATE(288)] = 18513,
  [SMALL_STATE(289)] = 18539,
  [SMALL_STATE(290)] = 18563,
  [SMALL_STATE(291)] = 18589,
  [SMALL_STATE(292)] = 18613,
  [SMALL_STATE(293)] = 18639,
  [SMALL_STATE(294)] = 18663,
  [SMALL_STATE(295)] = 18689,
  [SMALL_STATE(296)] = 18713,
  [SMALL_STATE(297)] = 18739,
  [SMALL_STATE(298)] = 18765,
  [SMALL_STATE(299)] = 18789,
  [SMALL_STATE(300)] = 18815,
  [SMALL_STATE(301)] = 18841,
  [SMALL_STATE(302)] = 18867,
  [SMALL_STATE(303)] = 18893,
  [SMALL_STATE(304)] = 18919,
  [SMALL_STATE(305)] = 18945,
  [SMALL_STATE(306)] = 18971,
  [SMALL_STATE(307)] = 18997,
  [SMALL_STATE(308)] = 19023,
  [SMALL_STATE(309)] = 19049,
  [SMALL_STATE(310)] = 19075,
  [SMALL_STATE(311)] = 19105,
  [SMALL_STATE(312)] = 19129,
  [SMALL_STATE(313)] = 19153,
  [SMALL_STATE(314)] = 19177,
  [SMALL_STATE(315)] = 19199,
  [SMALL_STATE(316)] = 19221,
  [SMALL_STATE(317)] = 19243,
  [SMALL_STATE(318)] = 19265,
  [SMALL_STATE(319)] = 19287,
  [SMALL_STATE(320)] = 19311,
  [SMALL_STATE(321)] = 19333,
  [SMALL_STATE(322)] = 19355,
  [SMALL_STATE(323)] = 19379,
  [SMALL_STATE(324)] = 19401,
  [SMALL_STATE(325)] = 19425,
  [SMALL_STATE(326)] = 19447,
  [SMALL_STATE(327)] = 19471,
  [SMALL_STATE(328)] = 19493,
  [SMALL_STATE(329)] = 19517,
  [SMALL_STATE(330)] = 19539,
  [SMALL_STATE(331)] = 19563,
  [SMALL_STATE(332)] = 19585,
  [SMALL_STATE(333)] = 19609,
  [SMALL_STATE(334)] = 19631,
  [SMALL_STATE(335)] = 19655,
  [SMALL_STATE(336)] = 19677,
  [SMALL_STATE(337)] = 19701,
  [SMALL_STATE(338)] = 19727,
  [SMALL_STATE(339)] = 19751,
  [SMALL_STATE(340)] = 19773,
  [SMALL_STATE(341)] = 19795,
  [SMALL_STATE(342)] = 19819,
  [SMALL_STATE(343)] = 19843,
  [SMALL_STATE(344)] = 19867,
  [SMALL_STATE(345)] = 19891,
  [SMALL_STATE(346)] = 19915,
  [SMALL_STATE(347)] = 19939,
  [SMALL_STATE(348)] = 19963,
  [SMALL_STATE(349)] = 19987,
  [SMALL_STATE(350)] = 20011,
  [SMALL_STATE(351)] = 20033,
  [SMALL_STATE(352)] = 20055,
  [SMALL_STATE(353)] = 20079,
  [SMALL_STATE(354)] = 20103,
  [SMALL_STATE(355)] = 20125,
  [SMALL_STATE(356)] = 20147,
  [SMALL_STATE(357)] = 20169,
  [SMALL_STATE(358)] = 20191,
  [SMALL_STATE(359)] = 20213,
  [SMALL_STATE(360)] = 20240,
  [SMALL_STATE(361)] = 20265,
  [SMALL_STATE(362)] = 20292,
  [SMALL_STATE(363)] = 20315,
  [SMALL_STATE(364)] = 20342,
  [SMALL_STATE(365)] = 20368,
  [SMALL_STATE(366)] = 20394,
  [SMALL_STATE(367)] = 20420,
  [SMALL_STATE(368)] = 20446,
  [SMALL_STATE(369)] = 20472,
  [SMALL_STATE(370)] = 20496,
  [SMALL_STATE(371)] = 20522,
  [SMALL_STATE(372)] = 20548,
  [SMALL_STATE(373)] = 20575,
  [SMALL_STATE(374)] = 20602,
  [SMALL_STATE(375)] = 20629,
  [SMALL_STATE(376)] = 20656,
  [SMALL_STATE(377)] = 20683,
  [SMALL_STATE(378)] = 20710,
  [SMALL_STATE(379)] = 20737,
  [SMALL_STATE(380)] = 20757,
  [SMALL_STATE(381)] = 20777,
  [SMALL_STATE(382)] = 20797,
  [SMALL_STATE(383)] = 20815,
  [SMALL_STATE(384)] = 20833,
  [SMALL_STATE(385)] = 20851,
  [SMALL_STATE(386)] = 20869,
  [SMALL_STATE(387)] = 20887,
  [SMALL_STATE(388)] = 20907,
  [SMALL_STATE(389)] = 20927,
  [SMALL_STATE(390)] = 20954,
  [SMALL_STATE(391)] = 20977,
  [SMALL_STATE(392)] = 21004,
  [SMALL_STATE(393)] = 21031,
  [SMALL_STATE(394)] = 21053,
  [SMALL_STATE(395)] = 21071,
  [SMALL_STATE(396)] = 21091,
  [SMALL_STATE(397)] = 21109,
  [SMALL_STATE(398)] = 21131,
  [SMALL_STATE(399)] = 21149,
  [SMALL_STATE(400)] = 21167,
  [SMALL_STATE(401)] = 21189,
  [SMALL_STATE(402)] = 21207,
  [SMALL_STATE(403)] = 21225,
  [SMALL_STATE(404)] = 21240,
  [SMALL_STATE(405)] = 21261,
  [SMALL_STATE(406)] = 21276,
  [SMALL_STATE(407)] = 21291,
  [SMALL_STATE(408)] = 21306,
  [SMALL_STATE(409)] = 21321,
  [SMALL_STATE(410)] = 21336,
  [SMALL_STATE(411)] = 21351,
  [SMALL_STATE(412)] = 21366,
  [SMALL_STATE(413)] = 21381,
  [SMALL_STATE(414)] = 21396,
  [SMALL_STATE(415)] = 21411,
  [SMALL_STATE(416)] = 21426,
  [SMALL_STATE(417)] = 21441,
  [SMALL_STATE(418)] = 21456,
  [SMALL_STATE(419)] = 21471,
  [SMALL_STATE(420)] = 21489,
  [SMALL_STATE(421)] = 21509,
  [SMALL_STATE(422)] = 21531,
  [SMALL_STATE(423)] = 21551,
  [SMALL_STATE(424)] = 21567,
  [SMALL_STATE(425)] = 21585,
  [SMALL_STATE(426)] = 21607,
  [SMALL_STATE(427)] = 21625,
  [SMALL_STATE(428)] = 21647,
  [SMALL_STATE(429)] = 21667,
  [SMALL_STATE(430)] = 21687,
  [SMALL_STATE(431)] = 21703,
  [SMALL_STATE(432)] = 21721,
  [SMALL_STATE(433)] = 21739,
  [SMALL_STATE(434)] = 21759,
  [SMALL_STATE(435)] = 21774,
  [SMALL_STATE(436)] = 21791,
  [SMALL_STATE(437)] = 21808,
  [SMALL_STATE(438)] = 21825,
  [SMALL_STATE(439)] = 21842,
  [SMALL_STATE(440)] = 21855,
  [SMALL_STATE(441)] = 21872,
  [SMALL_STATE(442)] = 21887,
  [SMALL_STATE(443)] = 21904,
  [SMALL_STATE(444)] = 21921,
  [SMALL_STATE(445)] = 21938,
  [SMALL_STATE(446)] = 21955,
  [SMALL_STATE(447)] = 21972,
  [SMALL_STATE(448)] = 21985,
  [SMALL_STATE(449)] = 21998,
  [SMALL_STATE(450)] = 22015,
  [SMALL_STATE(451)] = 22032,
  [SMALL_STATE(452)] = 22049,
  [SMALL_STATE(453)] = 22066,
  [SMALL_STATE(454)] = 22080,
  [SMALL_STATE(455)] = 22094,
  [SMALL_STATE(456)] = 22108,
  [SMALL_STATE(457)] = 22122,
  [SMALL_STATE(458)] = 22132,
  [SMALL_STATE(459)] = 22146,
  [SMALL_STATE(460)] = 22156,
  [SMALL_STATE(461)] = 22172,
  [SMALL_STATE(462)] = 22182,
  [SMALL_STATE(463)] = 22196,
  [SMALL_STATE(464)] = 22212,
  [SMALL_STATE(465)] = 22226,
  [SMALL_STATE(466)] = 22239,
  [SMALL_STATE(467)] = 22250,
  [SMALL_STATE(468)] = 22261,
  [SMALL_STATE(469)] = 22274,
  [SMALL_STATE(470)] = 22283,
  [SMALL_STATE(471)] = 22294,
  [SMALL_STATE(472)] = 22307,
  [SMALL_STATE(473)] = 22316,
  [SMALL_STATE(474)] = 22327,
  [SMALL_STATE(475)] = 22340,
  [SMALL_STATE(476)] = 22351,
  [SMALL_STATE(477)] = 22362,
  [SMALL_STATE(478)] = 22375,
  [SMALL_STATE(479)] = 22386,
  [SMALL_STATE(480)] = 22397,
  [SMALL_STATE(481)] = 22408,
  [SMALL_STATE(482)] = 22419,
  [SMALL_STATE(483)] = 22430,
  [SMALL_STATE(484)] = 22441,
  [SMALL_STATE(485)] = 22449,
  [SMALL_STATE(486)] = 22459,
  [SMALL_STATE(487)] = 22467,
  [SMALL_STATE(488)] = 22477,
  [SMALL_STATE(489)] = 22485,
  [SMALL_STATE(490)] = 22493,
  [SMALL_STATE(491)] = 22503,
  [SMALL_STATE(492)] = 22511,
  [SMALL_STATE(493)] = 22519,
  [SMALL_STATE(494)] = 22527,
  [SMALL_STATE(495)] = 22535,
  [SMALL_STATE(496)] = 22545,
  [SMALL_STATE(497)] = 22553,
  [SMALL_STATE(498)] = 22561,
  [SMALL_STATE(499)] = 22571,
  [SMALL_STATE(500)] = 22579,
  [SMALL_STATE(501)] = 22587,
  [SMALL_STATE(502)] = 22595,
  [SMALL_STATE(503)] = 22603,
  [SMALL_STATE(504)] = 22611,
  [SMALL_STATE(505)] = 22619,
  [SMALL_STATE(506)] = 22627,
  [SMALL_STATE(507)] = 22637,
  [SMALL_STATE(508)] = 22645,
  [SMALL_STATE(509)] = 22653,
  [SMALL_STATE(510)] = 22661,
  [SMALL_STATE(511)] = 22669,
  [SMALL_STATE(512)] = 22677,
  [SMALL_STATE(513)] = 22687,
  [SMALL_STATE(514)] = 22697,
  [SMALL_STATE(515)] = 22705,
  [SMALL_STATE(516)] = 22713,
  [SMALL_STATE(517)] = 22723,
  [SMALL_STATE(518)] = 22731,
  [SMALL_STATE(519)] = 22739,
  [SMALL_STATE(520)] = 22749,
  [SMALL_STATE(521)] = 22759,
  [SMALL_STATE(522)] = 22767,
  [SMALL_STATE(523)] = 22775,
  [SMALL_STATE(524)] = 22785,
  [SMALL_STATE(525)] = 22795,
  [SMALL_STATE(526)] = 22805,
  [SMALL_STATE(527)] = 22813,
  [SMALL_STATE(528)] = 22821,
  [SMALL_STATE(529)] = 22831,
  [SMALL_STATE(530)] = 22839,
  [SMALL_STATE(531)] = 22847,
  [SMALL_STATE(532)] = 22855,
  [SMALL_STATE(533)] = 22863,
  [SMALL_STATE(534)] = 22873,
  [SMALL_STATE(535)] = 22881,
  [SMALL_STATE(536)] = 22889,
  [SMALL_STATE(537)] = 22897,
  [SMALL_STATE(538)] = 22905,
  [SMALL_STATE(539)] = 22913,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 2, 0, 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 17),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 3, 0, 17),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 11),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 11),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(519),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(528),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(398),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 7),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 7),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0), SHIFT(110),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0), SHIFT(105),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0), SHIFT(109),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4, 0, 7),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4, 0, 7),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 7),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 7),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 21),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 21),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 13),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 13),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 13),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 13),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 13),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 13),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 13),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 13),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 13),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 13),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 13),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 13),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 13),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 13),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 13),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 13),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 13),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 13),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 25),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 25),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 25),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 25),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 16),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 16),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 25),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 25),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 25),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 25),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 25),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 25),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 25),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 25),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 25),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 25),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 26),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 26),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 27),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 27),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 28),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 28),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 18),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 18),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 13),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 13),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 22),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 22),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 25),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 25),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 25),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 25),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 25),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 25),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 25),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 25),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 13),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 13),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 18),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 3, 0, 18),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(469),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(434),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0), SHIFT(469),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0), SHIFT(434),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(434),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(361),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [717] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(364),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 14),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 3, 0, 14),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_operands, 1, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_operand, 1, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 4, 0, 14),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 4, 0, 14),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_operands, 2, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 24),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 24),
  [773] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 24), SHIFT_REPEAT(28),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 24), SHIFT_REPEAT(28),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 11),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 11),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [802] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(490),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 17),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 17),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 23),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 23),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_type, 1, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_flag, 1, 0, 0),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 9),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 9),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 10),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 10),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 5),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 5),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 6),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 12),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 12),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 2, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 3),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 9),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 6, 0, 9),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 29),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 8, 0, 29),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 29),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 7, 0, 29),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 20),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 6, 0, 20),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 14),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 3, 0, 14),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 4),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 4),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 19),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 4, 0, 19),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 9),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 7, 0, 9),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 20),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 7, 0, 20),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 20),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 5, 0, 20),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 9),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 5, 0, 9),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(155),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 8),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [970] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(468),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(163),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4, 0, 15),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(262),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 7),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [989] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(468),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(339),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(230),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(468),
  [1009] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(506),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 24), SHIFT_REPEAT(30),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [1041] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 1, 0, 0),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4, 0, 8),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1148] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 7),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4, 0, 0),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 5, 0, 15),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
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
