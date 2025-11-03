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
#define STATE_COUNT 638
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 161
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 39

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
  aux_sym_integer_operands_token1 = 39,
  anon_sym_DOTfloat = 40,
  anon_sym_DOTdouble = 41,
  anon_sym_DOTsingle = 42,
  aux_sym__string_directive_token1 = 43,
  anon_sym_DOTasciz = 44,
  anon_sym_DOTascii = 45,
  anon_sym_DOTasciiz = 46,
  anon_sym_DOTstring = 47,
  anon_sym_DOTstringz = 48,
  aux_sym_control_mnemonic_token1 = 49,
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
  sym__line_separator = 90,
  sym__data_separator = 91,
  sym_program = 92,
  sym__statement = 93,
  sym__comment = 94,
  sym_directive = 95,
  sym__macro_directive = 96,
  sym_macro_parameters = 97,
  sym__integer_directive = 98,
  sym_integer_mnemonic = 99,
  sym_integer_operands = 100,
  sym__float_directive = 101,
  sym_float_mnemonic = 102,
  sym_float_operands = 103,
  sym__float_operand = 104,
  sym__string_directive = 105,
  sym_string_mnemonic = 106,
  sym__string_operand = 107,
  sym__control_directive = 108,
  sym_control_mnemonic = 109,
  sym_control_operands = 110,
  sym__control_operand = 111,
  sym__control_operand_separator = 112,
  sym_section_type = 113,
  sym_option_flag = 114,
  sym_instruction = 115,
  sym_operands = 116,
  sym__operand = 117,
  sym__call_expression = 118,
  sym__assignment_expression = 119,
  sym__wrapped_assignment_expression = 120,
  sym__logical_or_expression = 121,
  sym__wrapped_logical_or_expression = 122,
  sym__logical_and_expression = 123,
  sym__wrapped_logical_and_expression = 124,
  sym__bitwise_or_expression = 125,
  sym__wrapped_bitwise_or_expression = 126,
  sym__bitwise_xor_expression = 127,
  sym__wrapped_bitwise_xor_expression = 128,
  sym__bitwise_and_expression = 129,
  sym__wrapped_bitwise_and_expression = 130,
  sym__equality_expression = 131,
  sym__wrapped_equality_expression = 132,
  sym__relational_expression = 133,
  sym__wrapped_relational_expression = 134,
  sym__shift_expression = 135,
  sym__wrapped_shift_expression = 136,
  sym__additive_expression = 137,
  sym__wrapped_additive_expression = 138,
  sym__multiplicative_expression = 139,
  sym__wrapped_multiplicative_expression = 140,
  sym__simple_expression = 141,
  sym_parenthesized_expression = 142,
  sym_unary_expression = 143,
  sym_relocation_expression = 144,
  sym_decimal = 145,
  sym_char = 146,
  sym_string = 147,
  sym__label = 148,
  sym_local_label_reference = 149,
  sym_symbol = 150,
  sym_address = 151,
  aux_sym_program_repeat1 = 152,
  aux_sym_macro_parameters_repeat1 = 153,
  aux_sym__integer_directive_repeat1 = 154,
  aux_sym_integer_operands_repeat1 = 155,
  aux_sym_integer_operands_repeat2 = 156,
  aux_sym_float_operands_repeat1 = 157,
  aux_sym_control_operands_repeat1 = 158,
  aux_sym_operands_repeat1 = 159,
  aux_sym_string_repeat1 = 160,
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
  [aux_sym_integer_operands_token1] = "integer_operands_token1",
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
  [aux_sym_integer_operands_token1] = aux_sym_integer_operands_token1,
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
  [aux_sym_integer_operands_token1] = {
    .visible = false,
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
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 2},
  [20] = {.index = 31, .length = 2},
  [21] = {.index = 33, .length = 1},
  [22] = {.index = 34, .length = 2},
  [23] = {.index = 36, .length = 2},
  [24] = {.index = 38, .length = 3},
  [25] = {.index = 41, .length = 1},
  [26] = {.index = 42, .length = 1},
  [27] = {.index = 43, .length = 1},
  [28] = {.index = 44, .length = 2},
  [29] = {.index = 46, .length = 3},
  [30] = {.index = 49, .length = 1},
  [31] = {.index = 50, .length = 3},
  [32] = {.index = 53, .length = 2},
  [33] = {.index = 55, .length = 2},
  [34] = {.index = 57, .length = 2},
  [35] = {.index = 59, .length = 3},
  [36] = {.index = 62, .length = 3},
  [37] = {.index = 65, .length = 3},
  [38] = {.index = 68, .length = 3},
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
    {field_name, 3},
  [25] =
    {field_opcode, 0},
    {field_operands, 3},
  [27] =
    {field_opcode, 0},
    {field_operands, 3, .inherited = true},
  [29] =
    {field_argument, 1},
    {field_operator, 0},
  [31] =
    {field_operand, 0},
    {field_operand, 1, .inherited = true},
  [33] =
    {field_operands, 1},
  [34] =
    {field_mnemonic, 0},
    {field_operands, 3},
  [36] =
    {field_mnemonic, 0},
    {field_string, 2},
  [38] =
    {field_mnemonic, 0},
    {field_name, 2},
    {field_parameters, 4},
  [41] =
    {field_base, 1},
  [42] =
    {field_argument, 1},
  [43] =
    {field_operand, 1},
  [44] =
    {field_operand, 0, .inherited = true},
    {field_operand, 1, .inherited = true},
  [46] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [49] =
    {field_operands, 2},
  [50] =
    {field_mnemonic, 0},
    {field_name, 3},
    {field_parameters, 5},
  [53] =
    {field_argument, 2},
    {field_type, 0},
  [55] =
    {field_base, 2},
    {field_offset, 0},
  [57] =
    {field_offset, 0},
    {field_operands, 2},
  [59] =
    {field_mnemonic, 0},
    {field_name, 2},
    {field_parameters, 5},
  [62] =
    {field_mnemonic, 0},
    {field_name, 3},
    {field_parameters, 6},
  [65] =
    {field_mnemonic, 0},
    {field_name, 2},
    {field_parameters, 6},
  [68] =
    {field_mnemonic, 0},
    {field_name, 3},
    {field_parameters, 7},
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 12,
  [25] = 13,
  [26] = 12,
  [27] = 13,
  [28] = 21,
  [29] = 20,
  [30] = 21,
  [31] = 20,
  [32] = 21,
  [33] = 20,
  [34] = 20,
  [35] = 21,
  [36] = 21,
  [37] = 20,
  [38] = 38,
  [39] = 38,
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
  [58] = 58,
  [59] = 51,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 51,
  [77] = 60,
  [78] = 61,
  [79] = 62,
  [80] = 63,
  [81] = 64,
  [82] = 65,
  [83] = 66,
  [84] = 67,
  [85] = 68,
  [86] = 69,
  [87] = 51,
  [88] = 60,
  [89] = 61,
  [90] = 62,
  [91] = 63,
  [92] = 65,
  [93] = 66,
  [94] = 67,
  [95] = 68,
  [96] = 69,
  [97] = 51,
  [98] = 60,
  [99] = 61,
  [100] = 62,
  [101] = 63,
  [102] = 64,
  [103] = 65,
  [104] = 66,
  [105] = 67,
  [106] = 68,
  [107] = 69,
  [108] = 51,
  [109] = 60,
  [110] = 61,
  [111] = 62,
  [112] = 63,
  [113] = 64,
  [114] = 65,
  [115] = 66,
  [116] = 67,
  [117] = 68,
  [118] = 69,
  [119] = 71,
  [120] = 51,
  [121] = 51,
  [122] = 51,
  [123] = 51,
  [124] = 71,
  [125] = 71,
  [126] = 71,
  [127] = 55,
  [128] = 55,
  [129] = 55,
  [130] = 55,
  [131] = 64,
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
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 157,
  [188] = 180,
  [189] = 181,
  [190] = 184,
  [191] = 152,
  [192] = 169,
  [193] = 170,
  [194] = 172,
  [195] = 173,
  [196] = 174,
  [197] = 175,
  [198] = 176,
  [199] = 177,
  [200] = 178,
  [201] = 179,
  [202] = 180,
  [203] = 181,
  [204] = 182,
  [205] = 183,
  [206] = 184,
  [207] = 185,
  [208] = 186,
  [209] = 144,
  [210] = 145,
  [211] = 146,
  [212] = 147,
  [213] = 148,
  [214] = 149,
  [215] = 150,
  [216] = 151,
  [217] = 152,
  [218] = 170,
  [219] = 172,
  [220] = 153,
  [221] = 221,
  [222] = 154,
  [223] = 155,
  [224] = 175,
  [225] = 156,
  [226] = 182,
  [227] = 159,
  [228] = 160,
  [229] = 153,
  [230] = 179,
  [231] = 155,
  [232] = 156,
  [233] = 178,
  [234] = 158,
  [235] = 159,
  [236] = 160,
  [237] = 161,
  [238] = 162,
  [239] = 163,
  [240] = 164,
  [241] = 165,
  [242] = 169,
  [243] = 166,
  [244] = 143,
  [245] = 167,
  [246] = 171,
  [247] = 161,
  [248] = 171,
  [249] = 162,
  [250] = 163,
  [251] = 164,
  [252] = 185,
  [253] = 165,
  [254] = 173,
  [255] = 176,
  [256] = 183,
  [257] = 157,
  [258] = 186,
  [259] = 177,
  [260] = 144,
  [261] = 145,
  [262] = 158,
  [263] = 146,
  [264] = 147,
  [265] = 166,
  [266] = 148,
  [267] = 149,
  [268] = 143,
  [269] = 150,
  [270] = 151,
  [271] = 167,
  [272] = 174,
  [273] = 154,
  [274] = 274,
  [275] = 180,
  [276] = 170,
  [277] = 172,
  [278] = 173,
  [279] = 174,
  [280] = 175,
  [281] = 176,
  [282] = 177,
  [283] = 178,
  [284] = 179,
  [285] = 181,
  [286] = 182,
  [287] = 183,
  [288] = 184,
  [289] = 185,
  [290] = 186,
  [291] = 144,
  [292] = 145,
  [293] = 146,
  [294] = 147,
  [295] = 148,
  [296] = 149,
  [297] = 150,
  [298] = 151,
  [299] = 152,
  [300] = 153,
  [301] = 154,
  [302] = 155,
  [303] = 303,
  [304] = 157,
  [305] = 158,
  [306] = 159,
  [307] = 160,
  [308] = 161,
  [309] = 162,
  [310] = 163,
  [311] = 164,
  [312] = 165,
  [313] = 166,
  [314] = 143,
  [315] = 167,
  [316] = 316,
  [317] = 171,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 169,
  [322] = 171,
  [323] = 316,
  [324] = 320,
  [325] = 316,
  [326] = 320,
  [327] = 316,
  [328] = 320,
  [329] = 316,
  [330] = 320,
  [331] = 316,
  [332] = 320,
  [333] = 156,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 167,
  [340] = 171,
  [341] = 169,
  [342] = 170,
  [343] = 172,
  [344] = 173,
  [345] = 174,
  [346] = 175,
  [347] = 176,
  [348] = 177,
  [349] = 178,
  [350] = 179,
  [351] = 180,
  [352] = 181,
  [353] = 182,
  [354] = 183,
  [355] = 184,
  [356] = 185,
  [357] = 186,
  [358] = 144,
  [359] = 145,
  [360] = 146,
  [361] = 147,
  [362] = 148,
  [363] = 149,
  [364] = 150,
  [365] = 151,
  [366] = 152,
  [367] = 153,
  [368] = 154,
  [369] = 155,
  [370] = 157,
  [371] = 158,
  [372] = 159,
  [373] = 160,
  [374] = 161,
  [375] = 162,
  [376] = 163,
  [377] = 164,
  [378] = 165,
  [379] = 166,
  [380] = 143,
  [381] = 167,
  [382] = 153,
  [383] = 169,
  [384] = 143,
  [385] = 385,
  [386] = 156,
  [387] = 171,
  [388] = 388,
  [389] = 389,
  [390] = 171,
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
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 417,
  [426] = 418,
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
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 171,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 397,
  [483] = 483,
  [484] = 484,
  [485] = 412,
  [486] = 486,
  [487] = 487,
  [488] = 414,
  [489] = 410,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 491,
  [494] = 494,
  [495] = 491,
  [496] = 491,
  [497] = 491,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 423,
  [504] = 413,
  [505] = 505,
  [506] = 415,
  [507] = 507,
  [508] = 171,
  [509] = 509,
  [510] = 505,
  [511] = 416,
  [512] = 507,
  [513] = 507,
  [514] = 505,
  [515] = 409,
  [516] = 516,
  [517] = 507,
  [518] = 505,
  [519] = 415,
  [520] = 421,
  [521] = 521,
  [522] = 413,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 525,
  [528] = 528,
  [529] = 529,
  [530] = 525,
  [531] = 525,
  [532] = 532,
  [533] = 533,
  [534] = 417,
  [535] = 535,
  [536] = 419,
  [537] = 525,
  [538] = 418,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 542,
  [544] = 544,
  [545] = 542,
  [546] = 546,
  [547] = 547,
  [548] = 542,
  [549] = 549,
  [550] = 550,
  [551] = 546,
  [552] = 542,
  [553] = 553,
  [554] = 547,
  [555] = 547,
  [556] = 547,
  [557] = 547,
  [558] = 547,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 563,
  [568] = 568,
  [569] = 569,
  [570] = 562,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 572,
  [581] = 561,
  [582] = 582,
  [583] = 564,
  [584] = 584,
  [585] = 585,
  [586] = 563,
  [587] = 561,
  [588] = 588,
  [589] = 564,
  [590] = 590,
  [591] = 561,
  [592] = 592,
  [593] = 564,
  [594] = 594,
  [595] = 595,
  [596] = 563,
  [597] = 569,
  [598] = 598,
  [599] = 599,
  [600] = 561,
  [601] = 564,
  [602] = 602,
  [603] = 603,
  [604] = 563,
  [605] = 605,
  [606] = 564,
  [607] = 607,
  [608] = 563,
  [609] = 418,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 628,
  [630] = 628,
  [631] = 417,
  [632] = 628,
  [633] = 633,
  [634] = 628,
  [635] = 635,
  [636] = 571,
  [637] = 637,
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
      if (eof) ADVANCE(85);
      ADVANCE_MAP(
        '\n', 92,
        '\r', 2,
        '!', 468,
        '"', 497,
        '#', 101,
        '$', 31,
        '&', 453,
        '\'', 493,
        '(', 144,
        ')', 151,
        '+', 459,
        ',', 154,
        '-', 463,
        '.', 600,
        '/', 462,
        '0', 508,
        '3', 509,
        ';', 86,
        '<', 456,
        '=', 448,
        '>', 457,
        '@', 69,
        'A', 588,
        'S', 577,
        'T', 590,
        '\\', 41,
        '^', 452,
        'a', 589,
        'f', 579,
        'g', 584,
        'r', 581,
        's', 578,
        't', 591,
        'z', 582,
        '|', 451,
        '~', 466,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('%' <= lookahead && lookahead <= '*')) ADVANCE(460);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(587);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(586);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(586);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(510);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(580);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(592);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(150);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == ')') ADVANCE(151);
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '\\') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(576);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 92,
        '\r', 2,
        '!', 468,
        '"', 497,
        '#', 101,
        '$', 31,
        '&', 453,
        '\'', 493,
        '(', 144,
        ')', 151,
        '+', 459,
        ',', 154,
        '-', 463,
        '.', 600,
        '/', 462,
        '0', 508,
        '3', 509,
        ';', 86,
        '<', 456,
        '=', 448,
        '>', 457,
        '@', 69,
        'A', 588,
        'S', 577,
        'T', 590,
        '\\', 41,
        '^', 452,
        'a', 589,
        'f', 579,
        'g', 584,
        'r', 581,
        's', 578,
        't', 591,
        'z', 582,
        '|', 451,
        '~', 466,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('%' <= lookahead && lookahead <= '*')) ADVANCE(460);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(587);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(586);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(586);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(510);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(580);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(592);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(143);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(143);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(133);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(138);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 93,
        '\r', 11,
        '!', 467,
        '"', 497,
        '#', 130,
        '$', 35,
        '%', 42,
        '\'', 493,
        '(', 144,
        '+', 70,
        '-', 465,
        '.', 606,
        '/', 22,
        '0', 475,
        '3', 482,
        '@', 69,
        'A', 614,
        'S', 598,
        'T', 616,
        '\\', 72,
        'a', 615,
        'f', 601,
        'g', 609,
        'r', 603,
        's', 599,
        't', 617,
        'z', 607,
        '~', 466,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(613);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(612);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(612);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(483);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(602);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(618);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(136);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == '\r') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '\r') SKIP(14);
      if (lookahead == '!') ADVANCE(467);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(493);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(606);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(475);
      if (lookahead == '3') ADVANCE(482);
      if (lookahead == 'A') ADVANCE(614);
      if (lookahead == 'S') ADVANCE(598);
      if (lookahead == 'T') ADVANCE(616);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == 'f') ADVANCE(601);
      if (lookahead == 'g') ADVANCE(609);
      if (lookahead == 'r') ADVANCE(603);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead == 't') ADVANCE(617);
      if (lookahead == 'z') ADVANCE(607);
      if (lookahead == '~') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(613);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(612);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(612);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(483);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(602);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(618);
      END_STATE();
    case 15:
      if (lookahead == '\r') SKIP(15);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '&') ADVANCE(453);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ',') ADVANCE(201);
      if (lookahead == '/') ADVANCE(462);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '<') ADVANCE(456);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead == '^') ADVANCE(452);
      if (lookahead == '|') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(460);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 16:
      if (lookahead == '\r') SKIP(16);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '!', 467,
        '"', 497,
        '#', 130,
        '$', 35,
        '%', 42,
        '\'', 493,
        '(', 144,
        ')', 151,
        '-', 464,
        '.', 605,
        '/', 22,
        '0', 472,
        '3', 479,
        'A', 614,
        'S', 598,
        'T', 616,
        '\\', 72,
        'a', 615,
        'f', 601,
        'g', 609,
        'r', 603,
        's', 599,
        't', 617,
        'z', 607,
        '~', 466,
        'C', 613,
        'c', 613,
        'K', 612,
        'k', 612,
        'V', 612,
        'v', 612,
        '1', 480,
        '2', 480,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(602);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(618);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '!', 40,
        '&', 453,
        '(', 144,
        ')', 151,
        ',', 154,
        '/', 461,
        '<', 456,
        '=', 448,
        '>', 457,
        '^', 452,
        '|', 451,
        '%', 460,
        '*', 460,
        '+', 459,
        '-', 459,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(497);
      if (lookahead == '/') ADVANCE(499);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(500);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '\\') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(576);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(130);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(495);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(494);
      END_STATE();
    case 28:
      if (lookahead == '1') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 29:
      if (lookahead == '1') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(504);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '2', 249,
        '4', 256,
        '8', 258,
        ':', 597,
        'L', 26,
        'a', 337,
        'b', 243,
        'c', 378,
        'd', 377,
        'f', 338,
        'h', 244,
        'i', 367,
        'l', 265,
        'm', 239,
        'p', 228,
        'q', 432,
        's', 316,
        'u', 343,
        'w', 380,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '3', 513,
        'A', 53,
        'S', 28,
        'T', 55,
        'a', 54,
        'f', 32,
        'g', 45,
        'r', 34,
        's', 29,
        't', 59,
        'z', 43,
        'C', 52,
        'c', 52,
        'K', 50,
        'k', 50,
        'V', 50,
        'v', 50,
        '1', 516,
        '2', 516,
        'F', 33,
        'R', 33,
        'X', 33,
        'x', 33,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 32:
      if (lookahead == '3') ADVANCE(513);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(516);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(504);
      END_STATE();
    case 33:
      if (lookahead == '3') ADVANCE(513);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 34:
      if (lookahead == '3') ADVANCE(513);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(504);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '3', 514,
        'A', 570,
        'S', 521,
        'T', 572,
        'a', 571,
        'f', 526,
        'g', 558,
        'r', 528,
        's', 522,
        't', 573,
        'z', 541,
        'C', 569,
        'c', 569,
        'K', 568,
        'k', 568,
        'V', 568,
        'v', 568,
        '1', 517,
        '2', 517,
        'F', 527,
        'R', 527,
        'X', 527,
        'x', 527,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(575);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(620);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(454);
      END_STATE();
    case 41:
      if (lookahead == 'U') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(503);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(501);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        'a', 536,
        'c', 534,
        'd', 565,
        'g', 556,
        'h', 547,
        'l', 555,
        'p', 537,
        't', 551,
      );
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(504);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == '|') ADVANCE(449);
      END_STATE();
    case 48:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      END_STATE();
    case 49:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 50:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(504);
      END_STATE();
    case 51:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(478);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(504);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(504);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(504);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(504);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(501);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 69:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 70:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 71:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 72:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 73:
      if (eof) ADVANCE(85);
      ADVANCE_MAP(
        '\t', 148,
        '\n', 92,
        '\r', 87,
        ' ', 145,
        '!', 467,
        '#', 101,
        '$', 35,
        '%', 42,
        '\'', 493,
        '(', 144,
        ',', 201,
        '-', 464,
        '.', 605,
        '/', 22,
        '0', 472,
        '3', 479,
        ';', 86,
        '=', 447,
        'A', 614,
        'S', 598,
        'T', 616,
        '\\', 72,
        'a', 615,
        'f', 601,
        'g', 609,
        'r', 603,
        's', 599,
        't', 617,
        'z', 607,
        '|', 47,
        '~', 466,
        'C', 613,
        'c', 613,
        'K', 612,
        'k', 612,
        'V', 612,
        'v', 612,
        '1', 480,
        '2', 480,
        'F', 602,
        'R', 602,
        'X', 602,
        'x', 602,
      );
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(618);
      END_STATE();
    case 74:
      if (eof) ADVANCE(85);
      ADVANCE_MAP(
        '\t', 148,
        '\n', 92,
        '\r', 87,
        ' ', 145,
        '!', 467,
        '#', 101,
        '$', 35,
        '%', 42,
        '\'', 493,
        '(', 144,
        '-', 465,
        '.', 606,
        '/', 22,
        '0', 475,
        '3', 482,
        ';', 86,
        'A', 614,
        'S', 598,
        'T', 616,
        '\\', 72,
        'a', 615,
        'f', 601,
        'g', 609,
        'r', 603,
        's', 599,
        't', 617,
        'z', 607,
        '~', 466,
        'C', 613,
        'c', 613,
        'K', 612,
        'k', 612,
        'V', 612,
        'v', 612,
        '1', 483,
        '2', 483,
        'F', 602,
        'R', 602,
        'X', 602,
        'x', 602,
      );
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(618);
      END_STATE();
    case 75:
      if (eof) ADVANCE(85);
      ADVANCE_MAP(
        '\t', 148,
        '\n', 92,
        '\r', 87,
        ' ', 145,
        '!', 40,
        '#', 101,
        '&', 453,
        '(', 144,
        ',', 201,
        '/', 462,
        ';', 86,
        '<', 456,
        '=', 448,
        '>', 457,
        '^', 452,
        '|', 451,
        '%', 460,
        '*', 460,
        '+', 459,
        '-', 459,
      );
      END_STATE();
    case 76:
      if (eof) ADVANCE(85);
      if (lookahead == '\t') ADVANCE(149);
      if (lookahead == '\r') SKIP(76);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(86);
      END_STATE();
    case 77:
      if (eof) ADVANCE(85);
      ADVANCE_MAP(
        '\n', 92,
        '\r', 88,
        '#', 101,
        '%', 71,
        '.', 30,
        '/', 22,
        '0', 37,
        ';', 86,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(77);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 78:
      if (eof) ADVANCE(85);
      ADVANCE_MAP(
        '\n', 92,
        '\r', 89,
        '!', 467,
        '"', 497,
        '#', 101,
        '$', 35,
        '%', 42,
        '\'', 493,
        '(', 144,
        '-', 464,
        '.', 605,
        '/', 22,
        '0', 472,
        '3', 479,
        ';', 86,
        'A', 614,
        'S', 598,
        'T', 616,
        '\\', 72,
        'a', 615,
        'f', 601,
        'g', 609,
        'r', 603,
        's', 599,
        't', 617,
        'z', 607,
        '~', 466,
        '\t', 94,
        ' ', 94,
        'C', 613,
        'c', 613,
        'K', 612,
        'k', 612,
        'V', 612,
        'v', 612,
        '1', 480,
        '2', 480,
        'F', 602,
        'R', 602,
        'X', 602,
        'x', 602,
      );
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(618);
      END_STATE();
    case 79:
      if (eof) ADVANCE(85);
      ADVANCE_MAP(
        '\n', 92,
        '\r', 90,
        '!', 467,
        '"', 497,
        '#', 101,
        '$', 35,
        '%', 42,
        '\'', 493,
        '(', 144,
        ',', 154,
        '-', 464,
        '.', 605,
        '/', 22,
        '0', 472,
        '3', 479,
        ';', 86,
        '=', 447,
        'A', 614,
        'S', 598,
        'T', 616,
        '\\', 72,
        'a', 615,
        'f', 601,
        'g', 609,
        'r', 603,
        's', 599,
        't', 617,
        'z', 607,
        '|', 47,
        '~', 466,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(79);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(613);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(612);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(612);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(480);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(602);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(618);
      END_STATE();
    case 80:
      if (eof) ADVANCE(85);
      ADVANCE_MAP(
        '\n', 92,
        '\r', 90,
        '!', 40,
        '#', 101,
        '&', 453,
        '(', 144,
        ',', 154,
        '/', 462,
        ';', 86,
        '<', 456,
        '=', 448,
        '>', 457,
        '^', 452,
        '|', 451,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(80);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(460);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(459);
      END_STATE();
    case 81:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(91);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(81);
      END_STATE();
    case 82:
      if (eof) ADVANCE(85);
      ADVANCE_MAP(
        '\n', 93,
        '\r', 11,
        '!', 467,
        '"', 497,
        '#', 130,
        '$', 35,
        '%', 42,
        '\'', 493,
        '(', 144,
        '+', 70,
        '-', 465,
        '.', 606,
        '/', 22,
        '0', 475,
        '3', 482,
        '@', 69,
        'A', 614,
        'S', 598,
        'T', 616,
        '\\', 72,
        'a', 615,
        'f', 601,
        'g', 609,
        'r', 603,
        's', 599,
        't', 617,
        'z', 607,
        '~', 466,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(82);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(613);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(612);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(612);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(483);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(602);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(618);
      END_STATE();
    case 83:
      if (eof) ADVANCE(85);
      if (lookahead == '\r') SKIP(83);
      if (lookahead == '!') ADVANCE(467);
      if (lookahead == '"') ADVANCE(497);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '$') ADVANCE(35);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(493);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(606);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '0') ADVANCE(475);
      if (lookahead == '3') ADVANCE(482);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == 'A') ADVANCE(614);
      if (lookahead == 'S') ADVANCE(598);
      if (lookahead == 'T') ADVANCE(616);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == 'f') ADVANCE(601);
      if (lookahead == 'g') ADVANCE(609);
      if (lookahead == 'r') ADVANCE(603);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead == 't') ADVANCE(617);
      if (lookahead == 'z') ADVANCE(607);
      if (lookahead == '~') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(613);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(612);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(612);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(483);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(602);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(618);
      END_STATE();
    case 84:
      if (eof) ADVANCE(85);
      if (lookahead == '\r') SKIP(84);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '&') ADVANCE(453);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ',') ADVANCE(201);
      if (lookahead == '/') ADVANCE(462);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '<') ADVANCE(456);
      if (lookahead == '=') ADVANCE(448);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead == '^') ADVANCE(452);
      if (lookahead == '|') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(460);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(148);
      if (lookahead == '\r') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '#') ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '0') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '#') ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_line_comment);
      ADVANCE_MAP(
        '\\', 4,
        'd', 105,
        'e', 117,
        'i', 109,
        'l', 113,
        'p', 126,
        'u', 121,
        'w', 99,
        '\t', 101,
        ' ', 101,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'g') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'g') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_preprocessor);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_preprocessor);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__wrong_preprocessor);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__wrong_preprocessor);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__wrong_preprocessor);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__wrong_preprocessor);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(148);
      if (lookahead == '\r') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '#') ADVANCE(101);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(149);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '#') ADVANCE(101);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(150);
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(148);
      if (lookahead == '\r') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '#') ADVANCE(101);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(149);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '#') ADVANCE(101);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(150);
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_integer_operands_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__string_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'z') ADVANCE(213);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(441);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'z') ADVANCE(214);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(442);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'z') ADVANCE(217);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(441);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'z') ADVANCE(218);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(442);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(223);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(225);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(226);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(227);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(229);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(245);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(230);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(231);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(232);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(246);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(189);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(191);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(190);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(192);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == 'y') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'w') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(346);
      if (lookahead == 'y') ADVANCE(425);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'w') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(222);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(437);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(439);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'b') ADVANCE(440);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(292);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(433);
      if (lookahead == 'w') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'w') ADVANCE(390);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(215);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(216);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(359);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(363);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'g') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'h') ADVANCE(379);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'h') ADVANCE(382);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'k') ADVANCE(323);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'z') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(441);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'z') ADVANCE(210);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(442);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(381);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(313);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead == 'w') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == 'w') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'w') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'w') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'y') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'y') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'y') ADVANCE(423);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'y') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'y') ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'y') ADVANCE(428);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_assignment_operator);
      if (lookahead == '=') ADVANCE(454);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_logical_or_operator);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_logical_and_operator);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_bitwise_or_operator);
      if (lookahead == '|') ADVANCE(449);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_bitwise_xor_operator);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_bitwise_and_operator);
      if (lookahead == '&') ADVANCE(450);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '<') ADVANCE(458);
      if (lookahead == '=') ADVANCE(455);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(455);
      if (lookahead == '>') ADVANCE(458);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_shift_operator);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(24);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(130);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(473);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '0') ADVANCE(476);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(484);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_bitwise_not_operator);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_logical_not_operator);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_logical_not_operator);
      if (lookahead == '=') ADVANCE(454);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(546);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(535);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 489,
        'b', 622,
        'f', 621,
        'E', 48,
        'e', 48,
        'X', 61,
        'x', 61,
        '8', 481,
        '9', 481,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(474);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(61);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(474);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == 'b') ADVANCE(622);
      if (lookahead == 'f') ADVANCE(621);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(61);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(477);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(61);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(477);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(621);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(481);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(489);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(621);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(484);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(484);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(611);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(24);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(494);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(24);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(498);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(501);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(502);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(507);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(620);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(621);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(620);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(621);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(512);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(620);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(512);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(620);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(504);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(530);
      if (lookahead == '3') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '2') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(514);
      if (lookahead == 'a') ADVANCE(570);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(517);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(514);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(514);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '4') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(546);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(545);
      if (lookahead == 'g') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'b') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'c') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(532);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(538);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'g') ADVANCE(557);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(532);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(564);
      if (lookahead == 'p') ADVANCE(562);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(549);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(566);
      if (lookahead == 'p') ADVANCE(561);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(567);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(561);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(542);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(469);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(532);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('4' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(520);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_macro_parameter);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == '1') ADVANCE(505);
      if (lookahead == ':') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == '1') ADVANCE(505);
      if (lookahead == ':') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(507);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == '3') ADVANCE(505);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(506);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(507);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == '3') ADVANCE(505);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == '3') ADVANCE(505);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(507);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(507);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'p') ADVANCE(507);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(583);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(507);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(507);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(507);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(507);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(595);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(618);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 247,
        '4', 255,
        '8', 257,
        ':', 597,
        'L', 595,
        'a', 331,
        'b', 235,
        'c', 371,
        'd', 373,
        'f', 336,
        'h', 238,
        'i', 360,
        'l', 266,
        'm', 234,
        'p', 224,
        'q', 430,
        's', 315,
        'u', 345,
        'w', 374,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(604);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(515);
      if (lookahead == 'a') ADVANCE(614);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(518);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(515);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(515);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(596);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'p') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(608);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(519);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(478);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 77},
  [2] = {.lex_state = 83, .external_lex_state = 2},
  [3] = {.lex_state = 77},
  [4] = {.lex_state = 77},
  [5] = {.lex_state = 77},
  [6] = {.lex_state = 78},
  [7] = {.lex_state = 79},
  [8] = {.lex_state = 79},
  [9] = {.lex_state = 77},
  [10] = {.lex_state = 73, .external_lex_state = 3},
  [11] = {.lex_state = 74, .external_lex_state = 3},
  [12] = {.lex_state = 79},
  [13] = {.lex_state = 79},
  [14] = {.lex_state = 82},
  [15] = {.lex_state = 82},
  [16] = {.lex_state = 82},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17, .external_lex_state = 4},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 82, .external_lex_state = 4},
  [42] = {.lex_state = 82},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 82, .external_lex_state = 4},
  [48] = {.lex_state = 82},
  [49] = {.lex_state = 82, .external_lex_state = 4},
  [50] = {.lex_state = 82},
  [51] = {.lex_state = 82},
  [52] = {.lex_state = 77, .external_lex_state = 2},
  [53] = {.lex_state = 77},
  [54] = {.lex_state = 77},
  [55] = {.lex_state = 82},
  [56] = {.lex_state = 77},
  [57] = {.lex_state = 77},
  [58] = {.lex_state = 77},
  [59] = {.lex_state = 82},
  [60] = {.lex_state = 82},
  [61] = {.lex_state = 82},
  [62] = {.lex_state = 82},
  [63] = {.lex_state = 82},
  [64] = {.lex_state = 82},
  [65] = {.lex_state = 82},
  [66] = {.lex_state = 82},
  [67] = {.lex_state = 82},
  [68] = {.lex_state = 82},
  [69] = {.lex_state = 82},
  [70] = {.lex_state = 77},
  [71] = {.lex_state = 82},
  [72] = {.lex_state = 82},
  [73] = {.lex_state = 77, .external_lex_state = 2},
  [74] = {.lex_state = 82},
  [75] = {.lex_state = 82},
  [76] = {.lex_state = 82},
  [77] = {.lex_state = 82},
  [78] = {.lex_state = 82},
  [79] = {.lex_state = 82},
  [80] = {.lex_state = 82},
  [81] = {.lex_state = 82},
  [82] = {.lex_state = 82},
  [83] = {.lex_state = 82},
  [84] = {.lex_state = 82},
  [85] = {.lex_state = 82},
  [86] = {.lex_state = 82},
  [87] = {.lex_state = 82},
  [88] = {.lex_state = 82},
  [89] = {.lex_state = 82},
  [90] = {.lex_state = 82},
  [91] = {.lex_state = 82},
  [92] = {.lex_state = 82},
  [93] = {.lex_state = 82},
  [94] = {.lex_state = 82},
  [95] = {.lex_state = 82},
  [96] = {.lex_state = 82},
  [97] = {.lex_state = 82},
  [98] = {.lex_state = 82},
  [99] = {.lex_state = 82},
  [100] = {.lex_state = 82},
  [101] = {.lex_state = 82},
  [102] = {.lex_state = 82},
  [103] = {.lex_state = 82},
  [104] = {.lex_state = 82},
  [105] = {.lex_state = 82},
  [106] = {.lex_state = 82},
  [107] = {.lex_state = 82},
  [108] = {.lex_state = 82},
  [109] = {.lex_state = 82},
  [110] = {.lex_state = 82},
  [111] = {.lex_state = 82},
  [112] = {.lex_state = 82},
  [113] = {.lex_state = 82},
  [114] = {.lex_state = 82},
  [115] = {.lex_state = 82},
  [116] = {.lex_state = 82},
  [117] = {.lex_state = 82},
  [118] = {.lex_state = 82},
  [119] = {.lex_state = 82},
  [120] = {.lex_state = 82},
  [121] = {.lex_state = 82},
  [122] = {.lex_state = 82},
  [123] = {.lex_state = 82},
  [124] = {.lex_state = 82},
  [125] = {.lex_state = 82},
  [126] = {.lex_state = 82},
  [127] = {.lex_state = 82},
  [128] = {.lex_state = 82},
  [129] = {.lex_state = 82},
  [130] = {.lex_state = 82},
  [131] = {.lex_state = 82},
  [132] = {.lex_state = 77},
  [133] = {.lex_state = 77},
  [134] = {.lex_state = 77},
  [135] = {.lex_state = 77},
  [136] = {.lex_state = 77},
  [137] = {.lex_state = 77},
  [138] = {.lex_state = 77},
  [139] = {.lex_state = 77},
  [140] = {.lex_state = 77},
  [141] = {.lex_state = 77},
  [142] = {.lex_state = 77},
  [143] = {.lex_state = 75, .external_lex_state = 3},
  [144] = {.lex_state = 75, .external_lex_state = 3},
  [145] = {.lex_state = 75, .external_lex_state = 3},
  [146] = {.lex_state = 75, .external_lex_state = 3},
  [147] = {.lex_state = 75, .external_lex_state = 3},
  [148] = {.lex_state = 75, .external_lex_state = 3},
  [149] = {.lex_state = 75, .external_lex_state = 3},
  [150] = {.lex_state = 75, .external_lex_state = 3},
  [151] = {.lex_state = 75, .external_lex_state = 3},
  [152] = {.lex_state = 75, .external_lex_state = 3},
  [153] = {.lex_state = 75, .external_lex_state = 3},
  [154] = {.lex_state = 75, .external_lex_state = 3},
  [155] = {.lex_state = 75, .external_lex_state = 3},
  [156] = {.lex_state = 75, .external_lex_state = 3},
  [157] = {.lex_state = 75, .external_lex_state = 3},
  [158] = {.lex_state = 75, .external_lex_state = 3},
  [159] = {.lex_state = 75, .external_lex_state = 3},
  [160] = {.lex_state = 75, .external_lex_state = 3},
  [161] = {.lex_state = 75, .external_lex_state = 3},
  [162] = {.lex_state = 75, .external_lex_state = 3},
  [163] = {.lex_state = 75, .external_lex_state = 3},
  [164] = {.lex_state = 75, .external_lex_state = 3},
  [165] = {.lex_state = 75, .external_lex_state = 3},
  [166] = {.lex_state = 75, .external_lex_state = 3},
  [167] = {.lex_state = 75, .external_lex_state = 3},
  [168] = {.lex_state = 75, .external_lex_state = 3},
  [169] = {.lex_state = 75, .external_lex_state = 3},
  [170] = {.lex_state = 75, .external_lex_state = 3},
  [171] = {.lex_state = 75, .external_lex_state = 3},
  [172] = {.lex_state = 75, .external_lex_state = 3},
  [173] = {.lex_state = 75, .external_lex_state = 3},
  [174] = {.lex_state = 75, .external_lex_state = 3},
  [175] = {.lex_state = 75, .external_lex_state = 3},
  [176] = {.lex_state = 75, .external_lex_state = 3},
  [177] = {.lex_state = 75, .external_lex_state = 3},
  [178] = {.lex_state = 75, .external_lex_state = 3},
  [179] = {.lex_state = 75, .external_lex_state = 3},
  [180] = {.lex_state = 75, .external_lex_state = 3},
  [181] = {.lex_state = 75, .external_lex_state = 3},
  [182] = {.lex_state = 75, .external_lex_state = 3},
  [183] = {.lex_state = 75, .external_lex_state = 3},
  [184] = {.lex_state = 75, .external_lex_state = 3},
  [185] = {.lex_state = 75, .external_lex_state = 3},
  [186] = {.lex_state = 75, .external_lex_state = 3},
  [187] = {.lex_state = 84, .external_lex_state = 1},
  [188] = {.lex_state = 80, .external_lex_state = 5},
  [189] = {.lex_state = 80, .external_lex_state = 5},
  [190] = {.lex_state = 80, .external_lex_state = 5},
  [191] = {.lex_state = 80, .external_lex_state = 5},
  [192] = {.lex_state = 84, .external_lex_state = 1},
  [193] = {.lex_state = 84, .external_lex_state = 1},
  [194] = {.lex_state = 84, .external_lex_state = 1},
  [195] = {.lex_state = 84, .external_lex_state = 1},
  [196] = {.lex_state = 84, .external_lex_state = 1},
  [197] = {.lex_state = 84, .external_lex_state = 1},
  [198] = {.lex_state = 84, .external_lex_state = 1},
  [199] = {.lex_state = 84, .external_lex_state = 1},
  [200] = {.lex_state = 84, .external_lex_state = 1},
  [201] = {.lex_state = 84, .external_lex_state = 1},
  [202] = {.lex_state = 84, .external_lex_state = 1},
  [203] = {.lex_state = 84, .external_lex_state = 1},
  [204] = {.lex_state = 84, .external_lex_state = 1},
  [205] = {.lex_state = 84, .external_lex_state = 1},
  [206] = {.lex_state = 84, .external_lex_state = 1},
  [207] = {.lex_state = 84, .external_lex_state = 1},
  [208] = {.lex_state = 84, .external_lex_state = 1},
  [209] = {.lex_state = 84, .external_lex_state = 1},
  [210] = {.lex_state = 84, .external_lex_state = 1},
  [211] = {.lex_state = 84, .external_lex_state = 1},
  [212] = {.lex_state = 84, .external_lex_state = 1},
  [213] = {.lex_state = 84, .external_lex_state = 1},
  [214] = {.lex_state = 84, .external_lex_state = 1},
  [215] = {.lex_state = 84, .external_lex_state = 1},
  [216] = {.lex_state = 84, .external_lex_state = 1},
  [217] = {.lex_state = 84, .external_lex_state = 1},
  [218] = {.lex_state = 80, .external_lex_state = 5},
  [219] = {.lex_state = 80, .external_lex_state = 5},
  [220] = {.lex_state = 80, .external_lex_state = 5},
  [221] = {.lex_state = 80, .external_lex_state = 5},
  [222] = {.lex_state = 80, .external_lex_state = 5},
  [223] = {.lex_state = 80, .external_lex_state = 5},
  [224] = {.lex_state = 80, .external_lex_state = 5},
  [225] = {.lex_state = 80, .external_lex_state = 5},
  [226] = {.lex_state = 80, .external_lex_state = 5},
  [227] = {.lex_state = 80, .external_lex_state = 5},
  [228] = {.lex_state = 80, .external_lex_state = 5},
  [229] = {.lex_state = 84, .external_lex_state = 1},
  [230] = {.lex_state = 80, .external_lex_state = 5},
  [231] = {.lex_state = 84, .external_lex_state = 1},
  [232] = {.lex_state = 84, .external_lex_state = 1},
  [233] = {.lex_state = 80, .external_lex_state = 5},
  [234] = {.lex_state = 84, .external_lex_state = 1},
  [235] = {.lex_state = 84, .external_lex_state = 1},
  [236] = {.lex_state = 84, .external_lex_state = 1},
  [237] = {.lex_state = 84, .external_lex_state = 1},
  [238] = {.lex_state = 84, .external_lex_state = 1},
  [239] = {.lex_state = 84, .external_lex_state = 1},
  [240] = {.lex_state = 84, .external_lex_state = 1},
  [241] = {.lex_state = 84, .external_lex_state = 1},
  [242] = {.lex_state = 80, .external_lex_state = 5},
  [243] = {.lex_state = 84, .external_lex_state = 1},
  [244] = {.lex_state = 84, .external_lex_state = 1},
  [245] = {.lex_state = 84, .external_lex_state = 1},
  [246] = {.lex_state = 80, .external_lex_state = 5},
  [247] = {.lex_state = 80, .external_lex_state = 5},
  [248] = {.lex_state = 84, .external_lex_state = 1},
  [249] = {.lex_state = 80, .external_lex_state = 5},
  [250] = {.lex_state = 80, .external_lex_state = 5},
  [251] = {.lex_state = 80, .external_lex_state = 5},
  [252] = {.lex_state = 80, .external_lex_state = 5},
  [253] = {.lex_state = 80, .external_lex_state = 5},
  [254] = {.lex_state = 80, .external_lex_state = 5},
  [255] = {.lex_state = 80, .external_lex_state = 5},
  [256] = {.lex_state = 80, .external_lex_state = 5},
  [257] = {.lex_state = 80, .external_lex_state = 5},
  [258] = {.lex_state = 80, .external_lex_state = 5},
  [259] = {.lex_state = 80, .external_lex_state = 5},
  [260] = {.lex_state = 80, .external_lex_state = 5},
  [261] = {.lex_state = 80, .external_lex_state = 5},
  [262] = {.lex_state = 80, .external_lex_state = 5},
  [263] = {.lex_state = 80, .external_lex_state = 5},
  [264] = {.lex_state = 80, .external_lex_state = 5},
  [265] = {.lex_state = 80, .external_lex_state = 5},
  [266] = {.lex_state = 80, .external_lex_state = 5},
  [267] = {.lex_state = 80, .external_lex_state = 5},
  [268] = {.lex_state = 80, .external_lex_state = 5},
  [269] = {.lex_state = 80, .external_lex_state = 5},
  [270] = {.lex_state = 80, .external_lex_state = 5},
  [271] = {.lex_state = 80, .external_lex_state = 5},
  [272] = {.lex_state = 80, .external_lex_state = 5},
  [273] = {.lex_state = 84, .external_lex_state = 1},
  [274] = {.lex_state = 73, .external_lex_state = 3},
  [275] = {.lex_state = 18, .external_lex_state = 5},
  [276] = {.lex_state = 18, .external_lex_state = 5},
  [277] = {.lex_state = 18, .external_lex_state = 5},
  [278] = {.lex_state = 18, .external_lex_state = 5},
  [279] = {.lex_state = 18, .external_lex_state = 5},
  [280] = {.lex_state = 18, .external_lex_state = 5},
  [281] = {.lex_state = 18, .external_lex_state = 5},
  [282] = {.lex_state = 18, .external_lex_state = 5},
  [283] = {.lex_state = 18, .external_lex_state = 5},
  [284] = {.lex_state = 18, .external_lex_state = 5},
  [285] = {.lex_state = 18, .external_lex_state = 5},
  [286] = {.lex_state = 18, .external_lex_state = 5},
  [287] = {.lex_state = 18, .external_lex_state = 5},
  [288] = {.lex_state = 18, .external_lex_state = 5},
  [289] = {.lex_state = 18, .external_lex_state = 5},
  [290] = {.lex_state = 18, .external_lex_state = 5},
  [291] = {.lex_state = 18, .external_lex_state = 5},
  [292] = {.lex_state = 18, .external_lex_state = 5},
  [293] = {.lex_state = 18, .external_lex_state = 5},
  [294] = {.lex_state = 18, .external_lex_state = 5},
  [295] = {.lex_state = 18, .external_lex_state = 5},
  [296] = {.lex_state = 18, .external_lex_state = 5},
  [297] = {.lex_state = 18, .external_lex_state = 5},
  [298] = {.lex_state = 18, .external_lex_state = 5},
  [299] = {.lex_state = 18, .external_lex_state = 5},
  [300] = {.lex_state = 18, .external_lex_state = 5},
  [301] = {.lex_state = 18, .external_lex_state = 5},
  [302] = {.lex_state = 18, .external_lex_state = 5},
  [303] = {.lex_state = 73, .external_lex_state = 3},
  [304] = {.lex_state = 18, .external_lex_state = 5},
  [305] = {.lex_state = 18, .external_lex_state = 5},
  [306] = {.lex_state = 18, .external_lex_state = 5},
  [307] = {.lex_state = 18, .external_lex_state = 5},
  [308] = {.lex_state = 18, .external_lex_state = 5},
  [309] = {.lex_state = 18, .external_lex_state = 5},
  [310] = {.lex_state = 18, .external_lex_state = 5},
  [311] = {.lex_state = 18, .external_lex_state = 5},
  [312] = {.lex_state = 18, .external_lex_state = 5},
  [313] = {.lex_state = 18, .external_lex_state = 5},
  [314] = {.lex_state = 18, .external_lex_state = 5},
  [315] = {.lex_state = 18, .external_lex_state = 5},
  [316] = {.lex_state = 18, .external_lex_state = 5},
  [317] = {.lex_state = 73, .external_lex_state = 3},
  [318] = {.lex_state = 73, .external_lex_state = 3},
  [319] = {.lex_state = 73, .external_lex_state = 3},
  [320] = {.lex_state = 18, .external_lex_state = 5},
  [321] = {.lex_state = 18, .external_lex_state = 5},
  [322] = {.lex_state = 18, .external_lex_state = 5},
  [323] = {.lex_state = 18, .external_lex_state = 5},
  [324] = {.lex_state = 18, .external_lex_state = 5},
  [325] = {.lex_state = 18, .external_lex_state = 5},
  [326] = {.lex_state = 18, .external_lex_state = 5},
  [327] = {.lex_state = 18, .external_lex_state = 5},
  [328] = {.lex_state = 18, .external_lex_state = 5},
  [329] = {.lex_state = 18, .external_lex_state = 5},
  [330] = {.lex_state = 18, .external_lex_state = 5},
  [331] = {.lex_state = 18, .external_lex_state = 5},
  [332] = {.lex_state = 18, .external_lex_state = 5},
  [333] = {.lex_state = 18, .external_lex_state = 5},
  [334] = {.lex_state = 73, .external_lex_state = 3},
  [335] = {.lex_state = 73, .external_lex_state = 3},
  [336] = {.lex_state = 73, .external_lex_state = 3},
  [337] = {.lex_state = 73, .external_lex_state = 3},
  [338] = {.lex_state = 73, .external_lex_state = 3},
  [339] = {.lex_state = 18},
  [340] = {.lex_state = 18},
  [341] = {.lex_state = 208},
  [342] = {.lex_state = 18},
  [343] = {.lex_state = 18},
  [344] = {.lex_state = 18},
  [345] = {.lex_state = 18},
  [346] = {.lex_state = 18},
  [347] = {.lex_state = 18},
  [348] = {.lex_state = 18},
  [349] = {.lex_state = 18},
  [350] = {.lex_state = 18},
  [351] = {.lex_state = 18},
  [352] = {.lex_state = 18},
  [353] = {.lex_state = 18},
  [354] = {.lex_state = 18},
  [355] = {.lex_state = 18},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 18},
  [358] = {.lex_state = 18},
  [359] = {.lex_state = 18},
  [360] = {.lex_state = 18},
  [361] = {.lex_state = 18},
  [362] = {.lex_state = 18},
  [363] = {.lex_state = 18},
  [364] = {.lex_state = 18},
  [365] = {.lex_state = 18},
  [366] = {.lex_state = 18},
  [367] = {.lex_state = 208},
  [368] = {.lex_state = 18},
  [369] = {.lex_state = 18},
  [370] = {.lex_state = 18},
  [371] = {.lex_state = 18},
  [372] = {.lex_state = 18},
  [373] = {.lex_state = 18},
  [374] = {.lex_state = 18},
  [375] = {.lex_state = 18},
  [376] = {.lex_state = 18},
  [377] = {.lex_state = 18},
  [378] = {.lex_state = 18},
  [379] = {.lex_state = 18},
  [380] = {.lex_state = 208},
  [381] = {.lex_state = 208},
  [382] = {.lex_state = 18},
  [383] = {.lex_state = 18},
  [384] = {.lex_state = 18},
  [385] = {.lex_state = 208},
  [386] = {.lex_state = 18},
  [387] = {.lex_state = 84, .external_lex_state = 1},
  [388] = {.lex_state = 73, .external_lex_state = 3},
  [389] = {.lex_state = 73, .external_lex_state = 3},
  [390] = {.lex_state = 79, .external_lex_state = 5},
  [391] = {.lex_state = 73, .external_lex_state = 3},
  [392] = {.lex_state = 73, .external_lex_state = 3},
  [393] = {.lex_state = 73, .external_lex_state = 3},
  [394] = {.lex_state = 73, .external_lex_state = 3},
  [395] = {.lex_state = 73, .external_lex_state = 3},
  [396] = {.lex_state = 73, .external_lex_state = 3},
  [397] = {.lex_state = 79, .external_lex_state = 5},
  [398] = {.lex_state = 73, .external_lex_state = 2},
  [399] = {.lex_state = 73, .external_lex_state = 2},
  [400] = {.lex_state = 73, .external_lex_state = 2},
  [401] = {.lex_state = 73, .external_lex_state = 2},
  [402] = {.lex_state = 84, .external_lex_state = 1},
  [403] = {.lex_state = 73, .external_lex_state = 2},
  [404] = {.lex_state = 84, .external_lex_state = 1},
  [405] = {.lex_state = 73, .external_lex_state = 2},
  [406] = {.lex_state = 84, .external_lex_state = 1},
  [407] = {.lex_state = 84, .external_lex_state = 1},
  [408] = {.lex_state = 73, .external_lex_state = 2},
  [409] = {.lex_state = 79, .external_lex_state = 5},
  [410] = {.lex_state = 76, .external_lex_state = 2},
  [411] = {.lex_state = 78},
  [412] = {.lex_state = 76, .external_lex_state = 2},
  [413] = {.lex_state = 79, .external_lex_state = 5},
  [414] = {.lex_state = 76, .external_lex_state = 2},
  [415] = {.lex_state = 79, .external_lex_state = 5},
  [416] = {.lex_state = 76, .external_lex_state = 2},
  [417] = {.lex_state = 84, .external_lex_state = 1},
  [418] = {.lex_state = 79, .external_lex_state = 5},
  [419] = {.lex_state = 79, .external_lex_state = 5},
  [420] = {.lex_state = 84, .external_lex_state = 1},
  [421] = {.lex_state = 76, .external_lex_state = 2},
  [422] = {.lex_state = 84, .external_lex_state = 1},
  [423] = {.lex_state = 76, .external_lex_state = 2},
  [424] = {.lex_state = 84, .external_lex_state = 1},
  [425] = {.lex_state = 79, .external_lex_state = 5},
  [426] = {.lex_state = 84, .external_lex_state = 1},
  [427] = {.lex_state = 79},
  [428] = {.lex_state = 83, .external_lex_state = 2},
  [429] = {.lex_state = 83, .external_lex_state = 2},
  [430] = {.lex_state = 79},
  [431] = {.lex_state = 79},
  [432] = {.lex_state = 79},
  [433] = {.lex_state = 79},
  [434] = {.lex_state = 83, .external_lex_state = 2},
  [435] = {.lex_state = 79},
  [436] = {.lex_state = 83, .external_lex_state = 2},
  [437] = {.lex_state = 79},
  [438] = {.lex_state = 79},
  [439] = {.lex_state = 0, .external_lex_state = 2},
  [440] = {.lex_state = 79},
  [441] = {.lex_state = 79},
  [442] = {.lex_state = 79},
  [443] = {.lex_state = 0, .external_lex_state = 2},
  [444] = {.lex_state = 79},
  [445] = {.lex_state = 79},
  [446] = {.lex_state = 79},
  [447] = {.lex_state = 79},
  [448] = {.lex_state = 0, .external_lex_state = 2},
  [449] = {.lex_state = 79},
  [450] = {.lex_state = 0, .external_lex_state = 2},
  [451] = {.lex_state = 0, .external_lex_state = 2},
  [452] = {.lex_state = 0, .external_lex_state = 2},
  [453] = {.lex_state = 0, .external_lex_state = 2},
  [454] = {.lex_state = 0, .external_lex_state = 2},
  [455] = {.lex_state = 0, .external_lex_state = 2},
  [456] = {.lex_state = 0, .external_lex_state = 2},
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
  [467] = {.lex_state = 79},
  [468] = {.lex_state = 0, .external_lex_state = 2},
  [469] = {.lex_state = 0, .external_lex_state = 2},
  [470] = {.lex_state = 0, .external_lex_state = 2},
  [471] = {.lex_state = 0, .external_lex_state = 2},
  [472] = {.lex_state = 0, .external_lex_state = 2},
  [473] = {.lex_state = 0, .external_lex_state = 5},
  [474] = {.lex_state = 0, .external_lex_state = 2},
  [475] = {.lex_state = 0, .external_lex_state = 2},
  [476] = {.lex_state = 0, .external_lex_state = 2},
  [477] = {.lex_state = 0, .external_lex_state = 2},
  [478] = {.lex_state = 0, .external_lex_state = 2},
  [479] = {.lex_state = 0, .external_lex_state = 2},
  [480] = {.lex_state = 0, .external_lex_state = 2},
  [481] = {.lex_state = 0, .external_lex_state = 2},
  [482] = {.lex_state = 0, .external_lex_state = 5},
  [483] = {.lex_state = 1},
  [484] = {.lex_state = 1},
  [485] = {.lex_state = 1},
  [486] = {.lex_state = 81},
  [487] = {.lex_state = 0, .external_lex_state = 2},
  [488] = {.lex_state = 1},
  [489] = {.lex_state = 1},
  [490] = {.lex_state = 1},
  [491] = {.lex_state = 0, .external_lex_state = 5},
  [492] = {.lex_state = 1},
  [493] = {.lex_state = 0, .external_lex_state = 5},
  [494] = {.lex_state = 1},
  [495] = {.lex_state = 0, .external_lex_state = 5},
  [496] = {.lex_state = 0, .external_lex_state = 5},
  [497] = {.lex_state = 0, .external_lex_state = 5},
  [498] = {.lex_state = 81},
  [499] = {.lex_state = 1},
  [500] = {.lex_state = 1},
  [501] = {.lex_state = 1},
  [502] = {.lex_state = 81},
  [503] = {.lex_state = 1},
  [504] = {.lex_state = 0, .external_lex_state = 5},
  [505] = {.lex_state = 19},
  [506] = {.lex_state = 0, .external_lex_state = 5},
  [507] = {.lex_state = 19},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 82, .external_lex_state = 2},
  [510] = {.lex_state = 19},
  [511] = {.lex_state = 1},
  [512] = {.lex_state = 19},
  [513] = {.lex_state = 19},
  [514] = {.lex_state = 19},
  [515] = {.lex_state = 0, .external_lex_state = 5},
  [516] = {.lex_state = 82, .external_lex_state = 2},
  [517] = {.lex_state = 19},
  [518] = {.lex_state = 19},
  [519] = {.lex_state = 0, .external_lex_state = 5},
  [520] = {.lex_state = 1},
  [521] = {.lex_state = 82, .external_lex_state = 2},
  [522] = {.lex_state = 0, .external_lex_state = 5},
  [523] = {.lex_state = 19},
  [524] = {.lex_state = 1},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 81},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 20},
  [529] = {.lex_state = 1},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 1},
  [533] = {.lex_state = 1},
  [534] = {.lex_state = 0, .external_lex_state = 5},
  [535] = {.lex_state = 1},
  [536] = {.lex_state = 0, .external_lex_state = 5},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0, .external_lex_state = 5},
  [539] = {.lex_state = 1},
  [540] = {.lex_state = 20},
  [541] = {.lex_state = 82},
  [542] = {.lex_state = 27},
  [543] = {.lex_state = 27},
  [544] = {.lex_state = 81},
  [545] = {.lex_state = 27},
  [546] = {.lex_state = 20},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 27},
  [549] = {.lex_state = 0, .external_lex_state = 2},
  [550] = {.lex_state = 16},
  [551] = {.lex_state = 20},
  [552] = {.lex_state = 27},
  [553] = {.lex_state = 81},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 20},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 20},
  [570] = {.lex_state = 20},
  [571] = {.lex_state = 20},
  [572] = {.lex_state = 20},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 84},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0, .external_lex_state = 2},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 14},
  [580] = {.lex_state = 20},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 20},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 14},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0, .external_lex_state = 4},
  [603] = {.lex_state = 14},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 208},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 208},
  [610] = {.lex_state = 0, .external_lex_state = 2},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 14},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0, .external_lex_state = 4},
  [615] = {.lex_state = 84},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0, .external_lex_state = 4},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 14},
  [622] = {.lex_state = 14},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 208},
  [627] = {.lex_state = 0, .external_lex_state = 4},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 208},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 82},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 20},
  [637] = {.lex_state = 14},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym__statement_token1] = ACTIONS(1),
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
    [sym__line_separator] = ACTIONS(1),
    [sym__data_separator] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(594),
    [sym__statement] = STATE(5),
    [sym__comment] = STATE(573),
    [sym_directive] = STATE(448),
    [sym__macro_directive] = STATE(459),
    [sym__integer_directive] = STATE(460),
    [sym_integer_mnemonic] = STATE(621),
    [sym__float_directive] = STATE(461),
    [sym_float_mnemonic] = STATE(599),
    [sym__string_directive] = STATE(464),
    [sym_string_mnemonic] = STATE(579),
    [sym__control_directive] = STATE(465),
    [sym_control_mnemonic] = STATE(434),
    [sym_instruction] = STATE(427),
    [sym__label] = STATE(70),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_CR] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(9),
    [sym_block_comment] = ACTIONS(7),
    [sym_preprocessor] = ACTIONS(11),
    [sym__wrong_preprocessor] = ACTIONS(11),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 39,
    ACTIONS(31), 1,
      aux_sym__whitespace_token1,
    ACTIONS(33), 1,
      sym_block_comment,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      aux_sym_section_type_token1,
    ACTIONS(40), 1,
      aux_sym_option_flag_token1,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(50), 1,
      anon_sym_SQUOTE,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    STATE(196), 1,
      sym__assignment_expression,
    STATE(197), 1,
      sym__logical_or_expression,
    STATE(198), 1,
      sym__wrapped_logical_or_expression,
    STATE(199), 1,
      sym__logical_and_expression,
    STATE(200), 1,
      sym__wrapped_logical_and_expression,
    STATE(201), 1,
      sym__bitwise_or_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(203), 1,
      sym__bitwise_xor_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(205), 1,
      sym__bitwise_and_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(207), 1,
      sym__equality_expression,
    STATE(208), 1,
      sym__wrapped_equality_expression,
    STATE(209), 1,
      sym__relational_expression,
    STATE(210), 1,
      sym__wrapped_relational_expression,
    STATE(211), 1,
      sym__shift_expression,
    STATE(212), 1,
      sym__wrapped_shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(404), 1,
      sym__wrapped_assignment_expression,
    STATE(462), 1,
      sym_control_operands,
    ACTIONS(27), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(42), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(29), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(407), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(46), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [141] = 26,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym_macro_mnemonic,
    ACTIONS(21), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(23), 1,
      sym_opcode,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym__statement_token1,
    STATE(56), 1,
      sym__label,
    STATE(431), 1,
      sym_instruction,
    STATE(434), 1,
      sym_control_mnemonic,
    STATE(443), 1,
      sym_directive,
    STATE(459), 1,
      sym__macro_directive,
    STATE(460), 1,
      sym__integer_directive,
    STATE(461), 1,
      sym__float_directive,
    STATE(464), 1,
      sym__string_directive,
    STATE(465), 1,
      sym__control_directive,
    STATE(568), 1,
      sym__comment,
    STATE(579), 1,
      sym_string_mnemonic,
    STATE(599), 1,
      sym_float_mnemonic,
    STATE(621), 1,
      sym_integer_mnemonic,
    ACTIONS(64), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(4), 2,
      sym__statement,
      aux_sym_program_repeat1,
    ACTIONS(17), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    ACTIONS(25), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(60), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_block_comment,
    ACTIONS(19), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(15), 23,
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
  [256] = 25,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym_macro_mnemonic,
    ACTIONS(21), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(23), 1,
      sym_opcode,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      sym__label,
    STATE(430), 1,
      sym_instruction,
    STATE(434), 1,
      sym_control_mnemonic,
    STATE(439), 1,
      sym_directive,
    STATE(459), 1,
      sym__macro_directive,
    STATE(460), 1,
      sym__integer_directive,
    STATE(461), 1,
      sym__float_directive,
    STATE(464), 1,
      sym__string_directive,
    STATE(465), 1,
      sym__control_directive,
    STATE(579), 1,
      sym_string_mnemonic,
    STATE(599), 1,
      sym_float_mnemonic,
    STATE(613), 1,
      sym__comment,
    STATE(621), 1,
      sym_integer_mnemonic,
    ACTIONS(64), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(9), 2,
      sym__statement,
      aux_sym_program_repeat1,
    ACTIONS(17), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    ACTIONS(25), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(68), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_block_comment,
    ACTIONS(19), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(15), 23,
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
  [368] = 25,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      sym_macro_mnemonic,
    ACTIONS(21), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(23), 1,
      sym_opcode,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym__label,
    STATE(431), 1,
      sym_instruction,
    STATE(434), 1,
      sym_control_mnemonic,
    STATE(443), 1,
      sym_directive,
    STATE(459), 1,
      sym__macro_directive,
    STATE(460), 1,
      sym__integer_directive,
    STATE(461), 1,
      sym__float_directive,
    STATE(464), 1,
      sym__string_directive,
    STATE(465), 1,
      sym__control_directive,
    STATE(568), 1,
      sym__comment,
    STATE(579), 1,
      sym_string_mnemonic,
    STATE(599), 1,
      sym_float_mnemonic,
    STATE(621), 1,
      sym_integer_mnemonic,
    ACTIONS(64), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(9), 2,
      sym__statement,
      aux_sym_program_repeat1,
    ACTIONS(17), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    ACTIONS(25), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(68), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_block_comment,
    ACTIONS(19), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(15), 23,
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
  [480] = 39,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      aux_sym__whitespace_token1,
    ACTIONS(76), 1,
      sym_block_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    STATE(188), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(189), 1,
      sym__bitwise_xor_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(224), 1,
      sym__logical_or_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(230), 1,
      sym__bitwise_or_expression,
    STATE(233), 1,
      sym__wrapped_logical_and_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(255), 1,
      sym__wrapped_logical_or_expression,
    STATE(256), 1,
      sym__bitwise_and_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(259), 1,
      sym__logical_and_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(397), 1,
      sym__wrapped_assignment_expression,
    STATE(433), 1,
      sym__call_expression,
    STATE(446), 1,
      sym_operands,
    STATE(415), 2,
      sym__operand,
      sym_string,
    ACTIONS(81), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(72), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(85), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [620] = 37,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    STATE(188), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(189), 1,
      sym__bitwise_xor_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(224), 1,
      sym__logical_or_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(230), 1,
      sym__bitwise_or_expression,
    STATE(233), 1,
      sym__wrapped_logical_and_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(255), 1,
      sym__wrapped_logical_or_expression,
    STATE(256), 1,
      sym__bitwise_and_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(259), 1,
      sym__logical_and_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(397), 1,
      sym__wrapped_assignment_expression,
    STATE(441), 1,
      sym__call_expression,
    STATE(446), 1,
      sym_operands,
    STATE(415), 2,
      sym__operand,
      sym_string,
    ACTIONS(81), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(85), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    ACTIONS(72), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [755] = 37,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(188), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(189), 1,
      sym__bitwise_xor_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(224), 1,
      sym__logical_or_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(230), 1,
      sym__bitwise_or_expression,
    STATE(233), 1,
      sym__wrapped_logical_and_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(255), 1,
      sym__wrapped_logical_or_expression,
    STATE(256), 1,
      sym__bitwise_and_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(259), 1,
      sym__logical_and_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(397), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym_operands,
    STATE(438), 1,
      sym__call_expression,
    STATE(415), 2,
      sym__operand,
      sym_string,
    ACTIONS(81), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(85), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    ACTIONS(101), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [890] = 23,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      sym_macro_mnemonic,
    ACTIONS(123), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(126), 1,
      sym_opcode,
    STATE(140), 1,
      sym__label,
    STATE(434), 1,
      sym_control_mnemonic,
    STATE(459), 1,
      sym__macro_directive,
    STATE(460), 1,
      sym__integer_directive,
    STATE(461), 1,
      sym__float_directive,
    STATE(464), 1,
      sym__string_directive,
    STATE(465), 1,
      sym__control_directive,
    STATE(467), 1,
      sym_instruction,
    STATE(487), 1,
      sym_directive,
    STATE(579), 1,
      sym_string_mnemonic,
    STATE(599), 1,
      sym_float_mnemonic,
    STATE(621), 1,
      sym_integer_mnemonic,
    STATE(9), 2,
      sym__statement,
      aux_sym_program_repeat1,
    ACTIONS(108), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(117), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    ACTIONS(105), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_block_comment,
    ACTIONS(129), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(120), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(114), 23,
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
  [997] = 36,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(146), 1,
      sym_float,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      sym_macro_variable,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    STATE(168), 1,
      sym_address,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(395), 1,
      sym__float_operand,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(132), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(138), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(142), 5,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_local_numeric_label_reference,
    ACTIONS(134), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(365), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [1130] = 32,
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
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(174), 1,
      sym__assignment_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_logical_or_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(336), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(132), 3,
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
    ACTIONS(134), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1253] = 35,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(188), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(189), 1,
      sym__bitwise_xor_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(224), 1,
      sym__logical_or_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(230), 1,
      sym__bitwise_or_expression,
    STATE(233), 1,
      sym__wrapped_logical_and_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(255), 1,
      sym__wrapped_logical_or_expression,
    STATE(256), 1,
      sym__bitwise_and_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(259), 1,
      sym__logical_and_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(397), 1,
      sym__wrapped_assignment_expression,
    STATE(419), 2,
      sym__operand,
      sym_string,
    ACTIONS(81), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(85), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    ACTIONS(174), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1382] = 35,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    STATE(188), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(189), 1,
      sym__bitwise_xor_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(224), 1,
      sym__logical_or_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(230), 1,
      sym__bitwise_or_expression,
    STATE(233), 1,
      sym__wrapped_logical_and_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(255), 1,
      sym__wrapped_logical_or_expression,
    STATE(256), 1,
      sym__bitwise_and_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(259), 1,
      sym__logical_and_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(397), 1,
      sym__wrapped_assignment_expression,
    STATE(419), 2,
      sym__operand,
      sym_string,
    ACTIONS(81), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(85), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    ACTIONS(182), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1511] = 38,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_section_type_token1,
    ACTIONS(188), 1,
      aux_sym_option_flag_token1,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym__assignment_expression,
    STATE(197), 1,
      sym__logical_or_expression,
    STATE(198), 1,
      sym__wrapped_logical_or_expression,
    STATE(199), 1,
      sym__logical_and_expression,
    STATE(200), 1,
      sym__wrapped_logical_and_expression,
    STATE(201), 1,
      sym__bitwise_or_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(203), 1,
      sym__bitwise_xor_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(205), 1,
      sym__bitwise_and_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(207), 1,
      sym__equality_expression,
    STATE(208), 1,
      sym__wrapped_equality_expression,
    STATE(209), 1,
      sym__relational_expression,
    STATE(210), 1,
      sym__wrapped_relational_expression,
    STATE(211), 1,
      sym__shift_expression,
    STATE(212), 1,
      sym__wrapped_shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(404), 1,
      sym__wrapped_assignment_expression,
    STATE(462), 1,
      sym_control_operands,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(407), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1643] = 38,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_section_type_token1,
    ACTIONS(188), 1,
      aux_sym_option_flag_token1,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym__assignment_expression,
    STATE(197), 1,
      sym__logical_or_expression,
    STATE(198), 1,
      sym__wrapped_logical_or_expression,
    STATE(199), 1,
      sym__logical_and_expression,
    STATE(200), 1,
      sym__wrapped_logical_and_expression,
    STATE(201), 1,
      sym__bitwise_or_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(203), 1,
      sym__bitwise_xor_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(205), 1,
      sym__bitwise_and_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(207), 1,
      sym__equality_expression,
    STATE(208), 1,
      sym__wrapped_equality_expression,
    STATE(209), 1,
      sym__relational_expression,
    STATE(210), 1,
      sym__wrapped_relational_expression,
    STATE(211), 1,
      sym__shift_expression,
    STATE(212), 1,
      sym__wrapped_shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(404), 1,
      sym__wrapped_assignment_expression,
    STATE(472), 1,
      sym_control_operands,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(407), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1775] = 37,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      aux_sym_section_type_token1,
    ACTIONS(188), 1,
      aux_sym_option_flag_token1,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym__assignment_expression,
    STATE(197), 1,
      sym__logical_or_expression,
    STATE(198), 1,
      sym__wrapped_logical_or_expression,
    STATE(199), 1,
      sym__logical_and_expression,
    STATE(200), 1,
      sym__wrapped_logical_and_expression,
    STATE(201), 1,
      sym__bitwise_or_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(203), 1,
      sym__bitwise_xor_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(205), 1,
      sym__bitwise_and_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(207), 1,
      sym__equality_expression,
    STATE(208), 1,
      sym__wrapped_equality_expression,
    STATE(209), 1,
      sym__relational_expression,
    STATE(210), 1,
      sym__wrapped_relational_expression,
    STATE(211), 1,
      sym__shift_expression,
    STATE(212), 1,
      sym__wrapped_shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(404), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(422), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1904] = 38,
    ACTIONS(198), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(216), 1,
      sym_float,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    STATE(578), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(506), 2,
      sym__operand,
      sym_string,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2034] = 40,
    ACTIONS(198), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(216), 1,
      sym_float,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(316), 1,
      sym_symbol,
    STATE(491), 1,
      sym__wrapped_assignment_expression,
    STATE(565), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(226), 2,
      sym_register,
      sym_macro_variable,
    STATE(506), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2168] = 38,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(216), 1,
      sym_float,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(228), 1,
      sym_block_comment,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    STATE(588), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(506), 2,
      sym__operand,
      sym_string,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2298] = 39,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(232), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(325), 1,
      sym_symbol,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    STATE(564), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(234), 2,
      sym_register,
      sym_macro_variable,
    STATE(519), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2429] = 39,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(232), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(320), 1,
      sym_symbol,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    STATE(563), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(236), 2,
      sym_register,
      sym_macro_variable,
    STATE(519), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2560] = 39,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(232), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(323), 1,
      sym_symbol,
    STATE(493), 1,
      sym__wrapped_assignment_expression,
    STATE(589), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(238), 2,
      sym_register,
      sym_macro_variable,
    STATE(519), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2691] = 39,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(146), 1,
      sym_float,
    ACTIONS(150), 1,
      sym_macro_variable,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      sym__data_separator,
    STATE(168), 1,
      sym_address,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(395), 1,
      sym__float_operand,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    STATE(614), 1,
      sym__comment,
    ACTIONS(240), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(365), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [2822] = 36,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(252), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(172), 2,
      sym_block_comment,
      anon_sym_RPAREN,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(536), 2,
      sym__operand,
      sym_string,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2947] = 36,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(252), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(180), 2,
      sym_block_comment,
      anon_sym_RPAREN,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(536), 2,
      sym__operand,
      sym_string,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3072] = 37,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(252), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(536), 2,
      sym__operand,
      sym_string,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3199] = 37,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(252), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(536), 2,
      sym__operand,
      sym_string,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3326] = 39,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(232), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(326), 1,
      sym_symbol,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    STATE(586), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(254), 2,
      sym_register,
      sym_macro_variable,
    STATE(519), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3457] = 39,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(232), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(325), 1,
      sym_symbol,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    STATE(564), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(234), 2,
      sym_register,
      sym_macro_variable,
    STATE(519), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3588] = 39,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(232), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(324), 1,
      sym_symbol,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    STATE(567), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(256), 2,
      sym_register,
      sym_macro_variable,
    STATE(519), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3719] = 39,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(232), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(327), 1,
      sym_symbol,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    STATE(583), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(258), 2,
      sym_register,
      sym_macro_variable,
    STATE(519), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3850] = 39,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(232), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(328), 1,
      sym_symbol,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    STATE(596), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(260), 2,
      sym_register,
      sym_macro_variable,
    STATE(519), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3981] = 39,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(232), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(329), 1,
      sym_symbol,
    STATE(497), 1,
      sym__wrapped_assignment_expression,
    STATE(593), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(262), 2,
      sym_register,
      sym_macro_variable,
    STATE(519), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [4112] = 39,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(232), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(316), 1,
      sym_symbol,
    STATE(491), 1,
      sym__wrapped_assignment_expression,
    STATE(601), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(226), 2,
      sym_register,
      sym_macro_variable,
    STATE(519), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [4243] = 39,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(232), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(330), 1,
      sym_symbol,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    STATE(604), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(264), 2,
      sym_register,
      sym_macro_variable,
    STATE(519), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [4374] = 39,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(232), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(332), 1,
      sym_symbol,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    STATE(608), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(266), 2,
      sym_register,
      sym_macro_variable,
    STATE(519), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [4505] = 39,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(232), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym_symbol,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    STATE(606), 1,
      sym_operands,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(210), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(268), 2,
      sym_register,
      sym_macro_variable,
    STATE(519), 2,
      sym__operand,
      sym_string,
    STATE(298), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [4636] = 36,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    ACTIONS(252), 1,
      sym_float,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(482), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(536), 2,
      sym__operand,
      sym_string,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4760] = 36,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(178), 1,
      sym_float,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(189), 1,
      sym__bitwise_xor_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(224), 1,
      sym__logical_or_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(230), 1,
      sym__bitwise_or_expression,
    STATE(233), 1,
      sym__wrapped_logical_and_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(255), 1,
      sym__wrapped_logical_or_expression,
    STATE(256), 1,
      sym__bitwise_and_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(259), 1,
      sym__logical_and_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(397), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(274), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(419), 2,
      sym__operand,
      sym_string,
    ACTIONS(85), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4884] = 38,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(150), 1,
      sym_macro_variable,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      sym_float,
    STATE(168), 1,
      sym_address,
    STATE(303), 1,
      sym__float_operand,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(408), 1,
      sym_float_operands,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(365), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [5011] = 36,
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
    ACTIONS(282), 1,
      sym_line_comment,
    ACTIONS(284), 1,
      sym_block_comment,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    ACTIONS(294), 1,
      sym__data_separator,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(174), 1,
      sym__assignment_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_logical_or_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(336), 1,
      sym__wrapped_assignment_expression,
    STATE(602), 1,
      sym__comment,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5134] = 37,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    ACTIONS(300), 1,
      sym_macro_variable,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(385), 1,
      sym_address,
    STATE(554), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(605), 2,
      sym__string_operand,
      sym_string,
    ACTIONS(142), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(365), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [5259] = 33,
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
    ACTIONS(302), 1,
      aux_sym__whitespace_token1,
    ACTIONS(304), 1,
      sym_block_comment,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(174), 1,
      sym__assignment_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_logical_or_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(274), 1,
      sym__wrapped_assignment_expression,
    STATE(401), 1,
      sym_integer_operands,
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
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5375] = 37,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(150), 1,
      sym_macro_variable,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(306), 1,
      sym_float,
    STATE(168), 1,
      sym_address,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(389), 1,
      sym__float_operand,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(365), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [5499] = 37,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(150), 1,
      sym_macro_variable,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      sym_float,
    STATE(168), 1,
      sym_address,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(392), 1,
      sym__float_operand,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(365), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [5623] = 37,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(146), 1,
      sym_float,
    ACTIONS(150), 1,
      sym_macro_variable,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    STATE(168), 1,
      sym_address,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(395), 1,
      sym__float_operand,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(365), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [5747] = 33,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(174), 1,
      sym__assignment_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_logical_or_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(337), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(310), 2,
      sym__data_separator,
      sym_block_comment,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5862] = 34,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(174), 1,
      sym__assignment_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_logical_or_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(274), 1,
      sym__wrapped_assignment_expression,
    STATE(403), 1,
      sym_integer_operands,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5979] = 33,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(174), 1,
      sym__assignment_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_logical_or_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(336), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(310), 2,
      sym__data_separator,
      sym_block_comment,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6094] = 34,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(174), 1,
      sym__assignment_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_logical_or_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(274), 1,
      sym__wrapped_assignment_expression,
    STATE(401), 1,
      sym_integer_operands,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6211] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(171), 1,
      sym__wrapped_logical_or_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6325] = 3,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      sym__line_separator,
    ACTIONS(314), 45,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [6379] = 3,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    STATE(582), 1,
      sym__comment,
    ACTIONS(320), 45,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [6433] = 3,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    STATE(560), 1,
      sym__comment,
    ACTIONS(320), 45,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [6487] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(537), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6601] = 4,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    STATE(613), 1,
      sym__comment,
    ACTIONS(328), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(326), 43,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [6657] = 3,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    STATE(619), 1,
      sym__comment,
    ACTIONS(320), 45,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [6711] = 4,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    STATE(623), 1,
      sym__comment,
    ACTIONS(331), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(326), 43,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [6767] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(188), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(189), 1,
      sym__bitwise_xor_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(224), 1,
      sym__logical_or_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(230), 1,
      sym__bitwise_or_expression,
    STATE(233), 1,
      sym__wrapped_logical_and_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(256), 1,
      sym__bitwise_and_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(259), 1,
      sym__logical_and_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(390), 1,
      sym__wrapped_logical_or_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(274), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(85), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6881] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(188), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(189), 1,
      sym__bitwise_xor_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(225), 1,
      sym__wrapped_logical_and_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(230), 1,
      sym__bitwise_or_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(256), 1,
      sym__bitwise_and_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(259), 1,
      sym__logical_and_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(274), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(85), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6995] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(189), 1,
      sym__bitwise_xor_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(230), 1,
      sym__bitwise_or_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(256), 1,
      sym__bitwise_and_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(274), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(85), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7109] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(189), 1,
      sym__bitwise_xor_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(256), 1,
      sym__bitwise_and_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(274), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(85), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7223] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(227), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(256), 1,
      sym__bitwise_and_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(274), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(85), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7337] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(228), 1,
      sym__wrapped_equality_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(274), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(85), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7451] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      sym__wrapped_relational_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(274), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(85), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7565] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(249), 1,
      sym__wrapped_shift_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(274), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(85), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7679] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(250), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(274), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(85), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7793] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(336), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(334), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(251), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7907] = 34,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(365), 1,
      sym__wrapped_multiplicative_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(340), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(338), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(253), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8023] = 4,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    STATE(568), 1,
      sym__comment,
    ACTIONS(342), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(326), 43,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [8079] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(188), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(189), 1,
      sym__bitwise_xor_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__wrapped_assignment_expression,
    STATE(224), 1,
      sym__logical_or_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(230), 1,
      sym__bitwise_or_expression,
    STATE(233), 1,
      sym__wrapped_logical_and_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(255), 1,
      sym__wrapped_logical_or_expression,
    STATE(256), 1,
      sym__bitwise_and_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(259), 1,
      sym__logical_and_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(272), 1,
      sym__assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(274), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(85), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8193] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(174), 1,
      sym__assignment_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_logical_or_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(336), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8307] = 3,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      sym__line_separator,
    ACTIONS(314), 45,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [8361] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(174), 1,
      sym__assignment_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_logical_or_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(337), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8475] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(174), 1,
      sym__assignment_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_logical_or_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(335), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8589] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(473), 1,
      sym__wrapped_logical_or_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8703] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(333), 1,
      sym__wrapped_logical_and_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8817] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8931] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9045] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(306), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9159] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(289), 1,
      sym__equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(307), 1,
      sym__wrapped_equality_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9273] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(291), 1,
      sym__relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__wrapped_relational_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9387] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(293), 1,
      sym__shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(309), 1,
      sym__wrapped_shift_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9501] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(295), 1,
      sym__additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(310), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9615] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(347), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(345), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(311), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9729] = 34,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(365), 1,
      sym__wrapped_multiplicative_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(351), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(349), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(312), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9845] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(317), 1,
      sym__wrapped_logical_or_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(156), 1,
      sym__wrapped_logical_and_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10073] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(157), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10187] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(158), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10301] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(159), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(161), 1,
      sym__wrapped_relational_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10529] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(146), 1,
      sym__shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(162), 1,
      sym__wrapped_shift_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(148), 1,
      sym__additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(163), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10757] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(355), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(353), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(164), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10871] = 34,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(365), 1,
      sym__wrapped_multiplicative_expression,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(359), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(357), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(165), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10987] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(508), 1,
      sym__wrapped_logical_or_expression,
    STATE(557), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(386), 1,
      sym__wrapped_logical_and_expression,
    STATE(557), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(370), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(557), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11329] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(557), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11443] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(372), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(557), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11557] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(373), 1,
      sym__wrapped_equality_expression,
    STATE(557), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11671] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(374), 1,
      sym__wrapped_relational_expression,
    STATE(557), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11785] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(375), 1,
      sym__wrapped_shift_expression,
    STATE(557), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11899] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(376), 1,
      sym__wrapped_additive_expression,
    STATE(557), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12013] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(557), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(363), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(361), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(377), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12127] = 34,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(365), 1,
      sym__wrapped_multiplicative_expression,
    STATE(557), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(367), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(365), 4,
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
  [12243] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(197), 1,
      sym__logical_or_expression,
    STATE(199), 1,
      sym__logical_and_expression,
    STATE(200), 1,
      sym__wrapped_logical_and_expression,
    STATE(201), 1,
      sym__bitwise_or_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(203), 1,
      sym__bitwise_xor_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(205), 1,
      sym__bitwise_and_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(207), 1,
      sym__equality_expression,
    STATE(208), 1,
      sym__wrapped_equality_expression,
    STATE(209), 1,
      sym__relational_expression,
    STATE(210), 1,
      sym__wrapped_relational_expression,
    STATE(211), 1,
      sym__shift_expression,
    STATE(212), 1,
      sym__wrapped_shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(387), 1,
      sym__wrapped_logical_or_expression,
    STATE(558), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12357] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(199), 1,
      sym__logical_and_expression,
    STATE(201), 1,
      sym__bitwise_or_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(203), 1,
      sym__bitwise_xor_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(205), 1,
      sym__bitwise_and_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(207), 1,
      sym__equality_expression,
    STATE(208), 1,
      sym__wrapped_equality_expression,
    STATE(209), 1,
      sym__relational_expression,
    STATE(210), 1,
      sym__wrapped_relational_expression,
    STATE(211), 1,
      sym__shift_expression,
    STATE(212), 1,
      sym__wrapped_shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(232), 1,
      sym__wrapped_logical_and_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(558), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12471] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(187), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(201), 1,
      sym__bitwise_or_expression,
    STATE(203), 1,
      sym__bitwise_xor_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(205), 1,
      sym__bitwise_and_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(207), 1,
      sym__equality_expression,
    STATE(208), 1,
      sym__wrapped_equality_expression,
    STATE(209), 1,
      sym__relational_expression,
    STATE(210), 1,
      sym__wrapped_relational_expression,
    STATE(211), 1,
      sym__shift_expression,
    STATE(212), 1,
      sym__wrapped_shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(558), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12585] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(203), 1,
      sym__bitwise_xor_expression,
    STATE(205), 1,
      sym__bitwise_and_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(207), 1,
      sym__equality_expression,
    STATE(208), 1,
      sym__wrapped_equality_expression,
    STATE(209), 1,
      sym__relational_expression,
    STATE(210), 1,
      sym__wrapped_relational_expression,
    STATE(211), 1,
      sym__shift_expression,
    STATE(212), 1,
      sym__wrapped_shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(234), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(558), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12699] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(205), 1,
      sym__bitwise_and_expression,
    STATE(207), 1,
      sym__equality_expression,
    STATE(208), 1,
      sym__wrapped_equality_expression,
    STATE(209), 1,
      sym__relational_expression,
    STATE(210), 1,
      sym__wrapped_relational_expression,
    STATE(211), 1,
      sym__shift_expression,
    STATE(212), 1,
      sym__wrapped_shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(235), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(558), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12813] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(207), 1,
      sym__equality_expression,
    STATE(209), 1,
      sym__relational_expression,
    STATE(210), 1,
      sym__wrapped_relational_expression,
    STATE(211), 1,
      sym__shift_expression,
    STATE(212), 1,
      sym__wrapped_shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(236), 1,
      sym__wrapped_equality_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(558), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12927] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(209), 1,
      sym__relational_expression,
    STATE(211), 1,
      sym__shift_expression,
    STATE(212), 1,
      sym__wrapped_shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(558), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13041] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(211), 1,
      sym__shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(238), 1,
      sym__wrapped_shift_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(558), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13155] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(213), 1,
      sym__additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(558), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13269] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(558), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(371), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(369), 4,
      sym_octal,
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
  [13383] = 34,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(365), 1,
      sym__wrapped_multiplicative_expression,
    STATE(558), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(375), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(373), 4,
      sym_octal,
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
  [13499] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(299), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13613] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      sym_unary_minus_operator,
    ACTIONS(83), 1,
      sym_relocation_type,
    ACTIONS(87), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(188), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(189), 1,
      sym__bitwise_xor_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(224), 1,
      sym__logical_or_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(230), 1,
      sym__bitwise_or_expression,
    STATE(233), 1,
      sym__wrapped_logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_or_expression,
    STATE(252), 1,
      sym__equality_expression,
    STATE(256), 1,
      sym__bitwise_and_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(259), 1,
      sym__logical_and_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(263), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(267), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(272), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(274), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(85), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(270), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13727] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_unary_minus_operator,
    ACTIONS(208), 1,
      sym_relocation_type,
    ACTIONS(214), 1,
      aux_sym_decimal_token1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(224), 1,
      aux_sym_symbol_token1,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(280), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__logical_and_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(284), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym__bitwise_and_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(289), 1,
      sym__equality_expression,
    STATE(290), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__relational_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__shift_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__multiplicative_expression,
    STATE(322), 1,
      sym__wrapped_logical_or_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(206), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(212), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(210), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(298), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13841] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(340), 1,
      sym__wrapped_logical_or_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(557), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13955] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(197), 1,
      sym__logical_or_expression,
    STATE(199), 1,
      sym__logical_and_expression,
    STATE(200), 1,
      sym__wrapped_logical_and_expression,
    STATE(201), 1,
      sym__bitwise_or_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(203), 1,
      sym__bitwise_xor_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(205), 1,
      sym__bitwise_and_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(207), 1,
      sym__equality_expression,
    STATE(208), 1,
      sym__wrapped_equality_expression,
    STATE(209), 1,
      sym__relational_expression,
    STATE(210), 1,
      sym__wrapped_relational_expression,
    STATE(211), 1,
      sym__shift_expression,
    STATE(212), 1,
      sym__wrapped_shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(248), 1,
      sym__wrapped_logical_or_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(558), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [14069] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(152), 1,
      sym__wrapped_assignment_expression,
    STATE(174), 1,
      sym__assignment_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_logical_or_expression,
    STATE(177), 1,
      sym__logical_and_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(179), 1,
      sym__bitwise_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__bitwise_xor_expression,
    STATE(182), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(183), 1,
      sym__bitwise_and_expression,
    STATE(184), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(186), 1,
      sym__wrapped_equality_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [14183] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(366), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [14297] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(42), 1,
      sym_unary_minus_operator,
    ACTIONS(44), 1,
      sym_relocation_type,
    ACTIONS(48), 1,
      aux_sym_decimal_token1,
    ACTIONS(54), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(56), 1,
      aux_sym_symbol_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(196), 1,
      sym__assignment_expression,
    STATE(197), 1,
      sym__logical_or_expression,
    STATE(198), 1,
      sym__wrapped_logical_or_expression,
    STATE(199), 1,
      sym__logical_and_expression,
    STATE(200), 1,
      sym__wrapped_logical_and_expression,
    STATE(201), 1,
      sym__bitwise_or_expression,
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(203), 1,
      sym__bitwise_xor_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(205), 1,
      sym__bitwise_and_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(207), 1,
      sym__equality_expression,
    STATE(208), 1,
      sym__wrapped_equality_expression,
    STATE(209), 1,
      sym__relational_expression,
    STATE(210), 1,
      sym__wrapped_relational_expression,
    STATE(211), 1,
      sym__shift_expression,
    STATE(212), 1,
      sym__wrapped_shift_expression,
    STATE(213), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_additive_expression,
    STATE(215), 1,
      sym__multiplicative_expression,
    STATE(217), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(190), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(192), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(46), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(216), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [14411] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(527), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [14525] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(525), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [14639] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(530), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [14753] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      sym_unary_minus_operator,
    ACTIONS(140), 1,
      sym_relocation_type,
    ACTIONS(144), 1,
      aux_sym_decimal_token1,
    ACTIONS(152), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(154), 1,
      aux_sym_symbol_token1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(356), 1,
      sym__equality_expression,
    STATE(357), 1,
      sym__wrapped_equality_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__shift_expression,
    STATE(361), 1,
      sym__wrapped_shift_expression,
    STATE(362), 1,
      sym__additive_expression,
    STATE(363), 1,
      sym__wrapped_additive_expression,
    STATE(364), 1,
      sym__multiplicative_expression,
    STATE(531), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(244), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(246), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(142), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(365), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [14867] = 33,
    ACTIONS(3), 1,
      sym_block_comment,
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
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__relational_expression,
    STATE(145), 1,
      sym__wrapped_relational_expression,
    STATE(146), 1,
      sym__shift_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__additive_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__multiplicative_expression,
    STATE(160), 1,
      sym__wrapped_equality_expression,
    STATE(185), 1,
      sym__equality_expression,
    STATE(345), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__logical_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(349), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__bitwise_or_expression,
    STATE(351), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(352), 1,
      sym__bitwise_xor_expression,
    STATE(353), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(354), 1,
      sym__bitwise_and_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(288), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(290), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(162), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [14981] = 4,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 1,
      anon_sym_CR,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(314), 43,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [15036] = 2,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(385), 45,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [15087] = 2,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 45,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [15138] = 2,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    ACTIONS(393), 45,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [15189] = 2,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 45,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [15240] = 2,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 45,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [15291] = 4,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 1,
      anon_sym_CR,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(314), 43,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [15346] = 2,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 45,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [15397] = 3,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(326), 43,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [15450] = 3,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(405), 1,
      anon_sym_LF,
    ACTIONS(385), 44,
      anon_sym_SEMI,
      anon_sym_CR,
      sym_line_comment,
      sym_block_comment,
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
  [15503] = 2,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 45,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [15554] = 2,
    ACTIONS(408), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(410), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15584] = 2,
    ACTIONS(412), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(414), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15614] = 3,
    ACTIONS(420), 1,
      sym_relational_operator,
    ACTIONS(416), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(418), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [15646] = 2,
    ACTIONS(422), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(424), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15676] = 3,
    ACTIONS(430), 1,
      sym_shift_operator,
    ACTIONS(426), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(428), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [15708] = 2,
    ACTIONS(432), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(434), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15738] = 3,
    ACTIONS(440), 1,
      sym_additive_operator,
    ACTIONS(436), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(438), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [15770] = 2,
    ACTIONS(442), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(444), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15800] = 3,
    ACTIONS(450), 1,
      sym_multiplicative_operator,
    ACTIONS(446), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(448), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15832] = 4,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      sym_assignment_operator,
    ACTIONS(452), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(454), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15866] = 2,
    ACTIONS(460), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(462), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15896] = 2,
    ACTIONS(464), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(466), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15926] = 2,
    ACTIONS(468), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(470), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15956] = 3,
    ACTIONS(476), 1,
      sym_logical_and_operator,
    ACTIONS(472), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(474), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [15988] = 3,
    ACTIONS(482), 1,
      sym_bitwise_or_operator,
    ACTIONS(478), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(480), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [16020] = 3,
    ACTIONS(488), 1,
      sym_bitwise_xor_operator,
    ACTIONS(484), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(486), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [16052] = 3,
    ACTIONS(494), 1,
      sym_bitwise_and_operator,
    ACTIONS(490), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(492), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [16084] = 3,
    ACTIONS(500), 1,
      sym_equality_operator,
    ACTIONS(496), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(498), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [16116] = 3,
    ACTIONS(420), 1,
      sym_relational_operator,
    ACTIONS(502), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(504), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [16148] = 3,
    ACTIONS(430), 1,
      sym_shift_operator,
    ACTIONS(506), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(508), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [16180] = 3,
    ACTIONS(440), 1,
      sym_additive_operator,
    ACTIONS(510), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(512), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [16212] = 3,
    ACTIONS(450), 1,
      sym_multiplicative_operator,
    ACTIONS(514), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(516), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16244] = 2,
    ACTIONS(518), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(520), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16274] = 2,
    ACTIONS(522), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(524), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16304] = 2,
    ACTIONS(526), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(528), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16334] = 3,
    ACTIONS(530), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(532), 10,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
    ACTIONS(534), 12,
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
  [16366] = 2,
    ACTIONS(536), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(538), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16396] = 2,
    ACTIONS(540), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(542), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16426] = 2,
    ACTIONS(544), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(546), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16456] = 2,
    ACTIONS(548), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(550), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16486] = 2,
    ACTIONS(552), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(554), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16516] = 2,
    ACTIONS(556), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(558), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16546] = 2,
    ACTIONS(560), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(562), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16576] = 3,
    ACTIONS(568), 1,
      sym_logical_or_operator,
    ACTIONS(564), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(566), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [16608] = 2,
    ACTIONS(570), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(572), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16638] = 3,
    ACTIONS(476), 1,
      sym_logical_and_operator,
    ACTIONS(574), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(576), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [16670] = 2,
    ACTIONS(578), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(580), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16700] = 3,
    ACTIONS(482), 1,
      sym_bitwise_or_operator,
    ACTIONS(582), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(584), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [16732] = 2,
    ACTIONS(586), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(588), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16762] = 3,
    ACTIONS(488), 1,
      sym_bitwise_xor_operator,
    ACTIONS(590), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(592), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [16794] = 2,
    ACTIONS(594), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(596), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16824] = 3,
    ACTIONS(494), 1,
      sym_bitwise_and_operator,
    ACTIONS(598), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(600), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [16856] = 2,
    ACTIONS(602), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(604), 22,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16886] = 3,
    ACTIONS(500), 1,
      sym_equality_operator,
    ACTIONS(606), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(608), 21,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
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
  [16918] = 3,
    ACTIONS(610), 1,
      sym_bitwise_or_operator,
    ACTIONS(480), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(478), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16947] = 3,
    ACTIONS(612), 1,
      sym_bitwise_or_operator,
    ACTIONS(582), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(584), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [16976] = 2,
    ACTIONS(586), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(588), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [17003] = 3,
    ACTIONS(614), 1,
      sym_bitwise_and_operator,
    ACTIONS(598), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(600), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [17032] = 4,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    ACTIONS(618), 1,
      sym_assignment_operator,
    ACTIONS(452), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(454), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [17063] = 2,
    ACTIONS(538), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(536), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17090] = 2,
    ACTIONS(542), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(540), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17117] = 2,
    ACTIONS(550), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(548), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17144] = 2,
    ACTIONS(554), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(552), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17171] = 2,
    ACTIONS(558), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(556), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17198] = 2,
    ACTIONS(562), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(560), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17225] = 3,
    ACTIONS(620), 1,
      sym_logical_or_operator,
    ACTIONS(566), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(564), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17254] = 2,
    ACTIONS(572), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(570), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17281] = 3,
    ACTIONS(622), 1,
      sym_logical_and_operator,
    ACTIONS(576), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(574), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17310] = 2,
    ACTIONS(580), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(578), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17337] = 3,
    ACTIONS(610), 1,
      sym_bitwise_or_operator,
    ACTIONS(584), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(582), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17366] = 2,
    ACTIONS(588), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(586), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17393] = 3,
    ACTIONS(624), 1,
      sym_bitwise_xor_operator,
    ACTIONS(592), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(590), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17422] = 2,
    ACTIONS(596), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(594), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17449] = 3,
    ACTIONS(626), 1,
      sym_bitwise_and_operator,
    ACTIONS(600), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(598), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17478] = 2,
    ACTIONS(604), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(602), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17505] = 3,
    ACTIONS(628), 1,
      sym_equality_operator,
    ACTIONS(608), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(606), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17534] = 2,
    ACTIONS(414), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(412), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17561] = 3,
    ACTIONS(630), 1,
      sym_relational_operator,
    ACTIONS(418), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(416), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17590] = 2,
    ACTIONS(424), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(422), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17617] = 3,
    ACTIONS(632), 1,
      sym_shift_operator,
    ACTIONS(428), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(426), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [17646] = 2,
    ACTIONS(434), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(432), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17673] = 3,
    ACTIONS(634), 1,
      sym_additive_operator,
    ACTIONS(438), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(436), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [17702] = 2,
    ACTIONS(444), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(442), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17729] = 3,
    ACTIONS(636), 1,
      sym_multiplicative_operator,
    ACTIONS(448), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(446), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17758] = 4,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    ACTIONS(640), 1,
      sym_assignment_operator,
    ACTIONS(454), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(452), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17789] = 2,
    ACTIONS(540), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(542), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [17816] = 2,
    ACTIONS(548), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(550), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [17843] = 2,
    ACTIONS(460), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(462), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [17870] = 4,
    ACTIONS(536), 1,
      sym__operand_separator,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(644), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(538), 13,
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
  [17901] = 2,
    ACTIONS(464), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(466), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [17928] = 2,
    ACTIONS(468), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(470), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [17955] = 2,
    ACTIONS(560), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(562), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [17982] = 3,
    ACTIONS(646), 1,
      sym_logical_and_operator,
    ACTIONS(472), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(474), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18011] = 3,
    ACTIONS(648), 1,
      sym_bitwise_xor_operator,
    ACTIONS(590), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(592), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18040] = 3,
    ACTIONS(614), 1,
      sym_bitwise_and_operator,
    ACTIONS(490), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(492), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18069] = 3,
    ACTIONS(650), 1,
      sym_equality_operator,
    ACTIONS(496), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(498), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18098] = 2,
    ACTIONS(462), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(460), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18125] = 2,
    ACTIONS(578), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(580), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18152] = 2,
    ACTIONS(470), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(468), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18179] = 3,
    ACTIONS(622), 1,
      sym_logical_and_operator,
    ACTIONS(474), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(472), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18208] = 3,
    ACTIONS(646), 1,
      sym_logical_and_operator,
    ACTIONS(574), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(576), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18237] = 3,
    ACTIONS(624), 1,
      sym_bitwise_xor_operator,
    ACTIONS(486), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(484), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18266] = 3,
    ACTIONS(626), 1,
      sym_bitwise_and_operator,
    ACTIONS(492), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(490), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18295] = 3,
    ACTIONS(628), 1,
      sym_equality_operator,
    ACTIONS(498), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(496), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18324] = 3,
    ACTIONS(630), 1,
      sym_relational_operator,
    ACTIONS(504), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(502), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18353] = 3,
    ACTIONS(632), 1,
      sym_shift_operator,
    ACTIONS(508), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(506), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18382] = 3,
    ACTIONS(634), 1,
      sym_additive_operator,
    ACTIONS(512), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(510), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [18411] = 3,
    ACTIONS(636), 1,
      sym_multiplicative_operator,
    ACTIONS(516), 7,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(514), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18440] = 2,
    ACTIONS(520), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(518), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18467] = 2,
    ACTIONS(536), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(538), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18494] = 2,
    ACTIONS(524), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(522), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18521] = 2,
    ACTIONS(410), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(408), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18548] = 2,
    ACTIONS(528), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(526), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18575] = 2,
    ACTIONS(544), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(546), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18602] = 3,
    ACTIONS(652), 1,
      sym_relational_operator,
    ACTIONS(502), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(504), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18631] = 2,
    ACTIONS(546), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(544), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18658] = 3,
    ACTIONS(654), 1,
      sym_shift_operator,
    ACTIONS(506), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(508), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18687] = 3,
    ACTIONS(656), 1,
      sym_additive_operator,
    ACTIONS(510), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(512), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18716] = 3,
    ACTIONS(658), 1,
      sym_multiplicative_operator,
    ACTIONS(514), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(516), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18745] = 2,
    ACTIONS(602), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(604), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18772] = 2,
    ACTIONS(518), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(520), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18799] = 2,
    ACTIONS(552), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(554), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18826] = 3,
    ACTIONS(660), 1,
      sym_logical_or_operator,
    ACTIONS(564), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(566), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18855] = 2,
    ACTIONS(594), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(596), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18882] = 3,
    ACTIONS(612), 1,
      sym_bitwise_or_operator,
    ACTIONS(478), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(480), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18911] = 3,
    ACTIONS(650), 1,
      sym_equality_operator,
    ACTIONS(606), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(608), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18940] = 2,
    ACTIONS(570), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(572), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18967] = 2,
    ACTIONS(412), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(414), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [18994] = 3,
    ACTIONS(652), 1,
      sym_relational_operator,
    ACTIONS(416), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(418), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [19023] = 3,
    ACTIONS(648), 1,
      sym_bitwise_xor_operator,
    ACTIONS(484), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(486), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [19052] = 2,
    ACTIONS(422), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(424), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [19079] = 3,
    ACTIONS(654), 1,
      sym_shift_operator,
    ACTIONS(426), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(428), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [19108] = 2,
    ACTIONS(522), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(524), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [19135] = 2,
    ACTIONS(432), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(434), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [19162] = 3,
    ACTIONS(656), 1,
      sym_additive_operator,
    ACTIONS(436), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(438), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [19191] = 2,
    ACTIONS(408), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(410), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [19218] = 2,
    ACTIONS(442), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(444), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [19245] = 3,
    ACTIONS(658), 1,
      sym_multiplicative_operator,
    ACTIONS(446), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(448), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [19274] = 2,
    ACTIONS(526), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(528), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [19301] = 2,
    ACTIONS(556), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(558), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
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
  [19328] = 2,
    ACTIONS(466), 8,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(464), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19355] = 12,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(666), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      sym_block_comment,
    ACTIONS(675), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(677), 1,
      sym_assignment_operator,
    ACTIONS(679), 1,
      sym__data_separator,
    STATE(318), 1,
      aux_sym_integer_operands_repeat1,
    STATE(388), 1,
      aux_sym_integer_operands_repeat2,
    STATE(617), 1,
      sym__comment,
    ACTIONS(662), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(672), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(664), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [19398] = 3,
    ACTIONS(681), 1,
      sym_bitwise_or_operator,
    ACTIONS(584), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(582), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19421] = 2,
    ACTIONS(542), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(540), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19442] = 2,
    ACTIONS(550), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(548), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19463] = 2,
    ACTIONS(554), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(552), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19484] = 2,
    ACTIONS(558), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(556), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19505] = 2,
    ACTIONS(562), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(560), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19526] = 3,
    ACTIONS(683), 1,
      sym_logical_or_operator,
    ACTIONS(566), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(564), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19549] = 2,
    ACTIONS(572), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(570), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19570] = 3,
    ACTIONS(685), 1,
      sym_logical_and_operator,
    ACTIONS(576), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(574), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19593] = 2,
    ACTIONS(580), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(578), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19614] = 2,
    ACTIONS(588), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(586), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19635] = 3,
    ACTIONS(687), 1,
      sym_bitwise_xor_operator,
    ACTIONS(592), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(590), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19658] = 2,
    ACTIONS(596), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(594), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19679] = 3,
    ACTIONS(689), 1,
      sym_bitwise_and_operator,
    ACTIONS(600), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(598), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19702] = 2,
    ACTIONS(604), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(602), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19723] = 3,
    ACTIONS(691), 1,
      sym_equality_operator,
    ACTIONS(608), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(606), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19746] = 2,
    ACTIONS(414), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(412), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19767] = 3,
    ACTIONS(693), 1,
      sym_relational_operator,
    ACTIONS(418), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(416), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19790] = 2,
    ACTIONS(424), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(422), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19811] = 3,
    ACTIONS(695), 1,
      sym_shift_operator,
    ACTIONS(428), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(426), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [19834] = 2,
    ACTIONS(434), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(432), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19855] = 3,
    ACTIONS(697), 1,
      sym_additive_operator,
    ACTIONS(438), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(436), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [19878] = 2,
    ACTIONS(444), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(442), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19899] = 3,
    ACTIONS(699), 1,
      sym_multiplicative_operator,
    ACTIONS(448), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(446), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19922] = 4,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(703), 1,
      sym_assignment_operator,
    ACTIONS(454), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(452), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19947] = 2,
    ACTIONS(462), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(460), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19968] = 2,
    ACTIONS(466), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(464), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19989] = 2,
    ACTIONS(470), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(468), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20010] = 9,
    ACTIONS(715), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(717), 1,
      sym__data_separator,
    STATE(319), 1,
      aux_sym_float_operands_repeat1,
    STATE(391), 1,
      aux_sym_integer_operands_repeat2,
    STATE(627), 1,
      sym__comment,
    ACTIONS(705), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(709), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(712), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(707), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20045] = 3,
    ACTIONS(681), 1,
      sym_bitwise_or_operator,
    ACTIONS(480), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(478), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20068] = 3,
    ACTIONS(687), 1,
      sym_bitwise_xor_operator,
    ACTIONS(486), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(484), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20091] = 3,
    ACTIONS(689), 1,
      sym_bitwise_and_operator,
    ACTIONS(492), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(490), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20114] = 3,
    ACTIONS(691), 1,
      sym_equality_operator,
    ACTIONS(498), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(496), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20137] = 3,
    ACTIONS(693), 1,
      sym_relational_operator,
    ACTIONS(504), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(502), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20160] = 3,
    ACTIONS(695), 1,
      sym_shift_operator,
    ACTIONS(508), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(506), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [20183] = 3,
    ACTIONS(697), 1,
      sym_additive_operator,
    ACTIONS(512), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(510), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [20206] = 3,
    ACTIONS(699), 1,
      sym_multiplicative_operator,
    ACTIONS(516), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(514), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20229] = 2,
    ACTIONS(520), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(518), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20250] = 2,
    ACTIONS(524), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(522), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20271] = 2,
    ACTIONS(410), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(408), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20292] = 2,
    ACTIONS(528), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(526), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20313] = 3,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(719), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20336] = 3,
    ACTIONS(568), 1,
      sym_logical_or_operator,
    ACTIONS(544), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(546), 12,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
  [20359] = 10,
    ACTIONS(675), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(679), 1,
      sym__data_separator,
    ACTIONS(727), 1,
      sym_line_comment,
    ACTIONS(730), 1,
      sym_block_comment,
    STATE(334), 1,
      aux_sym_integer_operands_repeat1,
    STATE(393), 1,
      aux_sym_integer_operands_repeat2,
    STATE(617), 1,
      sym__comment,
    ACTIONS(723), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(733), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(725), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20396] = 9,
    ACTIONS(715), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(717), 1,
      sym__data_separator,
    STATE(338), 1,
      aux_sym_float_operands_repeat1,
    STATE(396), 1,
      aux_sym_integer_operands_repeat2,
    STATE(627), 1,
      sym__comment,
    ACTIONS(736), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(740), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(743), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(738), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20431] = 3,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(719), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20454] = 2,
    ACTIONS(538), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(536), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20475] = 2,
    ACTIONS(546), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(544), 11,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20496] = 3,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(719), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20519] = 3,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(719), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20542] = 3,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(719), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20565] = 3,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(719), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20588] = 3,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(719), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20611] = 3,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(719), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20634] = 3,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(719), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20657] = 3,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(719), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20680] = 3,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(719), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20703] = 3,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(719), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20726] = 3,
    ACTIONS(685), 1,
      sym_logical_and_operator,
    ACTIONS(474), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(472), 10,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20749] = 9,
    ACTIONS(772), 1,
      sym_line_comment,
    ACTIONS(775), 1,
      sym_block_comment,
    ACTIONS(781), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(784), 1,
      sym__data_separator,
    STATE(334), 1,
      aux_sym_integer_operands_repeat1,
    STATE(617), 1,
      sym__comment,
    ACTIONS(768), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(778), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(770), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20783] = 4,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(677), 1,
      sym_assignment_operator,
    ACTIONS(787), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(789), 10,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
  [20807] = 4,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(677), 1,
      sym_assignment_operator,
    ACTIONS(768), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(770), 10,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
  [20831] = 4,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(677), 1,
      sym_assignment_operator,
    ACTIONS(791), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(793), 10,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
  [20855] = 8,
    ACTIONS(805), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(808), 1,
      sym__data_separator,
    STATE(338), 1,
      aux_sym_float_operands_repeat1,
    STATE(627), 1,
      sym__comment,
    ACTIONS(795), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(799), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(802), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(797), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [20887] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(528), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(526), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20908] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(546), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(544), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20929] = 3,
    ACTIONS(536), 1,
      aux_sym__string_directive_token1,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(538), 12,
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
  [20950] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(542), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(540), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20971] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(550), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(548), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20992] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(554), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(552), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21013] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(558), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(556), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21034] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(562), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(560), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21055] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(813), 1,
      sym_logical_or_operator,
    ACTIONS(566), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(564), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21078] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(572), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(570), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21099] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(815), 1,
      sym_logical_and_operator,
    ACTIONS(576), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(574), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21122] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(580), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(578), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21143] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(817), 1,
      sym_bitwise_or_operator,
    ACTIONS(584), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(582), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21166] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(588), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(586), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21187] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(819), 1,
      sym_bitwise_xor_operator,
    ACTIONS(592), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(590), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21210] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(596), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(594), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21231] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(821), 1,
      sym_bitwise_and_operator,
    ACTIONS(600), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(598), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21254] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(604), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(602), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21275] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(823), 1,
      sym_equality_operator,
    ACTIONS(608), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(606), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21298] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(414), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(412), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21319] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(825), 1,
      sym_relational_operator,
    ACTIONS(418), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(416), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21342] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(424), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(422), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21363] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(827), 1,
      sym_shift_operator,
    ACTIONS(428), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(426), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [21386] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(434), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(432), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21407] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(829), 1,
      sym_additive_operator,
    ACTIONS(438), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(436), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [21430] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(444), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(442), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21451] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(831), 1,
      sym_multiplicative_operator,
    ACTIONS(448), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(446), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21474] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(833), 1,
      anon_sym_LPAREN,
    ACTIONS(835), 1,
      sym_assignment_operator,
    ACTIONS(454), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(452), 7,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21499] = 3,
    ACTIONS(460), 1,
      aux_sym__string_directive_token1,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(462), 12,
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
  [21520] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(466), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(464), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21541] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(470), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(468), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21562] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(817), 1,
      sym_bitwise_or_operator,
    ACTIONS(480), 4,
      sym_assignment_operator,
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
  [21585] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(819), 1,
      sym_bitwise_xor_operator,
    ACTIONS(486), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(484), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21608] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(821), 1,
      sym_bitwise_and_operator,
    ACTIONS(492), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [21631] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(823), 1,
      sym_equality_operator,
    ACTIONS(498), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(496), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21654] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(825), 1,
      sym_relational_operator,
    ACTIONS(504), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [21677] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(827), 1,
      sym_shift_operator,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [21700] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(829), 1,
      sym_additive_operator,
    ACTIONS(512), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(510), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [21723] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(831), 1,
      sym_multiplicative_operator,
    ACTIONS(516), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(514), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21746] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(520), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(518), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21767] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(524), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(522), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21788] = 3,
    ACTIONS(408), 1,
      aux_sym__string_directive_token1,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(410), 12,
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
  [21809] = 3,
    ACTIONS(526), 1,
      aux_sym__string_directive_token1,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(528), 12,
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
  [21830] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(462), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(460), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21851] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(538), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(536), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21872] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(410), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(408), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21893] = 3,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(837), 1,
      aux_sym__string_directive_token1,
    ACTIONS(534), 12,
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
  [21914] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(815), 1,
      sym_logical_and_operator,
    ACTIONS(474), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(472), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21937] = 3,
    ACTIONS(620), 1,
      sym_logical_or_operator,
    ACTIONS(546), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(544), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym_integer_operands_token1,
      sym_assignment_operator,
  [21957] = 4,
    ACTIONS(839), 1,
      sym__data_separator,
    STATE(394), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(723), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(725), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21979] = 2,
    ACTIONS(841), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(843), 10,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
  [21997] = 3,
    ACTIONS(660), 1,
      sym_logical_or_operator,
    ACTIONS(544), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(546), 10,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [22017] = 4,
    ACTIONS(839), 1,
      sym__data_separator,
    STATE(394), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(736), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(738), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22039] = 2,
    ACTIONS(845), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(847), 10,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
  [22057] = 4,
    ACTIONS(839), 1,
      sym__data_separator,
    STATE(394), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(849), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(851), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22079] = 4,
    ACTIONS(857), 1,
      sym__data_separator,
    STATE(394), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(853), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(855), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22101] = 2,
    ACTIONS(795), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(797), 10,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
  [22119] = 4,
    ACTIONS(839), 1,
      sym__data_separator,
    STATE(394), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(860), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(862), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22141] = 4,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    ACTIONS(868), 1,
      sym_assignment_operator,
    ACTIONS(864), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(866), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_COMMA,
  [22162] = 4,
    STATE(400), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(870), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(874), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(872), 5,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22183] = 4,
    STATE(400), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(876), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(874), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(878), 5,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22204] = 4,
    STATE(400), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(880), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(884), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(882), 5,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22225] = 4,
    STATE(405), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(887), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(891), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(889), 5,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22246] = 5,
    STATE(16), 1,
      sym__control_operand_separator,
    STATE(402), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(895), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(897), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym_integer_operands_token1,
    ACTIONS(893), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [22269] = 4,
    STATE(399), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(900), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(904), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(902), 5,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22290] = 4,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    ACTIONS(910), 1,
      sym_assignment_operator,
    ACTIONS(908), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(906), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      aux_sym_integer_operands_token1,
  [22311] = 4,
    STATE(400), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(912), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(874), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(914), 5,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22332] = 5,
    STATE(16), 1,
      sym__control_operand_separator,
    STATE(402), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(918), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(920), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym_integer_operands_token1,
    ACTIONS(916), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [22355] = 5,
    STATE(16), 1,
      sym__control_operand_separator,
    STATE(406), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(920), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym_integer_operands_token1,
    ACTIONS(924), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(922), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [22378] = 4,
    STATE(398), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(926), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(930), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(928), 5,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22399] = 5,
    ACTIONS(932), 1,
      ts_builtin_sym_end,
    ACTIONS(939), 1,
      sym__operand_separator,
    STATE(409), 1,
      aux_sym_operands_repeat1,
    ACTIONS(936), 2,
      sym_block_comment,
      anon_sym_COMMA,
    ACTIONS(934), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22421] = 6,
    ACTIONS(946), 1,
      sym_block_comment,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    STATE(414), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(942), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(949), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(944), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22445] = 6,
    ACTIONS(953), 1,
      ts_builtin_sym_end,
    ACTIONS(957), 1,
      aux_sym__whitespace_token1,
    ACTIONS(959), 1,
      sym_block_comment,
    ACTIONS(962), 1,
      anon_sym_LPAREN,
    STATE(435), 1,
      sym__call_expression,
    ACTIONS(955), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22469] = 5,
    ACTIONS(971), 1,
      anon_sym_COMMA,
    STATE(412), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(964), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(968), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(966), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22491] = 6,
    ACTIONS(974), 1,
      ts_builtin_sym_end,
    ACTIONS(978), 1,
      sym_block_comment,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    ACTIONS(983), 1,
      sym__operand_separator,
    STATE(409), 1,
      aux_sym_operands_repeat1,
    ACTIONS(976), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22515] = 6,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(989), 1,
      sym_block_comment,
    STATE(412), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(949), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(985), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(987), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22539] = 6,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      ts_builtin_sym_end,
    ACTIONS(996), 1,
      sym_block_comment,
    ACTIONS(999), 1,
      sym__operand_separator,
    STATE(413), 1,
      aux_sym_operands_repeat1,
    ACTIONS(994), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22563] = 2,
    ACTIONS(964), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(966), 8,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [22578] = 2,
    ACTIONS(1003), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1001), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      aux_sym_integer_operands_token1,
  [22593] = 2,
    ACTIONS(1005), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(1007), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_COMMA,
  [22608] = 2,
    ACTIONS(1009), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(1011), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_COMMA,
  [22623] = 2,
    ACTIONS(1015), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1013), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      aux_sym_integer_operands_token1,
  [22638] = 2,
    ACTIONS(1017), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(1019), 8,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [22653] = 2,
    ACTIONS(895), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(893), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      aux_sym_integer_operands_token1,
  [22668] = 2,
    ACTIONS(1021), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(1023), 8,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [22683] = 2,
    ACTIONS(1027), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1025), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      aux_sym_integer_operands_token1,
  [22698] = 2,
    ACTIONS(1001), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(1003), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
      anon_sym_COMMA,
  [22713] = 2,
    ACTIONS(1007), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1005), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
      aux_sym_integer_operands_token1,
  [22728] = 7,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(1029), 1,
      anon_sym_CR,
    ACTIONS(1031), 1,
      sym_line_comment,
    ACTIONS(1033), 1,
      sym_block_comment,
    STATE(568), 1,
      sym__comment,
    ACTIONS(62), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1035), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22752] = 4,
    ACTIONS(1041), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1043), 1,
      anon_sym_LPAREN,
    ACTIONS(1037), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(1039), 5,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22770] = 4,
    ACTIONS(1049), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(1045), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(1047), 5,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22788] = 7,
    ACTIONS(1029), 1,
      anon_sym_CR,
    ACTIONS(1031), 1,
      sym_line_comment,
    ACTIONS(1033), 1,
      sym_block_comment,
    ACTIONS(1053), 1,
      ts_builtin_sym_end,
    STATE(623), 1,
      sym__comment,
    ACTIONS(62), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1055), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22812] = 7,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(1029), 1,
      anon_sym_CR,
    ACTIONS(1031), 1,
      sym_line_comment,
    ACTIONS(1033), 1,
      sym_block_comment,
    STATE(613), 1,
      sym__comment,
    ACTIONS(62), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1057), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22836] = 2,
    ACTIONS(1059), 1,
      ts_builtin_sym_end,
    ACTIONS(1061), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22849] = 2,
    ACTIONS(1063), 1,
      ts_builtin_sym_end,
    ACTIONS(1065), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22862] = 4,
    ACTIONS(1071), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1073), 1,
      sym_block_comment,
    ACTIONS(1067), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(1069), 4,
      anon_sym_SEMI,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22879] = 2,
    ACTIONS(1076), 1,
      ts_builtin_sym_end,
    ACTIONS(1078), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22892] = 2,
    ACTIONS(1080), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(1082), 6,
      anon_sym_SEMI,
      aux_sym__whitespace_token1,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22905] = 2,
    ACTIONS(1084), 1,
      ts_builtin_sym_end,
    ACTIONS(1086), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22918] = 2,
    ACTIONS(1088), 1,
      ts_builtin_sym_end,
    ACTIONS(1090), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22931] = 6,
    ACTIONS(1053), 1,
      ts_builtin_sym_end,
    ACTIONS(1094), 1,
      sym_line_comment,
    ACTIONS(1096), 1,
      sym_block_comment,
    STATE(623), 1,
      sym__comment,
    ACTIONS(1092), 2,
      sym__line_separator,
      anon_sym_SEMI,
    ACTIONS(1098), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22952] = 2,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(644), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22965] = 2,
    ACTIONS(1063), 1,
      ts_builtin_sym_end,
    ACTIONS(1065), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22978] = 2,
    ACTIONS(1100), 1,
      ts_builtin_sym_end,
    ACTIONS(1102), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [22991] = 6,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(1094), 1,
      sym_line_comment,
    ACTIONS(1096), 1,
      sym_block_comment,
    STATE(613), 1,
      sym__comment,
    ACTIONS(1092), 2,
      sym__line_separator,
      anon_sym_SEMI,
    ACTIONS(1104), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23012] = 2,
    ACTIONS(1106), 1,
      ts_builtin_sym_end,
    ACTIONS(1108), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23025] = 2,
    ACTIONS(1110), 1,
      ts_builtin_sym_end,
    ACTIONS(1112), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23038] = 2,
    ACTIONS(1114), 1,
      ts_builtin_sym_end,
    ACTIONS(1116), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23051] = 2,
    ACTIONS(1118), 1,
      ts_builtin_sym_end,
    ACTIONS(1120), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23064] = 6,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(1094), 1,
      sym_line_comment,
    ACTIONS(1096), 1,
      sym_block_comment,
    STATE(568), 1,
      sym__comment,
    ACTIONS(1092), 2,
      sym__line_separator,
      anon_sym_SEMI,
    ACTIONS(1122), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23085] = 2,
    ACTIONS(1124), 1,
      ts_builtin_sym_end,
    ACTIONS(1126), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23098] = 2,
    ACTIONS(1130), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1128), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23110] = 2,
    ACTIONS(1134), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1132), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23122] = 2,
    ACTIONS(1138), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1136), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23134] = 2,
    ACTIONS(1142), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1140), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23146] = 2,
    ACTIONS(1146), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1144), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23158] = 2,
    ACTIONS(1150), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1148), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23170] = 2,
    ACTIONS(1154), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1152), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23182] = 2,
    ACTIONS(1158), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1156), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23194] = 2,
    ACTIONS(1162), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1160), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23206] = 2,
    ACTIONS(1166), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1164), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23218] = 2,
    ACTIONS(1170), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1168), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23230] = 2,
    ACTIONS(1170), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1168), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23242] = 2,
    ACTIONS(1174), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1172), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23254] = 2,
    ACTIONS(1178), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1176), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23266] = 2,
    ACTIONS(1182), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1180), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23278] = 2,
    ACTIONS(1170), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1168), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23290] = 2,
    ACTIONS(1186), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1184), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23302] = 5,
    ACTIONS(1029), 1,
      anon_sym_CR,
    ACTIONS(1188), 1,
      sym_line_comment,
    ACTIONS(1190), 1,
      sym_block_comment,
    ACTIONS(62), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1192), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23320] = 2,
    ACTIONS(1196), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1194), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23332] = 2,
    ACTIONS(1200), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1198), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23344] = 2,
    ACTIONS(1204), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1202), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23356] = 2,
    ACTIONS(1208), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1206), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23368] = 2,
    ACTIONS(1212), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1210), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23380] = 2,
    ACTIONS(683), 1,
      sym_logical_or_operator,
    ACTIONS(544), 6,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [23392] = 2,
    ACTIONS(1216), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1214), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23404] = 2,
    ACTIONS(1220), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1218), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23416] = 2,
    ACTIONS(1224), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1222), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23428] = 2,
    ACTIONS(1228), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1226), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23440] = 2,
    ACTIONS(1232), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1230), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23452] = 2,
    ACTIONS(1236), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1234), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23464] = 2,
    ACTIONS(1240), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1238), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23476] = 2,
    ACTIONS(1244), 3,
      sym_line_comment,
      sym_preprocessor,
      sym__wrong_preprocessor,
    ACTIONS(1242), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_block_comment,
  [23488] = 3,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(1246), 1,
      sym_assignment_operator,
    ACTIONS(864), 4,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23501] = 4,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    ACTIONS(1252), 1,
      sym_macro_parameter,
    STATE(535), 1,
      sym_macro_parameters,
    ACTIONS(1248), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23516] = 5,
    ACTIONS(1252), 1,
      sym_macro_parameter,
    ACTIONS(1254), 1,
      sym_block_comment,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    STATE(524), 1,
      sym_macro_parameters,
    ACTIONS(1256), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23533] = 4,
    ACTIONS(966), 1,
      anon_sym_RPAREN,
    ACTIONS(1263), 1,
      anon_sym_COMMA,
    STATE(485), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1260), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23548] = 5,
    ACTIONS(1266), 1,
      ts_builtin_sym_end,
    ACTIONS(1268), 1,
      anon_sym_CR,
    ACTIONS(1270), 1,
      anon_sym_LF,
    STATE(582), 1,
      sym__comment,
    ACTIONS(1272), 2,
      sym_line_comment,
      sym_block_comment,
  [23565] = 4,
    ACTIONS(1274), 1,
      sym_line_comment,
    ACTIONS(1276), 1,
      sym_block_comment,
    ACTIONS(1092), 2,
      sym__line_separator,
      anon_sym_SEMI,
    ACTIONS(1278), 2,
      sym_preprocessor,
      sym__wrong_preprocessor,
  [23580] = 4,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    STATE(485), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1280), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23595] = 4,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    STATE(488), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1285), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23610] = 5,
    ACTIONS(1252), 1,
      sym_macro_parameter,
    ACTIONS(1288), 1,
      sym_block_comment,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    STATE(539), 1,
      sym_macro_parameters,
    ACTIONS(1290), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23627] = 4,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(1246), 1,
      sym_assignment_operator,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    ACTIONS(864), 3,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_COMMA,
  [23642] = 4,
    ACTIONS(1252), 1,
      sym_macro_parameter,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    STATE(539), 1,
      sym_macro_parameters,
    ACTIONS(1290), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23657] = 4,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(1246), 1,
      sym_assignment_operator,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    ACTIONS(864), 3,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_COMMA,
  [23672] = 4,
    ACTIONS(1252), 1,
      sym_macro_parameter,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      sym_macro_parameters,
    ACTIONS(1300), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23687] = 4,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(1246), 1,
      sym_assignment_operator,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
    ACTIONS(864), 3,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_COMMA,
  [23702] = 4,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(1246), 1,
      sym_assignment_operator,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
    ACTIONS(864), 3,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_COMMA,
  [23717] = 4,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(1246), 1,
      sym_assignment_operator,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
    ACTIONS(864), 3,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_COMMA,
  [23732] = 5,
    ACTIONS(1268), 1,
      anon_sym_CR,
    ACTIONS(1270), 1,
      anon_sym_LF,
    ACTIONS(1313), 1,
      ts_builtin_sym_end,
    STATE(619), 1,
      sym__comment,
    ACTIONS(1315), 2,
      sym_line_comment,
      sym_block_comment,
  [23749] = 5,
    ACTIONS(1252), 1,
      sym_macro_parameter,
    ACTIONS(1317), 1,
      sym_block_comment,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      sym_macro_parameters,
    ACTIONS(1319), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23766] = 5,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    ACTIONS(1252), 1,
      sym_macro_parameter,
    ACTIONS(1323), 1,
      sym_block_comment,
    STATE(535), 1,
      sym_macro_parameters,
    ACTIONS(1248), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23783] = 4,
    ACTIONS(1252), 1,
      sym_macro_parameter,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
    STATE(532), 1,
      sym_macro_parameters,
    ACTIONS(1325), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [23798] = 5,
    ACTIONS(1268), 1,
      anon_sym_CR,
    ACTIONS(1270), 1,
      anon_sym_LF,
    ACTIONS(1329), 1,
      ts_builtin_sym_end,
    STATE(560), 1,
      sym__comment,
    ACTIONS(1331), 2,
      sym_line_comment,
      sym_block_comment,
  [23815] = 1,
    ACTIONS(1023), 5,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23823] = 4,
    ACTIONS(974), 1,
      anon_sym_RPAREN,
    ACTIONS(1335), 1,
      sym__operand_separator,
    STATE(515), 1,
      aux_sym_operands_repeat1,
    ACTIONS(1333), 2,
      sym_block_comment,
      anon_sym_COMMA,
  [23837] = 4,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1337), 1,
      anon_sym_DQUOTE,
    STATE(507), 1,
      aux_sym_string_repeat1,
    ACTIONS(1339), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23851] = 5,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1341), 1,
      sym_block_comment,
    ACTIONS(1344), 1,
      sym__operand_separator,
    STATE(522), 1,
      aux_sym_operands_repeat1,
  [23867] = 4,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1346), 1,
      anon_sym_DQUOTE,
    STATE(523), 1,
      aux_sym_string_repeat1,
    ACTIONS(1348), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23881] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(813), 1,
      sym_logical_or_operator,
    ACTIONS(544), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [23893] = 4,
    ACTIONS(1329), 1,
      ts_builtin_sym_end,
    ACTIONS(1352), 1,
      sym__line_separator,
    STATE(560), 1,
      sym__comment,
    ACTIONS(1350), 2,
      sym_line_comment,
      sym_block_comment,
  [23907] = 4,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1354), 1,
      anon_sym_DQUOTE,
    STATE(512), 1,
      aux_sym_string_repeat1,
    ACTIONS(1356), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23921] = 1,
    ACTIONS(966), 5,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23929] = 4,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1358), 1,
      anon_sym_DQUOTE,
    STATE(523), 1,
      aux_sym_string_repeat1,
    ACTIONS(1348), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23943] = 4,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1360), 1,
      anon_sym_DQUOTE,
    STATE(523), 1,
      aux_sym_string_repeat1,
    ACTIONS(1348), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23957] = 4,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1362), 1,
      anon_sym_DQUOTE,
    STATE(517), 1,
      aux_sym_string_repeat1,
    ACTIONS(1364), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23971] = 3,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      aux_sym_operands_repeat1,
    ACTIONS(1366), 3,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_COMMA,
  [23983] = 4,
    ACTIONS(1266), 1,
      ts_builtin_sym_end,
    ACTIONS(1352), 1,
      sym__line_separator,
    STATE(582), 1,
      sym__comment,
    ACTIONS(1369), 2,
      sym_line_comment,
      sym_block_comment,
  [23997] = 4,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1371), 1,
      anon_sym_DQUOTE,
    STATE(523), 1,
      aux_sym_string_repeat1,
    ACTIONS(1348), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [24011] = 4,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    STATE(513), 1,
      aux_sym_string_repeat1,
    ACTIONS(1375), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [24025] = 4,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    ACTIONS(1377), 1,
      sym__operand_separator,
    STATE(504), 1,
      aux_sym_operands_repeat1,
    ACTIONS(1333), 2,
      sym_block_comment,
      anon_sym_COMMA,
  [24039] = 1,
    ACTIONS(1019), 5,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24047] = 4,
    ACTIONS(1313), 1,
      ts_builtin_sym_end,
    ACTIONS(1352), 1,
      sym__line_separator,
    STATE(619), 1,
      sym__comment,
    ACTIONS(1379), 2,
      sym_line_comment,
      sym_block_comment,
  [24061] = 5,
    ACTIONS(974), 1,
      anon_sym_RPAREN,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    ACTIONS(1381), 1,
      sym_block_comment,
    ACTIONS(1384), 1,
      sym__operand_separator,
    STATE(515), 1,
      aux_sym_operands_repeat1,
  [24077] = 4,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1386), 1,
      anon_sym_DQUOTE,
    STATE(523), 1,
      aux_sym_string_repeat1,
    ACTIONS(1388), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [24091] = 2,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
    ACTIONS(1391), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [24100] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(833), 1,
      anon_sym_LPAREN,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
    ACTIONS(1397), 1,
      sym_assignment_operator,
  [24113] = 4,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1399), 1,
      anon_sym_CR,
    ACTIONS(1401), 1,
      anon_sym_LF,
  [24126] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(833), 1,
      anon_sym_LPAREN,
    ACTIONS(1397), 1,
      sym_assignment_operator,
    ACTIONS(1403), 1,
      anon_sym_RPAREN,
  [24139] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1405), 1,
      anon_sym_LPAREN,
    ACTIONS(1407), 1,
      sym_macro_parameter,
    STATE(457), 1,
      sym_macro_parameters,
  [24152] = 2,
    ACTIONS(1411), 1,
      anon_sym_RPAREN,
    ACTIONS(1409), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [24161] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(833), 1,
      anon_sym_LPAREN,
    ACTIONS(1397), 1,
      sym_assignment_operator,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
  [24174] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(833), 1,
      anon_sym_LPAREN,
    ACTIONS(1397), 1,
      sym_assignment_operator,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
  [24187] = 2,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
    ACTIONS(1417), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [24196] = 2,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
    ACTIONS(1421), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [24205] = 1,
    ACTIONS(1001), 4,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24212] = 2,
    ACTIONS(1427), 1,
      anon_sym_RPAREN,
    ACTIONS(1425), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [24221] = 1,
    ACTIONS(1009), 4,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24228] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(833), 1,
      anon_sym_LPAREN,
    ACTIONS(1397), 1,
      sym_assignment_operator,
    ACTIONS(1429), 1,
      anon_sym_RPAREN,
  [24241] = 1,
    ACTIONS(1005), 4,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24248] = 2,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
    ACTIONS(1431), 3,
      sym_block_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [24257] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1407), 1,
      sym_macro_parameter,
    ACTIONS(1435), 1,
      anon_sym_LPAREN,
    STATE(468), 1,
      sym_macro_parameters,
  [24270] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(1092), 1,
      aux_sym__statement_token1,
  [24280] = 2,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1437), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24288] = 2,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1439), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24296] = 3,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1268), 1,
      anon_sym_CR,
    ACTIONS(1270), 1,
      anon_sym_LF,
  [24306] = 2,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1441), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24314] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1443), 1,
      anon_sym_COMMA,
    ACTIONS(1445), 1,
      sym_macro_parameter,
  [24324] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1397), 1,
      sym_assignment_operator,
    ACTIONS(1447), 1,
      anon_sym_LPAREN,
  [24334] = 2,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1449), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24342] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      sym__line_separator,
  [24352] = 3,
    ACTIONS(1451), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1453), 1,
      sym_block_comment,
    ACTIONS(1455), 1,
      sym_macro_name,
  [24362] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1457), 1,
      anon_sym_COMMA,
    ACTIONS(1459), 1,
      sym_macro_parameter,
  [24372] = 2,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1461), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24380] = 3,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1399), 1,
      anon_sym_CR,
    ACTIONS(1401), 1,
      anon_sym_LF,
  [24390] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1397), 1,
      sym_assignment_operator,
    ACTIONS(1463), 1,
      anon_sym_LPAREN,
  [24400] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1397), 1,
      sym_assignment_operator,
    ACTIONS(1465), 1,
      anon_sym_LPAREN,
  [24410] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(1397), 1,
      sym_assignment_operator,
  [24420] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(833), 1,
      anon_sym_LPAREN,
    ACTIONS(1397), 1,
      sym_assignment_operator,
  [24430] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    ACTIONS(1397), 1,
      sym_assignment_operator,
  [24440] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1467), 1,
      anon_sym_RPAREN,
  [24447] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1469), 1,
      ts_builtin_sym_end,
  [24454] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1471), 1,
      anon_sym_SQUOTE,
  [24461] = 2,
    ACTIONS(1473), 1,
      sym_block_comment,
    ACTIONS(1475), 1,
      sym_macro_parameter,
  [24468] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
  [24475] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1479), 1,
      anon_sym_RPAREN,
  [24482] = 2,
    ACTIONS(1481), 1,
      sym_block_comment,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
  [24489] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(316), 1,
      anon_sym_LF,
  [24496] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1485), 1,
      anon_sym_RPAREN,
  [24503] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [24510] = 2,
    ACTIONS(1459), 1,
      sym_macro_parameter,
    ACTIONS(1487), 1,
      sym_block_comment,
  [24517] = 2,
    ACTIONS(1489), 1,
      sym_block_comment,
    ACTIONS(1491), 1,
      sym_macro_parameter,
  [24524] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1491), 1,
      sym_macro_parameter,
  [24531] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1493), 1,
      sym_macro_parameter,
  [24538] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
  [24545] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1495), 1,
      sym_macro_name,
  [24552] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
  [24559] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1352), 1,
      sym__line_separator,
  [24566] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1499), 1,
      anon_sym_LF,
  [24573] = 2,
    ACTIONS(1481), 1,
      sym_block_comment,
    ACTIONS(1501), 1,
      anon_sym_RPAREN,
  [24580] = 2,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1503), 1,
      aux_sym__whitespace_token1,
  [24587] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1505), 1,
      sym_macro_parameter,
  [24594] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1507), 1,
      anon_sym_SQUOTE,
  [24601] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1509), 1,
      ts_builtin_sym_end,
  [24608] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1511), 1,
      anon_sym_RPAREN,
  [24615] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1513), 1,
      anon_sym_RPAREN,
  [24622] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
  [24629] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
  [24636] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1519), 1,
      anon_sym_SQUOTE,
  [24643] = 2,
    ACTIONS(1521), 1,
      sym_block_comment,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
  [24650] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1525), 1,
      anon_sym_RPAREN,
  [24657] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1527), 1,
      anon_sym_RPAREN,
  [24664] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1529), 1,
      anon_sym_SQUOTE,
  [24671] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1531), 1,
      anon_sym_LF,
  [24678] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1533), 1,
      anon_sym_RPAREN,
  [24685] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1535), 1,
      ts_builtin_sym_end,
  [24692] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1537), 1,
      anon_sym_RPAREN,
  [24699] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1539), 1,
      anon_sym_RPAREN,
  [24706] = 2,
    ACTIONS(1445), 1,
      sym_macro_parameter,
    ACTIONS(1541), 1,
      sym_block_comment,
  [24713] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1543), 1,
      anon_sym_RPAREN,
  [24720] = 2,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1545), 1,
      aux_sym__whitespace_token1,
  [24727] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1547), 1,
      anon_sym_SQUOTE,
  [24734] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1549), 1,
      anon_sym_RPAREN,
  [24741] = 1,
    ACTIONS(1551), 2,
      sym__data_separator,
      sym_block_comment,
  [24746] = 2,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1553), 1,
      aux_sym__whitespace_token1,
  [24753] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1555), 1,
      anon_sym_RPAREN,
  [24760] = 2,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1557), 1,
      aux_sym__string_directive_token1,
  [24767] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1559), 1,
      anon_sym_RPAREN,
  [24774] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1561), 1,
      anon_sym_RPAREN,
  [24781] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1563), 1,
      anon_sym_RPAREN,
  [24788] = 2,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1005), 1,
      aux_sym__string_directive_token1,
  [24795] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(316), 1,
      sym__line_separator,
  [24802] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1565), 1,
      anon_sym_RPAREN,
  [24809] = 2,
    ACTIONS(1567), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1569), 1,
      sym_block_comment,
  [24816] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1053), 1,
      ts_builtin_sym_end,
  [24823] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1571), 1,
      sym__data_separator,
  [24830] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1573), 1,
      sym_macro_name,
  [24837] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1575), 1,
      anon_sym_RPAREN,
  [24844] = 1,
    ACTIONS(294), 2,
      sym__data_separator,
      sym_block_comment,
  [24849] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1577), 1,
      anon_sym_RPAREN,
  [24856] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1579), 1,
      ts_builtin_sym_end,
  [24863] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1581), 1,
      anon_sym_RPAREN,
  [24870] = 2,
    ACTIONS(1583), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1585), 1,
      sym_block_comment,
  [24877] = 2,
    ACTIONS(1587), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1589), 1,
      sym_block_comment,
  [24884] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1591), 1,
      ts_builtin_sym_end,
  [24891] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1593), 1,
      anon_sym_RPAREN,
  [24898] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1595), 1,
      anon_sym_RPAREN,
  [24905] = 2,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1597), 1,
      aux_sym__string_directive_token1,
  [24912] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(250), 1,
      sym__data_separator,
  [24919] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1599), 1,
      anon_sym_LPAREN,
  [24926] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1601), 1,
      anon_sym_LPAREN,
  [24933] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1603), 1,
      anon_sym_LPAREN,
  [24940] = 2,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1001), 1,
      aux_sym__string_directive_token1,
  [24947] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1605), 1,
      anon_sym_LPAREN,
  [24954] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1092), 1,
      aux_sym__statement_token1,
  [24961] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1607), 1,
      anon_sym_LPAREN,
  [24968] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1609), 1,
      anon_sym_RPAREN,
  [24975] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1475), 1,
      sym_macro_parameter,
  [24982] = 2,
    ACTIONS(811), 1,
      sym_block_comment,
    ACTIONS(1611), 1,
      aux_sym__whitespace_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 141,
  [SMALL_STATE(4)] = 256,
  [SMALL_STATE(5)] = 368,
  [SMALL_STATE(6)] = 480,
  [SMALL_STATE(7)] = 620,
  [SMALL_STATE(8)] = 755,
  [SMALL_STATE(9)] = 890,
  [SMALL_STATE(10)] = 997,
  [SMALL_STATE(11)] = 1130,
  [SMALL_STATE(12)] = 1253,
  [SMALL_STATE(13)] = 1382,
  [SMALL_STATE(14)] = 1511,
  [SMALL_STATE(15)] = 1643,
  [SMALL_STATE(16)] = 1775,
  [SMALL_STATE(17)] = 1904,
  [SMALL_STATE(18)] = 2034,
  [SMALL_STATE(19)] = 2168,
  [SMALL_STATE(20)] = 2298,
  [SMALL_STATE(21)] = 2429,
  [SMALL_STATE(22)] = 2560,
  [SMALL_STATE(23)] = 2691,
  [SMALL_STATE(24)] = 2822,
  [SMALL_STATE(25)] = 2947,
  [SMALL_STATE(26)] = 3072,
  [SMALL_STATE(27)] = 3199,
  [SMALL_STATE(28)] = 3326,
  [SMALL_STATE(29)] = 3457,
  [SMALL_STATE(30)] = 3588,
  [SMALL_STATE(31)] = 3719,
  [SMALL_STATE(32)] = 3850,
  [SMALL_STATE(33)] = 3981,
  [SMALL_STATE(34)] = 4112,
  [SMALL_STATE(35)] = 4243,
  [SMALL_STATE(36)] = 4374,
  [SMALL_STATE(37)] = 4505,
  [SMALL_STATE(38)] = 4636,
  [SMALL_STATE(39)] = 4760,
  [SMALL_STATE(40)] = 4884,
  [SMALL_STATE(41)] = 5011,
  [SMALL_STATE(42)] = 5134,
  [SMALL_STATE(43)] = 5259,
  [SMALL_STATE(44)] = 5375,
  [SMALL_STATE(45)] = 5499,
  [SMALL_STATE(46)] = 5623,
  [SMALL_STATE(47)] = 5747,
  [SMALL_STATE(48)] = 5862,
  [SMALL_STATE(49)] = 5979,
  [SMALL_STATE(50)] = 6094,
  [SMALL_STATE(51)] = 6211,
  [SMALL_STATE(52)] = 6325,
  [SMALL_STATE(53)] = 6379,
  [SMALL_STATE(54)] = 6433,
  [SMALL_STATE(55)] = 6487,
  [SMALL_STATE(56)] = 6601,
  [SMALL_STATE(57)] = 6657,
  [SMALL_STATE(58)] = 6711,
  [SMALL_STATE(59)] = 6767,
  [SMALL_STATE(60)] = 6881,
  [SMALL_STATE(61)] = 6995,
  [SMALL_STATE(62)] = 7109,
  [SMALL_STATE(63)] = 7223,
  [SMALL_STATE(64)] = 7337,
  [SMALL_STATE(65)] = 7451,
  [SMALL_STATE(66)] = 7565,
  [SMALL_STATE(67)] = 7679,
  [SMALL_STATE(68)] = 7793,
  [SMALL_STATE(69)] = 7907,
  [SMALL_STATE(70)] = 8023,
  [SMALL_STATE(71)] = 8079,
  [SMALL_STATE(72)] = 8193,
  [SMALL_STATE(73)] = 8307,
  [SMALL_STATE(74)] = 8361,
  [SMALL_STATE(75)] = 8475,
  [SMALL_STATE(76)] = 8589,
  [SMALL_STATE(77)] = 8703,
  [SMALL_STATE(78)] = 8817,
  [SMALL_STATE(79)] = 8931,
  [SMALL_STATE(80)] = 9045,
  [SMALL_STATE(81)] = 9159,
  [SMALL_STATE(82)] = 9273,
  [SMALL_STATE(83)] = 9387,
  [SMALL_STATE(84)] = 9501,
  [SMALL_STATE(85)] = 9615,
  [SMALL_STATE(86)] = 9729,
  [SMALL_STATE(87)] = 9845,
  [SMALL_STATE(88)] = 9959,
  [SMALL_STATE(89)] = 10073,
  [SMALL_STATE(90)] = 10187,
  [SMALL_STATE(91)] = 10301,
  [SMALL_STATE(92)] = 10415,
  [SMALL_STATE(93)] = 10529,
  [SMALL_STATE(94)] = 10643,
  [SMALL_STATE(95)] = 10757,
  [SMALL_STATE(96)] = 10871,
  [SMALL_STATE(97)] = 10987,
  [SMALL_STATE(98)] = 11101,
  [SMALL_STATE(99)] = 11215,
  [SMALL_STATE(100)] = 11329,
  [SMALL_STATE(101)] = 11443,
  [SMALL_STATE(102)] = 11557,
  [SMALL_STATE(103)] = 11671,
  [SMALL_STATE(104)] = 11785,
  [SMALL_STATE(105)] = 11899,
  [SMALL_STATE(106)] = 12013,
  [SMALL_STATE(107)] = 12127,
  [SMALL_STATE(108)] = 12243,
  [SMALL_STATE(109)] = 12357,
  [SMALL_STATE(110)] = 12471,
  [SMALL_STATE(111)] = 12585,
  [SMALL_STATE(112)] = 12699,
  [SMALL_STATE(113)] = 12813,
  [SMALL_STATE(114)] = 12927,
  [SMALL_STATE(115)] = 13041,
  [SMALL_STATE(116)] = 13155,
  [SMALL_STATE(117)] = 13269,
  [SMALL_STATE(118)] = 13383,
  [SMALL_STATE(119)] = 13499,
  [SMALL_STATE(120)] = 13613,
  [SMALL_STATE(121)] = 13727,
  [SMALL_STATE(122)] = 13841,
  [SMALL_STATE(123)] = 13955,
  [SMALL_STATE(124)] = 14069,
  [SMALL_STATE(125)] = 14183,
  [SMALL_STATE(126)] = 14297,
  [SMALL_STATE(127)] = 14411,
  [SMALL_STATE(128)] = 14525,
  [SMALL_STATE(129)] = 14639,
  [SMALL_STATE(130)] = 14753,
  [SMALL_STATE(131)] = 14867,
  [SMALL_STATE(132)] = 14981,
  [SMALL_STATE(133)] = 15036,
  [SMALL_STATE(134)] = 15087,
  [SMALL_STATE(135)] = 15138,
  [SMALL_STATE(136)] = 15189,
  [SMALL_STATE(137)] = 15240,
  [SMALL_STATE(138)] = 15291,
  [SMALL_STATE(139)] = 15346,
  [SMALL_STATE(140)] = 15397,
  [SMALL_STATE(141)] = 15450,
  [SMALL_STATE(142)] = 15503,
  [SMALL_STATE(143)] = 15554,
  [SMALL_STATE(144)] = 15584,
  [SMALL_STATE(145)] = 15614,
  [SMALL_STATE(146)] = 15646,
  [SMALL_STATE(147)] = 15676,
  [SMALL_STATE(148)] = 15708,
  [SMALL_STATE(149)] = 15738,
  [SMALL_STATE(150)] = 15770,
  [SMALL_STATE(151)] = 15800,
  [SMALL_STATE(152)] = 15832,
  [SMALL_STATE(153)] = 15866,
  [SMALL_STATE(154)] = 15896,
  [SMALL_STATE(155)] = 15926,
  [SMALL_STATE(156)] = 15956,
  [SMALL_STATE(157)] = 15988,
  [SMALL_STATE(158)] = 16020,
  [SMALL_STATE(159)] = 16052,
  [SMALL_STATE(160)] = 16084,
  [SMALL_STATE(161)] = 16116,
  [SMALL_STATE(162)] = 16148,
  [SMALL_STATE(163)] = 16180,
  [SMALL_STATE(164)] = 16212,
  [SMALL_STATE(165)] = 16244,
  [SMALL_STATE(166)] = 16274,
  [SMALL_STATE(167)] = 16304,
  [SMALL_STATE(168)] = 16334,
  [SMALL_STATE(169)] = 16366,
  [SMALL_STATE(170)] = 16396,
  [SMALL_STATE(171)] = 16426,
  [SMALL_STATE(172)] = 16456,
  [SMALL_STATE(173)] = 16486,
  [SMALL_STATE(174)] = 16516,
  [SMALL_STATE(175)] = 16546,
  [SMALL_STATE(176)] = 16576,
  [SMALL_STATE(177)] = 16608,
  [SMALL_STATE(178)] = 16638,
  [SMALL_STATE(179)] = 16670,
  [SMALL_STATE(180)] = 16700,
  [SMALL_STATE(181)] = 16732,
  [SMALL_STATE(182)] = 16762,
  [SMALL_STATE(183)] = 16794,
  [SMALL_STATE(184)] = 16824,
  [SMALL_STATE(185)] = 16856,
  [SMALL_STATE(186)] = 16886,
  [SMALL_STATE(187)] = 16918,
  [SMALL_STATE(188)] = 16947,
  [SMALL_STATE(189)] = 16976,
  [SMALL_STATE(190)] = 17003,
  [SMALL_STATE(191)] = 17032,
  [SMALL_STATE(192)] = 17063,
  [SMALL_STATE(193)] = 17090,
  [SMALL_STATE(194)] = 17117,
  [SMALL_STATE(195)] = 17144,
  [SMALL_STATE(196)] = 17171,
  [SMALL_STATE(197)] = 17198,
  [SMALL_STATE(198)] = 17225,
  [SMALL_STATE(199)] = 17254,
  [SMALL_STATE(200)] = 17281,
  [SMALL_STATE(201)] = 17310,
  [SMALL_STATE(202)] = 17337,
  [SMALL_STATE(203)] = 17366,
  [SMALL_STATE(204)] = 17393,
  [SMALL_STATE(205)] = 17422,
  [SMALL_STATE(206)] = 17449,
  [SMALL_STATE(207)] = 17478,
  [SMALL_STATE(208)] = 17505,
  [SMALL_STATE(209)] = 17534,
  [SMALL_STATE(210)] = 17561,
  [SMALL_STATE(211)] = 17590,
  [SMALL_STATE(212)] = 17617,
  [SMALL_STATE(213)] = 17646,
  [SMALL_STATE(214)] = 17673,
  [SMALL_STATE(215)] = 17702,
  [SMALL_STATE(216)] = 17729,
  [SMALL_STATE(217)] = 17758,
  [SMALL_STATE(218)] = 17789,
  [SMALL_STATE(219)] = 17816,
  [SMALL_STATE(220)] = 17843,
  [SMALL_STATE(221)] = 17870,
  [SMALL_STATE(222)] = 17901,
  [SMALL_STATE(223)] = 17928,
  [SMALL_STATE(224)] = 17955,
  [SMALL_STATE(225)] = 17982,
  [SMALL_STATE(226)] = 18011,
  [SMALL_STATE(227)] = 18040,
  [SMALL_STATE(228)] = 18069,
  [SMALL_STATE(229)] = 18098,
  [SMALL_STATE(230)] = 18125,
  [SMALL_STATE(231)] = 18152,
  [SMALL_STATE(232)] = 18179,
  [SMALL_STATE(233)] = 18208,
  [SMALL_STATE(234)] = 18237,
  [SMALL_STATE(235)] = 18266,
  [SMALL_STATE(236)] = 18295,
  [SMALL_STATE(237)] = 18324,
  [SMALL_STATE(238)] = 18353,
  [SMALL_STATE(239)] = 18382,
  [SMALL_STATE(240)] = 18411,
  [SMALL_STATE(241)] = 18440,
  [SMALL_STATE(242)] = 18467,
  [SMALL_STATE(243)] = 18494,
  [SMALL_STATE(244)] = 18521,
  [SMALL_STATE(245)] = 18548,
  [SMALL_STATE(246)] = 18575,
  [SMALL_STATE(247)] = 18602,
  [SMALL_STATE(248)] = 18631,
  [SMALL_STATE(249)] = 18658,
  [SMALL_STATE(250)] = 18687,
  [SMALL_STATE(251)] = 18716,
  [SMALL_STATE(252)] = 18745,
  [SMALL_STATE(253)] = 18772,
  [SMALL_STATE(254)] = 18799,
  [SMALL_STATE(255)] = 18826,
  [SMALL_STATE(256)] = 18855,
  [SMALL_STATE(257)] = 18882,
  [SMALL_STATE(258)] = 18911,
  [SMALL_STATE(259)] = 18940,
  [SMALL_STATE(260)] = 18967,
  [SMALL_STATE(261)] = 18994,
  [SMALL_STATE(262)] = 19023,
  [SMALL_STATE(263)] = 19052,
  [SMALL_STATE(264)] = 19079,
  [SMALL_STATE(265)] = 19108,
  [SMALL_STATE(266)] = 19135,
  [SMALL_STATE(267)] = 19162,
  [SMALL_STATE(268)] = 19191,
  [SMALL_STATE(269)] = 19218,
  [SMALL_STATE(270)] = 19245,
  [SMALL_STATE(271)] = 19274,
  [SMALL_STATE(272)] = 19301,
  [SMALL_STATE(273)] = 19328,
  [SMALL_STATE(274)] = 19355,
  [SMALL_STATE(275)] = 19398,
  [SMALL_STATE(276)] = 19421,
  [SMALL_STATE(277)] = 19442,
  [SMALL_STATE(278)] = 19463,
  [SMALL_STATE(279)] = 19484,
  [SMALL_STATE(280)] = 19505,
  [SMALL_STATE(281)] = 19526,
  [SMALL_STATE(282)] = 19549,
  [SMALL_STATE(283)] = 19570,
  [SMALL_STATE(284)] = 19593,
  [SMALL_STATE(285)] = 19614,
  [SMALL_STATE(286)] = 19635,
  [SMALL_STATE(287)] = 19658,
  [SMALL_STATE(288)] = 19679,
  [SMALL_STATE(289)] = 19702,
  [SMALL_STATE(290)] = 19723,
  [SMALL_STATE(291)] = 19746,
  [SMALL_STATE(292)] = 19767,
  [SMALL_STATE(293)] = 19790,
  [SMALL_STATE(294)] = 19811,
  [SMALL_STATE(295)] = 19834,
  [SMALL_STATE(296)] = 19855,
  [SMALL_STATE(297)] = 19878,
  [SMALL_STATE(298)] = 19899,
  [SMALL_STATE(299)] = 19922,
  [SMALL_STATE(300)] = 19947,
  [SMALL_STATE(301)] = 19968,
  [SMALL_STATE(302)] = 19989,
  [SMALL_STATE(303)] = 20010,
  [SMALL_STATE(304)] = 20045,
  [SMALL_STATE(305)] = 20068,
  [SMALL_STATE(306)] = 20091,
  [SMALL_STATE(307)] = 20114,
  [SMALL_STATE(308)] = 20137,
  [SMALL_STATE(309)] = 20160,
  [SMALL_STATE(310)] = 20183,
  [SMALL_STATE(311)] = 20206,
  [SMALL_STATE(312)] = 20229,
  [SMALL_STATE(313)] = 20250,
  [SMALL_STATE(314)] = 20271,
  [SMALL_STATE(315)] = 20292,
  [SMALL_STATE(316)] = 20313,
  [SMALL_STATE(317)] = 20336,
  [SMALL_STATE(318)] = 20359,
  [SMALL_STATE(319)] = 20396,
  [SMALL_STATE(320)] = 20431,
  [SMALL_STATE(321)] = 20454,
  [SMALL_STATE(322)] = 20475,
  [SMALL_STATE(323)] = 20496,
  [SMALL_STATE(324)] = 20519,
  [SMALL_STATE(325)] = 20542,
  [SMALL_STATE(326)] = 20565,
  [SMALL_STATE(327)] = 20588,
  [SMALL_STATE(328)] = 20611,
  [SMALL_STATE(329)] = 20634,
  [SMALL_STATE(330)] = 20657,
  [SMALL_STATE(331)] = 20680,
  [SMALL_STATE(332)] = 20703,
  [SMALL_STATE(333)] = 20726,
  [SMALL_STATE(334)] = 20749,
  [SMALL_STATE(335)] = 20783,
  [SMALL_STATE(336)] = 20807,
  [SMALL_STATE(337)] = 20831,
  [SMALL_STATE(338)] = 20855,
  [SMALL_STATE(339)] = 20887,
  [SMALL_STATE(340)] = 20908,
  [SMALL_STATE(341)] = 20929,
  [SMALL_STATE(342)] = 20950,
  [SMALL_STATE(343)] = 20971,
  [SMALL_STATE(344)] = 20992,
  [SMALL_STATE(345)] = 21013,
  [SMALL_STATE(346)] = 21034,
  [SMALL_STATE(347)] = 21055,
  [SMALL_STATE(348)] = 21078,
  [SMALL_STATE(349)] = 21099,
  [SMALL_STATE(350)] = 21122,
  [SMALL_STATE(351)] = 21143,
  [SMALL_STATE(352)] = 21166,
  [SMALL_STATE(353)] = 21187,
  [SMALL_STATE(354)] = 21210,
  [SMALL_STATE(355)] = 21231,
  [SMALL_STATE(356)] = 21254,
  [SMALL_STATE(357)] = 21275,
  [SMALL_STATE(358)] = 21298,
  [SMALL_STATE(359)] = 21319,
  [SMALL_STATE(360)] = 21342,
  [SMALL_STATE(361)] = 21363,
  [SMALL_STATE(362)] = 21386,
  [SMALL_STATE(363)] = 21407,
  [SMALL_STATE(364)] = 21430,
  [SMALL_STATE(365)] = 21451,
  [SMALL_STATE(366)] = 21474,
  [SMALL_STATE(367)] = 21499,
  [SMALL_STATE(368)] = 21520,
  [SMALL_STATE(369)] = 21541,
  [SMALL_STATE(370)] = 21562,
  [SMALL_STATE(371)] = 21585,
  [SMALL_STATE(372)] = 21608,
  [SMALL_STATE(373)] = 21631,
  [SMALL_STATE(374)] = 21654,
  [SMALL_STATE(375)] = 21677,
  [SMALL_STATE(376)] = 21700,
  [SMALL_STATE(377)] = 21723,
  [SMALL_STATE(378)] = 21746,
  [SMALL_STATE(379)] = 21767,
  [SMALL_STATE(380)] = 21788,
  [SMALL_STATE(381)] = 21809,
  [SMALL_STATE(382)] = 21830,
  [SMALL_STATE(383)] = 21851,
  [SMALL_STATE(384)] = 21872,
  [SMALL_STATE(385)] = 21893,
  [SMALL_STATE(386)] = 21914,
  [SMALL_STATE(387)] = 21937,
  [SMALL_STATE(388)] = 21957,
  [SMALL_STATE(389)] = 21979,
  [SMALL_STATE(390)] = 21997,
  [SMALL_STATE(391)] = 22017,
  [SMALL_STATE(392)] = 22039,
  [SMALL_STATE(393)] = 22057,
  [SMALL_STATE(394)] = 22079,
  [SMALL_STATE(395)] = 22101,
  [SMALL_STATE(396)] = 22119,
  [SMALL_STATE(397)] = 22141,
  [SMALL_STATE(398)] = 22162,
  [SMALL_STATE(399)] = 22183,
  [SMALL_STATE(400)] = 22204,
  [SMALL_STATE(401)] = 22225,
  [SMALL_STATE(402)] = 22246,
  [SMALL_STATE(403)] = 22269,
  [SMALL_STATE(404)] = 22290,
  [SMALL_STATE(405)] = 22311,
  [SMALL_STATE(406)] = 22332,
  [SMALL_STATE(407)] = 22355,
  [SMALL_STATE(408)] = 22378,
  [SMALL_STATE(409)] = 22399,
  [SMALL_STATE(410)] = 22421,
  [SMALL_STATE(411)] = 22445,
  [SMALL_STATE(412)] = 22469,
  [SMALL_STATE(413)] = 22491,
  [SMALL_STATE(414)] = 22515,
  [SMALL_STATE(415)] = 22539,
  [SMALL_STATE(416)] = 22563,
  [SMALL_STATE(417)] = 22578,
  [SMALL_STATE(418)] = 22593,
  [SMALL_STATE(419)] = 22608,
  [SMALL_STATE(420)] = 22623,
  [SMALL_STATE(421)] = 22638,
  [SMALL_STATE(422)] = 22653,
  [SMALL_STATE(423)] = 22668,
  [SMALL_STATE(424)] = 22683,
  [SMALL_STATE(425)] = 22698,
  [SMALL_STATE(426)] = 22713,
  [SMALL_STATE(427)] = 22728,
  [SMALL_STATE(428)] = 22752,
  [SMALL_STATE(429)] = 22770,
  [SMALL_STATE(430)] = 22788,
  [SMALL_STATE(431)] = 22812,
  [SMALL_STATE(432)] = 22836,
  [SMALL_STATE(433)] = 22849,
  [SMALL_STATE(434)] = 22862,
  [SMALL_STATE(435)] = 22879,
  [SMALL_STATE(436)] = 22892,
  [SMALL_STATE(437)] = 22905,
  [SMALL_STATE(438)] = 22918,
  [SMALL_STATE(439)] = 22931,
  [SMALL_STATE(440)] = 22952,
  [SMALL_STATE(441)] = 22965,
  [SMALL_STATE(442)] = 22978,
  [SMALL_STATE(443)] = 22991,
  [SMALL_STATE(444)] = 23012,
  [SMALL_STATE(445)] = 23025,
  [SMALL_STATE(446)] = 23038,
  [SMALL_STATE(447)] = 23051,
  [SMALL_STATE(448)] = 23064,
  [SMALL_STATE(449)] = 23085,
  [SMALL_STATE(450)] = 23098,
  [SMALL_STATE(451)] = 23110,
  [SMALL_STATE(452)] = 23122,
  [SMALL_STATE(453)] = 23134,
  [SMALL_STATE(454)] = 23146,
  [SMALL_STATE(455)] = 23158,
  [SMALL_STATE(456)] = 23170,
  [SMALL_STATE(457)] = 23182,
  [SMALL_STATE(458)] = 23194,
  [SMALL_STATE(459)] = 23206,
  [SMALL_STATE(460)] = 23218,
  [SMALL_STATE(461)] = 23230,
  [SMALL_STATE(462)] = 23242,
  [SMALL_STATE(463)] = 23254,
  [SMALL_STATE(464)] = 23266,
  [SMALL_STATE(465)] = 23278,
  [SMALL_STATE(466)] = 23290,
  [SMALL_STATE(467)] = 23302,
  [SMALL_STATE(468)] = 23320,
  [SMALL_STATE(469)] = 23332,
  [SMALL_STATE(470)] = 23344,
  [SMALL_STATE(471)] = 23356,
  [SMALL_STATE(472)] = 23368,
  [SMALL_STATE(473)] = 23380,
  [SMALL_STATE(474)] = 23392,
  [SMALL_STATE(475)] = 23404,
  [SMALL_STATE(476)] = 23416,
  [SMALL_STATE(477)] = 23428,
  [SMALL_STATE(478)] = 23440,
  [SMALL_STATE(479)] = 23452,
  [SMALL_STATE(480)] = 23464,
  [SMALL_STATE(481)] = 23476,
  [SMALL_STATE(482)] = 23488,
  [SMALL_STATE(483)] = 23501,
  [SMALL_STATE(484)] = 23516,
  [SMALL_STATE(485)] = 23533,
  [SMALL_STATE(486)] = 23548,
  [SMALL_STATE(487)] = 23565,
  [SMALL_STATE(488)] = 23580,
  [SMALL_STATE(489)] = 23595,
  [SMALL_STATE(490)] = 23610,
  [SMALL_STATE(491)] = 23627,
  [SMALL_STATE(492)] = 23642,
  [SMALL_STATE(493)] = 23657,
  [SMALL_STATE(494)] = 23672,
  [SMALL_STATE(495)] = 23687,
  [SMALL_STATE(496)] = 23702,
  [SMALL_STATE(497)] = 23717,
  [SMALL_STATE(498)] = 23732,
  [SMALL_STATE(499)] = 23749,
  [SMALL_STATE(500)] = 23766,
  [SMALL_STATE(501)] = 23783,
  [SMALL_STATE(502)] = 23798,
  [SMALL_STATE(503)] = 23815,
  [SMALL_STATE(504)] = 23823,
  [SMALL_STATE(505)] = 23837,
  [SMALL_STATE(506)] = 23851,
  [SMALL_STATE(507)] = 23867,
  [SMALL_STATE(508)] = 23881,
  [SMALL_STATE(509)] = 23893,
  [SMALL_STATE(510)] = 23907,
  [SMALL_STATE(511)] = 23921,
  [SMALL_STATE(512)] = 23929,
  [SMALL_STATE(513)] = 23943,
  [SMALL_STATE(514)] = 23957,
  [SMALL_STATE(515)] = 23971,
  [SMALL_STATE(516)] = 23983,
  [SMALL_STATE(517)] = 23997,
  [SMALL_STATE(518)] = 24011,
  [SMALL_STATE(519)] = 24025,
  [SMALL_STATE(520)] = 24039,
  [SMALL_STATE(521)] = 24047,
  [SMALL_STATE(522)] = 24061,
  [SMALL_STATE(523)] = 24077,
  [SMALL_STATE(524)] = 24091,
  [SMALL_STATE(525)] = 24100,
  [SMALL_STATE(526)] = 24113,
  [SMALL_STATE(527)] = 24126,
  [SMALL_STATE(528)] = 24139,
  [SMALL_STATE(529)] = 24152,
  [SMALL_STATE(530)] = 24161,
  [SMALL_STATE(531)] = 24174,
  [SMALL_STATE(532)] = 24187,
  [SMALL_STATE(533)] = 24196,
  [SMALL_STATE(534)] = 24205,
  [SMALL_STATE(535)] = 24212,
  [SMALL_STATE(536)] = 24221,
  [SMALL_STATE(537)] = 24228,
  [SMALL_STATE(538)] = 24241,
  [SMALL_STATE(539)] = 24248,
  [SMALL_STATE(540)] = 24257,
  [SMALL_STATE(541)] = 24270,
  [SMALL_STATE(542)] = 24280,
  [SMALL_STATE(543)] = 24288,
  [SMALL_STATE(544)] = 24296,
  [SMALL_STATE(545)] = 24306,
  [SMALL_STATE(546)] = 24314,
  [SMALL_STATE(547)] = 24324,
  [SMALL_STATE(548)] = 24334,
  [SMALL_STATE(549)] = 24342,
  [SMALL_STATE(550)] = 24352,
  [SMALL_STATE(551)] = 24362,
  [SMALL_STATE(552)] = 24372,
  [SMALL_STATE(553)] = 24380,
  [SMALL_STATE(554)] = 24390,
  [SMALL_STATE(555)] = 24400,
  [SMALL_STATE(556)] = 24410,
  [SMALL_STATE(557)] = 24420,
  [SMALL_STATE(558)] = 24430,
  [SMALL_STATE(559)] = 24440,
  [SMALL_STATE(560)] = 24447,
  [SMALL_STATE(561)] = 24454,
  [SMALL_STATE(562)] = 24461,
  [SMALL_STATE(563)] = 24468,
  [SMALL_STATE(564)] = 24475,
  [SMALL_STATE(565)] = 24482,
  [SMALL_STATE(566)] = 24489,
  [SMALL_STATE(567)] = 24496,
  [SMALL_STATE(568)] = 24503,
  [SMALL_STATE(569)] = 24510,
  [SMALL_STATE(570)] = 24517,
  [SMALL_STATE(571)] = 24524,
  [SMALL_STATE(572)] = 24531,
  [SMALL_STATE(573)] = 24538,
  [SMALL_STATE(574)] = 24545,
  [SMALL_STATE(575)] = 24552,
  [SMALL_STATE(576)] = 24559,
  [SMALL_STATE(577)] = 24566,
  [SMALL_STATE(578)] = 24573,
  [SMALL_STATE(579)] = 24580,
  [SMALL_STATE(580)] = 24587,
  [SMALL_STATE(581)] = 24594,
  [SMALL_STATE(582)] = 24601,
  [SMALL_STATE(583)] = 24608,
  [SMALL_STATE(584)] = 24615,
  [SMALL_STATE(585)] = 24622,
  [SMALL_STATE(586)] = 24629,
  [SMALL_STATE(587)] = 24636,
  [SMALL_STATE(588)] = 24643,
  [SMALL_STATE(589)] = 24650,
  [SMALL_STATE(590)] = 24657,
  [SMALL_STATE(591)] = 24664,
  [SMALL_STATE(592)] = 24671,
  [SMALL_STATE(593)] = 24678,
  [SMALL_STATE(594)] = 24685,
  [SMALL_STATE(595)] = 24692,
  [SMALL_STATE(596)] = 24699,
  [SMALL_STATE(597)] = 24706,
  [SMALL_STATE(598)] = 24713,
  [SMALL_STATE(599)] = 24720,
  [SMALL_STATE(600)] = 24727,
  [SMALL_STATE(601)] = 24734,
  [SMALL_STATE(602)] = 24741,
  [SMALL_STATE(603)] = 24746,
  [SMALL_STATE(604)] = 24753,
  [SMALL_STATE(605)] = 24760,
  [SMALL_STATE(606)] = 24767,
  [SMALL_STATE(607)] = 24774,
  [SMALL_STATE(608)] = 24781,
  [SMALL_STATE(609)] = 24788,
  [SMALL_STATE(610)] = 24795,
  [SMALL_STATE(611)] = 24802,
  [SMALL_STATE(612)] = 24809,
  [SMALL_STATE(613)] = 24816,
  [SMALL_STATE(614)] = 24823,
  [SMALL_STATE(615)] = 24830,
  [SMALL_STATE(616)] = 24837,
  [SMALL_STATE(617)] = 24844,
  [SMALL_STATE(618)] = 24849,
  [SMALL_STATE(619)] = 24856,
  [SMALL_STATE(620)] = 24863,
  [SMALL_STATE(621)] = 24870,
  [SMALL_STATE(622)] = 24877,
  [SMALL_STATE(623)] = 24884,
  [SMALL_STATE(624)] = 24891,
  [SMALL_STATE(625)] = 24898,
  [SMALL_STATE(626)] = 24905,
  [SMALL_STATE(627)] = 24912,
  [SMALL_STATE(628)] = 24919,
  [SMALL_STATE(629)] = 24926,
  [SMALL_STATE(630)] = 24933,
  [SMALL_STATE(631)] = 24940,
  [SMALL_STATE(632)] = 24947,
  [SMALL_STATE(633)] = 24954,
  [SMALL_STATE(634)] = 24961,
  [SMALL_STATE(635)] = 24968,
  [SMALL_STATE(636)] = 24975,
  [SMALL_STATE(637)] = 24982,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 2, 0, 5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__control_directive, 2, 0, 5), SHIFT(15),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 1), SHIFT(8),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(633),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(612),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(622),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(637),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(603),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(411),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(626),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat2, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat2, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 11),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 11),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 20),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 3, 0, 20),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 7),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 7),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0), SHIFT(57),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0), SHIFT(54),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0), SHIFT(53),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0), SHIFT(141),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0), SHIFT(133),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4, 0, 7),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4, 0, 7),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 7),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 7),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0), SHIFT(134),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 33),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 33),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 13),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 13),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 13),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 13),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 13),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 13),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 13),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 13),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 19),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 19),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 25),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 25),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 26),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 26),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 29),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 29),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 29),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 29),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 29),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 29),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 29),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 29),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 29),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 29),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 29),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 29),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 29),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 29),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 29),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 29),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 29),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 29),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 29),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 29),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 32),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 32),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 34),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 34),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_operand, 1, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_operand, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 21),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 21),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 29),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 29),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 13),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 13),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 13),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 13),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 13),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 13),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 13),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 13),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 13),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 13),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 13),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 13),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 13),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 13),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 21),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 3, 0, 21),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_operands, 1, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_operands, 1, 0, 0),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 1, 0, 0), SHIFT(617),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 1, 0, 0), SHIFT(49),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 1, 0, 0), SHIFT(41),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operands, 1, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operands, 1, 0, 0),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_float_operands, 1, 0, 0), SHIFT(627),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_float_operands, 1, 0, 0), SHIFT(23),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_operands, 2, 0, 0),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_operands, 2, 0, 0),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 2, 0, 0), SHIFT(617),
  [730] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 2, 0, 0), SHIFT(49),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 2, 0, 0), SHIFT(41),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operands, 2, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operands, 2, 0, 0),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_float_operands, 2, 0, 0), SHIFT(627),
  [743] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_float_operands, 2, 0, 0), SHIFT(23),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0),
  [772] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(617),
  [775] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [778] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [781] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 4, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 4, 0, 0),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 3, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 3, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(627),
  [802] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [805] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 3, 0, 0),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 3, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 4, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 4, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_operands, 3, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_operands, 3, 0, 0),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat2, 2, 0, 0),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat2, 2, 0, 0),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(394),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operands, 3, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operands, 3, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1, 0, 0),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_directive, 4, 0, 14),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_directive, 4, 0, 14),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 5, 0, 22),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 5, 0, 22),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_directive_repeat1, 2, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__integer_directive_repeat1, 2, 0, 0),
  [884] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__integer_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(400),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 3, 0, 14),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 3, 0, 14),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 4, 0, 22),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 4, 0, 22),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_operand, 1, 0, 0),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 4, 0, 14),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 4, 0, 14),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_operands, 2, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_operands, 1, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_directive, 3, 0, 14),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_directive, 3, 0, 14),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 28),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 28),
  [936] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 28), SHIFT_REPEAT(39),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 28), SHIFT_REPEAT(39),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(546),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [959] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1), SHIFT(7),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [968] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(546),
  [971] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(597),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 20),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 20),
  [978] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_operands, 2, 0, 20), SHIFT(39),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [989] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(546),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 11),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 11),
  [996] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_operands, 1, 0, 11), SHIFT(39),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 27),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 27),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_flag, 1, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 4, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 4, 0, 0),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_type, 1, 0, 0),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 9),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 9),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 4, 0, 16),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 4, 0, 16),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 4, 0, 30),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 4, 0, 30),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 12),
  [1065] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 12),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 5),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 5),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [1073] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 5), SHIFT(14),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 6),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 17),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 4, 0, 17),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 18),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 4, 0, 18),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 2, 0, 0),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 4, 0, 21),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 4, 0, 21),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 4, 0, 0),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 4, 0, 0),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 10),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 10),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 5, 0, 30),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 5, 0, 30),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 0),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 3, 0, 0),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 9),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 8, 0, 9),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 35),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 7, 0, 35),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 9, 0, 16),
  [1138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 9, 0, 16),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 9, 0, 38),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 9, 0, 38),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 9, 0, 36),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 9, 0, 36),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 9, 0, 37),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 9, 0, 37),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 10, 0, 38),
  [1154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 10, 0, 38),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 24),
  [1158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 5, 0, 24),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 9),
  [1162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 5, 0, 9),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [1166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 2),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 3),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 14),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 3, 0, 14),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 9),
  [1178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 7, 0, 9),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 4),
  [1182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 4),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 24),
  [1186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 7, 0, 24),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 31),
  [1196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 6, 0, 31),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 16),
  [1200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 6, 0, 16),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 9),
  [1204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 6, 0, 9),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 23),
  [1208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 4, 0, 23),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 4, 0, 22),
  [1212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 4, 0, 22),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 16),
  [1216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 8, 0, 16),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 36),
  [1220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 8, 0, 36),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 24),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 6, 0, 24),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 31),
  [1228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 8, 0, 31),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 37),
  [1232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 8, 0, 37),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 35),
  [1236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 8, 0, 35),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 31),
  [1240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 7, 0, 31),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 16),
  [1244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 7, 0, 16),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(551),
  [1263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(569),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 7),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [1280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(551),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(551),
  [1288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(222),
  [1297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(301),
  [1300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(154),
  [1307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(368),
  [1310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(273),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 8),
  [1315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [1317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4, 0, 15),
  [1331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operands, 1, 0, 11), SHIFT(38),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [1356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 28), SHIFT_REPEAT(38),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operands, 2, 0, 20), SHIFT(38),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [1388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(523),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [1393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [1411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [1419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [1423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [1433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [1439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [1441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [1455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 5, 0, 15),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 7),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1535] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4, 0, 8),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_mnemonic, 1, 0, 0),
  [1589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_mnemonic, 1, 0, 0),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 4, 0, 0),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_mnemonic, 1, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__operand_separator = 0,
  ts_external_token__line_separator = 1,
  ts_external_token__data_separator = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__operand_separator] = sym__operand_separator,
  [ts_external_token__line_separator] = sym__line_separator,
  [ts_external_token__data_separator] = sym__data_separator,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__data_separator] = true,
  },
  [2] = {
    [ts_external_token__line_separator] = true,
  },
  [3] = {
    [ts_external_token__line_separator] = true,
    [ts_external_token__data_separator] = true,
  },
  [4] = {
    [ts_external_token__data_separator] = true,
  },
  [5] = {
    [ts_external_token__operand_separator] = true,
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
