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
#define STATE_COUNT 577
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 162
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
  sym__integer_directive = 99,
  sym_integer_mnemonic = 100,
  sym_integer_operands = 101,
  sym__float_directive = 102,
  sym_float_mnemonic = 103,
  sym_float_operands = 104,
  sym__float_operand = 105,
  sym__string_directive = 106,
  sym_string_mnemonic = 107,
  sym__string_operand = 108,
  sym__control_directive = 109,
  sym_control_mnemonic = 110,
  sym_control_operands = 111,
  sym__control_operand = 112,
  sym__control_operand_separator = 113,
  sym_section_type = 114,
  sym_option_flag = 115,
  sym_instruction = 116,
  sym_operands = 117,
  sym__operand = 118,
  sym__call_expression = 119,
  sym__assignment_expression = 120,
  sym__wrapped_assignment_expression = 121,
  sym__logical_or_expression = 122,
  sym__wrapped_logical_or_expression = 123,
  sym__logical_and_expression = 124,
  sym__wrapped_logical_and_expression = 125,
  sym__bitwise_or_expression = 126,
  sym__wrapped_bitwise_or_expression = 127,
  sym__bitwise_xor_expression = 128,
  sym__wrapped_bitwise_xor_expression = 129,
  sym__bitwise_and_expression = 130,
  sym__wrapped_bitwise_and_expression = 131,
  sym__equality_expression = 132,
  sym__wrapped_equality_expression = 133,
  sym__relational_expression = 134,
  sym__wrapped_relational_expression = 135,
  sym__shift_expression = 136,
  sym__wrapped_shift_expression = 137,
  sym__additive_expression = 138,
  sym__wrapped_additive_expression = 139,
  sym__multiplicative_expression = 140,
  sym__wrapped_multiplicative_expression = 141,
  sym__simple_expression = 142,
  sym_parenthesized_expression = 143,
  sym_unary_expression = 144,
  sym_relocation_expression = 145,
  sym_decimal = 146,
  sym_char = 147,
  sym_string = 148,
  sym__label = 149,
  sym_local_label_reference = 150,
  sym_symbol = 151,
  sym_address = 152,
  aux_sym_program_repeat1 = 153,
  aux_sym_macro_parameters_repeat1 = 154,
  aux_sym__integer_directive_repeat1 = 155,
  aux_sym_integer_operands_repeat1 = 156,
  aux_sym_integer_operands_repeat2 = 157,
  aux_sym_float_operands_repeat1 = 158,
  aux_sym_control_operands_repeat1 = 159,
  aux_sym_operands_repeat1 = 160,
  aux_sym_string_repeat1 = 161,
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
  [sym__integer_directive] = "_integer_directive",
  [sym_integer_mnemonic] = "integer_mnemonic",
  [sym_integer_operands] = "integer_operands",
  [sym__float_directive] = "_float_directive",
  [sym_float_mnemonic] = "float_mnemonic",
  [sym_float_operands] = "float_operands",
  [sym__float_operand] = "_float_operand",
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
  [aux_sym__integer_directive_repeat1] = "_integer_directive_repeat1",
  [aux_sym_integer_operands_repeat1] = "integer_operands_repeat1",
  [aux_sym_integer_operands_repeat2] = "integer_operands_repeat2",
  [aux_sym_float_operands_repeat1] = "float_operands_repeat1",
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
  [sym__integer_directive] = sym__integer_directive,
  [sym_integer_mnemonic] = sym_integer_mnemonic,
  [sym_integer_operands] = sym_integer_operands,
  [sym__float_directive] = sym__float_directive,
  [sym_float_mnemonic] = sym_float_mnemonic,
  [sym_float_operands] = sym_float_operands,
  [sym__float_operand] = sym__float_operand,
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
  [aux_sym__integer_directive_repeat1] = aux_sym__integer_directive_repeat1,
  [aux_sym_integer_operands_repeat1] = aux_sym_integer_operands_repeat1,
  [aux_sym_integer_operands_repeat2] = aux_sym_integer_operands_repeat2,
  [aux_sym_float_operands_repeat1] = aux_sym_float_operands_repeat1,
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
  [sym__integer_directive] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_operands] = {
    .visible = true,
    .named = true,
  },
  [sym__float_directive] = {
    .visible = false,
    .named = true,
  },
  [sym_float_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym_float_operands] = {
    .visible = true,
    .named = true,
  },
  [sym__float_operand] = {
    .visible = false,
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
  [aux_sym__integer_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_operands_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_operands_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_operands_repeat1] = {
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
  [15] = 15,
  [16] = 16,
  [17] = 9,
  [18] = 11,
  [19] = 19,
  [20] = 19,
  [21] = 16,
  [22] = 19,
  [23] = 16,
  [24] = 19,
  [25] = 16,
  [26] = 19,
  [27] = 16,
  [28] = 19,
  [29] = 16,
  [30] = 19,
  [31] = 16,
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
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 44,
  [59] = 40,
  [60] = 48,
  [61] = 49,
  [62] = 50,
  [63] = 51,
  [64] = 52,
  [65] = 53,
  [66] = 54,
  [67] = 55,
  [68] = 56,
  [69] = 57,
  [70] = 44,
  [71] = 48,
  [72] = 49,
  [73] = 50,
  [74] = 51,
  [75] = 52,
  [76] = 53,
  [77] = 54,
  [78] = 55,
  [79] = 56,
  [80] = 80,
  [81] = 44,
  [82] = 48,
  [83] = 49,
  [84] = 50,
  [85] = 51,
  [86] = 52,
  [87] = 53,
  [88] = 54,
  [89] = 55,
  [90] = 56,
  [91] = 57,
  [92] = 44,
  [93] = 42,
  [94] = 48,
  [95] = 48,
  [96] = 48,
  [97] = 48,
  [98] = 48,
  [99] = 42,
  [100] = 42,
  [101] = 42,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 48,
  [106] = 40,
  [107] = 49,
  [108] = 50,
  [109] = 40,
  [110] = 51,
  [111] = 52,
  [112] = 40,
  [113] = 53,
  [114] = 54,
  [115] = 55,
  [116] = 56,
  [117] = 57,
  [118] = 57,
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
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 154,
  [171] = 158,
  [172] = 147,
  [173] = 148,
  [174] = 153,
  [175] = 175,
  [176] = 156,
  [177] = 155,
  [178] = 158,
  [179] = 159,
  [180] = 160,
  [181] = 161,
  [182] = 162,
  [183] = 163,
  [184] = 164,
  [185] = 165,
  [186] = 166,
  [187] = 167,
  [188] = 168,
  [189] = 146,
  [190] = 147,
  [191] = 148,
  [192] = 154,
  [193] = 149,
  [194] = 150,
  [195] = 151,
  [196] = 152,
  [197] = 128,
  [198] = 129,
  [199] = 130,
  [200] = 131,
  [201] = 132,
  [202] = 133,
  [203] = 134,
  [204] = 135,
  [205] = 136,
  [206] = 137,
  [207] = 138,
  [208] = 139,
  [209] = 140,
  [210] = 141,
  [211] = 142,
  [212] = 127,
  [213] = 143,
  [214] = 144,
  [215] = 169,
  [216] = 216,
  [217] = 155,
  [218] = 149,
  [219] = 150,
  [220] = 151,
  [221] = 152,
  [222] = 128,
  [223] = 129,
  [224] = 130,
  [225] = 131,
  [226] = 132,
  [227] = 133,
  [228] = 134,
  [229] = 135,
  [230] = 136,
  [231] = 137,
  [232] = 138,
  [233] = 139,
  [234] = 140,
  [235] = 141,
  [236] = 142,
  [237] = 127,
  [238] = 143,
  [239] = 144,
  [240] = 169,
  [241] = 157,
  [242] = 159,
  [243] = 160,
  [244] = 161,
  [245] = 162,
  [246] = 163,
  [247] = 164,
  [248] = 165,
  [249] = 166,
  [250] = 167,
  [251] = 168,
  [252] = 153,
  [253] = 146,
  [254] = 154,
  [255] = 156,
  [256] = 158,
  [257] = 145,
  [258] = 153,
  [259] = 147,
  [260] = 148,
  [261] = 145,
  [262] = 156,
  [263] = 157,
  [264] = 264,
  [265] = 145,
  [266] = 266,
  [267] = 267,
  [268] = 139,
  [269] = 140,
  [270] = 141,
  [271] = 142,
  [272] = 127,
  [273] = 143,
  [274] = 144,
  [275] = 169,
  [276] = 276,
  [277] = 277,
  [278] = 156,
  [279] = 157,
  [280] = 158,
  [281] = 153,
  [282] = 159,
  [283] = 160,
  [284] = 161,
  [285] = 162,
  [286] = 163,
  [287] = 164,
  [288] = 165,
  [289] = 166,
  [290] = 167,
  [291] = 168,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 147,
  [296] = 148,
  [297] = 297,
  [298] = 138,
  [299] = 154,
  [300] = 155,
  [301] = 149,
  [302] = 150,
  [303] = 151,
  [304] = 152,
  [305] = 128,
  [306] = 129,
  [307] = 130,
  [308] = 131,
  [309] = 132,
  [310] = 133,
  [311] = 134,
  [312] = 135,
  [313] = 145,
  [314] = 136,
  [315] = 292,
  [316] = 277,
  [317] = 317,
  [318] = 292,
  [319] = 277,
  [320] = 292,
  [321] = 277,
  [322] = 292,
  [323] = 277,
  [324] = 292,
  [325] = 277,
  [326] = 292,
  [327] = 277,
  [328] = 137,
  [329] = 146,
  [330] = 330,
  [331] = 130,
  [332] = 145,
  [333] = 333,
  [334] = 155,
  [335] = 149,
  [336] = 150,
  [337] = 151,
  [338] = 152,
  [339] = 128,
  [340] = 129,
  [341] = 131,
  [342] = 132,
  [343] = 133,
  [344] = 134,
  [345] = 135,
  [346] = 136,
  [347] = 137,
  [348] = 138,
  [349] = 139,
  [350] = 140,
  [351] = 141,
  [352] = 142,
  [353] = 127,
  [354] = 143,
  [355] = 144,
  [356] = 169,
  [357] = 157,
  [358] = 159,
  [359] = 160,
  [360] = 161,
  [361] = 162,
  [362] = 163,
  [363] = 164,
  [364] = 165,
  [365] = 166,
  [366] = 167,
  [367] = 153,
  [368] = 146,
  [369] = 154,
  [370] = 156,
  [371] = 158,
  [372] = 147,
  [373] = 148,
  [374] = 156,
  [375] = 153,
  [376] = 147,
  [377] = 148,
  [378] = 168,
  [379] = 379,
  [380] = 380,
  [381] = 145,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 145,
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
  [411] = 410,
  [412] = 412,
  [413] = 413,
  [414] = 406,
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
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 145,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 405,
  [448] = 399,
  [449] = 391,
  [450] = 403,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 454,
  [457] = 454,
  [458] = 454,
  [459] = 459,
  [460] = 460,
  [461] = 454,
  [462] = 462,
  [463] = 401,
  [464] = 464,
  [465] = 462,
  [466] = 400,
  [467] = 467,
  [468] = 145,
  [469] = 469,
  [470] = 402,
  [471] = 467,
  [472] = 467,
  [473] = 462,
  [474] = 409,
  [475] = 467,
  [476] = 476,
  [477] = 462,
  [478] = 408,
  [479] = 479,
  [480] = 480,
  [481] = 410,
  [482] = 482,
  [483] = 415,
  [484] = 484,
  [485] = 484,
  [486] = 484,
  [487] = 487,
  [488] = 484,
  [489] = 484,
  [490] = 490,
  [491] = 491,
  [492] = 406,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 493,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 493,
  [501] = 501,
  [502] = 502,
  [503] = 493,
  [504] = 504,
  [505] = 505,
  [506] = 493,
  [507] = 493,
  [508] = 504,
  [509] = 494,
  [510] = 510,
  [511] = 494,
  [512] = 494,
  [513] = 494,
  [514] = 494,
  [515] = 494,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 406,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 410,
  [526] = 526,
  [527] = 517,
  [528] = 528,
  [529] = 529,
  [530] = 524,
  [531] = 522,
  [532] = 524,
  [533] = 533,
  [534] = 534,
  [535] = 517,
  [536] = 536,
  [537] = 522,
  [538] = 524,
  [539] = 522,
  [540] = 517,
  [541] = 522,
  [542] = 524,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 524,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 516,
  [553] = 517,
  [554] = 554,
  [555] = 526,
  [556] = 556,
  [557] = 549,
  [558] = 517,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 516,
  [567] = 567,
  [568] = 516,
  [569] = 522,
  [570] = 570,
  [571] = 571,
  [572] = 516,
  [573] = 524,
  [574] = 574,
  [575] = 575,
  [576] = 517,
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
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '!', 536,
        '"', 565,
        '#', 162,
        '$', 59,
        '&', 521,
        '\'', 561,
        '(', 206,
        ')', 219,
        '+', 527,
        ',', 222,
        '-', 531,
        '.', 668,
        '/', 530,
        '0', 576,
        '3', 577,
        ';', 132,
        '<', 524,
        '=', 516,
        '>', 525,
        '@', 96,
        'A', 656,
        'S', 645,
        'T', 658,
        '\\', 6,
        '^', 520,
        'a', 657,
        'f', 647,
        'g', 652,
        'r', 649,
        's', 646,
        't', 659,
        'z', 650,
        '|', 519,
        '~', 534,
        '%', 528,
        '*', 528,
        'C', 655,
        'c', 655,
        'K', 654,
        'k', 654,
        'V', 654,
        'v', 654,
        '1', 578,
        '2', 578,
        'F', 648,
        'R', 648,
        'X', 648,
        'x', 648,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(660);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 213,
        '\n', 141,
        '\r', 133,
        ' ', 207,
        '!', 535,
        '#', 162,
        '$', 63,
        '%', 69,
        '\'', 561,
        '(', 206,
        ',', 222,
        '-', 532,
        '.', 673,
        '/', 49,
        '0', 540,
        '3', 547,
        ';', 132,
        '=', 515,
        'A', 682,
        'S', 666,
        'T', 684,
        '\\', 16,
        'a', 683,
        'f', 669,
        'g', 677,
        'r', 671,
        's', 667,
        't', 685,
        'z', 675,
        '|', 74,
        '~', 534,
        'C', 681,
        'c', 681,
        'K', 680,
        'k', 680,
        'V', 680,
        'v', 680,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(1);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(548);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(670);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(686);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(216);
      if (lookahead == ' ') ADVANCE(210);
      if (lookahead == ')') ADVANCE(219);
      if (lookahead == ',') ADVANCE(222);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') SKIP(26);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(217);
      if (lookahead == ' ') ADVANCE(211);
      if (lookahead == ')') ADVANCE(219);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(644);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(3);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\t', 218,
        '\n', 143,
        '\r', 135,
        ' ', 212,
        '!', 535,
        '#', 162,
        '$', 63,
        '%', 69,
        '\'', 561,
        '(', 206,
        '-', 533,
        '.', 674,
        '/', 49,
        '0', 543,
        '3', 550,
        ';', 132,
        'A', 682,
        'S', 666,
        'T', 684,
        '\\', 18,
        'a', 683,
        'f', 669,
        'g', 677,
        'r', 671,
        's', 667,
        't', 685,
        'z', 675,
        '~', 534,
        'C', 681,
        'c', 681,
        'K', 680,
        'k', 680,
        'V', 680,
        'v', 680,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(4);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(551);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(670);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(686);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(41);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '\r') SKIP(5);
      if (lookahead == 'U') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(571);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(569);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '\r') ADVANCE(154);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\r') ADVANCE(155);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead == '\r') ADVANCE(156);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(42);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(42);
      if (lookahead == '\r') SKIP(10);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 145,
        '\r', 137,
        '!', 535,
        '"', 565,
        '#', 162,
        '$', 63,
        '%', 69,
        '\'', 561,
        '(', 206,
        ',', 222,
        '-', 532,
        '.', 673,
        '/', 49,
        '0', 540,
        '3', 547,
        ';', 132,
        '=', 515,
        'A', 682,
        'S', 666,
        'T', 684,
        '\\', 14,
        'a', 683,
        'f', 669,
        'g', 677,
        'r', 671,
        's', 667,
        't', 685,
        'z', 675,
        '|', 74,
        '~', 534,
        'C', 681,
        'c', 681,
        'K', 680,
        'k', 680,
        'V', 680,
        'v', 680,
        '1', 548,
        '2', 548,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(12);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(670);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(686);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(12);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '\r') SKIP(13);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(1);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(15);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(4);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '\r') SKIP(17);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(43);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(43);
      if (lookahead == '\r') SKIP(19);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(44);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(44);
      if (lookahead == '\r') SKIP(21);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(45);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(45);
      if (lookahead == '\r') SKIP(23);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(2);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\r') SKIP(25);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(46);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(46);
      if (lookahead == '\r') SKIP(27);
      if (lookahead == 'U') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(571);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(569);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(55);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(55);
      if (lookahead == '\r') SKIP(29);
      if (lookahead == 'U') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(571);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(569);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') SKIP(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(31);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '\r') SKIP(32);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(54);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(54);
      if (lookahead == '\r') SKIP(34);
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(38);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(38);
      if (lookahead == '\r') SKIP(36);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') SKIP(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\r') ADVANCE(157);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 40:
      if (lookahead == '\r') ADVANCE(192);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '!', 536,
        '"', 565,
        '#', 162,
        '$', 59,
        '&', 521,
        '\'', 561,
        '(', 206,
        ')', 219,
        '+', 527,
        ',', 222,
        '-', 531,
        '.', 668,
        '/', 530,
        '0', 576,
        '3', 577,
        ';', 132,
        '<', 524,
        '=', 516,
        '>', 525,
        '@', 96,
        'A', 656,
        'S', 645,
        'T', 658,
        '\\', 6,
        '^', 520,
        'a', 657,
        'f', 647,
        'g', 652,
        'r', 649,
        's', 646,
        't', 659,
        'z', 650,
        '|', 519,
        '~', 534,
        '%', 528,
        '*', 528,
        'C', 655,
        'c', 655,
        'K', 654,
        'k', 654,
        'V', 654,
        'v', 654,
        '1', 578,
        '2', 578,
        'F', 648,
        'R', 648,
        'X', 648,
        'x', 648,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(660);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        '!', 535,
        '"', 565,
        '#', 162,
        '$', 63,
        '%', 69,
        '\'', 561,
        '(', 206,
        '+', 97,
        ',', 510,
        '-', 533,
        '.', 674,
        '/', 49,
        '0', 543,
        '3', 550,
        ';', 132,
        '=', 515,
        '@', 96,
        'A', 682,
        'S', 666,
        'T', 684,
        '\\', 11,
        'a', 683,
        'f', 669,
        'g', 677,
        'r', 671,
        's', 667,
        't', 685,
        'z', 675,
        '|', 74,
        '~', 534,
        '\t', 42,
        ' ', 42,
        'C', 681,
        'c', 681,
        'K', 680,
        'k', 680,
        'V', 680,
        'v', 680,
        '1', 551,
        '2', 551,
        'F', 670,
        'R', 670,
        'X', 670,
        'x', 670,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(42);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(686);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        '!', 535,
        '"', 565,
        '#', 191,
        '$', 63,
        '%', 69,
        '\'', 561,
        '(', 206,
        ')', 219,
        ',', 222,
        '-', 532,
        '.', 673,
        '/', 49,
        '0', 540,
        '3', 547,
        'A', 682,
        'S', 666,
        'T', 684,
        '\\', 20,
        'a', 683,
        'f', 669,
        'g', 677,
        'r', 671,
        's', 667,
        't', 685,
        'z', 675,
        '~', 534,
        'C', 681,
        'c', 681,
        'K', 680,
        'k', 680,
        'V', 680,
        'v', 680,
        '1', 548,
        '2', 548,
        'F', 670,
        'R', 670,
        'X', 670,
        'x', 670,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(686);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        '!', 68,
        '#', 162,
        '&', 521,
        '(', 206,
        ',', 510,
        '/', 530,
        ';', 132,
        '<', 524,
        '=', 516,
        '>', 525,
      );
      if (lookahead == '\\') SKIP(22);
      if (lookahead == '^') ADVANCE(520);
      if (lookahead == '|') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(528);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(527);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        '!', 68,
        '&', 521,
        '(', 206,
        ')', 219,
        ',', 222,
        '/', 529,
        '<', 524,
        '=', 516,
        '>', 525,
      );
      if (lookahead == '\\') SKIP(24);
      if (lookahead == '^') ADVANCE(520);
      if (lookahead == '|') ADVANCE(519);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(528);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(527);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(565);
      if (lookahead == '/') ADVANCE(567);
      if (lookahead == '\\') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(568);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 47:
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == ',') ADVANCE(222);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(644);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(191);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(52);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == ':') ADVANCE(662);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') SKIP(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(153);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(54);
      END_STATE();
    case 55:
      if (lookahead == '/') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(562);
      END_STATE();
    case 56:
      if (lookahead == '1') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 57:
      if (lookahead == '1') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(572);
      END_STATE();
    case 58:
      ADVANCE_MAP(
        '2', 316,
        '4', 323,
        '8', 325,
        ':', 665,
        'L', 53,
        'a', 404,
        'b', 310,
        'c', 445,
        'd', 444,
        'f', 405,
        'h', 311,
        'i', 434,
        'l', 332,
        'm', 306,
        'p', 295,
        'q', 499,
        's', 383,
        'u', 410,
        'w', 447,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      END_STATE();
    case 59:
      ADVANCE_MAP(
        '3', 581,
        'A', 80,
        'S', 56,
        'T', 82,
        'a', 81,
        'f', 60,
        'g', 72,
        'r', 62,
        's', 57,
        't', 86,
        'z', 70,
        'C', 79,
        'c', 79,
        'K', 77,
        'k', 77,
        'V', 77,
        'v', 77,
        '1', 584,
        '2', 584,
        'F', 61,
        'R', 61,
        'X', 61,
        'x', 61,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 60:
      if (lookahead == '3') ADVANCE(581);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(584);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(572);
      END_STATE();
    case 61:
      if (lookahead == '3') ADVANCE(581);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 62:
      if (lookahead == '3') ADVANCE(581);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 63:
      ADVANCE_MAP(
        '3', 582,
        'A', 638,
        'S', 589,
        'T', 640,
        'a', 639,
        'f', 594,
        'g', 626,
        'r', 596,
        's', 590,
        't', 641,
        'z', 609,
        'C', 637,
        'c', 637,
        'K', 636,
        'k', 636,
        'V', 636,
        'v', 636,
        '1', 585,
        '2', 585,
        'F', 595,
        'R', 595,
        'X', 595,
        'x', 595,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(643);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(688);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '=') ADVANCE(522);
      END_STATE();
    case 69:
      ADVANCE_MAP(
        'a', 604,
        'c', 602,
        'd', 633,
        'g', 624,
        'h', 615,
        'l', 623,
        'p', 605,
        't', 619,
      );
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(572);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(572);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 74:
      if (lookahead == '|') ADVANCE(517);
      END_STATE();
    case 75:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      END_STATE();
    case 76:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      END_STATE();
    case 77:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(572);
      END_STATE();
    case 78:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(546);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(572);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(572);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(572);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(572);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(569);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(553);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 96:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 97:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 98:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 99:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '\t', 213,
        '\n', 141,
        '\r', 133,
        ' ', 207,
        '!', 535,
        '#', 162,
        '$', 63,
        '%', 69,
        '\'', 561,
        '(', 206,
        ',', 222,
        '-', 532,
        '.', 673,
        '/', 49,
        '0', 540,
        '3', 547,
        ';', 132,
        '=', 515,
        'A', 682,
        'S', 666,
        'T', 684,
        '\\', 16,
        'a', 683,
        'f', 669,
        'g', 677,
        'r', 671,
        's', 667,
        't', 685,
        'z', 675,
        '|', 74,
        '~', 534,
        'C', 681,
        'c', 681,
        'K', 680,
        'k', 680,
        'V', 680,
        'v', 680,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(99);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(548);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(670);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(686);
      END_STATE();
    case 100:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '\t', 214,
        '\n', 142,
        '\r', 134,
        ' ', 208,
        '!', 68,
        '#', 162,
        '&', 521,
        '(', 206,
        ',', 222,
        '/', 530,
        ';', 132,
        '<', 524,
        '=', 516,
        '>', 525,
      );
      if (lookahead == '\\') SKIP(108);
      if (lookahead == '^') ADVANCE(520);
      if (lookahead == '|') ADVANCE(519);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(528);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(527);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(100);
      END_STATE();
    case 101:
      if (eof) ADVANCE(131);
      if (lookahead == '\t') ADVANCE(215);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == ',') ADVANCE(222);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ';') ADVANCE(132);
      if (lookahead == '\\') SKIP(115);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(101);
      END_STATE();
    case 102:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '\t', 218,
        '\n', 143,
        '\r', 135,
        ' ', 212,
        '!', 535,
        '#', 162,
        '$', 63,
        '%', 69,
        '\'', 561,
        '(', 206,
        '-', 533,
        '.', 674,
        '/', 49,
        '0', 543,
        '3', 550,
        ';', 132,
        'A', 682,
        'S', 666,
        'T', 684,
        '\\', 18,
        'a', 683,
        'f', 669,
        'g', 677,
        'r', 671,
        's', 667,
        't', 685,
        'z', 675,
        '~', 534,
        'C', 681,
        'c', 681,
        'K', 680,
        'k', 680,
        'V', 680,
        'v', 680,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(102);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(551);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(670);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(686);
      END_STATE();
    case 103:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(105);
      END_STATE();
    case 104:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(105);
      if (lookahead == '\r') SKIP(103);
      END_STATE();
    case 105:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '\n', 144,
        '\r', 136,
        '#', 162,
        '%', 98,
        '.', 58,
        '/', 49,
        '0', 65,
        ';', 132,
      );
      if (lookahead == '\\') SKIP(104);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(105);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 106:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '\n', 145,
        '\r', 137,
        '!', 535,
        '"', 565,
        '#', 162,
        '$', 63,
        '%', 69,
        '\'', 561,
        '(', 206,
        ',', 222,
        '-', 532,
        '.', 673,
        '/', 49,
        '0', 540,
        '3', 547,
        ';', 132,
        '=', 515,
        'A', 682,
        'S', 666,
        'T', 684,
        '\\', 14,
        'a', 683,
        'f', 669,
        'g', 677,
        'r', 671,
        's', 667,
        't', 685,
        'z', 675,
        '|', 74,
        '~', 534,
        'C', 681,
        'c', 681,
        'K', 680,
        'k', 680,
        'V', 680,
        'v', 680,
        '1', 548,
        '2', 548,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(106);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(670);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(686);
      END_STATE();
    case 107:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(100);
      END_STATE();
    case 108:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(100);
      if (lookahead == '\r') SKIP(107);
      END_STATE();
    case 109:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(111);
      END_STATE();
    case 110:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(111);
      if (lookahead == '\r') SKIP(109);
      END_STATE();
    case 111:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '\n', 146,
        '\r', 138,
        '!', 68,
        '#', 162,
        '&', 521,
        '(', 206,
        ',', 222,
        '/', 530,
        ';', 132,
        '<', 524,
        '=', 516,
        '>', 525,
      );
      if (lookahead == '\\') SKIP(110);
      if (lookahead == '^') ADVANCE(520);
      if (lookahead == '|') ADVANCE(519);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(528);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(527);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(111);
      END_STATE();
    case 112:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(129);
      END_STATE();
    case 113:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(129);
      if (lookahead == '\r') SKIP(112);
      END_STATE();
    case 114:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(101);
      END_STATE();
    case 115:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(101);
      if (lookahead == '\r') SKIP(114);
      END_STATE();
    case 116:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(118);
      END_STATE();
    case 117:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(118);
      if (lookahead == '\r') SKIP(116);
      END_STATE();
    case 118:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') ADVANCE(147);
      if (lookahead == '\r') ADVANCE(139);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ';') ADVANCE(132);
      if (lookahead == '\\') SKIP(117);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(118);
      END_STATE();
    case 119:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(130);
      END_STATE();
    case 120:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(130);
      if (lookahead == '\r') SKIP(119);
      END_STATE();
    case 121:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(123);
      END_STATE();
    case 122:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(123);
      if (lookahead == '\r') SKIP(121);
      END_STATE();
    case 123:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '\r') ADVANCE(140);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\\') SKIP(122);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(123);
      END_STATE();
    case 124:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(126);
      END_STATE();
    case 125:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(126);
      if (lookahead == '\r') SKIP(124);
      END_STATE();
    case 126:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\\') SKIP(125);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(126);
      END_STATE();
    case 127:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '!', 535,
        '"', 565,
        '#', 162,
        '$', 63,
        '%', 69,
        '\'', 561,
        '(', 206,
        '+', 97,
        ',', 510,
        '-', 533,
        '.', 674,
        '/', 49,
        '0', 543,
        '3', 550,
        ';', 132,
        '=', 515,
        '@', 96,
        'A', 682,
        'S', 666,
        'T', 684,
        '\\', 11,
        'a', 683,
        'f', 669,
        'g', 677,
        'r', 671,
        's', 667,
        't', 685,
        'z', 675,
        '|', 74,
        '~', 534,
        '\t', 42,
        ' ', 42,
        'C', 681,
        'c', 681,
        'K', 680,
        'k', 680,
        'V', 680,
        'v', 680,
        '1', 551,
        '2', 551,
        'F', 670,
        'R', 670,
        'X', 670,
        'x', 670,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(127);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(686);
      END_STATE();
    case 128:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '!', 535,
        '"', 565,
        '#', 191,
        '$', 63,
        '%', 69,
        '\'', 561,
        '(', 206,
        ')', 219,
        ',', 222,
        '-', 532,
        '.', 673,
        '/', 49,
        '0', 540,
        '3', 547,
        'A', 682,
        'S', 666,
        'T', 684,
        '\\', 20,
        'a', 683,
        'f', 669,
        'g', 677,
        'r', 671,
        's', 667,
        't', 685,
        'z', 675,
        '~', 534,
        'C', 681,
        'c', 681,
        'K', 680,
        'k', 680,
        'V', 680,
        'v', 680,
        '1', 548,
        '2', 548,
        'F', 670,
        'R', 670,
        'X', 670,
        'x', 670,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(128);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(686);
      END_STATE();
    case 129:
      if (eof) ADVANCE(131);
      ADVANCE_MAP(
        '!', 68,
        '#', 162,
        '&', 521,
        '(', 206,
        ',', 510,
        '/', 530,
        ';', 132,
        '<', 524,
        '=', 516,
        '>', 525,
      );
      if (lookahead == '\\') SKIP(113);
      if (lookahead == '^') ADVANCE(520);
      if (lookahead == '|') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(528);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(527);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 130:
      if (eof) ADVANCE(131);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ';') ADVANCE(132);
      if (lookahead == '\\') SKIP(120);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(152);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(213);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(16);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(214);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == ' ') ADVANCE(208);
      if (lookahead == '#') ADVANCE(162);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(218);
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(212);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(18);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(136);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '0') ADVANCE(65);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '\r') ADVANCE(137);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(14);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(146);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == '#') ADVANCE(162);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(147);
      if (lookahead == '\r') ADVANCE(139);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '\r') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(213);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(16);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(214);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == ' ') ADVANCE(208);
      if (lookahead == '#') ADVANCE(162);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(218);
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(212);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(18);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(136);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '0') ADVANCE(65);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '\r') ADVANCE(137);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(14);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(146);
      if (lookahead == '\r') ADVANCE(138);
      if (lookahead == '#') ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(147);
      if (lookahead == '\r') ADVANCE(139);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(148);
      if (lookahead == '\r') ADVANCE(140);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') ADVANCE(31);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(147);
      if (lookahead == '\r') ADVANCE(139);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_line_comment);
      ADVANCE_MAP(
        '\\', 40,
        'd', 166,
        'e', 178,
        'i', 170,
        'l', 174,
        'p', 187,
        'u', 182,
        'w', 160,
        '\t', 162,
        ' ', 162,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'g') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'g') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_preprocessor);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__wrong_preprocessor);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__wrong_preprocessor);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__wrong_preprocessor);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__wrong_preprocessor);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(213);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(16);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(214);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == ' ') ADVANCE(208);
      if (lookahead == '#') ADVANCE(162);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(215);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead == '#') ADVANCE(162);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(216);
      if (lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(217);
      if (lookahead == ' ') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(644);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(218);
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(212);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(18);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(213);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(16);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(214);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == ' ') ADVANCE(208);
      if (lookahead == '#') ADVANCE(162);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(215);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead == '#') ADVANCE(162);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(216);
      if (lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(217);
      if (lookahead == ' ') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(644);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(218);
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead == ' ') ADVANCE(212);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(18);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__string_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'z') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(508);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'z') ADVANCE(281);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(509);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'z') ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(508);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'z') ADVANCE(285);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(509);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(290);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(292);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(293);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(294);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(296);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(312);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(297);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(298);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(299);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(313);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(257);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(259);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(258);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(260);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'y') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'w') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'y') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'w') ADVANCE(455);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'b') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'b') ADVANCE(286);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'b') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'b') ADVANCE(288);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'b') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'b') ADVANCE(287);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'b') ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'b') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'b') ADVANCE(504);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'b') ADVANCE(505);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'b') ADVANCE(506);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'b') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'c') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'c') ADVANCE(359);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'c') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'c') ADVANCE(450);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(500);
      if (lookahead == 'w') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(263);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(501);
      if (lookahead == 'w') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'g') ADVANCE(243);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'g') ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'g') ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'g') ADVANCE(283);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'g') ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'g') ADVANCE(425);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'g') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'g') ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'g') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'g') ADVANCE(431);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'g') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'g') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == 'k') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'h') ADVANCE(449);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead == 'k') ADVANCE(390);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'p') ADVANCE(307);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(374);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'z') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(508);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == 'z') ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(509);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 's') ADVANCE(326);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(391);
      if (lookahead == 's') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'm') ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'm') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'm') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'm') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'm') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(496);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead == 'w') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == 'w') ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'p') ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'p') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'p') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(321);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(309);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'w') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'w') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'y') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'y') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'y') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'y') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'y') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'y') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__control_operand_separator_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_assignment_operator);
      if (lookahead == '=') ADVANCE(522);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_logical_or_operator);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_logical_and_operator);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_bitwise_or_operator);
      if (lookahead == '|') ADVANCE(517);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_bitwise_xor_operator);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_bitwise_and_operator);
      if (lookahead == '&') ADVANCE(518);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '<') ADVANCE(526);
      if (lookahead == '=') ADVANCE(523);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(523);
      if (lookahead == '>') ADVANCE(526);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_shift_operator);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(191);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '0') ADVANCE(541);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '0') ADVANCE(544);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(552);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_bitwise_not_operator);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_logical_not_operator);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_logical_not_operator);
      if (lookahead == '=') ADVANCE(522);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(614);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(603);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 557,
        'b', 690,
        'f', 689,
        'E', 75,
        'e', 75,
        'X', 88,
        'x', 88,
        '8', 549,
        '9', 549,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(542);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(557);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(88);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(542);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(557);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == 'b') ADVANCE(690);
      if (lookahead == 'f') ADVANCE(689);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(88);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(545);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(88);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(545);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(557);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(689);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(549);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(557);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(557);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(689);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(552);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(563);
      if (lookahead == '\\') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(562);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(567);
      if (lookahead == '\\') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(566);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(569);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(570);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(575);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(689);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(689);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(580);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(572);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(598);
      if (lookahead == '3') ADVANCE(593);
      if (lookahead == 'r') ADVANCE(611);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(598);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '2') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(582);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(585);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(582);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(582);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '4') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(597);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(614);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(613);
      if (lookahead == 'g') ADVANCE(607);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(620);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead == 'h') ADVANCE(615);
      if (lookahead == 'l') ADVANCE(623);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'b') ADVANCE(631);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'c') ADVANCE(591);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(606);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(628);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(618);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'g') ADVANCE(625);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'h') ADVANCE(615);
      if (lookahead == 'l') ADVANCE(623);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(632);
      if (lookahead == 'p') ADVANCE(630);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(617);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(538);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead == 'p') ADVANCE(629);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(635);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(629);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(622);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(610);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(601);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(627);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(537);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('4' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_macro_parameter);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == '1') ADVANCE(573);
      if (lookahead == ':') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == '1') ADVANCE(573);
      if (lookahead == ':') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(575);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == '3') ADVANCE(573);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(574);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(575);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == '3') ADVANCE(573);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == '3') ADVANCE(573);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(575);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'p') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(651);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(575);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(575);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(575);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(575);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(661);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(672);
      if (lookahead == ':') ADVANCE(662);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 314,
        '4', 322,
        '8', 324,
        ':', 665,
        'L', 663,
        'a', 398,
        'b', 302,
        'c', 438,
        'd', 440,
        'f', 403,
        'h', 305,
        'i', 427,
        'l', 333,
        'm', 301,
        'p', 291,
        'q', 497,
        's', 382,
        'u', 412,
        'w', 441,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(672);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(583);
      if (lookahead == 'a') ADVANCE(682);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(586);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(583);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(583);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(664);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'p') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(587);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(546);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 105, .external_lex_state = 2},
  [2] = {.lex_state = 105, .external_lex_state = 2},
  [3] = {.lex_state = 105, .external_lex_state = 2},
  [4] = {.lex_state = 105, .external_lex_state = 2},
  [5] = {.lex_state = 127, .external_lex_state = 3},
  [6] = {.lex_state = 105, .external_lex_state = 2},
  [7] = {.lex_state = 106, .external_lex_state = 2},
  [8] = {.lex_state = 99, .external_lex_state = 4},
  [9] = {.lex_state = 106, .external_lex_state = 2},
  [10] = {.lex_state = 102, .external_lex_state = 4},
  [11] = {.lex_state = 106, .external_lex_state = 2},
  [12] = {.lex_state = 127, .external_lex_state = 2},
  [13] = {.lex_state = 128, .external_lex_state = 5},
  [14] = {.lex_state = 128, .external_lex_state = 2},
  [15] = {.lex_state = 128, .external_lex_state = 2},
  [16] = {.lex_state = 128, .external_lex_state = 2},
  [17] = {.lex_state = 128, .external_lex_state = 2},
  [18] = {.lex_state = 128, .external_lex_state = 2},
  [19] = {.lex_state = 128, .external_lex_state = 2},
  [20] = {.lex_state = 128, .external_lex_state = 2},
  [21] = {.lex_state = 128, .external_lex_state = 2},
  [22] = {.lex_state = 128, .external_lex_state = 2},
  [23] = {.lex_state = 128, .external_lex_state = 2},
  [24] = {.lex_state = 128, .external_lex_state = 2},
  [25] = {.lex_state = 128, .external_lex_state = 2},
  [26] = {.lex_state = 128, .external_lex_state = 2},
  [27] = {.lex_state = 128, .external_lex_state = 2},
  [28] = {.lex_state = 128, .external_lex_state = 2},
  [29] = {.lex_state = 128, .external_lex_state = 2},
  [30] = {.lex_state = 128, .external_lex_state = 2},
  [31] = {.lex_state = 128, .external_lex_state = 2},
  [32] = {.lex_state = 128, .external_lex_state = 2},
  [33] = {.lex_state = 128, .external_lex_state = 2},
  [34] = {.lex_state = 128, .external_lex_state = 2},
  [35] = {.lex_state = 127, .external_lex_state = 2},
  [36] = {.lex_state = 128, .external_lex_state = 2},
  [37] = {.lex_state = 128, .external_lex_state = 2},
  [38] = {.lex_state = 128, .external_lex_state = 2},
  [39] = {.lex_state = 127, .external_lex_state = 2},
  [40] = {.lex_state = 127, .external_lex_state = 2},
  [41] = {.lex_state = 105, .external_lex_state = 2},
  [42] = {.lex_state = 127, .external_lex_state = 2},
  [43] = {.lex_state = 105, .external_lex_state = 2},
  [44] = {.lex_state = 127, .external_lex_state = 2},
  [45] = {.lex_state = 127, .external_lex_state = 2},
  [46] = {.lex_state = 127, .external_lex_state = 2},
  [47] = {.lex_state = 105, .external_lex_state = 2},
  [48] = {.lex_state = 127, .external_lex_state = 2},
  [49] = {.lex_state = 127, .external_lex_state = 2},
  [50] = {.lex_state = 127, .external_lex_state = 2},
  [51] = {.lex_state = 127, .external_lex_state = 2},
  [52] = {.lex_state = 127, .external_lex_state = 2},
  [53] = {.lex_state = 127, .external_lex_state = 2},
  [54] = {.lex_state = 127, .external_lex_state = 2},
  [55] = {.lex_state = 127, .external_lex_state = 2},
  [56] = {.lex_state = 127, .external_lex_state = 2},
  [57] = {.lex_state = 127, .external_lex_state = 2},
  [58] = {.lex_state = 127, .external_lex_state = 2},
  [59] = {.lex_state = 127, .external_lex_state = 2},
  [60] = {.lex_state = 127, .external_lex_state = 2},
  [61] = {.lex_state = 127, .external_lex_state = 2},
  [62] = {.lex_state = 127, .external_lex_state = 2},
  [63] = {.lex_state = 127, .external_lex_state = 2},
  [64] = {.lex_state = 127, .external_lex_state = 2},
  [65] = {.lex_state = 127, .external_lex_state = 2},
  [66] = {.lex_state = 127, .external_lex_state = 2},
  [67] = {.lex_state = 127, .external_lex_state = 2},
  [68] = {.lex_state = 127, .external_lex_state = 2},
  [69] = {.lex_state = 127, .external_lex_state = 2},
  [70] = {.lex_state = 127, .external_lex_state = 2},
  [71] = {.lex_state = 127, .external_lex_state = 2},
  [72] = {.lex_state = 127, .external_lex_state = 2},
  [73] = {.lex_state = 127, .external_lex_state = 2},
  [74] = {.lex_state = 127, .external_lex_state = 2},
  [75] = {.lex_state = 127, .external_lex_state = 2},
  [76] = {.lex_state = 127, .external_lex_state = 2},
  [77] = {.lex_state = 127, .external_lex_state = 2},
  [78] = {.lex_state = 127, .external_lex_state = 2},
  [79] = {.lex_state = 127, .external_lex_state = 2},
  [80] = {.lex_state = 127, .external_lex_state = 2},
  [81] = {.lex_state = 127, .external_lex_state = 2},
  [82] = {.lex_state = 127, .external_lex_state = 2},
  [83] = {.lex_state = 127, .external_lex_state = 2},
  [84] = {.lex_state = 127, .external_lex_state = 2},
  [85] = {.lex_state = 127, .external_lex_state = 2},
  [86] = {.lex_state = 127, .external_lex_state = 2},
  [87] = {.lex_state = 127, .external_lex_state = 2},
  [88] = {.lex_state = 127, .external_lex_state = 2},
  [89] = {.lex_state = 127, .external_lex_state = 2},
  [90] = {.lex_state = 127, .external_lex_state = 2},
  [91] = {.lex_state = 127, .external_lex_state = 2},
  [92] = {.lex_state = 127, .external_lex_state = 2},
  [93] = {.lex_state = 127, .external_lex_state = 2},
  [94] = {.lex_state = 127, .external_lex_state = 2},
  [95] = {.lex_state = 127, .external_lex_state = 2},
  [96] = {.lex_state = 127, .external_lex_state = 2},
  [97] = {.lex_state = 127, .external_lex_state = 2},
  [98] = {.lex_state = 127, .external_lex_state = 2},
  [99] = {.lex_state = 127, .external_lex_state = 2},
  [100] = {.lex_state = 127, .external_lex_state = 2},
  [101] = {.lex_state = 127, .external_lex_state = 2},
  [102] = {.lex_state = 105, .external_lex_state = 2},
  [103] = {.lex_state = 105, .external_lex_state = 2},
  [104] = {.lex_state = 105, .external_lex_state = 2},
  [105] = {.lex_state = 127, .external_lex_state = 2},
  [106] = {.lex_state = 127, .external_lex_state = 2},
  [107] = {.lex_state = 127, .external_lex_state = 2},
  [108] = {.lex_state = 127, .external_lex_state = 2},
  [109] = {.lex_state = 127, .external_lex_state = 2},
  [110] = {.lex_state = 127, .external_lex_state = 2},
  [111] = {.lex_state = 127, .external_lex_state = 2},
  [112] = {.lex_state = 127, .external_lex_state = 2},
  [113] = {.lex_state = 127, .external_lex_state = 2},
  [114] = {.lex_state = 127, .external_lex_state = 2},
  [115] = {.lex_state = 127, .external_lex_state = 2},
  [116] = {.lex_state = 127, .external_lex_state = 2},
  [117] = {.lex_state = 127, .external_lex_state = 2},
  [118] = {.lex_state = 127, .external_lex_state = 2},
  [119] = {.lex_state = 105, .external_lex_state = 2},
  [120] = {.lex_state = 105, .external_lex_state = 2},
  [121] = {.lex_state = 105, .external_lex_state = 2},
  [122] = {.lex_state = 105, .external_lex_state = 2},
  [123] = {.lex_state = 105, .external_lex_state = 2},
  [124] = {.lex_state = 105, .external_lex_state = 2},
  [125] = {.lex_state = 105, .external_lex_state = 2},
  [126] = {.lex_state = 105, .external_lex_state = 2},
  [127] = {.lex_state = 100, .external_lex_state = 1},
  [128] = {.lex_state = 100, .external_lex_state = 1},
  [129] = {.lex_state = 100, .external_lex_state = 1},
  [130] = {.lex_state = 100, .external_lex_state = 1},
  [131] = {.lex_state = 100, .external_lex_state = 1},
  [132] = {.lex_state = 100, .external_lex_state = 1},
  [133] = {.lex_state = 100, .external_lex_state = 1},
  [134] = {.lex_state = 100, .external_lex_state = 1},
  [135] = {.lex_state = 100, .external_lex_state = 1},
  [136] = {.lex_state = 100, .external_lex_state = 1},
  [137] = {.lex_state = 100, .external_lex_state = 1},
  [138] = {.lex_state = 100, .external_lex_state = 1},
  [139] = {.lex_state = 100, .external_lex_state = 1},
  [140] = {.lex_state = 100, .external_lex_state = 1},
  [141] = {.lex_state = 100, .external_lex_state = 1},
  [142] = {.lex_state = 100, .external_lex_state = 1},
  [143] = {.lex_state = 100, .external_lex_state = 1},
  [144] = {.lex_state = 100, .external_lex_state = 1},
  [145] = {.lex_state = 100, .external_lex_state = 1},
  [146] = {.lex_state = 100, .external_lex_state = 1},
  [147] = {.lex_state = 100, .external_lex_state = 1},
  [148] = {.lex_state = 100, .external_lex_state = 1},
  [149] = {.lex_state = 100, .external_lex_state = 1},
  [150] = {.lex_state = 100, .external_lex_state = 1},
  [151] = {.lex_state = 100, .external_lex_state = 1},
  [152] = {.lex_state = 100, .external_lex_state = 1},
  [153] = {.lex_state = 100, .external_lex_state = 1},
  [154] = {.lex_state = 100, .external_lex_state = 1},
  [155] = {.lex_state = 100, .external_lex_state = 1},
  [156] = {.lex_state = 100, .external_lex_state = 1},
  [157] = {.lex_state = 100, .external_lex_state = 1},
  [158] = {.lex_state = 100, .external_lex_state = 1},
  [159] = {.lex_state = 100, .external_lex_state = 1},
  [160] = {.lex_state = 100, .external_lex_state = 1},
  [161] = {.lex_state = 100, .external_lex_state = 1},
  [162] = {.lex_state = 100, .external_lex_state = 1},
  [163] = {.lex_state = 100, .external_lex_state = 1},
  [164] = {.lex_state = 100, .external_lex_state = 1},
  [165] = {.lex_state = 100, .external_lex_state = 1},
  [166] = {.lex_state = 100, .external_lex_state = 1},
  [167] = {.lex_state = 100, .external_lex_state = 1},
  [168] = {.lex_state = 100, .external_lex_state = 1},
  [169] = {.lex_state = 100, .external_lex_state = 1},
  [170] = {.lex_state = 100, .external_lex_state = 4},
  [171] = {.lex_state = 100, .external_lex_state = 4},
  [172] = {.lex_state = 100, .external_lex_state = 4},
  [173] = {.lex_state = 100, .external_lex_state = 4},
  [174] = {.lex_state = 100, .external_lex_state = 4},
  [175] = {.lex_state = 100, .external_lex_state = 4},
  [176] = {.lex_state = 100, .external_lex_state = 4},
  [177] = {.lex_state = 111, .external_lex_state = 6},
  [178] = {.lex_state = 111, .external_lex_state = 6},
  [179] = {.lex_state = 111, .external_lex_state = 6},
  [180] = {.lex_state = 111, .external_lex_state = 6},
  [181] = {.lex_state = 111, .external_lex_state = 6},
  [182] = {.lex_state = 111, .external_lex_state = 6},
  [183] = {.lex_state = 111, .external_lex_state = 6},
  [184] = {.lex_state = 111, .external_lex_state = 6},
  [185] = {.lex_state = 111, .external_lex_state = 6},
  [186] = {.lex_state = 111, .external_lex_state = 6},
  [187] = {.lex_state = 111, .external_lex_state = 6},
  [188] = {.lex_state = 111, .external_lex_state = 6},
  [189] = {.lex_state = 111, .external_lex_state = 6},
  [190] = {.lex_state = 111, .external_lex_state = 6},
  [191] = {.lex_state = 111, .external_lex_state = 6},
  [192] = {.lex_state = 111, .external_lex_state = 6},
  [193] = {.lex_state = 111, .external_lex_state = 6},
  [194] = {.lex_state = 111, .external_lex_state = 6},
  [195] = {.lex_state = 111, .external_lex_state = 6},
  [196] = {.lex_state = 111, .external_lex_state = 6},
  [197] = {.lex_state = 111, .external_lex_state = 6},
  [198] = {.lex_state = 111, .external_lex_state = 6},
  [199] = {.lex_state = 111, .external_lex_state = 6},
  [200] = {.lex_state = 111, .external_lex_state = 6},
  [201] = {.lex_state = 111, .external_lex_state = 6},
  [202] = {.lex_state = 111, .external_lex_state = 6},
  [203] = {.lex_state = 111, .external_lex_state = 6},
  [204] = {.lex_state = 111, .external_lex_state = 6},
  [205] = {.lex_state = 111, .external_lex_state = 6},
  [206] = {.lex_state = 111, .external_lex_state = 6},
  [207] = {.lex_state = 111, .external_lex_state = 6},
  [208] = {.lex_state = 111, .external_lex_state = 6},
  [209] = {.lex_state = 111, .external_lex_state = 6},
  [210] = {.lex_state = 111, .external_lex_state = 6},
  [211] = {.lex_state = 111, .external_lex_state = 6},
  [212] = {.lex_state = 111, .external_lex_state = 6},
  [213] = {.lex_state = 111, .external_lex_state = 6},
  [214] = {.lex_state = 111, .external_lex_state = 6},
  [215] = {.lex_state = 111, .external_lex_state = 6},
  [216] = {.lex_state = 111, .external_lex_state = 6},
  [217] = {.lex_state = 129, .external_lex_state = 1},
  [218] = {.lex_state = 129, .external_lex_state = 1},
  [219] = {.lex_state = 129, .external_lex_state = 1},
  [220] = {.lex_state = 129, .external_lex_state = 1},
  [221] = {.lex_state = 129, .external_lex_state = 1},
  [222] = {.lex_state = 129, .external_lex_state = 1},
  [223] = {.lex_state = 129, .external_lex_state = 1},
  [224] = {.lex_state = 129, .external_lex_state = 1},
  [225] = {.lex_state = 129, .external_lex_state = 1},
  [226] = {.lex_state = 129, .external_lex_state = 1},
  [227] = {.lex_state = 129, .external_lex_state = 1},
  [228] = {.lex_state = 129, .external_lex_state = 1},
  [229] = {.lex_state = 129, .external_lex_state = 1},
  [230] = {.lex_state = 129, .external_lex_state = 1},
  [231] = {.lex_state = 129, .external_lex_state = 1},
  [232] = {.lex_state = 129, .external_lex_state = 1},
  [233] = {.lex_state = 129, .external_lex_state = 1},
  [234] = {.lex_state = 129, .external_lex_state = 1},
  [235] = {.lex_state = 129, .external_lex_state = 1},
  [236] = {.lex_state = 129, .external_lex_state = 1},
  [237] = {.lex_state = 129, .external_lex_state = 1},
  [238] = {.lex_state = 129, .external_lex_state = 1},
  [239] = {.lex_state = 129, .external_lex_state = 1},
  [240] = {.lex_state = 129, .external_lex_state = 1},
  [241] = {.lex_state = 129, .external_lex_state = 1},
  [242] = {.lex_state = 129, .external_lex_state = 1},
  [243] = {.lex_state = 129, .external_lex_state = 1},
  [244] = {.lex_state = 129, .external_lex_state = 1},
  [245] = {.lex_state = 129, .external_lex_state = 1},
  [246] = {.lex_state = 129, .external_lex_state = 1},
  [247] = {.lex_state = 129, .external_lex_state = 1},
  [248] = {.lex_state = 129, .external_lex_state = 1},
  [249] = {.lex_state = 129, .external_lex_state = 1},
  [250] = {.lex_state = 129, .external_lex_state = 1},
  [251] = {.lex_state = 129, .external_lex_state = 1},
  [252] = {.lex_state = 129, .external_lex_state = 1},
  [253] = {.lex_state = 129, .external_lex_state = 1},
  [254] = {.lex_state = 129, .external_lex_state = 1},
  [255] = {.lex_state = 129, .external_lex_state = 1},
  [256] = {.lex_state = 129, .external_lex_state = 1},
  [257] = {.lex_state = 111, .external_lex_state = 6},
  [258] = {.lex_state = 111, .external_lex_state = 6},
  [259] = {.lex_state = 129, .external_lex_state = 1},
  [260] = {.lex_state = 129, .external_lex_state = 1},
  [261] = {.lex_state = 129, .external_lex_state = 1},
  [262] = {.lex_state = 111, .external_lex_state = 6},
  [263] = {.lex_state = 111, .external_lex_state = 6},
  [264] = {.lex_state = 99, .external_lex_state = 1},
  [265] = {.lex_state = 99, .external_lex_state = 1},
  [266] = {.lex_state = 99, .external_lex_state = 1},
  [267] = {.lex_state = 99, .external_lex_state = 1},
  [268] = {.lex_state = 45, .external_lex_state = 6},
  [269] = {.lex_state = 45, .external_lex_state = 6},
  [270] = {.lex_state = 45, .external_lex_state = 6},
  [271] = {.lex_state = 45, .external_lex_state = 6},
  [272] = {.lex_state = 45, .external_lex_state = 6},
  [273] = {.lex_state = 45, .external_lex_state = 6},
  [274] = {.lex_state = 45, .external_lex_state = 6},
  [275] = {.lex_state = 45, .external_lex_state = 6},
  [276] = {.lex_state = 99, .external_lex_state = 1},
  [277] = {.lex_state = 45, .external_lex_state = 6},
  [278] = {.lex_state = 45, .external_lex_state = 6},
  [279] = {.lex_state = 45, .external_lex_state = 6},
  [280] = {.lex_state = 45, .external_lex_state = 6},
  [281] = {.lex_state = 45, .external_lex_state = 6},
  [282] = {.lex_state = 45, .external_lex_state = 6},
  [283] = {.lex_state = 45, .external_lex_state = 6},
  [284] = {.lex_state = 45, .external_lex_state = 6},
  [285] = {.lex_state = 45, .external_lex_state = 6},
  [286] = {.lex_state = 45, .external_lex_state = 6},
  [287] = {.lex_state = 45, .external_lex_state = 6},
  [288] = {.lex_state = 45, .external_lex_state = 6},
  [289] = {.lex_state = 45, .external_lex_state = 6},
  [290] = {.lex_state = 45, .external_lex_state = 6},
  [291] = {.lex_state = 45, .external_lex_state = 6},
  [292] = {.lex_state = 45, .external_lex_state = 6},
  [293] = {.lex_state = 99, .external_lex_state = 1},
  [294] = {.lex_state = 99, .external_lex_state = 4},
  [295] = {.lex_state = 45, .external_lex_state = 6},
  [296] = {.lex_state = 45, .external_lex_state = 6},
  [297] = {.lex_state = 99, .external_lex_state = 1},
  [298] = {.lex_state = 45, .external_lex_state = 6},
  [299] = {.lex_state = 45, .external_lex_state = 6},
  [300] = {.lex_state = 45, .external_lex_state = 6},
  [301] = {.lex_state = 45, .external_lex_state = 6},
  [302] = {.lex_state = 45, .external_lex_state = 6},
  [303] = {.lex_state = 45, .external_lex_state = 6},
  [304] = {.lex_state = 45, .external_lex_state = 6},
  [305] = {.lex_state = 45, .external_lex_state = 6},
  [306] = {.lex_state = 45, .external_lex_state = 6},
  [307] = {.lex_state = 45, .external_lex_state = 6},
  [308] = {.lex_state = 45, .external_lex_state = 6},
  [309] = {.lex_state = 45, .external_lex_state = 6},
  [310] = {.lex_state = 45, .external_lex_state = 6},
  [311] = {.lex_state = 45, .external_lex_state = 6},
  [312] = {.lex_state = 45, .external_lex_state = 6},
  [313] = {.lex_state = 45, .external_lex_state = 6},
  [314] = {.lex_state = 45, .external_lex_state = 6},
  [315] = {.lex_state = 45, .external_lex_state = 6},
  [316] = {.lex_state = 45, .external_lex_state = 6},
  [317] = {.lex_state = 99, .external_lex_state = 4},
  [318] = {.lex_state = 45, .external_lex_state = 6},
  [319] = {.lex_state = 45, .external_lex_state = 6},
  [320] = {.lex_state = 45, .external_lex_state = 6},
  [321] = {.lex_state = 45, .external_lex_state = 6},
  [322] = {.lex_state = 45, .external_lex_state = 6},
  [323] = {.lex_state = 45, .external_lex_state = 6},
  [324] = {.lex_state = 45, .external_lex_state = 6},
  [325] = {.lex_state = 45, .external_lex_state = 6},
  [326] = {.lex_state = 45, .external_lex_state = 6},
  [327] = {.lex_state = 45, .external_lex_state = 6},
  [328] = {.lex_state = 45, .external_lex_state = 6},
  [329] = {.lex_state = 45, .external_lex_state = 6},
  [330] = {.lex_state = 99, .external_lex_state = 4},
  [331] = {.lex_state = 45, .external_lex_state = 2},
  [332] = {.lex_state = 45, .external_lex_state = 2},
  [333] = {.lex_state = 275, .external_lex_state = 2},
  [334] = {.lex_state = 45, .external_lex_state = 2},
  [335] = {.lex_state = 45, .external_lex_state = 2},
  [336] = {.lex_state = 45, .external_lex_state = 2},
  [337] = {.lex_state = 45, .external_lex_state = 2},
  [338] = {.lex_state = 45, .external_lex_state = 2},
  [339] = {.lex_state = 45, .external_lex_state = 2},
  [340] = {.lex_state = 45, .external_lex_state = 2},
  [341] = {.lex_state = 45, .external_lex_state = 2},
  [342] = {.lex_state = 45, .external_lex_state = 2},
  [343] = {.lex_state = 45, .external_lex_state = 2},
  [344] = {.lex_state = 45, .external_lex_state = 2},
  [345] = {.lex_state = 45, .external_lex_state = 2},
  [346] = {.lex_state = 45, .external_lex_state = 2},
  [347] = {.lex_state = 45, .external_lex_state = 2},
  [348] = {.lex_state = 45, .external_lex_state = 2},
  [349] = {.lex_state = 45, .external_lex_state = 2},
  [350] = {.lex_state = 45, .external_lex_state = 2},
  [351] = {.lex_state = 45, .external_lex_state = 2},
  [352] = {.lex_state = 45, .external_lex_state = 2},
  [353] = {.lex_state = 45, .external_lex_state = 2},
  [354] = {.lex_state = 45, .external_lex_state = 2},
  [355] = {.lex_state = 45, .external_lex_state = 2},
  [356] = {.lex_state = 45, .external_lex_state = 2},
  [357] = {.lex_state = 45, .external_lex_state = 2},
  [358] = {.lex_state = 45, .external_lex_state = 2},
  [359] = {.lex_state = 45, .external_lex_state = 2},
  [360] = {.lex_state = 45, .external_lex_state = 2},
  [361] = {.lex_state = 45, .external_lex_state = 2},
  [362] = {.lex_state = 45, .external_lex_state = 2},
  [363] = {.lex_state = 45, .external_lex_state = 2},
  [364] = {.lex_state = 45, .external_lex_state = 2},
  [365] = {.lex_state = 45, .external_lex_state = 2},
  [366] = {.lex_state = 45, .external_lex_state = 2},
  [367] = {.lex_state = 275, .external_lex_state = 2},
  [368] = {.lex_state = 45, .external_lex_state = 2},
  [369] = {.lex_state = 45, .external_lex_state = 2},
  [370] = {.lex_state = 275, .external_lex_state = 2},
  [371] = {.lex_state = 45, .external_lex_state = 2},
  [372] = {.lex_state = 275, .external_lex_state = 2},
  [373] = {.lex_state = 275, .external_lex_state = 2},
  [374] = {.lex_state = 45, .external_lex_state = 2},
  [375] = {.lex_state = 45, .external_lex_state = 2},
  [376] = {.lex_state = 45, .external_lex_state = 2},
  [377] = {.lex_state = 45, .external_lex_state = 2},
  [378] = {.lex_state = 45, .external_lex_state = 2},
  [379] = {.lex_state = 99, .external_lex_state = 4},
  [380] = {.lex_state = 99, .external_lex_state = 4},
  [381] = {.lex_state = 127, .external_lex_state = 1},
  [382] = {.lex_state = 99, .external_lex_state = 4},
  [383] = {.lex_state = 99, .external_lex_state = 4},
  [384] = {.lex_state = 99, .external_lex_state = 4},
  [385] = {.lex_state = 99, .external_lex_state = 4},
  [386] = {.lex_state = 99, .external_lex_state = 4},
  [387] = {.lex_state = 99, .external_lex_state = 4},
  [388] = {.lex_state = 106, .external_lex_state = 6},
  [389] = {.lex_state = 99, .external_lex_state = 3},
  [390] = {.lex_state = 127, .external_lex_state = 1},
  [391] = {.lex_state = 106, .external_lex_state = 6},
  [392] = {.lex_state = 99, .external_lex_state = 3},
  [393] = {.lex_state = 99, .external_lex_state = 3},
  [394] = {.lex_state = 127, .external_lex_state = 1},
  [395] = {.lex_state = 127, .external_lex_state = 1},
  [396] = {.lex_state = 99, .external_lex_state = 3},
  [397] = {.lex_state = 127, .external_lex_state = 1},
  [398] = {.lex_state = 99, .external_lex_state = 3},
  [399] = {.lex_state = 101, .external_lex_state = 3},
  [400] = {.lex_state = 106, .external_lex_state = 6},
  [401] = {.lex_state = 106, .external_lex_state = 6},
  [402] = {.lex_state = 106, .external_lex_state = 6},
  [403] = {.lex_state = 101, .external_lex_state = 3},
  [404] = {.lex_state = 118, .external_lex_state = 2},
  [405] = {.lex_state = 101, .external_lex_state = 3},
  [406] = {.lex_state = 127, .external_lex_state = 1},
  [407] = {.lex_state = 127, .external_lex_state = 1},
  [408] = {.lex_state = 101, .external_lex_state = 3},
  [409] = {.lex_state = 101, .external_lex_state = 3},
  [410] = {.lex_state = 127, .external_lex_state = 1},
  [411] = {.lex_state = 106, .external_lex_state = 6},
  [412] = {.lex_state = 127, .external_lex_state = 1},
  [413] = {.lex_state = 127, .external_lex_state = 1},
  [414] = {.lex_state = 106, .external_lex_state = 6},
  [415] = {.lex_state = 106, .external_lex_state = 6},
  [416] = {.lex_state = 106, .external_lex_state = 2},
  [417] = {.lex_state = 106, .external_lex_state = 2},
  [418] = {.lex_state = 106, .external_lex_state = 2},
  [419] = {.lex_state = 130, .external_lex_state = 3},
  [420] = {.lex_state = 0, .external_lex_state = 3},
  [421] = {.lex_state = 0, .external_lex_state = 3},
  [422] = {.lex_state = 106, .external_lex_state = 2},
  [423] = {.lex_state = 0, .external_lex_state = 3},
  [424] = {.lex_state = 130, .external_lex_state = 3},
  [425] = {.lex_state = 106, .external_lex_state = 2},
  [426] = {.lex_state = 106, .external_lex_state = 2},
  [427] = {.lex_state = 106, .external_lex_state = 2},
  [428] = {.lex_state = 130, .external_lex_state = 3},
  [429] = {.lex_state = 106, .external_lex_state = 2},
  [430] = {.lex_state = 106, .external_lex_state = 2},
  [431] = {.lex_state = 0, .external_lex_state = 3},
  [432] = {.lex_state = 0, .external_lex_state = 3},
  [433] = {.lex_state = 0, .external_lex_state = 3},
  [434] = {.lex_state = 0, .external_lex_state = 6},
  [435] = {.lex_state = 0, .external_lex_state = 3},
  [436] = {.lex_state = 0, .external_lex_state = 3},
  [437] = {.lex_state = 0, .external_lex_state = 3},
  [438] = {.lex_state = 0, .external_lex_state = 3},
  [439] = {.lex_state = 0, .external_lex_state = 3},
  [440] = {.lex_state = 0, .external_lex_state = 3},
  [441] = {.lex_state = 0, .external_lex_state = 3},
  [442] = {.lex_state = 0, .external_lex_state = 3},
  [443] = {.lex_state = 0, .external_lex_state = 3},
  [444] = {.lex_state = 0, .external_lex_state = 3},
  [445] = {.lex_state = 0, .external_lex_state = 3},
  [446] = {.lex_state = 0, .external_lex_state = 3},
  [447] = {.lex_state = 2, .external_lex_state = 2},
  [448] = {.lex_state = 2, .external_lex_state = 2},
  [449] = {.lex_state = 0, .external_lex_state = 6},
  [450] = {.lex_state = 2, .external_lex_state = 2},
  [451] = {.lex_state = 0, .external_lex_state = 3},
  [452] = {.lex_state = 123, .external_lex_state = 2},
  [453] = {.lex_state = 3, .external_lex_state = 2},
  [454] = {.lex_state = 0, .external_lex_state = 6},
  [455] = {.lex_state = 123, .external_lex_state = 2},
  [456] = {.lex_state = 0, .external_lex_state = 6},
  [457] = {.lex_state = 0, .external_lex_state = 6},
  [458] = {.lex_state = 0, .external_lex_state = 6},
  [459] = {.lex_state = 123, .external_lex_state = 2},
  [460] = {.lex_state = 3, .external_lex_state = 2},
  [461] = {.lex_state = 0, .external_lex_state = 6},
  [462] = {.lex_state = 46, .external_lex_state = 2},
  [463] = {.lex_state = 0, .external_lex_state = 6},
  [464] = {.lex_state = 128, .external_lex_state = 3},
  [465] = {.lex_state = 46, .external_lex_state = 2},
  [466] = {.lex_state = 0, .external_lex_state = 6},
  [467] = {.lex_state = 46, .external_lex_state = 2},
  [468] = {.lex_state = 0, .external_lex_state = 2},
  [469] = {.lex_state = 46, .external_lex_state = 2},
  [470] = {.lex_state = 0, .external_lex_state = 6},
  [471] = {.lex_state = 46, .external_lex_state = 2},
  [472] = {.lex_state = 46, .external_lex_state = 2},
  [473] = {.lex_state = 46, .external_lex_state = 2},
  [474] = {.lex_state = 2, .external_lex_state = 2},
  [475] = {.lex_state = 46, .external_lex_state = 2},
  [476] = {.lex_state = 128, .external_lex_state = 5},
  [477] = {.lex_state = 46, .external_lex_state = 2},
  [478] = {.lex_state = 2, .external_lex_state = 2},
  [479] = {.lex_state = 128, .external_lex_state = 3},
  [480] = {.lex_state = 128, .external_lex_state = 3},
  [481] = {.lex_state = 0, .external_lex_state = 6},
  [482] = {.lex_state = 2, .external_lex_state = 2},
  [483] = {.lex_state = 0, .external_lex_state = 6},
  [484] = {.lex_state = 0, .external_lex_state = 2},
  [485] = {.lex_state = 0, .external_lex_state = 2},
  [486] = {.lex_state = 0, .external_lex_state = 2},
  [487] = {.lex_state = 123, .external_lex_state = 2},
  [488] = {.lex_state = 0, .external_lex_state = 2},
  [489] = {.lex_state = 0, .external_lex_state = 2},
  [490] = {.lex_state = 47, .external_lex_state = 2},
  [491] = {.lex_state = 2, .external_lex_state = 2},
  [492] = {.lex_state = 0, .external_lex_state = 6},
  [493] = {.lex_state = 55, .external_lex_state = 2},
  [494] = {.lex_state = 0, .external_lex_state = 2},
  [495] = {.lex_state = 0, .external_lex_state = 5},
  [496] = {.lex_state = 55, .external_lex_state = 2},
  [497] = {.lex_state = 0, .external_lex_state = 5},
  [498] = {.lex_state = 0, .external_lex_state = 3},
  [499] = {.lex_state = 123, .external_lex_state = 2},
  [500] = {.lex_state = 55, .external_lex_state = 2},
  [501] = {.lex_state = 123, .external_lex_state = 2},
  [502] = {.lex_state = 126, .external_lex_state = 2},
  [503] = {.lex_state = 55, .external_lex_state = 2},
  [504] = {.lex_state = 47, .external_lex_state = 2},
  [505] = {.lex_state = 0, .external_lex_state = 5},
  [506] = {.lex_state = 55, .external_lex_state = 2},
  [507] = {.lex_state = 55, .external_lex_state = 2},
  [508] = {.lex_state = 47, .external_lex_state = 2},
  [509] = {.lex_state = 0, .external_lex_state = 2},
  [510] = {.lex_state = 0, .external_lex_state = 5},
  [511] = {.lex_state = 0, .external_lex_state = 2},
  [512] = {.lex_state = 0, .external_lex_state = 2},
  [513] = {.lex_state = 0, .external_lex_state = 2},
  [514] = {.lex_state = 0, .external_lex_state = 2},
  [515] = {.lex_state = 0, .external_lex_state = 2},
  [516] = {.lex_state = 0, .external_lex_state = 2},
  [517] = {.lex_state = 0, .external_lex_state = 2},
  [518] = {.lex_state = 54, .external_lex_state = 2},
  [519] = {.lex_state = 0, .external_lex_state = 2},
  [520] = {.lex_state = 275, .external_lex_state = 2},
  [521] = {.lex_state = 275, .external_lex_state = 2},
  [522] = {.lex_state = 0, .external_lex_state = 2},
  [523] = {.lex_state = 0, .external_lex_state = 2},
  [524] = {.lex_state = 0, .external_lex_state = 2},
  [525] = {.lex_state = 275, .external_lex_state = 2},
  [526] = {.lex_state = 47, .external_lex_state = 2},
  [527] = {.lex_state = 0, .external_lex_state = 2},
  [528] = {.lex_state = 54, .external_lex_state = 2},
  [529] = {.lex_state = 0, .external_lex_state = 2},
  [530] = {.lex_state = 0, .external_lex_state = 2},
  [531] = {.lex_state = 0, .external_lex_state = 2},
  [532] = {.lex_state = 0, .external_lex_state = 2},
  [533] = {.lex_state = 54, .external_lex_state = 2},
  [534] = {.lex_state = 0, .external_lex_state = 2},
  [535] = {.lex_state = 0, .external_lex_state = 2},
  [536] = {.lex_state = 54, .external_lex_state = 2},
  [537] = {.lex_state = 0, .external_lex_state = 2},
  [538] = {.lex_state = 0, .external_lex_state = 2},
  [539] = {.lex_state = 0, .external_lex_state = 2},
  [540] = {.lex_state = 0, .external_lex_state = 2},
  [541] = {.lex_state = 0, .external_lex_state = 2},
  [542] = {.lex_state = 0, .external_lex_state = 2},
  [543] = {.lex_state = 0, .external_lex_state = 2},
  [544] = {.lex_state = 0, .external_lex_state = 2},
  [545] = {.lex_state = 38, .external_lex_state = 2},
  [546] = {.lex_state = 54, .external_lex_state = 2},
  [547] = {.lex_state = 0, .external_lex_state = 2},
  [548] = {.lex_state = 0, .external_lex_state = 2},
  [549] = {.lex_state = 47, .external_lex_state = 2},
  [550] = {.lex_state = 0, .external_lex_state = 3},
  [551] = {.lex_state = 0, .external_lex_state = 3},
  [552] = {.lex_state = 0, .external_lex_state = 2},
  [553] = {.lex_state = 0, .external_lex_state = 2},
  [554] = {.lex_state = 275, .external_lex_state = 2},
  [555] = {.lex_state = 47, .external_lex_state = 2},
  [556] = {.lex_state = 0, .external_lex_state = 2},
  [557] = {.lex_state = 47, .external_lex_state = 2},
  [558] = {.lex_state = 0, .external_lex_state = 2},
  [559] = {.lex_state = 0, .external_lex_state = 2},
  [560] = {.lex_state = 129, .external_lex_state = 2},
  [561] = {.lex_state = 54, .external_lex_state = 2},
  [562] = {.lex_state = 0, .external_lex_state = 2},
  [563] = {.lex_state = 0, .external_lex_state = 2},
  [564] = {.lex_state = 0, .external_lex_state = 2},
  [565] = {.lex_state = 54, .external_lex_state = 2},
  [566] = {.lex_state = 0, .external_lex_state = 2},
  [567] = {.lex_state = 0, .external_lex_state = 2},
  [568] = {.lex_state = 0, .external_lex_state = 2},
  [569] = {.lex_state = 0, .external_lex_state = 2},
  [570] = {.lex_state = 0, .external_lex_state = 2},
  [571] = {.lex_state = 38, .external_lex_state = 2},
  [572] = {.lex_state = 0, .external_lex_state = 2},
  [573] = {.lex_state = 0, .external_lex_state = 2},
  [574] = {.lex_state = 38, .external_lex_state = 2},
  [575] = {.lex_state = 126, .external_lex_state = 2},
  [576] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_program] = STATE(519),
    [sym__statement] = STATE(4),
    [sym__comment] = STATE(523),
    [sym_directive] = STATE(423),
    [sym__macro_directive] = STATE(436),
    [sym__integer_directive] = STATE(441),
    [sym_integer_mnemonic] = STATE(528),
    [sym__float_directive] = STATE(437),
    [sym_float_mnemonic] = STATE(546),
    [sym__string_directive] = STATE(446),
    [sym_string_mnemonic] = STATE(518),
    [sym__control_directive] = STATE(443),
    [sym_control_mnemonic] = STATE(428),
    [sym_instruction] = STATE(416),
    [sym__label] = STATE(103),
    [aux_sym_program_repeat1] = STATE(4),
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
    [anon_sym_DOTfloat] = ACTIONS(19),
    [anon_sym_DOTdouble] = ACTIONS(19),
    [anon_sym_DOTsingle] = ACTIONS(19),
    [anon_sym_DOTasciz] = ACTIONS(21),
    [anon_sym_DOTascii] = ACTIONS(21),
    [anon_sym_DOTasciiz] = ACTIONS(21),
    [anon_sym_DOTstring] = ACTIONS(21),
    [anon_sym_DOTstringz] = ACTIONS(21),
    [aux_sym_control_mnemonic_token1] = ACTIONS(23),
    [sym_opcode] = ACTIONS(25),
    [sym_local_label] = ACTIONS(27),
    [sym_global_label] = ACTIONS(27),
    [sym_global_numeric_label] = ACTIONS(27),
    [sym_local_numeric_label] = ACTIONS(27),
    [sym__operator_space] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      sym_macro_mnemonic,
    ACTIONS(23), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(25), 1,
      sym_opcode,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym__statement_token1,
    STATE(43), 1,
      sym__label,
    STATE(417), 1,
      sym_instruction,
    STATE(420), 1,
      sym_directive,
    STATE(428), 1,
      sym_control_mnemonic,
    STATE(436), 1,
      sym__macro_directive,
    STATE(437), 1,
      sym__float_directive,
    STATE(441), 1,
      sym__integer_directive,
    STATE(443), 1,
      sym__control_directive,
    STATE(446), 1,
      sym__string_directive,
    STATE(518), 1,
      sym_string_mnemonic,
    STATE(528), 1,
      sym_integer_mnemonic,
    STATE(544), 1,
      sym__comment,
    STATE(546), 1,
      sym_float_mnemonic,
    ACTIONS(35), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(3), 2,
      sym__statement,
      aux_sym_program_repeat1,
    ACTIONS(19), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    ACTIONS(31), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(27), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(21), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(17), 23,
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
  [120] = 27,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      sym_macro_mnemonic,
    ACTIONS(23), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(25), 1,
      sym_opcode,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym__label,
    STATE(418), 1,
      sym_instruction,
    STATE(421), 1,
      sym_directive,
    STATE(428), 1,
      sym_control_mnemonic,
    STATE(436), 1,
      sym__macro_directive,
    STATE(437), 1,
      sym__float_directive,
    STATE(441), 1,
      sym__integer_directive,
    STATE(443), 1,
      sym__control_directive,
    STATE(446), 1,
      sym__string_directive,
    STATE(518), 1,
      sym_string_mnemonic,
    STATE(528), 1,
      sym_integer_mnemonic,
    STATE(546), 1,
      sym_float_mnemonic,
    STATE(548), 1,
      sym__comment,
    ACTIONS(35), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(6), 2,
      sym__statement,
      aux_sym_program_repeat1,
    ACTIONS(19), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    ACTIONS(39), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(27), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(21), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(17), 23,
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
  [237] = 27,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      sym_macro_mnemonic,
    ACTIONS(23), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(25), 1,
      sym_opcode,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym__label,
    STATE(417), 1,
      sym_instruction,
    STATE(420), 1,
      sym_directive,
    STATE(428), 1,
      sym_control_mnemonic,
    STATE(436), 1,
      sym__macro_directive,
    STATE(437), 1,
      sym__float_directive,
    STATE(441), 1,
      sym__integer_directive,
    STATE(443), 1,
      sym__control_directive,
    STATE(446), 1,
      sym__string_directive,
    STATE(518), 1,
      sym_string_mnemonic,
    STATE(528), 1,
      sym_integer_mnemonic,
    STATE(544), 1,
      sym__comment,
    STATE(546), 1,
      sym_float_mnemonic,
    ACTIONS(35), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(6), 2,
      sym__statement,
      aux_sym_program_repeat1,
    ACTIONS(19), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    ACTIONS(39), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(27), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(21), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(17), 23,
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
  [354] = 40,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_section_type_token1,
    ACTIONS(49), 1,
      aux_sym_option_flag_token1,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
    STATE(219), 1,
      sym__assignment_expression,
    STATE(220), 1,
      sym__logical_or_expression,
    STATE(221), 1,
      sym__wrapped_logical_or_expression,
    STATE(222), 1,
      sym__logical_and_expression,
    STATE(223), 1,
      sym__wrapped_logical_and_expression,
    STATE(224), 1,
      sym__bitwise_or_expression,
    STATE(225), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(226), 1,
      sym__bitwise_xor_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(228), 1,
      sym__bitwise_and_expression,
    STATE(229), 1,
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
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(395), 1,
      sym__wrapped_assignment_expression,
    STATE(431), 1,
      sym_control_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(43), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(57), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(394), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
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
  [497] = 25,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_macro_mnemonic,
    ACTIONS(91), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(94), 1,
      sym_opcode,
    STATE(122), 1,
      sym__label,
    STATE(428), 1,
      sym_control_mnemonic,
    STATE(430), 1,
      sym_instruction,
    STATE(436), 1,
      sym__macro_directive,
    STATE(437), 1,
      sym__float_directive,
    STATE(441), 1,
      sym__integer_directive,
    STATE(443), 1,
      sym__control_directive,
    STATE(446), 1,
      sym__string_directive,
    STATE(451), 1,
      sym_directive,
    STATE(518), 1,
      sym_string_mnemonic,
    STATE(528), 1,
      sym_integer_mnemonic,
    STATE(546), 1,
      sym_float_mnemonic,
    STATE(6), 2,
      sym__statement,
      aux_sym_program_repeat1,
    ACTIONS(73), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(76), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(85), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    ACTIONS(97), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(88), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(82), 23,
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
  [609] = 39,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(114), 1,
      sym_float,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
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
    STATE(199), 1,
      sym__bitwise_or_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(201), 1,
      sym__bitwise_xor_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(203), 1,
      sym__bitwise_and_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(205), 1,
      sym__equality_expression,
    STATE(206), 1,
      sym__wrapped_equality_expression,
    STATE(207), 1,
      sym__relational_expression,
    STATE(208), 1,
      sym__wrapped_relational_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(210), 1,
      sym__wrapped_shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(391), 1,
      sym__wrapped_assignment_expression,
    STATE(425), 1,
      sym_operands,
    STATE(426), 1,
      sym__call_expression,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(106), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(102), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(110), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [749] = 38,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(136), 1,
      aux_sym_decimal_token1,
    ACTIONS(138), 1,
      sym_float,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(385), 1,
      sym__float_operand,
    STATE(509), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(142), 2,
      sym_register,
      sym_local_numeric_label_reference,
    ACTIONS(124), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(130), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    STATE(175), 3,
      sym_decimal,
      sym_char,
      sym_address,
    ACTIONS(134), 4,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_macro_variable,
    STATE(355), 7,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_local_label_reference,
      sym_symbol,
    ACTIONS(126), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [887] = 37,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      sym_float,
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
    STATE(199), 1,
      sym__bitwise_or_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(201), 1,
      sym__bitwise_xor_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(203), 1,
      sym__bitwise_and_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(205), 1,
      sym__equality_expression,
    STATE(206), 1,
      sym__wrapped_equality_expression,
    STATE(207), 1,
      sym__relational_expression,
    STATE(208), 1,
      sym__wrapped_relational_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(210), 1,
      sym__wrapped_shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(391), 1,
      sym__wrapped_assignment_expression,
    STATE(415), 2,
      sym__operand,
      sym_string,
    ACTIONS(106), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(110), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    ACTIONS(150), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1021] = 34,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__logical_and_expression,
    STATE(129), 1,
      sym__wrapped_logical_and_expression,
    STATE(130), 1,
      sym__bitwise_or_expression,
    STATE(131), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(132), 1,
      sym__bitwise_xor_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(134), 1,
      sym__bitwise_and_expression,
    STATE(135), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(136), 1,
      sym__equality_expression,
    STATE(137), 1,
      sym__wrapped_equality_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(139), 1,
      sym__wrapped_relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(150), 1,
      sym__assignment_expression,
    STATE(151), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(124), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(158), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(162), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    ACTIONS(126), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [1149] = 37,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      sym_float,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
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
    STATE(199), 1,
      sym__bitwise_or_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(201), 1,
      sym__bitwise_xor_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(203), 1,
      sym__bitwise_and_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(205), 1,
      sym__equality_expression,
    STATE(206), 1,
      sym__wrapped_equality_expression,
    STATE(207), 1,
      sym__relational_expression,
    STATE(208), 1,
      sym__wrapped_relational_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(210), 1,
      sym__wrapped_shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(391), 1,
      sym__wrapped_assignment_expression,
    STATE(415), 2,
      sym__operand,
      sym_string,
    ACTIONS(106), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(110), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    ACTIONS(174), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1283] = 37,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym_section_type_token1,
    ACTIONS(49), 1,
      aux_sym_option_flag_token1,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
    STATE(219), 1,
      sym__assignment_expression,
    STATE(220), 1,
      sym__logical_or_expression,
    STATE(221), 1,
      sym__wrapped_logical_or_expression,
    STATE(222), 1,
      sym__logical_and_expression,
    STATE(223), 1,
      sym__wrapped_logical_and_expression,
    STATE(224), 1,
      sym__bitwise_or_expression,
    STATE(225), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(226), 1,
      sym__bitwise_xor_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(228), 1,
      sym__bitwise_and_expression,
    STATE(229), 1,
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
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(395), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(57), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(413), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
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
  [1413] = 40,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(136), 1,
      aux_sym_decimal_token1,
    ACTIONS(138), 1,
      sym_float,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(176), 1,
      sym_line_comment,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(385), 1,
      sym__float_operand,
    STATE(505), 1,
      sym__comment,
    STATE(509), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(134), 2,
      sym_octal,
      sym_macro_variable,
    ACTIONS(142), 2,
      sym_register,
      sym_local_numeric_label_reference,
    ACTIONS(180), 2,
      sym__data_separator,
      anon_sym_COMMA,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(184), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(175), 3,
      sym_decimal,
      sym_char,
      sym_address,
    STATE(355), 7,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_local_label_reference,
      sym_symbol,
  [1548] = 38,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(449), 1,
      sym__wrapped_assignment_expression,
    STATE(543), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(470), 2,
      sym__operand,
      sym_string,
    ACTIONS(198), 4,
      sym_octal,
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
  [1679] = 40,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
      sym_symbol,
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(461), 1,
      sym__wrapped_assignment_expression,
    STATE(529), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(214), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [1814] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(449), 1,
      sym__wrapped_assignment_expression,
    STATE(558), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(216), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [1946] = 37,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
    ACTIONS(218), 1,
      sym_float,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(449), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(483), 2,
      sym__operand,
      sym_string,
    ACTIONS(198), 4,
      sym_octal,
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
  [2074] = 37,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
    ACTIONS(218), 1,
      sym_float,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(449), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(483), 2,
      sym__operand,
      sym_string,
    ACTIONS(198), 4,
      sym_octal,
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
  [2202] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym_symbol,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(456), 1,
      sym__wrapped_assignment_expression,
    STATE(547), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(220), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [2334] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(315), 1,
      sym_symbol,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(454), 1,
      sym__wrapped_assignment_expression,
    STATE(530), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(222), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [2466] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(316), 1,
      sym_symbol,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(449), 1,
      sym__wrapped_assignment_expression,
    STATE(553), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(224), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [2598] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym_symbol,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    STATE(573), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(226), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [2730] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(319), 1,
      sym_symbol,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(449), 1,
      sym__wrapped_assignment_expression,
    STATE(517), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(228), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [2862] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(322), 1,
      sym_symbol,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    STATE(524), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(230), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [2994] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(321), 1,
      sym_symbol,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(449), 1,
      sym__wrapped_assignment_expression,
    STATE(527), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(232), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [3126] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym_symbol,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    STATE(532), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(234), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [3258] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym_symbol,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(449), 1,
      sym__wrapped_assignment_expression,
    STATE(535), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(236), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [3390] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
      sym_symbol,
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(461), 1,
      sym__wrapped_assignment_expression,
    STATE(538), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(214), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [3522] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(325), 1,
      sym_symbol,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(449), 1,
      sym__wrapped_assignment_expression,
    STATE(540), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(238), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [3654] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(326), 1,
      sym_symbol,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    STATE(542), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(240), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [3786] = 39,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      sym_float,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(327), 1,
      sym_symbol,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(449), 1,
      sym__wrapped_assignment_expression,
    STATE(576), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(198), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(242), 2,
      sym_register,
      sym_macro_variable,
    STATE(470), 2,
      sym__operand,
      sym_string,
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
  [3918] = 36,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(154), 1,
      sym_float,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
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
    STATE(199), 1,
      sym__bitwise_or_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(201), 1,
      sym__bitwise_xor_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(203), 1,
      sym__bitwise_and_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(205), 1,
      sym__equality_expression,
    STATE(206), 1,
      sym__wrapped_equality_expression,
    STATE(207), 1,
      sym__relational_expression,
    STATE(208), 1,
      sym__wrapped_relational_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(210), 1,
      sym__wrapped_shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(391), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(248), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(415), 2,
      sym__operand,
      sym_string,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4043] = 36,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
    ACTIONS(218), 1,
      sym_float,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(449), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(483), 2,
      sym__operand,
      sym_string,
    ACTIONS(198), 4,
      sym_octal,
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
  [4168] = 38,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(136), 1,
      aux_sym_decimal_token1,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(254), 1,
      sym_float,
    STATE(294), 1,
      sym__float_operand,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(398), 1,
      sym_float_operands,
    STATE(509), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(134), 2,
      sym_octal,
      sym_macro_variable,
    ACTIONS(142), 2,
      sym_register,
      sym_local_numeric_label_reference,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(184), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(175), 3,
      sym_decimal,
      sym_char,
      sym_address,
    STATE(355), 7,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_local_label_reference,
      sym_symbol,
  [4296] = 37,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      sym_macro_variable,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(333), 1,
      sym_address,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(511), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(554), 2,
      sym__string_operand,
      sym_string,
    ACTIONS(142), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(355), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [4422] = 37,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(136), 1,
      aux_sym_decimal_token1,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      sym_float,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(380), 1,
      sym__float_operand,
    STATE(509), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(134), 2,
      sym_octal,
      sym_macro_variable,
    ACTIONS(142), 2,
      sym_register,
      sym_local_numeric_label_reference,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(184), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(175), 3,
      sym_decimal,
      sym_char,
      sym_address,
    STATE(355), 7,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_local_label_reference,
      sym_symbol,
  [4547] = 37,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(136), 1,
      aux_sym_decimal_token1,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(270), 1,
      sym_float,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(382), 1,
      sym__float_operand,
    STATE(509), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(134), 2,
      sym_octal,
      sym_macro_variable,
    ACTIONS(142), 2,
      sym_register,
      sym_local_numeric_label_reference,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(184), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(175), 3,
      sym_decimal,
      sym_char,
      sym_address,
    STATE(355), 7,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_local_label_reference,
      sym_symbol,
  [4672] = 37,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(136), 1,
      aux_sym_decimal_token1,
    ACTIONS(138), 1,
      sym_float,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(385), 1,
      sym__float_operand,
    STATE(509), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(134), 2,
      sym_octal,
      sym_macro_variable,
    ACTIONS(142), 2,
      sym_register,
      sym_local_numeric_label_reference,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(184), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(175), 3,
      sym_decimal,
      sym_char,
      sym_address,
    STATE(355), 7,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_local_label_reference,
      sym_symbol,
  [4797] = 34,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__logical_and_expression,
    STATE(129), 1,
      sym__wrapped_logical_and_expression,
    STATE(130), 1,
      sym__bitwise_or_expression,
    STATE(131), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(132), 1,
      sym__bitwise_xor_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(134), 1,
      sym__bitwise_and_expression,
    STATE(135), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(136), 1,
      sym__equality_expression,
    STATE(137), 1,
      sym__wrapped_equality_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(139), 1,
      sym__wrapped_relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(150), 1,
      sym__assignment_expression,
    STATE(151), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_logical_or_expression,
    STATE(264), 1,
      sym__wrapped_assignment_expression,
    STATE(396), 1,
      sym_integer_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [4915] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(488), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5030] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    STATE(567), 1,
      sym__comment,
    ACTIONS(286), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(284), 42,
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
  [5091] = 33,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
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
    STATE(199), 1,
      sym__bitwise_or_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(201), 1,
      sym__bitwise_xor_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(203), 1,
      sym__bitwise_and_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(205), 1,
      sym__equality_expression,
    STATE(206), 1,
      sym__wrapped_equality_expression,
    STATE(207), 1,
      sym__relational_expression,
    STATE(208), 1,
      sym__wrapped_relational_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(210), 1,
      sym__wrapped_shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(215), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(248), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5206] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    STATE(548), 1,
      sym__comment,
    ACTIONS(289), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(284), 42,
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
  [5267] = 34,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_multiplicative_expression,
    STATE(512), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(294), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(292), 4,
      sym_octal,
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
  [5384] = 33,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__logical_and_expression,
    STATE(129), 1,
      sym__wrapped_logical_and_expression,
    STATE(130), 1,
      sym__bitwise_or_expression,
    STATE(131), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(132), 1,
      sym__bitwise_xor_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(134), 1,
      sym__bitwise_and_expression,
    STATE(135), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(136), 1,
      sym__equality_expression,
    STATE(137), 1,
      sym__wrapped_equality_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(139), 1,
      sym__wrapped_relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(150), 1,
      sym__assignment_expression,
    STATE(151), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_logical_or_expression,
    STATE(297), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [5499] = 33,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__logical_and_expression,
    STATE(129), 1,
      sym__wrapped_logical_and_expression,
    STATE(130), 1,
      sym__bitwise_or_expression,
    STATE(131), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(132), 1,
      sym__bitwise_xor_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(134), 1,
      sym__bitwise_and_expression,
    STATE(135), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(136), 1,
      sym__equality_expression,
    STATE(137), 1,
      sym__wrapped_equality_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(139), 1,
      sym__wrapped_relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(150), 1,
      sym__assignment_expression,
    STATE(151), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [5614] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    STATE(556), 1,
      sym__comment,
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
  [5673] = 33,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
      sym__relational_expression,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(434), 1,
      sym__wrapped_logical_or_expression,
    STATE(513), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(198), 4,
      sym_octal,
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
  [5788] = 33,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
      sym__wrapped_logical_and_expression,
    STATE(298), 1,
      sym__relational_expression,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(513), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(198), 4,
      sym_octal,
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
  [5903] = 33,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
      sym__wrapped_bitwise_or_expression,
    STATE(298), 1,
      sym__relational_expression,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(513), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(198), 4,
      sym_octal,
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
  [6018] = 33,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
      sym__wrapped_bitwise_xor_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(513), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(198), 4,
      sym_octal,
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
  [6133] = 33,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
      sym__wrapped_bitwise_and_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(513), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(198), 4,
      sym_octal,
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
  [6248] = 33,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(314), 1,
      sym__equality_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(513), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(198), 4,
      sym_octal,
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
  [6363] = 33,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(287), 1,
      sym__wrapped_relational_expression,
    STATE(298), 1,
      sym__relational_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(513), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(198), 4,
      sym_octal,
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
  [6478] = 33,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
    STATE(269), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_shift_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(513), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(198), 4,
      sym_octal,
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
  [6593] = 33,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
    STATE(271), 1,
      sym__additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(513), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(198), 4,
      sym_octal,
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
  [6708] = 33,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(513), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(302), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(300), 4,
      sym_octal,
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
  [6823] = 34,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_multiplicative_expression,
    STATE(513), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(306), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(304), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(291), 9,
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
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(485), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__logical_and_expression,
    STATE(129), 1,
      sym__wrapped_logical_and_expression,
    STATE(130), 1,
      sym__bitwise_or_expression,
    STATE(131), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(132), 1,
      sym__bitwise_xor_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(134), 1,
      sym__bitwise_and_expression,
    STATE(135), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(136), 1,
      sym__equality_expression,
    STATE(137), 1,
      sym__wrapped_equality_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(139), 1,
      sym__wrapped_relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(151), 1,
      sym__logical_or_expression,
    STATE(265), 1,
      sym__wrapped_logical_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(514), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [7170] = 33,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__logical_and_expression,
    STATE(130), 1,
      sym__bitwise_or_expression,
    STATE(131), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(132), 1,
      sym__bitwise_xor_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(134), 1,
      sym__bitwise_and_expression,
    STATE(135), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(136), 1,
      sym__equality_expression,
    STATE(137), 1,
      sym__wrapped_equality_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(139), 1,
      sym__wrapped_relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(159), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(514), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [7285] = 33,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__bitwise_or_expression,
    STATE(132), 1,
      sym__bitwise_xor_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(134), 1,
      sym__bitwise_and_expression,
    STATE(135), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(136), 1,
      sym__equality_expression,
    STATE(137), 1,
      sym__wrapped_equality_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(139), 1,
      sym__wrapped_relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(160), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(514), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [7400] = 33,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(132), 1,
      sym__bitwise_xor_expression,
    STATE(134), 1,
      sym__bitwise_and_expression,
    STATE(135), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(136), 1,
      sym__equality_expression,
    STATE(137), 1,
      sym__wrapped_equality_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(139), 1,
      sym__wrapped_relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(161), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(514), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [7515] = 33,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(134), 1,
      sym__bitwise_and_expression,
    STATE(136), 1,
      sym__equality_expression,
    STATE(137), 1,
      sym__wrapped_equality_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(139), 1,
      sym__wrapped_relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(514), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [7630] = 33,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__equality_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(139), 1,
      sym__wrapped_relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(163), 1,
      sym__wrapped_equality_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(514), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [7745] = 33,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(164), 1,
      sym__wrapped_relational_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(514), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [7860] = 33,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(165), 1,
      sym__wrapped_shift_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(514), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [7975] = 33,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(166), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(514), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [8090] = 33,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(514), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(310), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(308), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(167), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8205] = 34,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_multiplicative_expression,
    STATE(514), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(314), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(312), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(168), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8322] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(468), 1,
      sym__wrapped_logical_or_expression,
    STATE(515), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8437] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(358), 1,
      sym__wrapped_logical_and_expression,
    STATE(515), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8552] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(359), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(515), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(360), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(515), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8782] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(361), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(515), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8897] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(362), 1,
      sym__wrapped_equality_expression,
    STATE(515), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9012] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(515), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(364), 1,
      sym__wrapped_shift_expression,
    STATE(515), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9242] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(365), 1,
      sym__wrapped_additive_expression,
    STATE(515), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__logical_and_expression,
    STATE(129), 1,
      sym__wrapped_logical_and_expression,
    STATE(130), 1,
      sym__bitwise_or_expression,
    STATE(131), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(132), 1,
      sym__bitwise_xor_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(134), 1,
      sym__bitwise_and_expression,
    STATE(135), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(136), 1,
      sym__equality_expression,
    STATE(137), 1,
      sym__wrapped_equality_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(139), 1,
      sym__wrapped_relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(150), 1,
      sym__assignment_expression,
    STATE(151), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [9472] = 34,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_multiplicative_expression,
    STATE(515), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(318), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(316), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(378), 9,
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
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
    STATE(220), 1,
      sym__logical_or_expression,
    STATE(222), 1,
      sym__logical_and_expression,
    STATE(223), 1,
      sym__wrapped_logical_and_expression,
    STATE(224), 1,
      sym__bitwise_or_expression,
    STATE(225), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(226), 1,
      sym__bitwise_xor_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(228), 1,
      sym__bitwise_and_expression,
    STATE(229), 1,
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
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(381), 1,
      sym__wrapped_logical_or_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(57), 4,
      sym_octal,
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
  [9704] = 33,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
    STATE(222), 1,
      sym__logical_and_expression,
    STATE(224), 1,
      sym__bitwise_or_expression,
    STATE(225), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(226), 1,
      sym__bitwise_xor_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(228), 1,
      sym__bitwise_and_expression,
    STATE(229), 1,
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
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(242), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(57), 4,
      sym_octal,
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
  [9819] = 33,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
    STATE(224), 1,
      sym__bitwise_or_expression,
    STATE(226), 1,
      sym__bitwise_xor_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(228), 1,
      sym__bitwise_and_expression,
    STATE(229), 1,
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
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(243), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(57), 4,
      sym_octal,
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
  [9934] = 33,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
    STATE(226), 1,
      sym__bitwise_xor_expression,
    STATE(228), 1,
      sym__bitwise_and_expression,
    STATE(229), 1,
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
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(244), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(57), 4,
      sym_octal,
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
  [10049] = 33,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
    STATE(228), 1,
      sym__bitwise_and_expression,
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
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(57), 4,
      sym_octal,
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
  [10164] = 33,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
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
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(246), 1,
      sym__wrapped_equality_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(57), 4,
      sym_octal,
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
  [10279] = 33,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
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
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(247), 1,
      sym__wrapped_relational_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(57), 4,
      sym_octal,
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
  [10394] = 33,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
    STATE(234), 1,
      sym__shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(248), 1,
      sym__wrapped_shift_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(57), 4,
      sym_octal,
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
  [10509] = 33,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
    STATE(236), 1,
      sym__additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(249), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(57), 4,
      sym_octal,
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
  [10624] = 33,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(322), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(320), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10739] = 34,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_multiplicative_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(326), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(324), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(251), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10856] = 33,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
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
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(198), 4,
      sym_octal,
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
  [10971] = 33,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      sym__logical_or_expression,
    STATE(197), 1,
      sym__logical_and_expression,
    STATE(198), 1,
      sym__wrapped_logical_and_expression,
    STATE(199), 1,
      sym__bitwise_or_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(201), 1,
      sym__bitwise_xor_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(203), 1,
      sym__bitwise_and_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(205), 1,
      sym__equality_expression,
    STATE(206), 1,
      sym__wrapped_equality_expression,
    STATE(207), 1,
      sym__relational_expression,
    STATE(208), 1,
      sym__wrapped_relational_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(210), 1,
      sym__wrapped_shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(512), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(248), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11086] = 33,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_unary_minus_operator,
    ACTIONS(196), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(212), 1,
      aux_sym_symbol_token1,
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
    STATE(298), 1,
      sym__relational_expression,
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
      sym__wrapped_logical_or_expression,
    STATE(314), 1,
      sym__equality_expression,
    STATE(328), 1,
      sym__wrapped_equality_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(513), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(194), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(200), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(198), 4,
      sym_octal,
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
  [11201] = 33,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__logical_and_expression,
    STATE(129), 1,
      sym__wrapped_logical_and_expression,
    STATE(130), 1,
      sym__bitwise_or_expression,
    STATE(131), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(132), 1,
      sym__bitwise_xor_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(134), 1,
      sym__bitwise_and_expression,
    STATE(135), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(136), 1,
      sym__equality_expression,
    STATE(137), 1,
      sym__wrapped_equality_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(139), 1,
      sym__wrapped_relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(145), 1,
      sym__wrapped_logical_or_expression,
    STATE(151), 1,
      sym__logical_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(514), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [11316] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(332), 1,
      sym__wrapped_logical_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(515), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11431] = 33,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
    STATE(220), 1,
      sym__logical_or_expression,
    STATE(222), 1,
      sym__logical_and_expression,
    STATE(223), 1,
      sym__wrapped_logical_and_expression,
    STATE(224), 1,
      sym__bitwise_or_expression,
    STATE(225), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(226), 1,
      sym__bitwise_xor_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(228), 1,
      sym__bitwise_and_expression,
    STATE(229), 1,
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
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(261), 1,
      sym__wrapped_logical_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(57), 4,
      sym_octal,
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
  [11546] = 33,
    ACTIONS(158), 1,
      sym_unary_minus_operator,
    ACTIONS(160), 1,
      sym_relocation_type,
    ACTIONS(164), 1,
      aux_sym_decimal_token1,
    ACTIONS(168), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(170), 1,
      aux_sym_symbol_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__logical_and_expression,
    STATE(129), 1,
      sym__wrapped_logical_and_expression,
    STATE(130), 1,
      sym__bitwise_or_expression,
    STATE(131), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(132), 1,
      sym__bitwise_xor_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(134), 1,
      sym__bitwise_and_expression,
    STATE(135), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(136), 1,
      sym__equality_expression,
    STATE(137), 1,
      sym__wrapped_equality_expression,
    STATE(138), 1,
      sym__relational_expression,
    STATE(139), 1,
      sym__wrapped_relational_expression,
    STATE(140), 1,
      sym__shift_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(142), 1,
      sym__additive_expression,
    STATE(143), 1,
      sym__multiplicative_expression,
    STATE(150), 1,
      sym__assignment_expression,
    STATE(151), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_logical_or_expression,
    STATE(169), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(274), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(276), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
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
  [11661] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(356), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11776] = 33,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_unary_minus_operator,
    ACTIONS(55), 1,
      sym_relocation_type,
    ACTIONS(61), 1,
      aux_sym_decimal_token1,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(69), 1,
      aux_sym_symbol_token1,
    STATE(219), 1,
      sym__assignment_expression,
    STATE(220), 1,
      sym__logical_or_expression,
    STATE(221), 1,
      sym__wrapped_logical_or_expression,
    STATE(222), 1,
      sym__logical_and_expression,
    STATE(223), 1,
      sym__wrapped_logical_and_expression,
    STATE(224), 1,
      sym__bitwise_or_expression,
    STATE(225), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(226), 1,
      sym__bitwise_xor_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(228), 1,
      sym__bitwise_and_expression,
    STATE(229), 1,
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
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(240), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(53), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(57), 4,
      sym_octal,
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
  [11891] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    STATE(570), 1,
      sym__comment,
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
  [11950] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    STATE(544), 1,
      sym__comment,
    ACTIONS(328), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(284), 42,
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
  [12011] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    STATE(564), 1,
      sym__comment,
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
  [12070] = 33,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      sym__logical_or_expression,
    STATE(197), 1,
      sym__logical_and_expression,
    STATE(198), 1,
      sym__wrapped_logical_and_expression,
    STATE(199), 1,
      sym__bitwise_or_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(201), 1,
      sym__bitwise_xor_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(203), 1,
      sym__bitwise_and_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(205), 1,
      sym__equality_expression,
    STATE(206), 1,
      sym__wrapped_equality_expression,
    STATE(207), 1,
      sym__relational_expression,
    STATE(208), 1,
      sym__wrapped_relational_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(210), 1,
      sym__wrapped_shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(388), 1,
      sym__wrapped_logical_or_expression,
    STATE(512), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(248), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12185] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(489), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12300] = 33,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym__wrapped_logical_and_expression,
    STATE(197), 1,
      sym__logical_and_expression,
    STATE(199), 1,
      sym__bitwise_or_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(201), 1,
      sym__bitwise_xor_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(203), 1,
      sym__bitwise_and_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(205), 1,
      sym__equality_expression,
    STATE(206), 1,
      sym__wrapped_equality_expression,
    STATE(207), 1,
      sym__relational_expression,
    STATE(208), 1,
      sym__wrapped_relational_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(210), 1,
      sym__wrapped_shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(512), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(248), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12415] = 33,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(199), 1,
      sym__bitwise_or_expression,
    STATE(201), 1,
      sym__bitwise_xor_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(203), 1,
      sym__bitwise_and_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(205), 1,
      sym__equality_expression,
    STATE(206), 1,
      sym__wrapped_equality_expression,
    STATE(207), 1,
      sym__relational_expression,
    STATE(208), 1,
      sym__wrapped_relational_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(210), 1,
      sym__wrapped_shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(512), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(248), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12530] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(484), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12645] = 33,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(181), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(201), 1,
      sym__bitwise_xor_expression,
    STATE(203), 1,
      sym__bitwise_and_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(205), 1,
      sym__equality_expression,
    STATE(206), 1,
      sym__wrapped_equality_expression,
    STATE(207), 1,
      sym__relational_expression,
    STATE(208), 1,
      sym__wrapped_relational_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(210), 1,
      sym__wrapped_shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(512), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(248), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12760] = 33,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(182), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(203), 1,
      sym__bitwise_and_expression,
    STATE(205), 1,
      sym__equality_expression,
    STATE(206), 1,
      sym__wrapped_equality_expression,
    STATE(207), 1,
      sym__relational_expression,
    STATE(208), 1,
      sym__wrapped_relational_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(210), 1,
      sym__wrapped_shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(512), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(248), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12875] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(486), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(258), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12990] = 33,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(183), 1,
      sym__wrapped_equality_expression,
    STATE(205), 1,
      sym__equality_expression,
    STATE(207), 1,
      sym__relational_expression,
    STATE(208), 1,
      sym__wrapped_relational_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(210), 1,
      sym__wrapped_shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(512), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(248), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13105] = 33,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(184), 1,
      sym__wrapped_relational_expression,
    STATE(207), 1,
      sym__relational_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(210), 1,
      sym__wrapped_shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(512), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(248), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13220] = 33,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(185), 1,
      sym__wrapped_shift_expression,
    STATE(209), 1,
      sym__shift_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(212), 1,
      sym__wrapped_additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(512), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(248), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13335] = 33,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym__wrapped_additive_expression,
    STATE(211), 1,
      sym__additive_expression,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(512), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(248), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(214), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13450] = 33,
    ACTIONS(106), 1,
      sym_unary_minus_operator,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(120), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(122), 1,
      aux_sym_symbol_token1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(512), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(246), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(333), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(331), 4,
      sym_octal,
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
  [13565] = 33,
    ACTIONS(130), 1,
      sym_unary_minus_operator,
    ACTIONS(132), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(146), 1,
      aux_sym_symbol_token1,
    ACTIONS(260), 1,
      aux_sym_decimal_token1,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__bitwise_or_expression,
    STATE(336), 1,
      sym__assignment_expression,
    STATE(337), 1,
      sym__logical_or_expression,
    STATE(338), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(340), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__bitwise_xor_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(344), 1,
      sym__bitwise_and_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__equality_expression,
    STATE(347), 1,
      sym__wrapped_equality_expression,
    STATE(348), 1,
      sym__relational_expression,
    STATE(349), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__shift_expression,
    STATE(351), 1,
      sym__wrapped_shift_expression,
    STATE(352), 1,
      sym__additive_expression,
    STATE(353), 1,
      sym__wrapped_additive_expression,
    STATE(354), 1,
      sym__multiplicative_expression,
    STATE(515), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(182), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(337), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(335), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(366), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13680] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    ACTIONS(341), 44,
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
  [13736] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 44,
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
  [13792] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 44,
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
  [13848] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(284), 42,
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
  [13906] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 44,
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
  [13962] = 4,
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
  [14018] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    ACTIONS(359), 44,
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
  [14074] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 44,
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
  [14130] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(369), 1,
      sym_additive_operator,
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
  [14168] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(371), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(373), 21,
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
  [14204] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(379), 1,
      sym_logical_and_operator,
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
  [14242] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(381), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(383), 21,
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
  [14278] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(389), 1,
      sym_bitwise_or_operator,
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
  [14316] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(391), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(393), 21,
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
  [14352] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(399), 1,
      sym_bitwise_xor_operator,
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
  [14390] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(401), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(403), 21,
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
  [14426] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(409), 1,
      sym_bitwise_and_operator,
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
  [14464] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(411), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(413), 21,
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
  [14500] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(419), 1,
      sym_equality_operator,
    ACTIONS(415), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(417), 20,
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
  [14538] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(421), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(423), 21,
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
  [14574] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(429), 1,
      sym_relational_operator,
    ACTIONS(425), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(427), 20,
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
  [14612] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(431), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(433), 21,
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
  [14648] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(439), 1,
      sym_shift_operator,
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
  [14686] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(441), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(443), 21,
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
  [14722] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(445), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(447), 21,
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
  [14758] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(453), 1,
      sym_multiplicative_operator,
    ACTIONS(449), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(451), 20,
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
  [14796] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(455), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(457), 21,
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
  [14832] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(459), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(461), 21,
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
  [14868] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(463), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(465), 21,
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
  [14904] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(467), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(469), 21,
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
  [14940] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(471), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(473), 21,
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
  [14976] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(475), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(477), 21,
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
  [15012] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(479), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(481), 21,
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
  [15048] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(487), 1,
      sym_logical_or_operator,
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
  [15086] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(489), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(491), 21,
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
  [15122] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(493), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(495), 21,
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
  [15158] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(497), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(499), 21,
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
  [15194] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(501), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(503), 21,
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
  [15230] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(505), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(507), 21,
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
  [15266] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(509), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(511), 21,
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
  [15302] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(379), 1,
      sym_logical_and_operator,
    ACTIONS(513), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(515), 20,
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
  [15340] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(389), 1,
      sym_bitwise_or_operator,
    ACTIONS(517), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(519), 20,
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
  [15378] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(399), 1,
      sym_bitwise_xor_operator,
    ACTIONS(521), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(523), 20,
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
  [15416] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(409), 1,
      sym_bitwise_and_operator,
    ACTIONS(525), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(527), 20,
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
  [15454] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(419), 1,
      sym_equality_operator,
    ACTIONS(529), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(531), 20,
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
  [15492] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(429), 1,
      sym_relational_operator,
    ACTIONS(533), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(535), 20,
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
  [15530] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(439), 1,
      sym_shift_operator,
    ACTIONS(537), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(539), 20,
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
  [15568] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(369), 1,
      sym_additive_operator,
    ACTIONS(541), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(543), 20,
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
  [15606] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(453), 1,
      sym_multiplicative_operator,
    ACTIONS(545), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(547), 20,
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
  [15644] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(549), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(551), 21,
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
  [15680] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      sym_assignment_operator,
    ACTIONS(553), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(555), 19,
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
  [15720] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(493), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(495), 21,
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
  [15755] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(509), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(511), 21,
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
  [15790] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(463), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(465), 21,
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
  [15825] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(467), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(469), 21,
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
  [15860] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(489), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(491), 21,
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
  [15895] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(561), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(563), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
    ACTIONS(565), 12,
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
  [15932] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(501), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(503), 21,
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
  [15967] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(497), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(499), 19,
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
  [15999] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(509), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(511), 19,
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
  [16031] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(567), 1,
      sym_logical_and_operator,
    ACTIONS(513), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(515), 18,
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
  [16065] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(569), 1,
      sym_bitwise_or_operator,
    ACTIONS(517), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(519), 18,
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
  [16099] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(571), 1,
      sym_bitwise_xor_operator,
    ACTIONS(521), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(523), 18,
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
  [16133] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(573), 1,
      sym_bitwise_and_operator,
    ACTIONS(525), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(527), 18,
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
  [16167] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(575), 1,
      sym_equality_operator,
    ACTIONS(529), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(531), 18,
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
  [16201] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(577), 1,
      sym_relational_operator,
    ACTIONS(533), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(535), 18,
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
  [16235] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(579), 1,
      sym_shift_operator,
    ACTIONS(537), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(539), 18,
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
  [16269] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(581), 1,
      sym_additive_operator,
    ACTIONS(541), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(543), 18,
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
  [16303] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(583), 1,
      sym_multiplicative_operator,
    ACTIONS(545), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(547), 18,
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
  [16337] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(549), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(551), 19,
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
  [16369] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(459), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(461), 19,
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
  [16401] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(463), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(465), 19,
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
  [16433] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(467), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(469), 19,
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
  [16465] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(493), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(495), 19,
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
  [16497] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(471), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(473), 19,
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
  [16529] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(475), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(477), 19,
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
  [16561] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(479), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(481), 19,
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
  [16593] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(585), 1,
      sym_logical_or_operator,
    ACTIONS(483), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(485), 18,
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
  [16627] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(371), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(373), 19,
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
  [16659] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(567), 1,
      sym_logical_and_operator,
    ACTIONS(375), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(377), 18,
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
  [16693] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(381), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(383), 19,
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
  [16725] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(569), 1,
      sym_bitwise_or_operator,
    ACTIONS(385), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(387), 18,
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
  [16759] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(391), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(393), 19,
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
  [16791] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(571), 1,
      sym_bitwise_xor_operator,
    ACTIONS(395), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(397), 18,
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
  [16825] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(401), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(403), 19,
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
  [16857] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(573), 1,
      sym_bitwise_and_operator,
    ACTIONS(405), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(407), 18,
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
  [16891] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(411), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(413), 19,
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
  [16923] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(575), 1,
      sym_equality_operator,
    ACTIONS(415), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(417), 18,
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
  [16957] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(421), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(423), 19,
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
  [16989] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(577), 1,
      sym_relational_operator,
    ACTIONS(425), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(427), 18,
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
  [17023] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(431), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(433), 19,
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
  [17055] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(579), 1,
      sym_shift_operator,
    ACTIONS(435), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(437), 18,
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
  [17089] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(441), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(443), 19,
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
  [17121] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(581), 1,
      sym_additive_operator,
    ACTIONS(365), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(367), 18,
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
  [17155] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(445), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(447), 19,
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
  [17187] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(583), 1,
      sym_multiplicative_operator,
    ACTIONS(449), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(451), 18,
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
  [17221] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(589), 1,
      sym_assignment_operator,
    ACTIONS(553), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(555), 17,
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
  [17257] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(489), 1,
      sym__operand_separator,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(593), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(491), 13,
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
  [17293] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(499), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(497), 13,
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
  [17323] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(473), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(471), 13,
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
  [17353] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(477), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(475), 13,
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
  [17383] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(481), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(479), 13,
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
  [17413] = 4,
    ACTIONS(595), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(485), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(483), 12,
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
  [17445] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(373), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(371), 13,
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
  [17475] = 4,
    ACTIONS(597), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(377), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(375), 12,
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
  [17507] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(383), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(381), 13,
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
  [17537] = 4,
    ACTIONS(599), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(387), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(385), 13,
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
  [17569] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(393), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(391), 13,
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
  [17599] = 4,
    ACTIONS(601), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(397), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 12,
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
  [17631] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(403), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(401), 13,
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
  [17661] = 4,
    ACTIONS(603), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(407), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(405), 13,
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
  [17693] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(413), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(411), 13,
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
  [17723] = 4,
    ACTIONS(605), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(417), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(415), 12,
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
  [17755] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(423), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17785] = 4,
    ACTIONS(607), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(427), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 13,
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
  [17817] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(433), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17847] = 4,
    ACTIONS(609), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(435), 12,
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
  [17879] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(443), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(441), 13,
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
  [17909] = 4,
    ACTIONS(611), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(367), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(365), 12,
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
  [17941] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(447), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(445), 13,
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
  [17971] = 4,
    ACTIONS(613), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(451), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(449), 13,
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
  [18003] = 5,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(555), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 12,
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
  [18037] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(507), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(505), 13,
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
  [18067] = 4,
    ACTIONS(597), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(515), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(513), 12,
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
  [18099] = 4,
    ACTIONS(599), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(519), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(517), 13,
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
  [18131] = 4,
    ACTIONS(601), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(523), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(521), 12,
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
  [18163] = 4,
    ACTIONS(603), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(527), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(525), 13,
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
  [18195] = 4,
    ACTIONS(605), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(531), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(529), 12,
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
  [18227] = 4,
    ACTIONS(607), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(533), 13,
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
  [18259] = 4,
    ACTIONS(609), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(539), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(537), 12,
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
  [18291] = 4,
    ACTIONS(611), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(543), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(541), 12,
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
  [18323] = 4,
    ACTIONS(613), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(547), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(545), 13,
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
  [18355] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(551), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 13,
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
  [18385] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(491), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(489), 13,
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
  [18415] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(459), 13,
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
  [18445] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(495), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(493), 13,
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
  [18475] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(503), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(501), 13,
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
  [18505] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(511), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(509), 13,
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
  [18535] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(455), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(457), 19,
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
  [18567] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(489), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(491), 19,
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
  [18599] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(465), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(463), 13,
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
  [18629] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(469), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
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
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18659] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(457), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(455), 13,
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
  [18689] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(501), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(503), 19,
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
  [18721] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(505), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(507), 19,
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
  [18753] = 14,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(623), 1,
      sym_line_comment,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    ACTIONS(631), 1,
      sym_assignment_operator,
    ACTIONS(633), 1,
      sym__operand_separator,
    ACTIONS(635), 1,
      sym__data_separator,
    STATE(266), 1,
      aux_sym_integer_operands_repeat1,
    STATE(387), 1,
      aux_sym_integer_operands_repeat2,
    STATE(510), 1,
      sym__comment,
    ACTIONS(619), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(626), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(621), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [18802] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(487), 1,
      sym_logical_or_operator,
    ACTIONS(455), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(457), 11,
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
  [18831] = 12,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      sym__operand_separator,
    ACTIONS(635), 1,
      sym__data_separator,
    ACTIONS(641), 1,
      sym_line_comment,
    STATE(276), 1,
      aux_sym_integer_operands_repeat1,
    STATE(383), 1,
      aux_sym_integer_operands_repeat2,
    STATE(510), 1,
      sym__comment,
    ACTIONS(637), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(644), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(639), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [18874] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(631), 1,
      sym_assignment_operator,
    ACTIONS(647), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(649), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [18904] = 4,
    ACTIONS(651), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(427), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18930] = 3,
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
  [18954] = 4,
    ACTIONS(653), 1,
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
  [18980] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [19004] = 4,
    ACTIONS(655), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(367), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(365), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [19030] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [19054] = 4,
    ACTIONS(657), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(451), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(449), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19080] = 5,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    ACTIONS(661), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(555), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 9,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19108] = 10,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(667), 1,
      sym_line_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_integer_operands_repeat1,
    STATE(510), 1,
      sym__comment,
    ACTIONS(663), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(670), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(676), 2,
      sym__operand_separator,
      sym__data_separator,
    ACTIONS(665), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [19146] = 4,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19172] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(503), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(501), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19196] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(507), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(505), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19220] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(511), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(509), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19244] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(491), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(489), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19268] = 4,
    ACTIONS(683), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(515), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(513), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19294] = 4,
    ACTIONS(685), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(519), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(517), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19320] = 4,
    ACTIONS(687), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(523), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(521), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19346] = 4,
    ACTIONS(689), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(527), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(525), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19372] = 4,
    ACTIONS(691), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(531), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(529), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19398] = 4,
    ACTIONS(651), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(533), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19424] = 4,
    ACTIONS(653), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(539), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(537), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [19450] = 4,
    ACTIONS(655), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(543), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(541), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [19476] = 4,
    ACTIONS(657), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(547), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(545), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19502] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(551), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19526] = 4,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19552] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(631), 1,
      sym_assignment_operator,
    ACTIONS(663), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(665), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [19582] = 11,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(699), 1,
      sym_line_comment,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      sym__data_separator,
    STATE(317), 1,
      aux_sym_float_operands_repeat1,
    STATE(379), 1,
      aux_sym_integer_operands_repeat2,
    STATE(495), 1,
      sym__comment,
    ACTIONS(695), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(702), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(697), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [19622] = 3,
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
  [19646] = 3,
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
  [19670] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(631), 1,
      sym_assignment_operator,
    ACTIONS(709), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(711), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [19700] = 3,
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
  [19724] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(495), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(493), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19748] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(499), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(497), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19772] = 3,
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
  [19796] = 3,
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
  [19820] = 3,
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
  [19844] = 4,
    ACTIONS(713), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(485), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(483), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19870] = 3,
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
  [19894] = 4,
    ACTIONS(683), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(377), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(375), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19920] = 3,
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
  [19944] = 4,
    ACTIONS(685), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(387), 4,
      sym_assignment_operator,
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
  [19970] = 3,
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
  [19994] = 4,
    ACTIONS(687), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(397), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20020] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [20044] = 4,
    ACTIONS(689), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(407), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [20070] = 3,
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
  [20094] = 3,
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
  [20118] = 4,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20144] = 4,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20170] = 11,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      sym__data_separator,
    ACTIONS(723), 1,
      sym_line_comment,
    STATE(330), 1,
      aux_sym_float_operands_repeat1,
    STATE(386), 1,
      aux_sym_integer_operands_repeat2,
    STATE(495), 1,
      sym__comment,
    ACTIONS(719), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(726), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(721), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20210] = 4,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20236] = 4,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20262] = 4,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20288] = 4,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20314] = 4,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20340] = 4,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20366] = 4,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20392] = 4,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20418] = 4,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20444] = 4,
    ACTIONS(747), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(565), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(679), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20470] = 4,
    ACTIONS(691), 1,
      sym_equality_operator,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20496] = 3,
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
  [20520] = 10,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(753), 1,
      sym_line_comment,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      sym__data_separator,
    STATE(330), 1,
      aux_sym_float_operands_repeat1,
    STATE(495), 1,
      sym__comment,
    ACTIONS(749), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(756), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(751), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20557] = 3,
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
  [20579] = 3,
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
  [20601] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(765), 1,
      aux_sym__string_directive_token1,
    ACTIONS(565), 12,
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
  [20625] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(499), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(497), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20647] = 3,
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
  [20669] = 3,
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
  [20691] = 3,
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
  [20713] = 4,
    ACTIONS(767), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(485), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(483), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20737] = 3,
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
  [20759] = 4,
    ACTIONS(769), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(377), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(375), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20783] = 4,
    ACTIONS(771), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(387), 4,
      sym_assignment_operator,
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
  [20807] = 3,
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
  [20829] = 4,
    ACTIONS(773), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(397), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20853] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [20875] = 4,
    ACTIONS(775), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(407), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [20899] = 3,
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
  [20921] = 4,
    ACTIONS(777), 1,
      sym_equality_operator,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20945] = 3,
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
  [20967] = 4,
    ACTIONS(779), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(427), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [20991] = 3,
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
  [21013] = 4,
    ACTIONS(781), 1,
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
  [21037] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [21059] = 4,
    ACTIONS(783), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(367), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(365), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [21083] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [21105] = 4,
    ACTIONS(785), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(451), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(449), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21129] = 5,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(555), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 7,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21155] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(507), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(505), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21177] = 4,
    ACTIONS(769), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(515), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(513), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21201] = 4,
    ACTIONS(771), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(519), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(517), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21225] = 4,
    ACTIONS(773), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(523), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(521), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21249] = 4,
    ACTIONS(775), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(527), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(525), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21273] = 4,
    ACTIONS(777), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(531), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(529), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21297] = 4,
    ACTIONS(779), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(533), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21321] = 4,
    ACTIONS(781), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(539), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(537), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [21345] = 4,
    ACTIONS(783), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(543), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(541), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [21369] = 4,
    ACTIONS(785), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(547), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(545), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21393] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(489), 1,
      aux_sym__string_directive_token1,
    ACTIONS(491), 12,
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
  [21417] = 3,
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
  [21439] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(495), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(493), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21461] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(501), 1,
      aux_sym__string_directive_token1,
    ACTIONS(503), 12,
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
  [21485] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(511), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(509), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21507] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(463), 1,
      aux_sym__string_directive_token1,
    ACTIONS(465), 12,
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
  [21531] = 4,
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
  [21555] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(503), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(501), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21577] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(491), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(489), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21599] = 3,
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
  [21621] = 3,
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
  [21643] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(551), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21665] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(791), 1,
      sym__data_separator,
    STATE(384), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(719), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(721), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21692] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(793), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(795), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [21715] = 4,
    ACTIONS(595), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(457), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(455), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_assignment_operator,
  [21738] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(797), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(799), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [21761] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(791), 1,
      sym__data_separator,
    STATE(384), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(801), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(803), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21788] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(809), 1,
      sym__data_separator,
    STATE(384), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(805), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(807), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21815] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(749), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(751), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [21838] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(791), 1,
      sym__data_separator,
    STATE(384), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(812), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(814), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21865] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(791), 1,
      sym__data_separator,
    STATE(384), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(637), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(639), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21892] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(585), 1,
      sym_logical_or_operator,
    ACTIONS(455), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(457), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [21917] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(393), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(816), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(818), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(820), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21943] = 6,
    STATE(12), 1,
      sym__control_operand_separator,
    STATE(397), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(822), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(824), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(826), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
  [21969] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(832), 1,
      sym_assignment_operator,
    ACTIONS(828), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(830), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_COMMA,
  [21995] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(393), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(834), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(820), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(836), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22021] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(393), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(838), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(840), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(842), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22047] = 6,
    STATE(12), 1,
      sym__control_operand_separator,
    STATE(390), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(826), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(845), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(847), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22073] = 5,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    ACTIONS(853), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(851), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(849), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__control_operand_separator_token1,
  [22097] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(392), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(855), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(857), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(859), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22123] = 6,
    STATE(12), 1,
      sym__control_operand_separator,
    STATE(397), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(861), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(863), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(865), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
  [22149] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(389), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(868), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(870), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(872), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22175] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(403), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(874), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(878), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(876), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22202] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(882), 1,
      ts_builtin_sym_end,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      sym__operand_separator,
    STATE(401), 1,
      aux_sym_operands_repeat1,
    ACTIONS(884), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22229] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(890), 1,
      ts_builtin_sym_end,
    ACTIONS(894), 1,
      anon_sym_COMMA,
    ACTIONS(897), 1,
      sym__operand_separator,
    STATE(401), 1,
      aux_sym_operands_repeat1,
    ACTIONS(892), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22256] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      ts_builtin_sym_end,
    ACTIONS(904), 1,
      sym__operand_separator,
    STATE(400), 1,
      aux_sym_operands_repeat1,
    ACTIONS(902), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22283] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    STATE(403), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(906), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(910), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(908), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22310] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(916), 1,
      ts_builtin_sym_end,
    ACTIONS(920), 1,
      aux_sym__whitespace_token1,
    ACTIONS(922), 1,
      anon_sym_LPAREN,
    STATE(422), 1,
      sym__call_expression,
    ACTIONS(918), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22337] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(878), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(924), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(926), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22364] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(930), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(928), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__control_operand_separator_token1,
  [22382] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(934), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(932), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__control_operand_separator_token1,
  [22400] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(936), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(938), 7,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [22420] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(906), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(908), 7,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [22440] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(942), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(940), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__control_operand_separator_token1,
  [22458] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(940), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(942), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_COMMA,
  [22478] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(946), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(944), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__control_operand_separator_token1,
  [22496] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(863), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(861), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__control_operand_separator_token1,
  [22514] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(928), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(930), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_COMMA,
  [22534] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(948), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(950), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_COMMA,
  [22554] = 8,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(952), 1,
      anon_sym_CR,
    ACTIONS(954), 1,
      sym_line_comment,
    STATE(544), 1,
      sym__comment,
    ACTIONS(33), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(956), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22581] = 8,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(952), 1,
      anon_sym_CR,
    ACTIONS(954), 1,
      sym_line_comment,
    STATE(548), 1,
      sym__comment,
    ACTIONS(33), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(958), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22608] = 8,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(952), 1,
      anon_sym_CR,
    ACTIONS(954), 1,
      sym_line_comment,
    ACTIONS(960), 1,
      ts_builtin_sym_end,
    STATE(567), 1,
      sym__comment,
    ACTIONS(33), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(962), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22635] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(968), 1,
      aux_sym__whitespace_token1,
    ACTIONS(970), 1,
      anon_sym_LPAREN,
    ACTIONS(964), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(966), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22658] = 6,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(974), 1,
      sym_line_comment,
    STATE(548), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(972), 2,
      sym__line_separator,
      anon_sym_SEMI,
    ACTIONS(976), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22680] = 6,
    ACTIONS(960), 1,
      ts_builtin_sym_end,
    ACTIONS(974), 1,
      sym_line_comment,
    STATE(567), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(972), 2,
      sym__line_separator,
      anon_sym_SEMI,
    ACTIONS(978), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22702] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(980), 1,
      ts_builtin_sym_end,
    ACTIONS(982), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22720] = 6,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(974), 1,
      sym_line_comment,
    STATE(544), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(972), 2,
      sym__line_separator,
      anon_sym_SEMI,
    ACTIONS(984), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22742] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(986), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(988), 5,
      anon_sym_SEMI,
      aux_sym__whitespace_token1,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22760] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(990), 1,
      ts_builtin_sym_end,
    ACTIONS(992), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22778] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(994), 1,
      ts_builtin_sym_end,
    ACTIONS(996), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22796] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(593), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22814] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1002), 1,
      aux_sym__whitespace_token1,
    ACTIONS(998), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(1000), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22834] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1004), 1,
      ts_builtin_sym_end,
    ACTIONS(1006), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22852] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(952), 1,
      anon_sym_CR,
    ACTIONS(1008), 1,
      sym_line_comment,
    ACTIONS(33), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1010), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22873] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1012), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1014), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22888] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1016), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1018), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22903] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1020), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1022), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22918] = 3,
    ACTIONS(713), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(455), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [22933] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1024), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1026), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22948] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1028), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1030), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22963] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1032), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1034), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22978] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1036), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1038), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22993] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1040), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1042), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23008] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1044), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1046), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23023] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1032), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1034), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23038] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1048), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1050), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23053] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1032), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1034), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23068] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1052), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1054), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23083] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1056), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1058), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23098] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1060), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(1062), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23113] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1064), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23133] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    STATE(450), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1069), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23153] = 4,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    ACTIONS(1072), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(828), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23169] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
    STATE(450), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1074), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23189] = 4,
    ACTIONS(1080), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(972), 2,
      sym__line_separator,
      anon_sym_SEMI,
    ACTIONS(1082), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23205] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1084), 1,
      ts_builtin_sym_end,
    ACTIONS(1086), 1,
      anon_sym_CR,
    ACTIONS(1088), 1,
      anon_sym_LF,
    ACTIONS(1090), 1,
      sym_line_comment,
    STATE(556), 1,
      sym__comment,
  [23227] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    ACTIONS(1096), 1,
      sym_macro_parameter,
    STATE(491), 1,
      sym_macro_parameters,
    ACTIONS(1092), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23247] = 5,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    ACTIONS(1072), 1,
      sym_assignment_operator,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(828), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23265] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1086), 1,
      anon_sym_CR,
    ACTIONS(1088), 1,
      anon_sym_LF,
    ACTIONS(1101), 1,
      ts_builtin_sym_end,
    ACTIONS(1103), 1,
      sym_line_comment,
    STATE(570), 1,
      sym__comment,
  [23287] = 5,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    ACTIONS(1072), 1,
      sym_assignment_operator,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(828), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23305] = 5,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    ACTIONS(1072), 1,
      sym_assignment_operator,
    ACTIONS(1108), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(828), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23323] = 5,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    ACTIONS(1072), 1,
      sym_assignment_operator,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(828), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23341] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1086), 1,
      anon_sym_CR,
    ACTIONS(1088), 1,
      anon_sym_LF,
    ACTIONS(1114), 1,
      ts_builtin_sym_end,
    ACTIONS(1116), 1,
      sym_line_comment,
    STATE(564), 1,
      sym__comment,
  [23363] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1096), 1,
      sym_macro_parameter,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      sym_macro_parameters,
    ACTIONS(1118), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23383] = 5,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    ACTIONS(1072), 1,
      sym_assignment_operator,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(828), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23401] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1125), 1,
      anon_sym_DQUOTE,
    STATE(471), 1,
      aux_sym_string_repeat1,
    ACTIONS(1127), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23418] = 4,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1129), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23433] = 5,
    ACTIONS(1101), 1,
      ts_builtin_sym_end,
    ACTIONS(1132), 1,
      sym_line_comment,
    ACTIONS(1134), 1,
      sym__line_separator,
    STATE(570), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [23450] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1136), 1,
      anon_sym_DQUOTE,
    STATE(467), 1,
      aux_sym_string_repeat1,
    ACTIONS(1138), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23467] = 5,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    ACTIONS(1142), 1,
      sym__operand_separator,
    STATE(463), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [23484] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1144), 1,
      anon_sym_DQUOTE,
    STATE(469), 1,
      aux_sym_string_repeat1,
    ACTIONS(1146), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23501] = 3,
    ACTIONS(767), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(455), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [23514] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1148), 1,
      anon_sym_DQUOTE,
    STATE(469), 1,
      aux_sym_string_repeat1,
    ACTIONS(1150), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23531] = 5,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    ACTIONS(1153), 1,
      sym__operand_separator,
    STATE(466), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [23548] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1155), 1,
      anon_sym_DQUOTE,
    STATE(469), 1,
      aux_sym_string_repeat1,
    ACTIONS(1146), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23565] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1157), 1,
      anon_sym_DQUOTE,
    STATE(469), 1,
      aux_sym_string_repeat1,
    ACTIONS(1146), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23582] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    STATE(475), 1,
      aux_sym_string_repeat1,
    ACTIONS(1161), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23599] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(908), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23612] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1163), 1,
      anon_sym_DQUOTE,
    STATE(469), 1,
      aux_sym_string_repeat1,
    ACTIONS(1146), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23629] = 4,
    ACTIONS(1165), 1,
      sym_line_comment,
    STATE(497), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1167), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [23644] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1169), 1,
      anon_sym_DQUOTE,
    STATE(472), 1,
      aux_sym_string_repeat1,
    ACTIONS(1171), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23661] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(938), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23674] = 5,
    ACTIONS(1114), 1,
      ts_builtin_sym_end,
    ACTIONS(1134), 1,
      sym__line_separator,
    ACTIONS(1173), 1,
      sym_line_comment,
    STATE(564), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [23691] = 5,
    ACTIONS(1084), 1,
      ts_builtin_sym_end,
    ACTIONS(1134), 1,
      sym__line_separator,
    ACTIONS(1175), 1,
      sym_line_comment,
    STATE(556), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [23708] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(940), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23718] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    ACTIONS(1177), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23732] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(948), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23742] = 4,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    ACTIONS(1183), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [23756] = 4,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(1183), 1,
      sym_assignment_operator,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [23770] = 4,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(1183), 1,
      sym_assignment_operator,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [23784] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1189), 1,
      ts_builtin_sym_end,
    ACTIONS(1191), 1,
      anon_sym_CR,
    ACTIONS(1193), 1,
      anon_sym_LF,
  [23800] = 4,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(1183), 1,
      sym_assignment_operator,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [23814] = 4,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(1183), 1,
      sym_assignment_operator,
    ACTIONS(1197), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [23828] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
    ACTIONS(1201), 1,
      sym_macro_parameter,
    STATE(444), 1,
      sym_macro_parameters,
  [23844] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1205), 1,
      anon_sym_RPAREN,
    ACTIONS(1203), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23858] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(928), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23868] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1207), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [23879] = 3,
    ACTIONS(615), 1,
      anon_sym_LPAREN,
    ACTIONS(1183), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [23890] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(180), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [23899] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1209), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [23910] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1211), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [23919] = 3,
    ACTIONS(1189), 1,
      ts_builtin_sym_end,
    ACTIONS(1213), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [23930] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1191), 1,
      anon_sym_CR,
    ACTIONS(1193), 1,
      anon_sym_LF,
  [23943] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1215), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [23954] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1086), 1,
      anon_sym_CR,
    ACTIONS(1088), 1,
      anon_sym_LF,
  [23967] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(972), 1,
      aux_sym__statement_token1,
    ACTIONS(1189), 1,
      ts_builtin_sym_end,
  [23980] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1217), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [23991] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1219), 1,
      anon_sym_COMMA,
    ACTIONS(1221), 1,
      sym_macro_parameter,
  [24004] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1223), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [24013] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1225), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24024] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1227), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24035] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1229), 1,
      anon_sym_COMMA,
    ACTIONS(1231), 1,
      sym_macro_parameter,
  [24048] = 3,
    ACTIONS(1183), 1,
      sym_assignment_operator,
    ACTIONS(1233), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24059] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(1167), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [24068] = 3,
    ACTIONS(1183), 1,
      sym_assignment_operator,
    ACTIONS(1235), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24079] = 3,
    ACTIONS(1183), 1,
      sym_assignment_operator,
    ACTIONS(1237), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24090] = 3,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    ACTIONS(1183), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24101] = 3,
    ACTIONS(1183), 1,
      sym_assignment_operator,
    ACTIONS(1239), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24112] = 3,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
    ACTIONS(1183), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24123] = 2,
    ACTIONS(1241), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24131] = 2,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24139] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1245), 1,
      aux_sym__whitespace_token1,
  [24149] = 2,
    ACTIONS(1247), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24157] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1249), 1,
      aux_sym__string_directive_token1,
  [24167] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(928), 1,
      aux_sym__string_directive_token1,
  [24177] = 2,
    ACTIONS(1251), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24185] = 2,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24193] = 2,
    ACTIONS(1253), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24201] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(940), 1,
      aux_sym__string_directive_token1,
  [24211] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1231), 1,
      sym_macro_parameter,
  [24221] = 2,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24229] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1257), 1,
      aux_sym__whitespace_token1,
  [24239] = 2,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24247] = 2,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24255] = 2,
    ACTIONS(1263), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24263] = 2,
    ACTIONS(1265), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24271] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1267), 1,
      aux_sym__whitespace_token1,
  [24281] = 2,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24289] = 2,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24297] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1273), 1,
      aux_sym__whitespace_token1,
  [24307] = 2,
    ACTIONS(1275), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24315] = 2,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24323] = 2,
    ACTIONS(1279), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24331] = 2,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24339] = 2,
    ACTIONS(1283), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24347] = 2,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24355] = 2,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24363] = 2,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24371] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1213), 1,
      anon_sym_LF,
  [24381] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1289), 1,
      aux_sym__whitespace_token1,
  [24391] = 2,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24399] = 2,
    ACTIONS(960), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24407] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1293), 1,
      sym_macro_parameter,
  [24417] = 2,
    ACTIONS(1213), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24425] = 2,
    ACTIONS(1134), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24433] = 2,
    ACTIONS(1295), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24441] = 2,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24449] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1299), 1,
      aux_sym__string_directive_token1,
  [24459] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1221), 1,
      sym_macro_parameter,
  [24469] = 2,
    ACTIONS(1301), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24477] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1303), 1,
      sym_macro_parameter,
  [24487] = 2,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24495] = 2,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24503] = 2,
    ACTIONS(1309), 1,
      sym_macro_name,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24511] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1311), 1,
      aux_sym__whitespace_token1,
  [24521] = 2,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24529] = 2,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24537] = 2,
    ACTIONS(1317), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24545] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1319), 1,
      aux_sym__whitespace_token1,
  [24555] = 2,
    ACTIONS(1321), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24563] = 2,
    ACTIONS(1323), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24571] = 2,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24579] = 2,
    ACTIONS(1327), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24587] = 2,
    ACTIONS(1329), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24595] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1331), 1,
      anon_sym_LF,
  [24605] = 2,
    ACTIONS(1333), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24613] = 2,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [24621] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1337), 1,
      anon_sym_LF,
  [24631] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(972), 1,
      aux_sym__statement_token1,
  [24641] = 2,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 120,
  [SMALL_STATE(4)] = 237,
  [SMALL_STATE(5)] = 354,
  [SMALL_STATE(6)] = 497,
  [SMALL_STATE(7)] = 609,
  [SMALL_STATE(8)] = 749,
  [SMALL_STATE(9)] = 887,
  [SMALL_STATE(10)] = 1021,
  [SMALL_STATE(11)] = 1149,
  [SMALL_STATE(12)] = 1283,
  [SMALL_STATE(13)] = 1413,
  [SMALL_STATE(14)] = 1548,
  [SMALL_STATE(15)] = 1679,
  [SMALL_STATE(16)] = 1814,
  [SMALL_STATE(17)] = 1946,
  [SMALL_STATE(18)] = 2074,
  [SMALL_STATE(19)] = 2202,
  [SMALL_STATE(20)] = 2334,
  [SMALL_STATE(21)] = 2466,
  [SMALL_STATE(22)] = 2598,
  [SMALL_STATE(23)] = 2730,
  [SMALL_STATE(24)] = 2862,
  [SMALL_STATE(25)] = 2994,
  [SMALL_STATE(26)] = 3126,
  [SMALL_STATE(27)] = 3258,
  [SMALL_STATE(28)] = 3390,
  [SMALL_STATE(29)] = 3522,
  [SMALL_STATE(30)] = 3654,
  [SMALL_STATE(31)] = 3786,
  [SMALL_STATE(32)] = 3918,
  [SMALL_STATE(33)] = 4043,
  [SMALL_STATE(34)] = 4168,
  [SMALL_STATE(35)] = 4296,
  [SMALL_STATE(36)] = 4422,
  [SMALL_STATE(37)] = 4547,
  [SMALL_STATE(38)] = 4672,
  [SMALL_STATE(39)] = 4797,
  [SMALL_STATE(40)] = 4915,
  [SMALL_STATE(41)] = 5030,
  [SMALL_STATE(42)] = 5091,
  [SMALL_STATE(43)] = 5206,
  [SMALL_STATE(44)] = 5267,
  [SMALL_STATE(45)] = 5384,
  [SMALL_STATE(46)] = 5499,
  [SMALL_STATE(47)] = 5614,
  [SMALL_STATE(48)] = 5673,
  [SMALL_STATE(49)] = 5788,
  [SMALL_STATE(50)] = 5903,
  [SMALL_STATE(51)] = 6018,
  [SMALL_STATE(52)] = 6133,
  [SMALL_STATE(53)] = 6248,
  [SMALL_STATE(54)] = 6363,
  [SMALL_STATE(55)] = 6478,
  [SMALL_STATE(56)] = 6593,
  [SMALL_STATE(57)] = 6708,
  [SMALL_STATE(58)] = 6823,
  [SMALL_STATE(59)] = 6940,
  [SMALL_STATE(60)] = 7055,
  [SMALL_STATE(61)] = 7170,
  [SMALL_STATE(62)] = 7285,
  [SMALL_STATE(63)] = 7400,
  [SMALL_STATE(64)] = 7515,
  [SMALL_STATE(65)] = 7630,
  [SMALL_STATE(66)] = 7745,
  [SMALL_STATE(67)] = 7860,
  [SMALL_STATE(68)] = 7975,
  [SMALL_STATE(69)] = 8090,
  [SMALL_STATE(70)] = 8205,
  [SMALL_STATE(71)] = 8322,
  [SMALL_STATE(72)] = 8437,
  [SMALL_STATE(73)] = 8552,
  [SMALL_STATE(74)] = 8667,
  [SMALL_STATE(75)] = 8782,
  [SMALL_STATE(76)] = 8897,
  [SMALL_STATE(77)] = 9012,
  [SMALL_STATE(78)] = 9127,
  [SMALL_STATE(79)] = 9242,
  [SMALL_STATE(80)] = 9357,
  [SMALL_STATE(81)] = 9472,
  [SMALL_STATE(82)] = 9589,
  [SMALL_STATE(83)] = 9704,
  [SMALL_STATE(84)] = 9819,
  [SMALL_STATE(85)] = 9934,
  [SMALL_STATE(86)] = 10049,
  [SMALL_STATE(87)] = 10164,
  [SMALL_STATE(88)] = 10279,
  [SMALL_STATE(89)] = 10394,
  [SMALL_STATE(90)] = 10509,
  [SMALL_STATE(91)] = 10624,
  [SMALL_STATE(92)] = 10739,
  [SMALL_STATE(93)] = 10856,
  [SMALL_STATE(94)] = 10971,
  [SMALL_STATE(95)] = 11086,
  [SMALL_STATE(96)] = 11201,
  [SMALL_STATE(97)] = 11316,
  [SMALL_STATE(98)] = 11431,
  [SMALL_STATE(99)] = 11546,
  [SMALL_STATE(100)] = 11661,
  [SMALL_STATE(101)] = 11776,
  [SMALL_STATE(102)] = 11891,
  [SMALL_STATE(103)] = 11950,
  [SMALL_STATE(104)] = 12011,
  [SMALL_STATE(105)] = 12070,
  [SMALL_STATE(106)] = 12185,
  [SMALL_STATE(107)] = 12300,
  [SMALL_STATE(108)] = 12415,
  [SMALL_STATE(109)] = 12530,
  [SMALL_STATE(110)] = 12645,
  [SMALL_STATE(111)] = 12760,
  [SMALL_STATE(112)] = 12875,
  [SMALL_STATE(113)] = 12990,
  [SMALL_STATE(114)] = 13105,
  [SMALL_STATE(115)] = 13220,
  [SMALL_STATE(116)] = 13335,
  [SMALL_STATE(117)] = 13450,
  [SMALL_STATE(118)] = 13565,
  [SMALL_STATE(119)] = 13680,
  [SMALL_STATE(120)] = 13736,
  [SMALL_STATE(121)] = 13792,
  [SMALL_STATE(122)] = 13848,
  [SMALL_STATE(123)] = 13906,
  [SMALL_STATE(124)] = 13962,
  [SMALL_STATE(125)] = 14018,
  [SMALL_STATE(126)] = 14074,
  [SMALL_STATE(127)] = 14130,
  [SMALL_STATE(128)] = 14168,
  [SMALL_STATE(129)] = 14204,
  [SMALL_STATE(130)] = 14242,
  [SMALL_STATE(131)] = 14278,
  [SMALL_STATE(132)] = 14316,
  [SMALL_STATE(133)] = 14352,
  [SMALL_STATE(134)] = 14390,
  [SMALL_STATE(135)] = 14426,
  [SMALL_STATE(136)] = 14464,
  [SMALL_STATE(137)] = 14500,
  [SMALL_STATE(138)] = 14538,
  [SMALL_STATE(139)] = 14574,
  [SMALL_STATE(140)] = 14612,
  [SMALL_STATE(141)] = 14648,
  [SMALL_STATE(142)] = 14686,
  [SMALL_STATE(143)] = 14722,
  [SMALL_STATE(144)] = 14758,
  [SMALL_STATE(145)] = 14796,
  [SMALL_STATE(146)] = 14832,
  [SMALL_STATE(147)] = 14868,
  [SMALL_STATE(148)] = 14904,
  [SMALL_STATE(149)] = 14940,
  [SMALL_STATE(150)] = 14976,
  [SMALL_STATE(151)] = 15012,
  [SMALL_STATE(152)] = 15048,
  [SMALL_STATE(153)] = 15086,
  [SMALL_STATE(154)] = 15122,
  [SMALL_STATE(155)] = 15158,
  [SMALL_STATE(156)] = 15194,
  [SMALL_STATE(157)] = 15230,
  [SMALL_STATE(158)] = 15266,
  [SMALL_STATE(159)] = 15302,
  [SMALL_STATE(160)] = 15340,
  [SMALL_STATE(161)] = 15378,
  [SMALL_STATE(162)] = 15416,
  [SMALL_STATE(163)] = 15454,
  [SMALL_STATE(164)] = 15492,
  [SMALL_STATE(165)] = 15530,
  [SMALL_STATE(166)] = 15568,
  [SMALL_STATE(167)] = 15606,
  [SMALL_STATE(168)] = 15644,
  [SMALL_STATE(169)] = 15680,
  [SMALL_STATE(170)] = 15720,
  [SMALL_STATE(171)] = 15755,
  [SMALL_STATE(172)] = 15790,
  [SMALL_STATE(173)] = 15825,
  [SMALL_STATE(174)] = 15860,
  [SMALL_STATE(175)] = 15895,
  [SMALL_STATE(176)] = 15932,
  [SMALL_STATE(177)] = 15967,
  [SMALL_STATE(178)] = 15999,
  [SMALL_STATE(179)] = 16031,
  [SMALL_STATE(180)] = 16065,
  [SMALL_STATE(181)] = 16099,
  [SMALL_STATE(182)] = 16133,
  [SMALL_STATE(183)] = 16167,
  [SMALL_STATE(184)] = 16201,
  [SMALL_STATE(185)] = 16235,
  [SMALL_STATE(186)] = 16269,
  [SMALL_STATE(187)] = 16303,
  [SMALL_STATE(188)] = 16337,
  [SMALL_STATE(189)] = 16369,
  [SMALL_STATE(190)] = 16401,
  [SMALL_STATE(191)] = 16433,
  [SMALL_STATE(192)] = 16465,
  [SMALL_STATE(193)] = 16497,
  [SMALL_STATE(194)] = 16529,
  [SMALL_STATE(195)] = 16561,
  [SMALL_STATE(196)] = 16593,
  [SMALL_STATE(197)] = 16627,
  [SMALL_STATE(198)] = 16659,
  [SMALL_STATE(199)] = 16693,
  [SMALL_STATE(200)] = 16725,
  [SMALL_STATE(201)] = 16759,
  [SMALL_STATE(202)] = 16791,
  [SMALL_STATE(203)] = 16825,
  [SMALL_STATE(204)] = 16857,
  [SMALL_STATE(205)] = 16891,
  [SMALL_STATE(206)] = 16923,
  [SMALL_STATE(207)] = 16957,
  [SMALL_STATE(208)] = 16989,
  [SMALL_STATE(209)] = 17023,
  [SMALL_STATE(210)] = 17055,
  [SMALL_STATE(211)] = 17089,
  [SMALL_STATE(212)] = 17121,
  [SMALL_STATE(213)] = 17155,
  [SMALL_STATE(214)] = 17187,
  [SMALL_STATE(215)] = 17221,
  [SMALL_STATE(216)] = 17257,
  [SMALL_STATE(217)] = 17293,
  [SMALL_STATE(218)] = 17323,
  [SMALL_STATE(219)] = 17353,
  [SMALL_STATE(220)] = 17383,
  [SMALL_STATE(221)] = 17413,
  [SMALL_STATE(222)] = 17445,
  [SMALL_STATE(223)] = 17475,
  [SMALL_STATE(224)] = 17507,
  [SMALL_STATE(225)] = 17537,
  [SMALL_STATE(226)] = 17569,
  [SMALL_STATE(227)] = 17599,
  [SMALL_STATE(228)] = 17631,
  [SMALL_STATE(229)] = 17661,
  [SMALL_STATE(230)] = 17693,
  [SMALL_STATE(231)] = 17723,
  [SMALL_STATE(232)] = 17755,
  [SMALL_STATE(233)] = 17785,
  [SMALL_STATE(234)] = 17817,
  [SMALL_STATE(235)] = 17847,
  [SMALL_STATE(236)] = 17879,
  [SMALL_STATE(237)] = 17909,
  [SMALL_STATE(238)] = 17941,
  [SMALL_STATE(239)] = 17971,
  [SMALL_STATE(240)] = 18003,
  [SMALL_STATE(241)] = 18037,
  [SMALL_STATE(242)] = 18067,
  [SMALL_STATE(243)] = 18099,
  [SMALL_STATE(244)] = 18131,
  [SMALL_STATE(245)] = 18163,
  [SMALL_STATE(246)] = 18195,
  [SMALL_STATE(247)] = 18227,
  [SMALL_STATE(248)] = 18259,
  [SMALL_STATE(249)] = 18291,
  [SMALL_STATE(250)] = 18323,
  [SMALL_STATE(251)] = 18355,
  [SMALL_STATE(252)] = 18385,
  [SMALL_STATE(253)] = 18415,
  [SMALL_STATE(254)] = 18445,
  [SMALL_STATE(255)] = 18475,
  [SMALL_STATE(256)] = 18505,
  [SMALL_STATE(257)] = 18535,
  [SMALL_STATE(258)] = 18567,
  [SMALL_STATE(259)] = 18599,
  [SMALL_STATE(260)] = 18629,
  [SMALL_STATE(261)] = 18659,
  [SMALL_STATE(262)] = 18689,
  [SMALL_STATE(263)] = 18721,
  [SMALL_STATE(264)] = 18753,
  [SMALL_STATE(265)] = 18802,
  [SMALL_STATE(266)] = 18831,
  [SMALL_STATE(267)] = 18874,
  [SMALL_STATE(268)] = 18904,
  [SMALL_STATE(269)] = 18930,
  [SMALL_STATE(270)] = 18954,
  [SMALL_STATE(271)] = 18980,
  [SMALL_STATE(272)] = 19004,
  [SMALL_STATE(273)] = 19030,
  [SMALL_STATE(274)] = 19054,
  [SMALL_STATE(275)] = 19080,
  [SMALL_STATE(276)] = 19108,
  [SMALL_STATE(277)] = 19146,
  [SMALL_STATE(278)] = 19172,
  [SMALL_STATE(279)] = 19196,
  [SMALL_STATE(280)] = 19220,
  [SMALL_STATE(281)] = 19244,
  [SMALL_STATE(282)] = 19268,
  [SMALL_STATE(283)] = 19294,
  [SMALL_STATE(284)] = 19320,
  [SMALL_STATE(285)] = 19346,
  [SMALL_STATE(286)] = 19372,
  [SMALL_STATE(287)] = 19398,
  [SMALL_STATE(288)] = 19424,
  [SMALL_STATE(289)] = 19450,
  [SMALL_STATE(290)] = 19476,
  [SMALL_STATE(291)] = 19502,
  [SMALL_STATE(292)] = 19526,
  [SMALL_STATE(293)] = 19552,
  [SMALL_STATE(294)] = 19582,
  [SMALL_STATE(295)] = 19622,
  [SMALL_STATE(296)] = 19646,
  [SMALL_STATE(297)] = 19670,
  [SMALL_STATE(298)] = 19700,
  [SMALL_STATE(299)] = 19724,
  [SMALL_STATE(300)] = 19748,
  [SMALL_STATE(301)] = 19772,
  [SMALL_STATE(302)] = 19796,
  [SMALL_STATE(303)] = 19820,
  [SMALL_STATE(304)] = 19844,
  [SMALL_STATE(305)] = 19870,
  [SMALL_STATE(306)] = 19894,
  [SMALL_STATE(307)] = 19920,
  [SMALL_STATE(308)] = 19944,
  [SMALL_STATE(309)] = 19970,
  [SMALL_STATE(310)] = 19994,
  [SMALL_STATE(311)] = 20020,
  [SMALL_STATE(312)] = 20044,
  [SMALL_STATE(313)] = 20070,
  [SMALL_STATE(314)] = 20094,
  [SMALL_STATE(315)] = 20118,
  [SMALL_STATE(316)] = 20144,
  [SMALL_STATE(317)] = 20170,
  [SMALL_STATE(318)] = 20210,
  [SMALL_STATE(319)] = 20236,
  [SMALL_STATE(320)] = 20262,
  [SMALL_STATE(321)] = 20288,
  [SMALL_STATE(322)] = 20314,
  [SMALL_STATE(323)] = 20340,
  [SMALL_STATE(324)] = 20366,
  [SMALL_STATE(325)] = 20392,
  [SMALL_STATE(326)] = 20418,
  [SMALL_STATE(327)] = 20444,
  [SMALL_STATE(328)] = 20470,
  [SMALL_STATE(329)] = 20496,
  [SMALL_STATE(330)] = 20520,
  [SMALL_STATE(331)] = 20557,
  [SMALL_STATE(332)] = 20579,
  [SMALL_STATE(333)] = 20601,
  [SMALL_STATE(334)] = 20625,
  [SMALL_STATE(335)] = 20647,
  [SMALL_STATE(336)] = 20669,
  [SMALL_STATE(337)] = 20691,
  [SMALL_STATE(338)] = 20713,
  [SMALL_STATE(339)] = 20737,
  [SMALL_STATE(340)] = 20759,
  [SMALL_STATE(341)] = 20783,
  [SMALL_STATE(342)] = 20807,
  [SMALL_STATE(343)] = 20829,
  [SMALL_STATE(344)] = 20853,
  [SMALL_STATE(345)] = 20875,
  [SMALL_STATE(346)] = 20899,
  [SMALL_STATE(347)] = 20921,
  [SMALL_STATE(348)] = 20945,
  [SMALL_STATE(349)] = 20967,
  [SMALL_STATE(350)] = 20991,
  [SMALL_STATE(351)] = 21013,
  [SMALL_STATE(352)] = 21037,
  [SMALL_STATE(353)] = 21059,
  [SMALL_STATE(354)] = 21083,
  [SMALL_STATE(355)] = 21105,
  [SMALL_STATE(356)] = 21129,
  [SMALL_STATE(357)] = 21155,
  [SMALL_STATE(358)] = 21177,
  [SMALL_STATE(359)] = 21201,
  [SMALL_STATE(360)] = 21225,
  [SMALL_STATE(361)] = 21249,
  [SMALL_STATE(362)] = 21273,
  [SMALL_STATE(363)] = 21297,
  [SMALL_STATE(364)] = 21321,
  [SMALL_STATE(365)] = 21345,
  [SMALL_STATE(366)] = 21369,
  [SMALL_STATE(367)] = 21393,
  [SMALL_STATE(368)] = 21417,
  [SMALL_STATE(369)] = 21439,
  [SMALL_STATE(370)] = 21461,
  [SMALL_STATE(371)] = 21485,
  [SMALL_STATE(372)] = 21507,
  [SMALL_STATE(373)] = 21531,
  [SMALL_STATE(374)] = 21555,
  [SMALL_STATE(375)] = 21577,
  [SMALL_STATE(376)] = 21599,
  [SMALL_STATE(377)] = 21621,
  [SMALL_STATE(378)] = 21643,
  [SMALL_STATE(379)] = 21665,
  [SMALL_STATE(380)] = 21692,
  [SMALL_STATE(381)] = 21715,
  [SMALL_STATE(382)] = 21738,
  [SMALL_STATE(383)] = 21761,
  [SMALL_STATE(384)] = 21788,
  [SMALL_STATE(385)] = 21815,
  [SMALL_STATE(386)] = 21838,
  [SMALL_STATE(387)] = 21865,
  [SMALL_STATE(388)] = 21892,
  [SMALL_STATE(389)] = 21917,
  [SMALL_STATE(390)] = 21943,
  [SMALL_STATE(391)] = 21969,
  [SMALL_STATE(392)] = 21995,
  [SMALL_STATE(393)] = 22021,
  [SMALL_STATE(394)] = 22047,
  [SMALL_STATE(395)] = 22073,
  [SMALL_STATE(396)] = 22097,
  [SMALL_STATE(397)] = 22123,
  [SMALL_STATE(398)] = 22149,
  [SMALL_STATE(399)] = 22175,
  [SMALL_STATE(400)] = 22202,
  [SMALL_STATE(401)] = 22229,
  [SMALL_STATE(402)] = 22256,
  [SMALL_STATE(403)] = 22283,
  [SMALL_STATE(404)] = 22310,
  [SMALL_STATE(405)] = 22337,
  [SMALL_STATE(406)] = 22364,
  [SMALL_STATE(407)] = 22382,
  [SMALL_STATE(408)] = 22400,
  [SMALL_STATE(409)] = 22420,
  [SMALL_STATE(410)] = 22440,
  [SMALL_STATE(411)] = 22458,
  [SMALL_STATE(412)] = 22478,
  [SMALL_STATE(413)] = 22496,
  [SMALL_STATE(414)] = 22514,
  [SMALL_STATE(415)] = 22534,
  [SMALL_STATE(416)] = 22554,
  [SMALL_STATE(417)] = 22581,
  [SMALL_STATE(418)] = 22608,
  [SMALL_STATE(419)] = 22635,
  [SMALL_STATE(420)] = 22658,
  [SMALL_STATE(421)] = 22680,
  [SMALL_STATE(422)] = 22702,
  [SMALL_STATE(423)] = 22720,
  [SMALL_STATE(424)] = 22742,
  [SMALL_STATE(425)] = 22760,
  [SMALL_STATE(426)] = 22778,
  [SMALL_STATE(427)] = 22796,
  [SMALL_STATE(428)] = 22814,
  [SMALL_STATE(429)] = 22834,
  [SMALL_STATE(430)] = 22852,
  [SMALL_STATE(431)] = 22873,
  [SMALL_STATE(432)] = 22888,
  [SMALL_STATE(433)] = 22903,
  [SMALL_STATE(434)] = 22918,
  [SMALL_STATE(435)] = 22933,
  [SMALL_STATE(436)] = 22948,
  [SMALL_STATE(437)] = 22963,
  [SMALL_STATE(438)] = 22978,
  [SMALL_STATE(439)] = 22993,
  [SMALL_STATE(440)] = 23008,
  [SMALL_STATE(441)] = 23023,
  [SMALL_STATE(442)] = 23038,
  [SMALL_STATE(443)] = 23053,
  [SMALL_STATE(444)] = 23068,
  [SMALL_STATE(445)] = 23083,
  [SMALL_STATE(446)] = 23098,
  [SMALL_STATE(447)] = 23113,
  [SMALL_STATE(448)] = 23133,
  [SMALL_STATE(449)] = 23153,
  [SMALL_STATE(450)] = 23169,
  [SMALL_STATE(451)] = 23189,
  [SMALL_STATE(452)] = 23205,
  [SMALL_STATE(453)] = 23227,
  [SMALL_STATE(454)] = 23247,
  [SMALL_STATE(455)] = 23265,
  [SMALL_STATE(456)] = 23287,
  [SMALL_STATE(457)] = 23305,
  [SMALL_STATE(458)] = 23323,
  [SMALL_STATE(459)] = 23341,
  [SMALL_STATE(460)] = 23363,
  [SMALL_STATE(461)] = 23383,
  [SMALL_STATE(462)] = 23401,
  [SMALL_STATE(463)] = 23418,
  [SMALL_STATE(464)] = 23433,
  [SMALL_STATE(465)] = 23450,
  [SMALL_STATE(466)] = 23467,
  [SMALL_STATE(467)] = 23484,
  [SMALL_STATE(468)] = 23501,
  [SMALL_STATE(469)] = 23514,
  [SMALL_STATE(470)] = 23531,
  [SMALL_STATE(471)] = 23548,
  [SMALL_STATE(472)] = 23565,
  [SMALL_STATE(473)] = 23582,
  [SMALL_STATE(474)] = 23599,
  [SMALL_STATE(475)] = 23612,
  [SMALL_STATE(476)] = 23629,
  [SMALL_STATE(477)] = 23644,
  [SMALL_STATE(478)] = 23661,
  [SMALL_STATE(479)] = 23674,
  [SMALL_STATE(480)] = 23691,
  [SMALL_STATE(481)] = 23708,
  [SMALL_STATE(482)] = 23718,
  [SMALL_STATE(483)] = 23732,
  [SMALL_STATE(484)] = 23742,
  [SMALL_STATE(485)] = 23756,
  [SMALL_STATE(486)] = 23770,
  [SMALL_STATE(487)] = 23784,
  [SMALL_STATE(488)] = 23800,
  [SMALL_STATE(489)] = 23814,
  [SMALL_STATE(490)] = 23828,
  [SMALL_STATE(491)] = 23844,
  [SMALL_STATE(492)] = 23858,
  [SMALL_STATE(493)] = 23868,
  [SMALL_STATE(494)] = 23879,
  [SMALL_STATE(495)] = 23890,
  [SMALL_STATE(496)] = 23899,
  [SMALL_STATE(497)] = 23910,
  [SMALL_STATE(498)] = 23919,
  [SMALL_STATE(499)] = 23930,
  [SMALL_STATE(500)] = 23943,
  [SMALL_STATE(501)] = 23954,
  [SMALL_STATE(502)] = 23967,
  [SMALL_STATE(503)] = 23980,
  [SMALL_STATE(504)] = 23991,
  [SMALL_STATE(505)] = 24004,
  [SMALL_STATE(506)] = 24013,
  [SMALL_STATE(507)] = 24024,
  [SMALL_STATE(508)] = 24035,
  [SMALL_STATE(509)] = 24048,
  [SMALL_STATE(510)] = 24059,
  [SMALL_STATE(511)] = 24068,
  [SMALL_STATE(512)] = 24079,
  [SMALL_STATE(513)] = 24090,
  [SMALL_STATE(514)] = 24101,
  [SMALL_STATE(515)] = 24112,
  [SMALL_STATE(516)] = 24123,
  [SMALL_STATE(517)] = 24131,
  [SMALL_STATE(518)] = 24139,
  [SMALL_STATE(519)] = 24149,
  [SMALL_STATE(520)] = 24157,
  [SMALL_STATE(521)] = 24167,
  [SMALL_STATE(522)] = 24177,
  [SMALL_STATE(523)] = 24185,
  [SMALL_STATE(524)] = 24193,
  [SMALL_STATE(525)] = 24201,
  [SMALL_STATE(526)] = 24211,
  [SMALL_STATE(527)] = 24221,
  [SMALL_STATE(528)] = 24229,
  [SMALL_STATE(529)] = 24239,
  [SMALL_STATE(530)] = 24247,
  [SMALL_STATE(531)] = 24255,
  [SMALL_STATE(532)] = 24263,
  [SMALL_STATE(533)] = 24271,
  [SMALL_STATE(534)] = 24281,
  [SMALL_STATE(535)] = 24289,
  [SMALL_STATE(536)] = 24297,
  [SMALL_STATE(537)] = 24307,
  [SMALL_STATE(538)] = 24315,
  [SMALL_STATE(539)] = 24323,
  [SMALL_STATE(540)] = 24331,
  [SMALL_STATE(541)] = 24339,
  [SMALL_STATE(542)] = 24347,
  [SMALL_STATE(543)] = 24355,
  [SMALL_STATE(544)] = 24363,
  [SMALL_STATE(545)] = 24371,
  [SMALL_STATE(546)] = 24381,
  [SMALL_STATE(547)] = 24391,
  [SMALL_STATE(548)] = 24399,
  [SMALL_STATE(549)] = 24407,
  [SMALL_STATE(550)] = 24417,
  [SMALL_STATE(551)] = 24425,
  [SMALL_STATE(552)] = 24433,
  [SMALL_STATE(553)] = 24441,
  [SMALL_STATE(554)] = 24449,
  [SMALL_STATE(555)] = 24459,
  [SMALL_STATE(556)] = 24469,
  [SMALL_STATE(557)] = 24477,
  [SMALL_STATE(558)] = 24487,
  [SMALL_STATE(559)] = 24495,
  [SMALL_STATE(560)] = 24503,
  [SMALL_STATE(561)] = 24511,
  [SMALL_STATE(562)] = 24521,
  [SMALL_STATE(563)] = 24529,
  [SMALL_STATE(564)] = 24537,
  [SMALL_STATE(565)] = 24545,
  [SMALL_STATE(566)] = 24555,
  [SMALL_STATE(567)] = 24563,
  [SMALL_STATE(568)] = 24571,
  [SMALL_STATE(569)] = 24579,
  [SMALL_STATE(570)] = 24587,
  [SMALL_STATE(571)] = 24595,
  [SMALL_STATE(572)] = 24605,
  [SMALL_STATE(573)] = 24613,
  [SMALL_STATE(574)] = 24621,
  [SMALL_STATE(575)] = 24631,
  [SMALL_STATE(576)] = 24641,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 2, 0, 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(575),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(565),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(561),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(533),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(536),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(424),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(404),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat2, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat2, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 11),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 11),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 17),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 3, 0, 17),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0), SHIFT(47),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0), SHIFT(104),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 7),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 7),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0), SHIFT(102),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4, 0, 7),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4, 0, 7),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 7),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 7),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 13),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 13),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 13),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 13),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 13),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 13),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 13),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 13),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 13),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 13),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 13),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 13),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 13),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 13),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 13),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 13),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 13),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 13),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 25),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 25),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 26),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 26),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 27),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 27),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 28),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 28),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 13),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 13),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 13),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 13),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 18),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 18),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 21),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 21),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 22),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 22),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 25),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 25),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 25),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 25),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 25),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 25),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 25),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 25),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 25),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 25),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 25),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 25),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 25),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 25),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 25),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 25),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 25),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 25),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 25),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 25),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 16),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 16),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_operand, 1, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_operand, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 18),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 3, 0, 18),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_operands, 1, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_operands, 1, 0, 0),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 1, 0, 0), SHIFT(510),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 1, 0, 0), SHIFT(476),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_operands, 2, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_operands, 2, 0, 0),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 2, 0, 0), SHIFT(510),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 2, 0, 0), SHIFT(476),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 4, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 4, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operands, 1, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operands, 1, 0, 0),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_float_operands, 1, 0, 0), SHIFT(495),
  [702] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_float_operands, 1, 0, 0), SHIFT(13),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 3, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 3, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operands, 2, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operands, 2, 0, 0),
  [723] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_float_operands, 2, 0, 0), SHIFT(495),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_float_operands, 2, 0, 0), SHIFT(13),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0),
  [753] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(495),
  [756] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [759] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 3, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 3, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 4, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 4, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_operands, 3, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_operands, 3, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat2, 2, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat2, 2, 0, 0),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(384),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operands, 3, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operands, 3, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_directive, 4, 0, 14),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_directive, 4, 0, 14),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_operands, 2, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 4, 0, 14),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 4, 0, 14),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_directive_repeat1, 2, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__integer_directive_repeat1, 2, 0, 0),
  [842] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__integer_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_operands, 1, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_operand, 1, 0, 0),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 3, 0, 14),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 3, 0, 14),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_directive, 3, 0, 14),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_directive, 3, 0, 14),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 17),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 17),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 24),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 24),
  [894] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 24), SHIFT_REPEAT(32),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 24), SHIFT_REPEAT(32),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 11),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 11),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(508),
  [913] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(526),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_type, 1, 0, 0),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_flag, 1, 0, 0),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 23),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 23),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 9),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 9),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 6),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 10),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 10),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 12),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 12),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 5),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 5),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 2, 0, 0),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 14),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 3, 0, 14),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 9),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 7, 0, 9),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 29),
  [1022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 7, 0, 29),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 20),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 7, 0, 20),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 2),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 3),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 29),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 8, 0, 29),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 19),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 4, 0, 19),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 20),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 6, 0, 20),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 9),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 6, 0, 9),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 20),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 5, 0, 20),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 9),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 5, 0, 9),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 4),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 4),
  [1064] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(504),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1069] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(504),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1074] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(504),
  [1077] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(555),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4, 0, 15),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1098] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(279),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 7),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(157),
  [1108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(357),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(241),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 8),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(263),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 24), SHIFT_REPEAT(33),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [1150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 1, 0, 0),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1247] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_mnemonic, 1, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 5, 0, 15),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_mnemonic, 1, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4, 0, 8),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4, 0, 0),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 7),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
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
    [ts_external_token__operator_space] = true,
    [ts_external_token__data_separator] = true,
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
