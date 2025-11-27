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
#define STATE_COUNT 536
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 25

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_CR = 2,
  anon_sym_LF = 3,
  aux_sym__statement_token1 = 4,
  aux_sym__whitespace_token1 = 5,
  aux_sym__line_comment_token1 = 6,
  aux_sym__block_comment_token1 = 7,
  aux_sym__immediate_block_comment_token1 = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  sym_macro_mnemonic = 11,
  anon_sym_COMMA = 12,
  anon_sym_DOTbyte = 13,
  anon_sym_DOT2byte = 14,
  anon_sym_DOTshort = 15,
  anon_sym_DOThalf = 16,
  anon_sym_DOThword = 17,
  anon_sym_DOT4byte = 18,
  anon_sym_DOTword = 19,
  anon_sym_DOTint = 20,
  anon_sym_DOT8byte = 21,
  anon_sym_DOTdword = 22,
  anon_sym_DOTlong = 23,
  anon_sym_DOTquad = 24,
  anon_sym_DOTcomm = 25,
  anon_sym_DOTlcomm = 26,
  anon_sym_DOTalign = 27,
  anon_sym_DOTbalign = 28,
  anon_sym_DOTp2align = 29,
  anon_sym_DOTsleb128 = 30,
  anon_sym_DOTuleb128 = 31,
  anon_sym_DOTdtprelword = 32,
  anon_sym_DOTdtpreldword = 33,
  anon_sym_DOTskip = 34,
  anon_sym_DOTspace = 35,
  anon_sym_DOTfloat = 36,
  anon_sym_DOTdouble = 37,
  anon_sym_DOTsingle = 38,
  anon_sym_SPACE = 39,
  anon_sym_TAB = 40,
  anon_sym_DOTasciz = 41,
  anon_sym_DOTascii = 42,
  anon_sym_DOTasciiz = 43,
  anon_sym_DOTstring = 44,
  anon_sym_DOTstringz = 45,
  aux_sym_control_mnemonic_token1 = 46,
  aux_sym__control_operand_separator_token1 = 47,
  aux_sym_elf_type_tag_token1 = 48,
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
  sym__inline_separator_comment = 91,
  sym__inline_end_comment = 92,
  sym_program = 93,
  sym__statement = 94,
  sym__line_comment = 95,
  sym__block_comment = 96,
  sym__immediate_block_comment = 97,
  sym_directive = 98,
  sym__macro_directive = 99,
  sym_macro_parameters = 100,
  sym__numeric_directive = 101,
  sym_numeric_mnemonic = 102,
  sym_numeric_operands = 103,
  sym__string_directive = 104,
  sym_string_mnemonic = 105,
  sym_string_operands = 106,
  sym__control_directive = 107,
  sym_control_mnemonic = 108,
  sym_control_operands = 109,
  sym__control_operand = 110,
  sym__control_operand_separator = 111,
  sym_elf_type_tag = 112,
  sym_option_flag = 113,
  sym_instruction = 114,
  sym_operands = 115,
  sym__operand = 116,
  sym__call_expression = 117,
  sym__assignment_expression = 118,
  sym__wrapped_assignment_expression = 119,
  sym__logical_or_expression = 120,
  sym__wrapped_logical_or_expression = 121,
  sym__logical_and_expression = 122,
  sym__wrapped_logical_and_expression = 123,
  sym__bitwise_or_expression = 124,
  sym__wrapped_bitwise_or_expression = 125,
  sym__bitwise_xor_expression = 126,
  sym__wrapped_bitwise_xor_expression = 127,
  sym__bitwise_and_expression = 128,
  sym__wrapped_bitwise_and_expression = 129,
  sym__equality_expression = 130,
  sym__wrapped_equality_expression = 131,
  sym__relational_expression = 132,
  sym__wrapped_relational_expression = 133,
  sym__shift_expression = 134,
  sym__wrapped_shift_expression = 135,
  sym__additive_expression = 136,
  sym__wrapped_additive_expression = 137,
  sym__multiplicative_expression = 138,
  sym__wrapped_multiplicative_expression = 139,
  sym__simple_expression = 140,
  sym_parenthesized_expression = 141,
  sym_unary_expression = 142,
  sym_relocation_expression = 143,
  sym_decimal = 144,
  sym_char = 145,
  sym_string = 146,
  sym__label = 147,
  sym_local_label_reference = 148,
  sym_symbol = 149,
  sym_address = 150,
  aux_sym_program_repeat1 = 151,
  aux_sym_macro_parameters_repeat1 = 152,
  aux_sym_numeric_operands_repeat1 = 153,
  aux_sym_numeric_operands_repeat2 = 154,
  aux_sym_numeric_operands_repeat3 = 155,
  aux_sym_string_operands_repeat1 = 156,
  aux_sym_control_operands_repeat1 = 157,
  aux_sym_operands_repeat1 = 158,
  aux_sym_string_repeat1 = 159,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [aux_sym__line_comment_token1] = "comment",
  [aux_sym__block_comment_token1] = "comment",
  [aux_sym__immediate_block_comment_token1] = "comment",
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
  [aux_sym_elf_type_tag_token1] = "elf_type_tag_token1",
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
  [sym__inline_separator_comment] = "comment",
  [sym__inline_end_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__line_comment] = "_line_comment",
  [sym__block_comment] = "_block_comment",
  [sym__immediate_block_comment] = "_immediate_block_comment",
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
  [sym_elf_type_tag] = "elf_type_tag",
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
  [aux_sym__line_comment_token1] = sym__inline_separator_comment,
  [aux_sym__block_comment_token1] = sym__inline_separator_comment,
  [aux_sym__immediate_block_comment_token1] = sym__inline_separator_comment,
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
  [aux_sym_elf_type_tag_token1] = aux_sym_elf_type_tag_token1,
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
  [sym__inline_separator_comment] = sym__inline_separator_comment,
  [sym__inline_end_comment] = sym__inline_separator_comment,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__line_comment] = sym__line_comment,
  [sym__block_comment] = sym__block_comment,
  [sym__immediate_block_comment] = sym__immediate_block_comment,
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
  [sym_elf_type_tag] = sym_elf_type_tag,
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
  [aux_sym__line_comment_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__block_comment_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__immediate_block_comment_token1] = {
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
  [aux_sym_elf_type_tag_token1] = {
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
  [sym__inline_separator_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_end_comment] = {
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
  [sym__line_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__block_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__immediate_block_comment] = {
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
  [sym_elf_type_tag] = {
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
  [15] = 15,
  [16] = 14,
  [17] = 15,
  [18] = 15,
  [19] = 6,
  [20] = 15,
  [21] = 8,
  [22] = 15,
  [23] = 14,
  [24] = 14,
  [25] = 14,
  [26] = 15,
  [27] = 14,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
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
  [42] = 30,
  [43] = 43,
  [44] = 44,
  [45] = 31,
  [46] = 32,
  [47] = 33,
  [48] = 37,
  [49] = 38,
  [50] = 39,
  [51] = 40,
  [52] = 41,
  [53] = 30,
  [54] = 43,
  [55] = 44,
  [56] = 31,
  [57] = 32,
  [58] = 33,
  [59] = 37,
  [60] = 38,
  [61] = 39,
  [62] = 40,
  [63] = 41,
  [64] = 30,
  [65] = 43,
  [66] = 44,
  [67] = 31,
  [68] = 32,
  [69] = 33,
  [70] = 37,
  [71] = 38,
  [72] = 39,
  [73] = 40,
  [74] = 41,
  [75] = 30,
  [76] = 43,
  [77] = 44,
  [78] = 31,
  [79] = 32,
  [80] = 33,
  [81] = 35,
  [82] = 37,
  [83] = 37,
  [84] = 37,
  [85] = 37,
  [86] = 37,
  [87] = 35,
  [88] = 35,
  [89] = 35,
  [90] = 36,
  [91] = 37,
  [92] = 36,
  [93] = 38,
  [94] = 39,
  [95] = 36,
  [96] = 40,
  [97] = 41,
  [98] = 36,
  [99] = 43,
  [100] = 44,
  [101] = 101,
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
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 155,
  [157] = 113,
  [158] = 114,
  [159] = 146,
  [160] = 147,
  [161] = 148,
  [162] = 149,
  [163] = 150,
  [164] = 151,
  [165] = 153,
  [166] = 154,
  [167] = 125,
  [168] = 115,
  [169] = 133,
  [170] = 134,
  [171] = 135,
  [172] = 136,
  [173] = 137,
  [174] = 138,
  [175] = 152,
  [176] = 112,
  [177] = 116,
  [178] = 117,
  [179] = 118,
  [180] = 119,
  [181] = 120,
  [182] = 121,
  [183] = 122,
  [184] = 123,
  [185] = 124,
  [186] = 111,
  [187] = 126,
  [188] = 127,
  [189] = 128,
  [190] = 129,
  [191] = 130,
  [192] = 132,
  [193] = 139,
  [194] = 140,
  [195] = 142,
  [196] = 144,
  [197] = 145,
  [198] = 141,
  [199] = 143,
  [200] = 131,
  [201] = 155,
  [202] = 138,
  [203] = 140,
  [204] = 142,
  [205] = 144,
  [206] = 145,
  [207] = 141,
  [208] = 143,
  [209] = 152,
  [210] = 112,
  [211] = 113,
  [212] = 114,
  [213] = 116,
  [214] = 117,
  [215] = 118,
  [216] = 120,
  [217] = 121,
  [218] = 122,
  [219] = 123,
  [220] = 124,
  [221] = 111,
  [222] = 126,
  [223] = 127,
  [224] = 128,
  [225] = 129,
  [226] = 130,
  [227] = 132,
  [228] = 228,
  [229] = 146,
  [230] = 230,
  [231] = 147,
  [232] = 148,
  [233] = 149,
  [234] = 150,
  [235] = 151,
  [236] = 153,
  [237] = 154,
  [238] = 125,
  [239] = 115,
  [240] = 133,
  [241] = 134,
  [242] = 135,
  [243] = 139,
  [244] = 131,
  [245] = 136,
  [246] = 137,
  [247] = 119,
  [248] = 138,
  [249] = 249,
  [250] = 139,
  [251] = 146,
  [252] = 137,
  [253] = 253,
  [254] = 152,
  [255] = 118,
  [256] = 119,
  [257] = 140,
  [258] = 120,
  [259] = 121,
  [260] = 122,
  [261] = 123,
  [262] = 124,
  [263] = 111,
  [264] = 126,
  [265] = 127,
  [266] = 128,
  [267] = 129,
  [268] = 130,
  [269] = 137,
  [270] = 138,
  [271] = 271,
  [272] = 132,
  [273] = 114,
  [274] = 155,
  [275] = 116,
  [276] = 117,
  [277] = 144,
  [278] = 145,
  [279] = 141,
  [280] = 136,
  [281] = 142,
  [282] = 282,
  [283] = 146,
  [284] = 147,
  [285] = 148,
  [286] = 112,
  [287] = 149,
  [288] = 150,
  [289] = 151,
  [290] = 153,
  [291] = 154,
  [292] = 125,
  [293] = 139,
  [294] = 115,
  [295] = 133,
  [296] = 131,
  [297] = 271,
  [298] = 282,
  [299] = 271,
  [300] = 282,
  [301] = 271,
  [302] = 282,
  [303] = 271,
  [304] = 282,
  [305] = 271,
  [306] = 282,
  [307] = 134,
  [308] = 135,
  [309] = 113,
  [310] = 143,
  [311] = 311,
  [312] = 131,
  [313] = 117,
  [314] = 132,
  [315] = 147,
  [316] = 148,
  [317] = 149,
  [318] = 150,
  [319] = 151,
  [320] = 153,
  [321] = 154,
  [322] = 125,
  [323] = 115,
  [324] = 133,
  [325] = 134,
  [326] = 135,
  [327] = 136,
  [328] = 140,
  [329] = 142,
  [330] = 144,
  [331] = 145,
  [332] = 141,
  [333] = 143,
  [334] = 152,
  [335] = 113,
  [336] = 114,
  [337] = 155,
  [338] = 116,
  [339] = 339,
  [340] = 340,
  [341] = 146,
  [342] = 118,
  [343] = 139,
  [344] = 137,
  [345] = 138,
  [346] = 119,
  [347] = 131,
  [348] = 120,
  [349] = 121,
  [350] = 122,
  [351] = 123,
  [352] = 124,
  [353] = 111,
  [354] = 126,
  [355] = 127,
  [356] = 128,
  [357] = 129,
  [358] = 130,
  [359] = 112,
  [360] = 360,
  [361] = 131,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 131,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 374,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 376,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 376,
  [399] = 399,
  [400] = 374,
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
  [413] = 131,
  [414] = 378,
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
  [428] = 417,
  [429] = 429,
  [430] = 417,
  [431] = 417,
  [432] = 417,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 383,
  [442] = 442,
  [443] = 443,
  [444] = 443,
  [445] = 442,
  [446] = 446,
  [447] = 443,
  [448] = 442,
  [449] = 388,
  [450] = 131,
  [451] = 392,
  [452] = 391,
  [453] = 453,
  [454] = 454,
  [455] = 442,
  [456] = 390,
  [457] = 389,
  [458] = 443,
  [459] = 459,
  [460] = 406,
  [461] = 461,
  [462] = 459,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 459,
  [467] = 408,
  [468] = 376,
  [469] = 459,
  [470] = 459,
  [471] = 374,
  [472] = 472,
  [473] = 401,
  [474] = 474,
  [475] = 409,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 474,
  [480] = 478,
  [481] = 481,
  [482] = 482,
  [483] = 481,
  [484] = 481,
  [485] = 485,
  [486] = 481,
  [487] = 487,
  [488] = 481,
  [489] = 110,
  [490] = 490,
  [491] = 491,
  [492] = 476,
  [493] = 476,
  [494] = 476,
  [495] = 476,
  [496] = 476,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 499,
  [503] = 503,
  [504] = 499,
  [505] = 500,
  [506] = 503,
  [507] = 503,
  [508] = 508,
  [509] = 509,
  [510] = 500,
  [511] = 511,
  [512] = 500,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 508,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 499,
  [521] = 521,
  [522] = 511,
  [523] = 499,
  [524] = 497,
  [525] = 525,
  [526] = 500,
  [527] = 497,
  [528] = 503,
  [529] = 497,
  [530] = 530,
  [531] = 497,
  [532] = 503,
  [533] = 500,
  [534] = 503,
  [535] = 535,
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
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '!', 436,
        '"', 460,
        '#', 112,
        '$', 35,
        '&', 422,
        '\'', 456,
        '(', 118,
        ')', 119,
        '+', 428,
        ',', 122,
        '-', 432,
        '.', 563,
        '/', 430,
        '0', 471,
        '3', 472,
        ';', 103,
        '<', 425,
        '=', 417,
        '>', 426,
        '@', 72,
        'A', 551,
        'S', 540,
        'T', 553,
        '\\', 2,
        '^', 421,
        'a', 552,
        'f', 542,
        'g', 547,
        'r', 544,
        's', 541,
        't', 554,
        'z', 545,
        '|', 420,
        '~', 434,
        '%', 429,
        '*', 429,
        'C', 550,
        'c', 550,
        'K', 549,
        'k', 549,
        'V', 549,
        'v', 549,
        '1', 473,
        '2', 473,
        'F', 543,
        'R', 543,
        'X', 543,
        'x', 543,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(555);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(15);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == 'U') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(466);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(464);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(16);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == '\r') SKIP(3);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(18);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(7);
      if (lookahead == 'U') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(466);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(464);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') SKIP(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == '\r') SKIP(10);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(31);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '\r') SKIP(12);
      if (lookahead == 'U') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(466);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(464);
      END_STATE();
    case 14:
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '!', 436,
        '"', 460,
        '#', 112,
        '$', 35,
        '&', 422,
        '\'', 456,
        '(', 118,
        ')', 119,
        '+', 428,
        ',', 122,
        '-', 432,
        '.', 563,
        '/', 431,
        '0', 471,
        '3', 472,
        ';', 103,
        '<', 425,
        '=', 417,
        '>', 426,
        '@', 72,
        'A', 551,
        'S', 540,
        'T', 553,
        '\\', 2,
        '^', 421,
        'a', 552,
        'f', 542,
        'g', 547,
        'r', 544,
        's', 541,
        't', 554,
        'z', 545,
        '|', 420,
        '~', 434,
        '%', 429,
        '*', 429,
        'C', 550,
        'c', 550,
        'K', 549,
        'k', 549,
        'V', 549,
        'v', 549,
        '1', 473,
        '2', 473,
        'F', 543,
        'R', 543,
        'X', 543,
        'x', 543,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(555);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '!', 435,
        '"', 460,
        '#', 112,
        '$', 39,
        '%', 45,
        '\'', 456,
        '(', 118,
        ')', 119,
        '+', 73,
        ',', 411,
        '-', 433,
        '.', 568,
        '/', 29,
        '0', 440,
        '3', 445,
        ';', 103,
        '=', 416,
        '@', 72,
        'A', 576,
        'S', 561,
        'T', 578,
        '\\', 4,
        'a', 577,
        'f', 564,
        'g', 571,
        'r', 566,
        's', 562,
        't', 579,
        'z', 569,
        '|', 50,
        '~', 434,
        '\t', 16,
        ' ', 16,
        'C', 575,
        'c', 575,
        'K', 574,
        'k', 574,
        'V', 574,
        'v', 574,
        '1', 446,
        '2', 446,
        'F', 565,
        'R', 565,
        'X', 565,
        'x', 565,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(16);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(580);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '!', 44,
        '"', 460,
        '#', 112,
        '&', 422,
        '(', 118,
        ')', 119,
        ',', 411,
        '/', 431,
        ';', 103,
        '<', 425,
        '=', 417,
        '>', 426,
      );
      if (lookahead == '\\') SKIP(6);
      if (lookahead == '^') ADVANCE(421);
      if (lookahead == '|') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(429);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(428);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '/') ADVANCE(462);
      if (lookahead == '\\') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(463);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(539);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(539);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(539);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(20);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(539);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == ':') ADVANCE(557);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(458);
      if (lookahead == '\\') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(457);
      END_STATE();
    case 32:
      if (lookahead == '1') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 33:
      if (lookahead == '1') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '2', 217,
        '4', 224,
        '8', 226,
        ':', 560,
        'L', 30,
        'a', 305,
        'b', 211,
        'c', 346,
        'd', 345,
        'f', 306,
        'h', 212,
        'i', 335,
        'l', 233,
        'm', 207,
        'p', 196,
        'q', 400,
        's', 284,
        'u', 311,
        'w', 348,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '3', 476,
        'A', 56,
        'S', 32,
        'T', 58,
        'a', 57,
        'f', 36,
        'g', 48,
        'r', 38,
        's', 33,
        't', 62,
        'z', 46,
        'C', 55,
        'c', 55,
        'K', 53,
        'k', 53,
        'V', 53,
        'v', 53,
        '1', 479,
        '2', 479,
        'F', 37,
        'R', 37,
        'X', 37,
        'x', 37,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 36:
      if (lookahead == '3') ADVANCE(476);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(479);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 37:
      if (lookahead == '3') ADVANCE(476);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 38:
      if (lookahead == '3') ADVANCE(476);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        '3', 477,
        'A', 533,
        'S', 484,
        'T', 535,
        'a', 534,
        'f', 489,
        'g', 521,
        'r', 491,
        's', 485,
        't', 536,
        'z', 504,
        'C', 532,
        'c', 532,
        'K', 531,
        'k', 531,
        'V', 531,
        'v', 531,
        '1', 480,
        '2', 480,
        'F', 490,
        'R', 490,
        'X', 490,
        'x', 490,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(538);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(582);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(423);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        'a', 499,
        'c', 497,
        'd', 528,
        'g', 519,
        'h', 510,
        'l', 518,
        'p', 500,
        't', 514,
      );
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == '|') ADVANCE(418);
      END_STATE();
    case 51:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 52:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 53:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(467);
      END_STATE();
    case 54:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(444);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(467);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(467);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(467);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(464);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 73:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 74:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 75:
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '\t', 176,
        ' ', 175,
        '!', 44,
        '#', 112,
        '&', 422,
        '(', 118,
        ',', 122,
        '/', 431,
        ';', 103,
        '<', 425,
        '=', 417,
        '>', 426,
      );
      if (lookahead == '\\') SKIP(83);
      if (lookahead == '^') ADVANCE(421);
      if (lookahead == '|') ADVANCE(420);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(429);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(428);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(75);
      END_STATE();
    case 76:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(78);
      END_STATE();
    case 77:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(78);
      if (lookahead == '\r') SKIP(76);
      END_STATE();
    case 78:
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '\n', 106,
        '\r', 104,
        '#', 112,
        '%', 74,
        '.', 34,
        '/', 29,
        '0', 41,
        ';', 103,
      );
      if (lookahead == '\\') SKIP(77);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 79:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(81);
      END_STATE();
    case 80:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(81);
      if (lookahead == '\r') SKIP(79);
      END_STATE();
    case 81:
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '\n', 107,
        '\r', 105,
        '#', 112,
        '%', 74,
        '.', 34,
        '/', 29,
        '0', 41,
        ';', 103,
      );
      if (lookahead == '\\') SKIP(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 82:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(75);
      END_STATE();
    case 83:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(75);
      if (lookahead == '\r') SKIP(82);
      END_STATE();
    case 84:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(97);
      END_STATE();
    case 85:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(97);
      if (lookahead == '\r') SKIP(84);
      END_STATE();
    case 86:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(98);
      END_STATE();
    case 87:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '\r') SKIP(86);
      END_STATE();
    case 88:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(99);
      END_STATE();
    case 89:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(99);
      if (lookahead == '\r') SKIP(88);
      END_STATE();
    case 90:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(92);
      END_STATE();
    case 91:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(92);
      if (lookahead == '\r') SKIP(90);
      END_STATE();
    case 92:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') SKIP(91);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(92);
      END_STATE();
    case 93:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(100);
      END_STATE();
    case 94:
      if (eof) ADVANCE(102);
      if (lookahead == '\n') SKIP(100);
      if (lookahead == '\r') SKIP(93);
      END_STATE();
    case 95:
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '!', 436,
        '"', 460,
        '#', 112,
        '$', 35,
        '&', 422,
        '\'', 456,
        '(', 118,
        ')', 119,
        '+', 428,
        ',', 122,
        '-', 432,
        '.', 563,
        '/', 431,
        '0', 471,
        '3', 472,
        ';', 103,
        '<', 425,
        '=', 417,
        '>', 426,
        '@', 72,
        'A', 551,
        'S', 540,
        'T', 553,
        '\\', 2,
        '^', 421,
        'a', 552,
        'f', 542,
        'g', 547,
        'r', 544,
        's', 541,
        't', 554,
        'z', 545,
        '|', 420,
        '~', 434,
        '%', 429,
        '*', 429,
        'C', 550,
        'c', 550,
        'K', 549,
        'k', 549,
        'V', 549,
        'v', 549,
        '1', 473,
        '2', 473,
        'F', 543,
        'R', 543,
        'X', 543,
        'x', 543,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(555);
      END_STATE();
    case 96:
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '!', 435,
        '"', 460,
        '#', 112,
        '$', 39,
        '%', 45,
        '\'', 456,
        '(', 118,
        ')', 119,
        '+', 73,
        ',', 411,
        '-', 433,
        '.', 568,
        '/', 29,
        '0', 440,
        '3', 445,
        ';', 103,
        '=', 416,
        '@', 72,
        'A', 576,
        'S', 561,
        'T', 578,
        '\\', 4,
        'a', 577,
        'f', 564,
        'g', 571,
        'r', 566,
        's', 562,
        't', 579,
        'z', 569,
        '|', 50,
        '~', 434,
        '\t', 16,
        ' ', 16,
        'C', 575,
        'c', 575,
        'K', 574,
        'k', 574,
        'V', 574,
        'v', 574,
        '1', 446,
        '2', 446,
        'F', 565,
        'R', 565,
        'X', 565,
        'x', 565,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(96);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(580);
      END_STATE();
    case 97:
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '!', 44,
        '"', 460,
        '#', 112,
        '&', 422,
        '(', 118,
        ')', 119,
        ',', 411,
        '/', 431,
        ';', 103,
        '<', 425,
        '=', 417,
        '>', 426,
      );
      if (lookahead == '\\') SKIP(85);
      if (lookahead == '^') ADVANCE(421);
      if (lookahead == '|') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(429);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(428);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      END_STATE();
    case 98:
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '!', 44,
        '#', 112,
        '&', 422,
        '(', 118,
        ')', 119,
        ',', 122,
        '/', 431,
        ';', 103,
        '<', 425,
        '=', 417,
        '>', 426,
      );
      if (lookahead == '\\') SKIP(87);
      if (lookahead == '^') ADVANCE(421);
      if (lookahead == '|') ADVANCE(420);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(429);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(428);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(98);
      END_STATE();
    case 99:
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '!', 44,
        '#', 112,
        '&', 422,
        '(', 118,
        ')', 119,
        ',', 122,
        '/', 431,
        ';', 103,
        '<', 425,
        '=', 417,
        '>', 426,
      );
      if (lookahead == '\\') SKIP(89);
      if (lookahead == '^') ADVANCE(421);
      if (lookahead == '|') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(429);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(428);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(99);
      END_STATE();
    case 100:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '\\') SKIP(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(100);
      END_STATE();
    case 101:
      if (eof) ADVANCE(102);
      if (lookahead == '"') ADVANCE(460);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '\\') SKIP(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(104);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '0') ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(105);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(104);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '0') ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(105);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(105);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\\') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__line_comment_token1);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__line_comment_token1);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__immediate_block_comment_token1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__immediate_block_comment_token1);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(176);
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(176);
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'z') ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(409);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'z') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(410);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'z') ADVANCE(185);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(409);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'z') ADVANCE(186);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(410);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(191);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(193);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(194);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(195);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(197);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(213);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(198);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(199);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(200);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(214);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(157);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(159);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(158);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(160);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead == 'y') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'w') ADVANCE(355);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == 'y') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'w') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'b') ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'b') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'b') ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'b') ADVANCE(307);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'b') ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'b') ADVANCE(309);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'b') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'b') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'b') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'b') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'c') ADVANCE(374);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'c') ADVANCE(260);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'c') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'c') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(401);
      if (lookahead == 'w') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(402);
      if (lookahead == 'w') ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(326);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(332);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(308);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'k') ADVANCE(288);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 'p') ADVANCE(204);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'h') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'z') ADVANCE(177);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(409);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'z') ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(410);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead == 's') ADVANCE(227);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'm') ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'm') ADVANCE(318);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'm') ADVANCE(320);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'm') ADVANCE(321);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead == 'w') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == 'w') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(377);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'p') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(248);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'u') ADVANCE(219);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'u') ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'u') ADVANCE(222);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'w') ADVANCE(359);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'w') ADVANCE(360);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'y') ADVANCE(390);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'y') ADVANCE(394);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'y') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'y') ADVANCE(395);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'y') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'y') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__control_operand_separator_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_elf_type_tag_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_assignment_operator);
      if (lookahead == '=') ADVANCE(423);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_logical_or_operator);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_logical_and_operator);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_bitwise_or_operator);
      if (lookahead == '|') ADVANCE(418);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_bitwise_xor_operator);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_bitwise_and_operator);
      if (lookahead == '&') ADVANCE(419);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '<') ADVANCE(427);
      if (lookahead == '=') ADVANCE(424);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(424);
      if (lookahead == '>') ADVANCE(427);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_shift_operator);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(112);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '0') ADVANCE(441);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_bitwise_not_operator);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_logical_not_operator);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_logical_not_operator);
      if (lookahead == '=') ADVANCE(423);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(498);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 452,
        'B', 54,
        'b', 584,
        'f', 583,
        'o', 443,
        'E', 51,
        'e', 51,
        'X', 64,
        'x', 64,
        '8', 447,
        '9', 447,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(442);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 452,
        'o', 443,
        'B', 54,
        'b', 54,
        'E', 51,
        'e', 51,
        'X', 64,
        'x', 64,
        '8', 447,
        '9', 447,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_octal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(583);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(447);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(452);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(458);
      if (lookahead == '\\') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(457);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(462);
      if (lookahead == '\\') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(461);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(464);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(465);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(470);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(582);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(583);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(582);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(583);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(475);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(582);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(582);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(467);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(493);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(493);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '2') ADVANCE(439);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(477);
      if (lookahead == 'a') ADVANCE(533);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(480);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(477);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(477);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '4') ADVANCE(439);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(439);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(492);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(508);
      if (lookahead == 'g') ADVANCE(502);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == 'h') ADVANCE(510);
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'c') ADVANCE(486);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(495);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'g') ADVANCE(520);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'h') ADVANCE(510);
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(439);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead == 'p') ADVANCE(525);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(438);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead == 'p') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(507);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(437);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('4' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_macro_parameter);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(539);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '1') ADVANCE(468);
      if (lookahead == ':') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '1') ADVANCE(468);
      if (lookahead == ':') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(470);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '3') ADVANCE(468);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(469);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(470);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '3') ADVANCE(468);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '3') ADVANCE(468);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(470);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'r') ADVANCE(546);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(470);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(470);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(470);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(557);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(580);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 215,
        '4', 223,
        '8', 225,
        ':', 560,
        'L', 558,
        'a', 299,
        'b', 203,
        'c', 339,
        'd', 341,
        'f', 304,
        'h', 206,
        'i', 328,
        'l', 234,
        'm', 202,
        'p', 192,
        'q', 398,
        's', 283,
        'u', 313,
        'w', 342,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(567);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(478);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(481);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(478);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(478);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'p') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(570);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(444);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 78, .external_lex_state = 2},
  [2] = {.lex_state = 96, .external_lex_state = 3},
  [3] = {.lex_state = 96, .external_lex_state = 3},
  [4] = {.lex_state = 78, .external_lex_state = 2},
  [5] = {.lex_state = 78, .external_lex_state = 2},
  [6] = {.lex_state = 96, .external_lex_state = 3},
  [7] = {.lex_state = 96, .external_lex_state = 3},
  [8] = {.lex_state = 96, .external_lex_state = 3},
  [9] = {.lex_state = 96, .external_lex_state = 4},
  [10] = {.lex_state = 96, .external_lex_state = 2},
  [11] = {.lex_state = 96, .external_lex_state = 3},
  [12] = {.lex_state = 96, .external_lex_state = 2},
  [13] = {.lex_state = 96, .external_lex_state = 2},
  [14] = {.lex_state = 96, .external_lex_state = 2},
  [15] = {.lex_state = 96, .external_lex_state = 2},
  [16] = {.lex_state = 96, .external_lex_state = 2},
  [17] = {.lex_state = 96, .external_lex_state = 2},
  [18] = {.lex_state = 96, .external_lex_state = 2},
  [19] = {.lex_state = 96, .external_lex_state = 2},
  [20] = {.lex_state = 96, .external_lex_state = 2},
  [21] = {.lex_state = 96, .external_lex_state = 2},
  [22] = {.lex_state = 96, .external_lex_state = 2},
  [23] = {.lex_state = 96, .external_lex_state = 2},
  [24] = {.lex_state = 96, .external_lex_state = 2},
  [25] = {.lex_state = 96, .external_lex_state = 2},
  [26] = {.lex_state = 96, .external_lex_state = 2},
  [27] = {.lex_state = 96, .external_lex_state = 2},
  [28] = {.lex_state = 96, .external_lex_state = 2},
  [29] = {.lex_state = 96, .external_lex_state = 2},
  [30] = {.lex_state = 96, .external_lex_state = 2},
  [31] = {.lex_state = 96, .external_lex_state = 2},
  [32] = {.lex_state = 96, .external_lex_state = 2},
  [33] = {.lex_state = 96, .external_lex_state = 2},
  [34] = {.lex_state = 96, .external_lex_state = 2},
  [35] = {.lex_state = 96, .external_lex_state = 2},
  [36] = {.lex_state = 96, .external_lex_state = 2},
  [37] = {.lex_state = 96, .external_lex_state = 2},
  [38] = {.lex_state = 96, .external_lex_state = 2},
  [39] = {.lex_state = 96, .external_lex_state = 2},
  [40] = {.lex_state = 96, .external_lex_state = 2},
  [41] = {.lex_state = 96, .external_lex_state = 2},
  [42] = {.lex_state = 96, .external_lex_state = 2},
  [43] = {.lex_state = 96, .external_lex_state = 2},
  [44] = {.lex_state = 96, .external_lex_state = 2},
  [45] = {.lex_state = 96, .external_lex_state = 2},
  [46] = {.lex_state = 96, .external_lex_state = 2},
  [47] = {.lex_state = 96, .external_lex_state = 2},
  [48] = {.lex_state = 96, .external_lex_state = 2},
  [49] = {.lex_state = 96, .external_lex_state = 2},
  [50] = {.lex_state = 96, .external_lex_state = 2},
  [51] = {.lex_state = 96, .external_lex_state = 2},
  [52] = {.lex_state = 96, .external_lex_state = 2},
  [53] = {.lex_state = 96, .external_lex_state = 2},
  [54] = {.lex_state = 96, .external_lex_state = 2},
  [55] = {.lex_state = 96, .external_lex_state = 2},
  [56] = {.lex_state = 96, .external_lex_state = 2},
  [57] = {.lex_state = 96, .external_lex_state = 2},
  [58] = {.lex_state = 96, .external_lex_state = 2},
  [59] = {.lex_state = 96, .external_lex_state = 2},
  [60] = {.lex_state = 96, .external_lex_state = 2},
  [61] = {.lex_state = 96, .external_lex_state = 2},
  [62] = {.lex_state = 96, .external_lex_state = 2},
  [63] = {.lex_state = 96, .external_lex_state = 2},
  [64] = {.lex_state = 96, .external_lex_state = 2},
  [65] = {.lex_state = 96, .external_lex_state = 2},
  [66] = {.lex_state = 96, .external_lex_state = 2},
  [67] = {.lex_state = 96, .external_lex_state = 2},
  [68] = {.lex_state = 96, .external_lex_state = 2},
  [69] = {.lex_state = 96, .external_lex_state = 2},
  [70] = {.lex_state = 96, .external_lex_state = 2},
  [71] = {.lex_state = 96, .external_lex_state = 2},
  [72] = {.lex_state = 96, .external_lex_state = 2},
  [73] = {.lex_state = 96, .external_lex_state = 2},
  [74] = {.lex_state = 96, .external_lex_state = 2},
  [75] = {.lex_state = 96, .external_lex_state = 2},
  [76] = {.lex_state = 96, .external_lex_state = 2},
  [77] = {.lex_state = 96, .external_lex_state = 2},
  [78] = {.lex_state = 96, .external_lex_state = 2},
  [79] = {.lex_state = 96, .external_lex_state = 2},
  [80] = {.lex_state = 96, .external_lex_state = 2},
  [81] = {.lex_state = 96, .external_lex_state = 2},
  [82] = {.lex_state = 96, .external_lex_state = 2},
  [83] = {.lex_state = 96, .external_lex_state = 2},
  [84] = {.lex_state = 96, .external_lex_state = 2},
  [85] = {.lex_state = 96, .external_lex_state = 2},
  [86] = {.lex_state = 96, .external_lex_state = 2},
  [87] = {.lex_state = 96, .external_lex_state = 2},
  [88] = {.lex_state = 96, .external_lex_state = 2},
  [89] = {.lex_state = 96, .external_lex_state = 2},
  [90] = {.lex_state = 96, .external_lex_state = 2},
  [91] = {.lex_state = 96, .external_lex_state = 2},
  [92] = {.lex_state = 96, .external_lex_state = 2},
  [93] = {.lex_state = 96, .external_lex_state = 2},
  [94] = {.lex_state = 96, .external_lex_state = 2},
  [95] = {.lex_state = 96, .external_lex_state = 2},
  [96] = {.lex_state = 96, .external_lex_state = 2},
  [97] = {.lex_state = 96, .external_lex_state = 2},
  [98] = {.lex_state = 96, .external_lex_state = 2},
  [99] = {.lex_state = 96, .external_lex_state = 2},
  [100] = {.lex_state = 96, .external_lex_state = 2},
  [101] = {.lex_state = 96, .external_lex_state = 2},
  [102] = {.lex_state = 78, .external_lex_state = 2},
  [103] = {.lex_state = 78, .external_lex_state = 2},
  [104] = {.lex_state = 81, .external_lex_state = 2},
  [105] = {.lex_state = 78, .external_lex_state = 2},
  [106] = {.lex_state = 78, .external_lex_state = 2},
  [107] = {.lex_state = 78, .external_lex_state = 2},
  [108] = {.lex_state = 78, .external_lex_state = 2},
  [109] = {.lex_state = 78, .external_lex_state = 2},
  [110] = {.lex_state = 96, .external_lex_state = 3},
  [111] = {.lex_state = 75, .external_lex_state = 1},
  [112] = {.lex_state = 75, .external_lex_state = 1},
  [113] = {.lex_state = 75, .external_lex_state = 1},
  [114] = {.lex_state = 75, .external_lex_state = 1},
  [115] = {.lex_state = 75, .external_lex_state = 1},
  [116] = {.lex_state = 75, .external_lex_state = 1},
  [117] = {.lex_state = 75, .external_lex_state = 1},
  [118] = {.lex_state = 75, .external_lex_state = 1},
  [119] = {.lex_state = 75, .external_lex_state = 1},
  [120] = {.lex_state = 75, .external_lex_state = 1},
  [121] = {.lex_state = 75, .external_lex_state = 1},
  [122] = {.lex_state = 75, .external_lex_state = 1},
  [123] = {.lex_state = 75, .external_lex_state = 1},
  [124] = {.lex_state = 75, .external_lex_state = 1},
  [125] = {.lex_state = 75, .external_lex_state = 1},
  [126] = {.lex_state = 75, .external_lex_state = 1},
  [127] = {.lex_state = 75, .external_lex_state = 1},
  [128] = {.lex_state = 75, .external_lex_state = 1},
  [129] = {.lex_state = 75, .external_lex_state = 1},
  [130] = {.lex_state = 75, .external_lex_state = 1},
  [131] = {.lex_state = 75, .external_lex_state = 1},
  [132] = {.lex_state = 75, .external_lex_state = 1},
  [133] = {.lex_state = 75, .external_lex_state = 1},
  [134] = {.lex_state = 75, .external_lex_state = 1},
  [135] = {.lex_state = 75, .external_lex_state = 1},
  [136] = {.lex_state = 75, .external_lex_state = 1},
  [137] = {.lex_state = 75, .external_lex_state = 1},
  [138] = {.lex_state = 75, .external_lex_state = 1},
  [139] = {.lex_state = 75, .external_lex_state = 1},
  [140] = {.lex_state = 75, .external_lex_state = 1},
  [141] = {.lex_state = 75, .external_lex_state = 1},
  [142] = {.lex_state = 75, .external_lex_state = 1},
  [143] = {.lex_state = 75, .external_lex_state = 1},
  [144] = {.lex_state = 75, .external_lex_state = 1},
  [145] = {.lex_state = 75, .external_lex_state = 1},
  [146] = {.lex_state = 75, .external_lex_state = 1},
  [147] = {.lex_state = 75, .external_lex_state = 1},
  [148] = {.lex_state = 75, .external_lex_state = 1},
  [149] = {.lex_state = 75, .external_lex_state = 1},
  [150] = {.lex_state = 75, .external_lex_state = 1},
  [151] = {.lex_state = 75, .external_lex_state = 1},
  [152] = {.lex_state = 75, .external_lex_state = 1},
  [153] = {.lex_state = 75, .external_lex_state = 1},
  [154] = {.lex_state = 75, .external_lex_state = 1},
  [155] = {.lex_state = 75, .external_lex_state = 1},
  [156] = {.lex_state = 97, .external_lex_state = 1},
  [157] = {.lex_state = 97, .external_lex_state = 1},
  [158] = {.lex_state = 97, .external_lex_state = 1},
  [159] = {.lex_state = 97, .external_lex_state = 1},
  [160] = {.lex_state = 97, .external_lex_state = 1},
  [161] = {.lex_state = 97, .external_lex_state = 1},
  [162] = {.lex_state = 97, .external_lex_state = 1},
  [163] = {.lex_state = 97, .external_lex_state = 1},
  [164] = {.lex_state = 97, .external_lex_state = 1},
  [165] = {.lex_state = 97, .external_lex_state = 1},
  [166] = {.lex_state = 97, .external_lex_state = 1},
  [167] = {.lex_state = 97, .external_lex_state = 1},
  [168] = {.lex_state = 97, .external_lex_state = 1},
  [169] = {.lex_state = 97, .external_lex_state = 1},
  [170] = {.lex_state = 97, .external_lex_state = 1},
  [171] = {.lex_state = 97, .external_lex_state = 1},
  [172] = {.lex_state = 97, .external_lex_state = 1},
  [173] = {.lex_state = 97, .external_lex_state = 1},
  [174] = {.lex_state = 97, .external_lex_state = 1},
  [175] = {.lex_state = 97, .external_lex_state = 1},
  [176] = {.lex_state = 97, .external_lex_state = 1},
  [177] = {.lex_state = 97, .external_lex_state = 1},
  [178] = {.lex_state = 97, .external_lex_state = 1},
  [179] = {.lex_state = 97, .external_lex_state = 1},
  [180] = {.lex_state = 97, .external_lex_state = 1},
  [181] = {.lex_state = 97, .external_lex_state = 1},
  [182] = {.lex_state = 97, .external_lex_state = 1},
  [183] = {.lex_state = 97, .external_lex_state = 1},
  [184] = {.lex_state = 97, .external_lex_state = 1},
  [185] = {.lex_state = 97, .external_lex_state = 1},
  [186] = {.lex_state = 97, .external_lex_state = 1},
  [187] = {.lex_state = 97, .external_lex_state = 1},
  [188] = {.lex_state = 97, .external_lex_state = 1},
  [189] = {.lex_state = 97, .external_lex_state = 1},
  [190] = {.lex_state = 97, .external_lex_state = 1},
  [191] = {.lex_state = 97, .external_lex_state = 1},
  [192] = {.lex_state = 97, .external_lex_state = 1},
  [193] = {.lex_state = 97, .external_lex_state = 1},
  [194] = {.lex_state = 97, .external_lex_state = 1},
  [195] = {.lex_state = 97, .external_lex_state = 1},
  [196] = {.lex_state = 97, .external_lex_state = 1},
  [197] = {.lex_state = 97, .external_lex_state = 1},
  [198] = {.lex_state = 97, .external_lex_state = 1},
  [199] = {.lex_state = 97, .external_lex_state = 1},
  [200] = {.lex_state = 97, .external_lex_state = 1},
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
  [228] = {.lex_state = 96, .external_lex_state = 2},
  [229] = {.lex_state = 98, .external_lex_state = 5},
  [230] = {.lex_state = 98, .external_lex_state = 5},
  [231] = {.lex_state = 98, .external_lex_state = 5},
  [232] = {.lex_state = 98, .external_lex_state = 5},
  [233] = {.lex_state = 98, .external_lex_state = 5},
  [234] = {.lex_state = 98, .external_lex_state = 5},
  [235] = {.lex_state = 98, .external_lex_state = 5},
  [236] = {.lex_state = 98, .external_lex_state = 5},
  [237] = {.lex_state = 98, .external_lex_state = 5},
  [238] = {.lex_state = 98, .external_lex_state = 5},
  [239] = {.lex_state = 98, .external_lex_state = 5},
  [240] = {.lex_state = 98, .external_lex_state = 5},
  [241] = {.lex_state = 98, .external_lex_state = 5},
  [242] = {.lex_state = 98, .external_lex_state = 5},
  [243] = {.lex_state = 98, .external_lex_state = 5},
  [244] = {.lex_state = 98, .external_lex_state = 5},
  [245] = {.lex_state = 98, .external_lex_state = 5},
  [246] = {.lex_state = 98, .external_lex_state = 5},
  [247] = {.lex_state = 98, .external_lex_state = 5},
  [248] = {.lex_state = 99, .external_lex_state = 3},
  [249] = {.lex_state = 99, .external_lex_state = 3},
  [250] = {.lex_state = 99, .external_lex_state = 3},
  [251] = {.lex_state = 99, .external_lex_state = 3},
  [252] = {.lex_state = 99, .external_lex_state = 3},
  [253] = {.lex_state = 75, .external_lex_state = 1},
  [254] = {.lex_state = 98, .external_lex_state = 6},
  [255] = {.lex_state = 98, .external_lex_state = 6},
  [256] = {.lex_state = 98, .external_lex_state = 6},
  [257] = {.lex_state = 98, .external_lex_state = 6},
  [258] = {.lex_state = 98, .external_lex_state = 6},
  [259] = {.lex_state = 98, .external_lex_state = 6},
  [260] = {.lex_state = 98, .external_lex_state = 6},
  [261] = {.lex_state = 98, .external_lex_state = 6},
  [262] = {.lex_state = 98, .external_lex_state = 6},
  [263] = {.lex_state = 98, .external_lex_state = 6},
  [264] = {.lex_state = 98, .external_lex_state = 6},
  [265] = {.lex_state = 98, .external_lex_state = 6},
  [266] = {.lex_state = 98, .external_lex_state = 6},
  [267] = {.lex_state = 98, .external_lex_state = 6},
  [268] = {.lex_state = 98, .external_lex_state = 6},
  [269] = {.lex_state = 98, .external_lex_state = 6},
  [270] = {.lex_state = 98, .external_lex_state = 6},
  [271] = {.lex_state = 98, .external_lex_state = 6},
  [272] = {.lex_state = 98, .external_lex_state = 6},
  [273] = {.lex_state = 98, .external_lex_state = 6},
  [274] = {.lex_state = 98, .external_lex_state = 6},
  [275] = {.lex_state = 98, .external_lex_state = 6},
  [276] = {.lex_state = 98, .external_lex_state = 6},
  [277] = {.lex_state = 98, .external_lex_state = 6},
  [278] = {.lex_state = 98, .external_lex_state = 6},
  [279] = {.lex_state = 98, .external_lex_state = 6},
  [280] = {.lex_state = 98, .external_lex_state = 6},
  [281] = {.lex_state = 98, .external_lex_state = 6},
  [282] = {.lex_state = 98, .external_lex_state = 6},
  [283] = {.lex_state = 98, .external_lex_state = 6},
  [284] = {.lex_state = 98, .external_lex_state = 6},
  [285] = {.lex_state = 98, .external_lex_state = 6},
  [286] = {.lex_state = 98, .external_lex_state = 6},
  [287] = {.lex_state = 98, .external_lex_state = 6},
  [288] = {.lex_state = 98, .external_lex_state = 6},
  [289] = {.lex_state = 98, .external_lex_state = 6},
  [290] = {.lex_state = 98, .external_lex_state = 6},
  [291] = {.lex_state = 98, .external_lex_state = 6},
  [292] = {.lex_state = 98, .external_lex_state = 6},
  [293] = {.lex_state = 98, .external_lex_state = 6},
  [294] = {.lex_state = 98, .external_lex_state = 6},
  [295] = {.lex_state = 98, .external_lex_state = 6},
  [296] = {.lex_state = 98, .external_lex_state = 6},
  [297] = {.lex_state = 98, .external_lex_state = 6},
  [298] = {.lex_state = 98, .external_lex_state = 6},
  [299] = {.lex_state = 98, .external_lex_state = 6},
  [300] = {.lex_state = 98, .external_lex_state = 6},
  [301] = {.lex_state = 98, .external_lex_state = 6},
  [302] = {.lex_state = 98, .external_lex_state = 6},
  [303] = {.lex_state = 98, .external_lex_state = 6},
  [304] = {.lex_state = 98, .external_lex_state = 6},
  [305] = {.lex_state = 98, .external_lex_state = 6},
  [306] = {.lex_state = 98, .external_lex_state = 6},
  [307] = {.lex_state = 98, .external_lex_state = 6},
  [308] = {.lex_state = 98, .external_lex_state = 6},
  [309] = {.lex_state = 98, .external_lex_state = 6},
  [310] = {.lex_state = 98, .external_lex_state = 6},
  [311] = {.lex_state = 75, .external_lex_state = 1},
  [312] = {.lex_state = 75, .external_lex_state = 1},
  [313] = {.lex_state = 97, .external_lex_state = 2},
  [314] = {.lex_state = 97, .external_lex_state = 2},
  [315] = {.lex_state = 97, .external_lex_state = 2},
  [316] = {.lex_state = 97, .external_lex_state = 2},
  [317] = {.lex_state = 97, .external_lex_state = 2},
  [318] = {.lex_state = 97, .external_lex_state = 2},
  [319] = {.lex_state = 97, .external_lex_state = 2},
  [320] = {.lex_state = 97, .external_lex_state = 2},
  [321] = {.lex_state = 97, .external_lex_state = 2},
  [322] = {.lex_state = 97, .external_lex_state = 2},
  [323] = {.lex_state = 97, .external_lex_state = 2},
  [324] = {.lex_state = 97, .external_lex_state = 2},
  [325] = {.lex_state = 97, .external_lex_state = 2},
  [326] = {.lex_state = 97, .external_lex_state = 2},
  [327] = {.lex_state = 97, .external_lex_state = 2},
  [328] = {.lex_state = 97, .external_lex_state = 2},
  [329] = {.lex_state = 97, .external_lex_state = 2},
  [330] = {.lex_state = 97, .external_lex_state = 2},
  [331] = {.lex_state = 97, .external_lex_state = 2},
  [332] = {.lex_state = 97, .external_lex_state = 2},
  [333] = {.lex_state = 97, .external_lex_state = 2},
  [334] = {.lex_state = 97, .external_lex_state = 2},
  [335] = {.lex_state = 97, .external_lex_state = 2},
  [336] = {.lex_state = 97, .external_lex_state = 2},
  [337] = {.lex_state = 97, .external_lex_state = 2},
  [338] = {.lex_state = 97, .external_lex_state = 2},
  [339] = {.lex_state = 75, .external_lex_state = 1},
  [340] = {.lex_state = 75, .external_lex_state = 1},
  [341] = {.lex_state = 97, .external_lex_state = 2},
  [342] = {.lex_state = 97, .external_lex_state = 2},
  [343] = {.lex_state = 97, .external_lex_state = 2},
  [344] = {.lex_state = 97, .external_lex_state = 2},
  [345] = {.lex_state = 97, .external_lex_state = 2},
  [346] = {.lex_state = 97, .external_lex_state = 2},
  [347] = {.lex_state = 97, .external_lex_state = 2},
  [348] = {.lex_state = 97, .external_lex_state = 2},
  [349] = {.lex_state = 97, .external_lex_state = 2},
  [350] = {.lex_state = 97, .external_lex_state = 2},
  [351] = {.lex_state = 97, .external_lex_state = 2},
  [352] = {.lex_state = 97, .external_lex_state = 2},
  [353] = {.lex_state = 97, .external_lex_state = 2},
  [354] = {.lex_state = 97, .external_lex_state = 2},
  [355] = {.lex_state = 97, .external_lex_state = 2},
  [356] = {.lex_state = 97, .external_lex_state = 2},
  [357] = {.lex_state = 97, .external_lex_state = 2},
  [358] = {.lex_state = 97, .external_lex_state = 2},
  [359] = {.lex_state = 97, .external_lex_state = 2},
  [360] = {.lex_state = 101, .external_lex_state = 3},
  [361] = {.lex_state = 96, .external_lex_state = 1},
  [362] = {.lex_state = 101, .external_lex_state = 3},
  [363] = {.lex_state = 101, .external_lex_state = 3},
  [364] = {.lex_state = 75, .external_lex_state = 1},
  [365] = {.lex_state = 96, .external_lex_state = 1},
  [366] = {.lex_state = 96, .external_lex_state = 1},
  [367] = {.lex_state = 96, .external_lex_state = 1},
  [368] = {.lex_state = 96, .external_lex_state = 1},
  [369] = {.lex_state = 101, .external_lex_state = 3},
  [370] = {.lex_state = 98, .external_lex_state = 5},
  [371] = {.lex_state = 101, .external_lex_state = 3},
  [372] = {.lex_state = 96, .external_lex_state = 1},
  [373] = {.lex_state = 101, .external_lex_state = 3},
  [374] = {.lex_state = 101, .external_lex_state = 3},
  [375] = {.lex_state = 96, .external_lex_state = 1},
  [376] = {.lex_state = 101, .external_lex_state = 3},
  [377] = {.lex_state = 96, .external_lex_state = 1},
  [378] = {.lex_state = 98, .external_lex_state = 5},
  [379] = {.lex_state = 96, .external_lex_state = 1},
  [380] = {.lex_state = 96, .external_lex_state = 1},
  [381] = {.lex_state = 96, .external_lex_state = 1},
  [382] = {.lex_state = 101, .external_lex_state = 3},
  [383] = {.lex_state = 99, .external_lex_state = 3},
  [384] = {.lex_state = 101, .external_lex_state = 3},
  [385] = {.lex_state = 96, .external_lex_state = 4},
  [386] = {.lex_state = 75, .external_lex_state = 3},
  [387] = {.lex_state = 75, .external_lex_state = 3},
  [388] = {.lex_state = 99, .external_lex_state = 3},
  [389] = {.lex_state = 98, .external_lex_state = 5},
  [390] = {.lex_state = 98, .external_lex_state = 5},
  [391] = {.lex_state = 98, .external_lex_state = 5},
  [392] = {.lex_state = 99, .external_lex_state = 3},
  [393] = {.lex_state = 101, .external_lex_state = 3},
  [394] = {.lex_state = 75, .external_lex_state = 3},
  [395] = {.lex_state = 96, .external_lex_state = 4},
  [396] = {.lex_state = 96, .external_lex_state = 4},
  [397] = {.lex_state = 75, .external_lex_state = 3},
  [398] = {.lex_state = 98, .external_lex_state = 5},
  [399] = {.lex_state = 101, .external_lex_state = 3},
  [400] = {.lex_state = 98, .external_lex_state = 5},
  [401] = {.lex_state = 98, .external_lex_state = 5},
  [402] = {.lex_state = 96, .external_lex_state = 4},
  [403] = {.lex_state = 99, .external_lex_state = 3},
  [404] = {.lex_state = 75, .external_lex_state = 3},
  [405] = {.lex_state = 101, .external_lex_state = 3},
  [406] = {.lex_state = 98, .external_lex_state = 5},
  [407] = {.lex_state = 101, .external_lex_state = 3},
  [408] = {.lex_state = 99, .external_lex_state = 3},
  [409] = {.lex_state = 99, .external_lex_state = 3},
  [410] = {.lex_state = 96, .external_lex_state = 3},
  [411] = {.lex_state = 96, .external_lex_state = 3},
  [412] = {.lex_state = 99, .external_lex_state = 3},
  [413] = {.lex_state = 98, .external_lex_state = 6},
  [414] = {.lex_state = 98, .external_lex_state = 6},
  [415] = {.lex_state = 96, .external_lex_state = 3},
  [416] = {.lex_state = 96, .external_lex_state = 3},
  [417] = {.lex_state = 98, .external_lex_state = 6},
  [418] = {.lex_state = 96, .external_lex_state = 3},
  [419] = {.lex_state = 96, .external_lex_state = 3},
  [420] = {.lex_state = 96, .external_lex_state = 3},
  [421] = {.lex_state = 96, .external_lex_state = 3},
  [422] = {.lex_state = 96, .external_lex_state = 3},
  [423] = {.lex_state = 96, .external_lex_state = 3},
  [424] = {.lex_state = 96, .external_lex_state = 3},
  [425] = {.lex_state = 96, .external_lex_state = 3},
  [426] = {.lex_state = 96, .external_lex_state = 3},
  [427] = {.lex_state = 96, .external_lex_state = 3},
  [428] = {.lex_state = 98, .external_lex_state = 6},
  [429] = {.lex_state = 96, .external_lex_state = 3},
  [430] = {.lex_state = 98, .external_lex_state = 6},
  [431] = {.lex_state = 98, .external_lex_state = 6},
  [432] = {.lex_state = 98, .external_lex_state = 6},
  [433] = {.lex_state = 96, .external_lex_state = 3},
  [434] = {.lex_state = 96, .external_lex_state = 3},
  [435] = {.lex_state = 96, .external_lex_state = 3},
  [436] = {.lex_state = 96, .external_lex_state = 3},
  [437] = {.lex_state = 96, .external_lex_state = 3},
  [438] = {.lex_state = 96, .external_lex_state = 3},
  [439] = {.lex_state = 96, .external_lex_state = 3},
  [440] = {.lex_state = 96, .external_lex_state = 3},
  [441] = {.lex_state = 99, .external_lex_state = 2},
  [442] = {.lex_state = 18, .external_lex_state = 2},
  [443] = {.lex_state = 18, .external_lex_state = 2},
  [444] = {.lex_state = 18, .external_lex_state = 2},
  [445] = {.lex_state = 18, .external_lex_state = 2},
  [446] = {.lex_state = 18, .external_lex_state = 2},
  [447] = {.lex_state = 18, .external_lex_state = 2},
  [448] = {.lex_state = 18, .external_lex_state = 2},
  [449] = {.lex_state = 99, .external_lex_state = 2},
  [450] = {.lex_state = 96, .external_lex_state = 2},
  [451] = {.lex_state = 99, .external_lex_state = 2},
  [452] = {.lex_state = 98, .external_lex_state = 6},
  [453] = {.lex_state = 20, .external_lex_state = 2},
  [454] = {.lex_state = 20, .external_lex_state = 2},
  [455] = {.lex_state = 18, .external_lex_state = 2},
  [456] = {.lex_state = 98, .external_lex_state = 6},
  [457] = {.lex_state = 98, .external_lex_state = 6},
  [458] = {.lex_state = 18, .external_lex_state = 2},
  [459] = {.lex_state = 96, .external_lex_state = 2},
  [460] = {.lex_state = 98, .external_lex_state = 6},
  [461] = {.lex_state = 96, .external_lex_state = 3},
  [462] = {.lex_state = 96, .external_lex_state = 2},
  [463] = {.lex_state = 96, .external_lex_state = 3},
  [464] = {.lex_state = 101, .external_lex_state = 2},
  [465] = {.lex_state = 18, .external_lex_state = 2},
  [466] = {.lex_state = 96, .external_lex_state = 2},
  [467] = {.lex_state = 99, .external_lex_state = 2},
  [468] = {.lex_state = 98, .external_lex_state = 6},
  [469] = {.lex_state = 96, .external_lex_state = 2},
  [470] = {.lex_state = 96, .external_lex_state = 2},
  [471] = {.lex_state = 98, .external_lex_state = 6},
  [472] = {.lex_state = 19, .external_lex_state = 2},
  [473] = {.lex_state = 98, .external_lex_state = 6},
  [474] = {.lex_state = 96, .external_lex_state = 3},
  [475] = {.lex_state = 99, .external_lex_state = 2},
  [476] = {.lex_state = 96, .external_lex_state = 2},
  [477] = {.lex_state = 99, .external_lex_state = 2},
  [478] = {.lex_state = 19, .external_lex_state = 2},
  [479] = {.lex_state = 92, .external_lex_state = 2},
  [480] = {.lex_state = 19, .external_lex_state = 2},
  [481] = {.lex_state = 31, .external_lex_state = 2},
  [482] = {.lex_state = 92, .external_lex_state = 2},
  [483] = {.lex_state = 31, .external_lex_state = 2},
  [484] = {.lex_state = 31, .external_lex_state = 2},
  [485] = {.lex_state = 92, .external_lex_state = 2},
  [486] = {.lex_state = 31, .external_lex_state = 2},
  [487] = {.lex_state = 96, .external_lex_state = 2},
  [488] = {.lex_state = 31, .external_lex_state = 2},
  [489] = {.lex_state = 97, .external_lex_state = 2},
  [490] = {.lex_state = 96, .external_lex_state = 3},
  [491] = {.lex_state = 99, .external_lex_state = 2},
  [492] = {.lex_state = 96, .external_lex_state = 2},
  [493] = {.lex_state = 96, .external_lex_state = 2},
  [494] = {.lex_state = 96, .external_lex_state = 2},
  [495] = {.lex_state = 96, .external_lex_state = 2},
  [496] = {.lex_state = 96, .external_lex_state = 2},
  [497] = {.lex_state = 96, .external_lex_state = 2},
  [498] = {.lex_state = 96, .external_lex_state = 2},
  [499] = {.lex_state = 96, .external_lex_state = 2},
  [500] = {.lex_state = 96, .external_lex_state = 2},
  [501] = {.lex_state = 96, .external_lex_state = 2},
  [502] = {.lex_state = 96, .external_lex_state = 2},
  [503] = {.lex_state = 96, .external_lex_state = 2},
  [504] = {.lex_state = 96, .external_lex_state = 2},
  [505] = {.lex_state = 96, .external_lex_state = 2},
  [506] = {.lex_state = 96, .external_lex_state = 2},
  [507] = {.lex_state = 96, .external_lex_state = 2},
  [508] = {.lex_state = 19, .external_lex_state = 2},
  [509] = {.lex_state = 96, .external_lex_state = 2},
  [510] = {.lex_state = 96, .external_lex_state = 2},
  [511] = {.lex_state = 19, .external_lex_state = 2},
  [512] = {.lex_state = 96, .external_lex_state = 2},
  [513] = {.lex_state = 92, .external_lex_state = 2},
  [514] = {.lex_state = 97, .external_lex_state = 2},
  [515] = {.lex_state = 96, .external_lex_state = 2},
  [516] = {.lex_state = 19, .external_lex_state = 2},
  [517] = {.lex_state = 98, .external_lex_state = 2},
  [518] = {.lex_state = 96, .external_lex_state = 2},
  [519] = {.lex_state = 96, .external_lex_state = 2},
  [520] = {.lex_state = 96, .external_lex_state = 2},
  [521] = {.lex_state = 96, .external_lex_state = 2},
  [522] = {.lex_state = 19, .external_lex_state = 2},
  [523] = {.lex_state = 96, .external_lex_state = 2},
  [524] = {.lex_state = 96, .external_lex_state = 2},
  [525] = {.lex_state = 96, .external_lex_state = 2},
  [526] = {.lex_state = 96, .external_lex_state = 2},
  [527] = {.lex_state = 96, .external_lex_state = 2},
  [528] = {.lex_state = 96, .external_lex_state = 2},
  [529] = {.lex_state = 96, .external_lex_state = 2},
  [530] = {.lex_state = 96, .external_lex_state = 2},
  [531] = {.lex_state = 96, .external_lex_state = 2},
  [532] = {.lex_state = 96, .external_lex_state = 2},
  [533] = {.lex_state = 96, .external_lex_state = 2},
  [534] = {.lex_state = 96, .external_lex_state = 2},
  [535] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym__line_comment_token1] = ACTIONS(1),
    [aux_sym__block_comment_token1] = ACTIONS(3),
    [aux_sym__immediate_block_comment_token1] = ACTIONS(1),
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
    [aux_sym_elf_type_tag_token1] = ACTIONS(1),
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
    [sym__operator_space] = ACTIONS(5),
    [sym__line_separator] = ACTIONS(1),
    [sym__data_separator] = ACTIONS(1),
    [sym__inline_separator_comment] = ACTIONS(1),
    [sym__inline_end_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(501),
    [sym__statement] = STATE(107),
    [sym__line_comment] = STATE(482),
    [sym__block_comment] = STATE(1),
    [sym_directive] = STATE(411),
    [sym__macro_directive] = STATE(418),
    [sym__numeric_directive] = STATE(424),
    [sym_numeric_mnemonic] = STATE(382),
    [sym__string_directive] = STATE(426),
    [sym_string_mnemonic] = STATE(393),
    [sym__control_directive] = STATE(421),
    [sym_control_mnemonic] = STATE(384),
    [sym_instruction] = STATE(411),
    [sym__label] = STATE(103),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_CR] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(9),
    [aux_sym__line_comment_token1] = ACTIONS(11),
    [aux_sym__block_comment_token1] = ACTIONS(3),
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
    [sym__operator_space] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 44,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym_elf_type_tag_token1,
    ACTIONS(33), 1,
      aux_sym_option_flag_token1,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(2), 1,
      sym__block_comment,
    STATE(156), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(157), 1,
      sym__wrapped_logical_and_expression,
    STATE(158), 1,
      sym__bitwise_or_expression,
    STATE(175), 1,
      sym__wrapped_logical_or_expression,
    STATE(176), 1,
      sym__logical_and_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(179), 1,
      sym__bitwise_and_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(181), 1,
      sym__equality_expression,
    STATE(182), 1,
      sym__wrapped_equality_expression,
    STATE(183), 1,
      sym__relational_expression,
    STATE(184), 1,
      sym__wrapped_relational_expression,
    STATE(185), 1,
      sym__shift_expression,
    STATE(186), 1,
      sym__wrapped_shift_expression,
    STATE(187), 1,
      sym__additive_expression,
    STATE(188), 1,
      sym__wrapped_additive_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(198), 1,
      sym__assignment_expression,
    STATE(199), 1,
      sym__logical_or_expression,
    STATE(365), 1,
      sym__wrapped_assignment_expression,
    STATE(368), 1,
      sym__control_operand,
    STATE(425), 1,
      sym_control_operands,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(380), 3,
      sym_elf_type_tag,
      sym_option_flag,
      sym_string,
    ACTIONS(25), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [152] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
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
    STATE(3), 1,
      sym__block_comment,
    STATE(201), 1,
      sym__wrapped_bitwise_or_expression,
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
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__equality_expression,
    STATE(217), 1,
      sym__wrapped_equality_expression,
    STATE(218), 1,
      sym__relational_expression,
    STATE(219), 1,
      sym__wrapped_relational_expression,
    STATE(220), 1,
      sym__shift_expression,
    STATE(221), 1,
      sym__wrapped_shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(378), 1,
      sym__wrapped_assignment_expression,
    STATE(389), 1,
      sym__operand,
    STATE(406), 1,
      sym_string,
    STATE(416), 1,
      sym__call_expression,
    STATE(440), 1,
      sym_operands,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(55), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [299] = 23,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      aux_sym__line_comment_token1,
    ACTIONS(87), 1,
      sym_macro_mnemonic,
    ACTIONS(96), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(99), 1,
      sym_opcode,
    STATE(105), 1,
      sym__label,
    STATE(107), 1,
      sym__statement,
    STATE(382), 1,
      sym_numeric_mnemonic,
    STATE(384), 1,
      sym_control_mnemonic,
    STATE(393), 1,
      sym_string_mnemonic,
    STATE(418), 1,
      sym__macro_directive,
    STATE(421), 1,
      sym__control_directive,
    STATE(424), 1,
      sym__numeric_directive,
    STATE(426), 1,
      sym__string_directive,
    STATE(513), 1,
      sym__line_comment,
    STATE(4), 2,
      sym__block_comment,
      aux_sym_program_repeat1,
    STATE(433), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(81), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(102), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(93), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(90), 26,
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
  [405] = 24,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      aux_sym__line_comment_token1,
    ACTIONS(13), 1,
      sym_macro_mnemonic,
    ACTIONS(19), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(21), 1,
      sym_opcode,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_program_repeat1,
    STATE(5), 1,
      sym__block_comment,
    STATE(102), 1,
      sym__label,
    STATE(107), 1,
      sym__statement,
    STATE(382), 1,
      sym_numeric_mnemonic,
    STATE(384), 1,
      sym_control_mnemonic,
    STATE(393), 1,
      sym_string_mnemonic,
    STATE(418), 1,
      sym__macro_directive,
    STATE(421), 1,
      sym__control_directive,
    STATE(424), 1,
      sym__numeric_directive,
    STATE(426), 1,
      sym__string_directive,
    STATE(485), 1,
      sym__line_comment,
    STATE(410), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(9), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [513] = 41,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
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
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__block_comment,
    STATE(201), 1,
      sym__wrapped_bitwise_or_expression,
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
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__equality_expression,
    STATE(217), 1,
      sym__wrapped_equality_expression,
    STATE(218), 1,
      sym__relational_expression,
    STATE(219), 1,
      sym__wrapped_relational_expression,
    STATE(220), 1,
      sym__shift_expression,
    STATE(221), 1,
      sym__wrapped_shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(378), 1,
      sym__wrapped_assignment_expression,
    STATE(401), 1,
      sym__operand,
    STATE(406), 1,
      sym_string,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    ACTIONS(107), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [654] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      sym_macro_variable,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(7), 1,
      sym__block_comment,
    STATE(249), 1,
      sym_address,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(363), 1,
      sym_string,
    STATE(412), 1,
      sym_string_operands,
    STATE(476), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 4,
      sym_octal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    ACTIONS(111), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(328), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [799] = 41,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
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
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym__block_comment,
    STATE(201), 1,
      sym__wrapped_bitwise_or_expression,
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
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__equality_expression,
    STATE(217), 1,
      sym__wrapped_equality_expression,
    STATE(218), 1,
      sym__relational_expression,
    STATE(219), 1,
      sym__wrapped_relational_expression,
    STATE(220), 1,
      sym__shift_expression,
    STATE(221), 1,
      sym__wrapped_shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(378), 1,
      sym__wrapped_assignment_expression,
    STATE(401), 1,
      sym__operand,
    STATE(406), 1,
      sym_string,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    ACTIONS(137), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [940] = 38,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(9), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__wrapped_shift_expression,
    STATE(112), 1,
      sym__logical_and_expression,
    STATE(113), 1,
      sym__wrapped_logical_and_expression,
    STATE(114), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__bitwise_xor_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(118), 1,
      sym__bitwise_and_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(120), 1,
      sym__equality_expression,
    STATE(121), 1,
      sym__wrapped_equality_expression,
    STATE(122), 1,
      sym__relational_expression,
    STATE(123), 1,
      sym__wrapped_relational_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_logical_or_expression,
    STATE(155), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(339), 1,
      sym__wrapped_assignment_expression,
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
    ACTIONS(139), 7,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1074] = 42,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym_elf_type_tag_token1,
    ACTIONS(33), 1,
      aux_sym_option_flag_token1,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(10), 1,
      sym__block_comment,
    STATE(156), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(157), 1,
      sym__wrapped_logical_and_expression,
    STATE(158), 1,
      sym__bitwise_or_expression,
    STATE(175), 1,
      sym__wrapped_logical_or_expression,
    STATE(176), 1,
      sym__logical_and_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(179), 1,
      sym__bitwise_and_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(181), 1,
      sym__equality_expression,
    STATE(182), 1,
      sym__wrapped_equality_expression,
    STATE(183), 1,
      sym__relational_expression,
    STATE(184), 1,
      sym__wrapped_relational_expression,
    STATE(185), 1,
      sym__shift_expression,
    STATE(186), 1,
      sym__wrapped_shift_expression,
    STATE(187), 1,
      sym__additive_expression,
    STATE(188), 1,
      sym__wrapped_additive_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(198), 1,
      sym__assignment_expression,
    STATE(199), 1,
      sym__logical_or_expression,
    STATE(365), 1,
      sym__wrapped_assignment_expression,
    STATE(375), 1,
      sym__control_operand,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(380), 3,
      sym_elf_type_tag,
      sym_option_flag,
      sym_string,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1216] = 39,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(11), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__wrapped_shift_expression,
    STATE(112), 1,
      sym__logical_and_expression,
    STATE(113), 1,
      sym__wrapped_logical_and_expression,
    STATE(114), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__bitwise_xor_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(118), 1,
      sym__bitwise_and_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(120), 1,
      sym__equality_expression,
    STATE(121), 1,
      sym__wrapped_equality_expression,
    STATE(122), 1,
      sym__relational_expression,
    STATE(123), 1,
      sym__wrapped_relational_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_logical_or_expression,
    STATE(155), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(253), 1,
      sym__wrapped_assignment_expression,
    STATE(422), 1,
      sym_numeric_operands,
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
    ACTIONS(161), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1351] = 42,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(12), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(498), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1491] = 44,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(13), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(271), 1,
      sym_symbol,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(417), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(525), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(187), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(173), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1635] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(14), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(299), 1,
      sym_symbol,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(430), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(512), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(173), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1776] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(15), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym_symbol,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(507), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(173), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1917] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(16), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(297), 1,
      sym_symbol,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(428), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(533), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(173), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2058] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(17), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(300), 1,
      sym_symbol,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(534), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(173), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2199] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(18), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(282), 1,
      sym_symbol,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(506), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(197), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(173), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2340] = 41,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(19), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(460), 1,
      sym_string,
    STATE(473), 1,
      sym__operand,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2477] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(20), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(302), 1,
      sym_symbol,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(532), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(199), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(173), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2618] = 41,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(21), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(460), 1,
      sym_string,
    STATE(473), 1,
      sym__operand,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2755] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(22), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(298), 1,
      sym_symbol,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(528), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(173), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2896] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(23), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(301), 1,
      sym_symbol,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(431), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(510), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(203), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(173), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3037] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(24), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(303), 1,
      sym_symbol,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(432), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(526), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(205), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(173), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3178] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(25), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(271), 1,
      sym_symbol,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(417), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(500), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(187), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(173), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3319] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(26), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(304), 1,
      sym_symbol,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(503), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(173), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3460] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(27), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(305), 1,
      sym_symbol,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(431), 1,
      sym__wrapped_assignment_expression,
    STATE(457), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(505), 1,
      sym_operands,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(209), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(173), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(257), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3601] = 40,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
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
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym__block_comment,
    STATE(201), 1,
      sym__wrapped_bitwise_or_expression,
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
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__equality_expression,
    STATE(217), 1,
      sym__wrapped_equality_expression,
    STATE(218), 1,
      sym__relational_expression,
    STATE(219), 1,
      sym__wrapped_relational_expression,
    STATE(220), 1,
      sym__shift_expression,
    STATE(221), 1,
      sym__wrapped_shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(378), 1,
      sym__wrapped_assignment_expression,
    STATE(401), 1,
      sym__operand,
    STATE(406), 1,
      sym_string,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3735] = 40,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(29), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(460), 1,
      sym_string,
    STATE(473), 1,
      sym__operand,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3869] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym__block_comment,
    STATE(216), 1,
      sym__equality_expression,
    STATE(218), 1,
      sym__relational_expression,
    STATE(219), 1,
      sym__wrapped_relational_expression,
    STATE(220), 1,
      sym__shift_expression,
    STATE(221), 1,
      sym__wrapped_shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(237), 1,
      sym__wrapped_equality_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(492), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3994] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__block_comment,
    STATE(222), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(240), 1,
      sym__wrapped_additive_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(492), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4119] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym__block_comment,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(241), 1,
      sym__wrapped_multiplicative_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(492), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4244] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym__block_comment,
    STATE(242), 1,
      sym__simple_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(492), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4369] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(34), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__wrapped_shift_expression,
    STATE(112), 1,
      sym__logical_and_expression,
    STATE(113), 1,
      sym__wrapped_logical_and_expression,
    STATE(114), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__bitwise_xor_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(118), 1,
      sym__bitwise_and_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(120), 1,
      sym__equality_expression,
    STATE(121), 1,
      sym__wrapped_equality_expression,
    STATE(122), 1,
      sym__relational_expression,
    STATE(123), 1,
      sym__wrapped_relational_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_logical_or_expression,
    STATE(155), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(339), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4494] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym__block_comment,
    STATE(201), 1,
      sym__wrapped_bitwise_or_expression,
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
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__equality_expression,
    STATE(217), 1,
      sym__wrapped_equality_expression,
    STATE(218), 1,
      sym__relational_expression,
    STATE(219), 1,
      sym__wrapped_relational_expression,
    STATE(220), 1,
      sym__shift_expression,
    STATE(221), 1,
      sym__wrapped_shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(227), 1,
      sym__wrapped_assignment_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_and_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4619] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4744] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(37), 1,
      sym__block_comment,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(413), 1,
      sym__wrapped_logical_or_expression,
    STATE(493), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4869] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(38), 1,
      sym__block_comment,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(287), 1,
      sym__wrapped_logical_and_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(493), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4994] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(39), 1,
      sym__block_comment,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(288), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(493), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5119] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(40), 1,
      sym__block_comment,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(289), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(493), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5244] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(41), 1,
      sym__block_comment,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(493), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5369] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(42), 1,
      sym__block_comment,
    STATE(258), 1,
      sym__equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(291), 1,
      sym__wrapped_equality_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(493), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5494] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(43), 1,
      sym__block_comment,
    STATE(260), 1,
      sym__relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(292), 1,
      sym__wrapped_relational_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(493), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5619] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(44), 1,
      sym__block_comment,
    STATE(262), 1,
      sym__shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(493), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5744] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(45), 1,
      sym__block_comment,
    STATE(264), 1,
      sym__additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(295), 1,
      sym__wrapped_additive_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(493), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5869] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(46), 1,
      sym__block_comment,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(307), 1,
      sym__wrapped_multiplicative_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(493), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5994] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(47), 1,
      sym__block_comment,
    STATE(308), 1,
      sym__simple_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(493), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6119] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(48), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__wrapped_shift_expression,
    STATE(112), 1,
      sym__logical_and_expression,
    STATE(113), 1,
      sym__wrapped_logical_and_expression,
    STATE(114), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__bitwise_xor_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(118), 1,
      sym__bitwise_and_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(120), 1,
      sym__equality_expression,
    STATE(121), 1,
      sym__wrapped_equality_expression,
    STATE(122), 1,
      sym__relational_expression,
    STATE(123), 1,
      sym__wrapped_relational_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6244] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(49), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__wrapped_shift_expression,
    STATE(112), 1,
      sym__logical_and_expression,
    STATE(114), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__bitwise_xor_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(118), 1,
      sym__bitwise_and_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(120), 1,
      sym__equality_expression,
    STATE(121), 1,
      sym__wrapped_equality_expression,
    STATE(122), 1,
      sym__relational_expression,
    STATE(123), 1,
      sym__wrapped_relational_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(149), 1,
      sym__wrapped_logical_and_expression,
    STATE(155), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6369] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(50), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__wrapped_shift_expression,
    STATE(114), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__bitwise_xor_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(118), 1,
      sym__bitwise_and_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(120), 1,
      sym__equality_expression,
    STATE(121), 1,
      sym__wrapped_equality_expression,
    STATE(122), 1,
      sym__relational_expression,
    STATE(123), 1,
      sym__wrapped_relational_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(150), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6494] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(51), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__bitwise_xor_expression,
    STATE(118), 1,
      sym__bitwise_and_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(120), 1,
      sym__equality_expression,
    STATE(121), 1,
      sym__wrapped_equality_expression,
    STATE(122), 1,
      sym__relational_expression,
    STATE(123), 1,
      sym__wrapped_relational_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(151), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6619] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(52), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__wrapped_shift_expression,
    STATE(118), 1,
      sym__bitwise_and_expression,
    STATE(120), 1,
      sym__equality_expression,
    STATE(121), 1,
      sym__wrapped_equality_expression,
    STATE(122), 1,
      sym__relational_expression,
    STATE(123), 1,
      sym__wrapped_relational_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(153), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6744] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(53), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__wrapped_shift_expression,
    STATE(120), 1,
      sym__equality_expression,
    STATE(122), 1,
      sym__relational_expression,
    STATE(123), 1,
      sym__wrapped_relational_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(154), 1,
      sym__wrapped_equality_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6869] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(54), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__relational_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6994] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(55), 1,
      sym__block_comment,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7119] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(56), 1,
      sym__block_comment,
    STATE(126), 1,
      sym__additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(133), 1,
      sym__wrapped_additive_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7244] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(57), 1,
      sym__block_comment,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(134), 1,
      sym__wrapped_multiplicative_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7369] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(58), 1,
      sym__block_comment,
    STATE(135), 1,
      sym__simple_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7494] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(450), 1,
      sym__wrapped_logical_or_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7619] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7744] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7869] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym__block_comment,
    STATE(319), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7994] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8119] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_equality_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8244] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8369] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(323), 1,
      sym__wrapped_shift_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8494] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8619] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(325), 1,
      sym__wrapped_multiplicative_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8744] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(326), 1,
      sym__simple_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8869] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(70), 1,
      sym__block_comment,
    STATE(156), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(157), 1,
      sym__wrapped_logical_and_expression,
    STATE(158), 1,
      sym__bitwise_or_expression,
    STATE(176), 1,
      sym__logical_and_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(179), 1,
      sym__bitwise_and_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(181), 1,
      sym__equality_expression,
    STATE(182), 1,
      sym__wrapped_equality_expression,
    STATE(183), 1,
      sym__relational_expression,
    STATE(184), 1,
      sym__wrapped_relational_expression,
    STATE(185), 1,
      sym__shift_expression,
    STATE(186), 1,
      sym__wrapped_shift_expression,
    STATE(187), 1,
      sym__additive_expression,
    STATE(188), 1,
      sym__wrapped_additive_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(199), 1,
      sym__logical_or_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(361), 1,
      sym__wrapped_logical_or_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8994] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(71), 1,
      sym__block_comment,
    STATE(156), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(158), 1,
      sym__bitwise_or_expression,
    STATE(162), 1,
      sym__wrapped_logical_and_expression,
    STATE(176), 1,
      sym__logical_and_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(179), 1,
      sym__bitwise_and_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(181), 1,
      sym__equality_expression,
    STATE(182), 1,
      sym__wrapped_equality_expression,
    STATE(183), 1,
      sym__relational_expression,
    STATE(184), 1,
      sym__wrapped_relational_expression,
    STATE(185), 1,
      sym__shift_expression,
    STATE(186), 1,
      sym__wrapped_shift_expression,
    STATE(187), 1,
      sym__additive_expression,
    STATE(188), 1,
      sym__wrapped_additive_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9119] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(72), 1,
      sym__block_comment,
    STATE(158), 1,
      sym__bitwise_or_expression,
    STATE(163), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(179), 1,
      sym__bitwise_and_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(181), 1,
      sym__equality_expression,
    STATE(182), 1,
      sym__wrapped_equality_expression,
    STATE(183), 1,
      sym__relational_expression,
    STATE(184), 1,
      sym__wrapped_relational_expression,
    STATE(185), 1,
      sym__shift_expression,
    STATE(186), 1,
      sym__wrapped_shift_expression,
    STATE(187), 1,
      sym__additive_expression,
    STATE(188), 1,
      sym__wrapped_additive_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9244] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(73), 1,
      sym__block_comment,
    STATE(164), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(179), 1,
      sym__bitwise_and_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(181), 1,
      sym__equality_expression,
    STATE(182), 1,
      sym__wrapped_equality_expression,
    STATE(183), 1,
      sym__relational_expression,
    STATE(184), 1,
      sym__wrapped_relational_expression,
    STATE(185), 1,
      sym__shift_expression,
    STATE(186), 1,
      sym__wrapped_shift_expression,
    STATE(187), 1,
      sym__additive_expression,
    STATE(188), 1,
      sym__wrapped_additive_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9369] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(74), 1,
      sym__block_comment,
    STATE(165), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(179), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__equality_expression,
    STATE(182), 1,
      sym__wrapped_equality_expression,
    STATE(183), 1,
      sym__relational_expression,
    STATE(184), 1,
      sym__wrapped_relational_expression,
    STATE(185), 1,
      sym__shift_expression,
    STATE(186), 1,
      sym__wrapped_shift_expression,
    STATE(187), 1,
      sym__additive_expression,
    STATE(188), 1,
      sym__wrapped_additive_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9494] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(75), 1,
      sym__block_comment,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(181), 1,
      sym__equality_expression,
    STATE(183), 1,
      sym__relational_expression,
    STATE(184), 1,
      sym__wrapped_relational_expression,
    STATE(185), 1,
      sym__shift_expression,
    STATE(186), 1,
      sym__wrapped_shift_expression,
    STATE(187), 1,
      sym__additive_expression,
    STATE(188), 1,
      sym__wrapped_additive_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9619] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(76), 1,
      sym__block_comment,
    STATE(167), 1,
      sym__wrapped_relational_expression,
    STATE(183), 1,
      sym__relational_expression,
    STATE(185), 1,
      sym__shift_expression,
    STATE(186), 1,
      sym__wrapped_shift_expression,
    STATE(187), 1,
      sym__additive_expression,
    STATE(188), 1,
      sym__wrapped_additive_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9744] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(77), 1,
      sym__block_comment,
    STATE(168), 1,
      sym__wrapped_shift_expression,
    STATE(185), 1,
      sym__shift_expression,
    STATE(187), 1,
      sym__additive_expression,
    STATE(188), 1,
      sym__wrapped_additive_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9869] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(78), 1,
      sym__block_comment,
    STATE(169), 1,
      sym__wrapped_additive_expression,
    STATE(187), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9994] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(79), 1,
      sym__block_comment,
    STATE(170), 1,
      sym__wrapped_multiplicative_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10119] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(80), 1,
      sym__block_comment,
    STATE(171), 1,
      sym__simple_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10244] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(81), 1,
      sym__block_comment,
    STATE(254), 1,
      sym__wrapped_logical_or_expression,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__wrapped_assignment_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(279), 1,
      sym__assignment_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10369] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym__block_comment,
    STATE(201), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(208), 1,
      sym__logical_or_expression,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(211), 1,
      sym__wrapped_logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__equality_expression,
    STATE(217), 1,
      sym__wrapped_equality_expression,
    STATE(218), 1,
      sym__relational_expression,
    STATE(219), 1,
      sym__wrapped_relational_expression,
    STATE(220), 1,
      sym__shift_expression,
    STATE(221), 1,
      sym__wrapped_shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(492), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10494] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_unary_minus_operator,
    ACTIONS(171), 1,
      sym_relocation_type,
    ACTIONS(177), 1,
      aux_sym_decimal_token1,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(185), 1,
      aux_sym_symbol_token1,
    STATE(83), 1,
      sym__block_comment,
    STATE(255), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(258), 1,
      sym__equality_expression,
    STATE(259), 1,
      sym__wrapped_equality_expression,
    STATE(260), 1,
      sym__relational_expression,
    STATE(261), 1,
      sym__wrapped_relational_expression,
    STATE(262), 1,
      sym__shift_expression,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(264), 1,
      sym__additive_expression,
    STATE(265), 1,
      sym__wrapped_additive_expression,
    STATE(266), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(275), 1,
      sym__bitwise_xor_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(286), 1,
      sym__logical_and_expression,
    STATE(296), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__wrapped_logical_and_expression,
    STATE(310), 1,
      sym__logical_or_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(493), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(169), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(175), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(257), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10619] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(84), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__wrapped_shift_expression,
    STATE(112), 1,
      sym__logical_and_expression,
    STATE(113), 1,
      sym__wrapped_logical_and_expression,
    STATE(114), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__bitwise_xor_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(118), 1,
      sym__bitwise_and_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(120), 1,
      sym__equality_expression,
    STATE(121), 1,
      sym__wrapped_equality_expression,
    STATE(122), 1,
      sym__relational_expression,
    STATE(123), 1,
      sym__wrapped_relational_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(131), 1,
      sym__wrapped_logical_or_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10744] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10869] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(86), 1,
      sym__block_comment,
    STATE(156), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(157), 1,
      sym__wrapped_logical_and_expression,
    STATE(158), 1,
      sym__bitwise_or_expression,
    STATE(176), 1,
      sym__logical_and_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(179), 1,
      sym__bitwise_and_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(181), 1,
      sym__equality_expression,
    STATE(182), 1,
      sym__wrapped_equality_expression,
    STATE(183), 1,
      sym__relational_expression,
    STATE(184), 1,
      sym__wrapped_relational_expression,
    STATE(185), 1,
      sym__shift_expression,
    STATE(186), 1,
      sym__wrapped_shift_expression,
    STATE(187), 1,
      sym__additive_expression,
    STATE(188), 1,
      sym__wrapped_additive_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(199), 1,
      sym__logical_or_expression,
    STATE(200), 1,
      sym__wrapped_logical_or_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10994] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(87), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__wrapped_shift_expression,
    STATE(112), 1,
      sym__logical_and_expression,
    STATE(113), 1,
      sym__wrapped_logical_and_expression,
    STATE(114), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__bitwise_xor_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(118), 1,
      sym__bitwise_and_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(120), 1,
      sym__equality_expression,
    STATE(121), 1,
      sym__wrapped_equality_expression,
    STATE(122), 1,
      sym__relational_expression,
    STATE(123), 1,
      sym__wrapped_relational_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(132), 1,
      sym__wrapped_assignment_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_logical_or_expression,
    STATE(155), 1,
      sym__wrapped_bitwise_or_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11119] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_assignment_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11244] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(89), 1,
      sym__block_comment,
    STATE(156), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(157), 1,
      sym__wrapped_logical_and_expression,
    STATE(158), 1,
      sym__bitwise_or_expression,
    STATE(175), 1,
      sym__wrapped_logical_or_expression,
    STATE(176), 1,
      sym__logical_and_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(179), 1,
      sym__bitwise_and_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(181), 1,
      sym__equality_expression,
    STATE(182), 1,
      sym__wrapped_equality_expression,
    STATE(183), 1,
      sym__relational_expression,
    STATE(184), 1,
      sym__wrapped_relational_expression,
    STATE(185), 1,
      sym__shift_expression,
    STATE(186), 1,
      sym__wrapped_shift_expression,
    STATE(187), 1,
      sym__additive_expression,
    STATE(188), 1,
      sym__wrapped_additive_expression,
    STATE(189), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__simple_expression,
    STATE(192), 1,
      sym__wrapped_assignment_expression,
    STATE(198), 1,
      sym__assignment_expression,
    STATE(199), 1,
      sym__logical_or_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11369] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11494] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym__block_comment,
    STATE(201), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(208), 1,
      sym__logical_or_expression,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(211), 1,
      sym__wrapped_logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__equality_expression,
    STATE(217), 1,
      sym__wrapped_equality_expression,
    STATE(218), 1,
      sym__relational_expression,
    STATE(219), 1,
      sym__wrapped_relational_expression,
    STATE(220), 1,
      sym__shift_expression,
    STATE(221), 1,
      sym__wrapped_shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(370), 1,
      sym__wrapped_logical_or_expression,
    STATE(492), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11619] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(466), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11744] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym__block_comment,
    STATE(201), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__equality_expression,
    STATE(217), 1,
      sym__wrapped_equality_expression,
    STATE(218), 1,
      sym__relational_expression,
    STATE(219), 1,
      sym__wrapped_relational_expression,
    STATE(220), 1,
      sym__shift_expression,
    STATE(221), 1,
      sym__wrapped_shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(233), 1,
      sym__wrapped_logical_and_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(492), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11869] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym__block_comment,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__equality_expression,
    STATE(217), 1,
      sym__wrapped_equality_expression,
    STATE(218), 1,
      sym__relational_expression,
    STATE(219), 1,
      sym__wrapped_relational_expression,
    STATE(220), 1,
      sym__shift_expression,
    STATE(221), 1,
      sym__wrapped_shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(234), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(492), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11994] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12119] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym__block_comment,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__equality_expression,
    STATE(217), 1,
      sym__wrapped_equality_expression,
    STATE(218), 1,
      sym__relational_expression,
    STATE(219), 1,
      sym__wrapped_relational_expression,
    STATE(220), 1,
      sym__shift_expression,
    STATE(221), 1,
      sym__wrapped_shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(235), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(492), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12244] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym__block_comment,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__equality_expression,
    STATE(217), 1,
      sym__wrapped_equality_expression,
    STATE(218), 1,
      sym__relational_expression,
    STATE(219), 1,
      sym__wrapped_relational_expression,
    STATE(220), 1,
      sym__shift_expression,
    STATE(221), 1,
      sym__wrapped_shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(236), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(492), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12369] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
      sym_unary_minus_operator,
    ACTIONS(119), 1,
      sym_relocation_type,
    ACTIONS(125), 1,
      aux_sym_decimal_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym__block_comment,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(352), 1,
      sym__shift_expression,
    STATE(353), 1,
      sym__wrapped_shift_expression,
    STATE(354), 1,
      sym__additive_expression,
    STATE(355), 1,
      sym__wrapped_additive_expression,
    STATE(356), 1,
      sym__multiplicative_expression,
    STATE(357), 1,
      sym__wrapped_multiplicative_expression,
    STATE(358), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(117), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(121), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12494] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym__block_comment,
    STATE(218), 1,
      sym__relational_expression,
    STATE(220), 1,
      sym__shift_expression,
    STATE(221), 1,
      sym__wrapped_shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(238), 1,
      sym__wrapped_relational_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(492), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12619] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym__block_comment,
    STATE(220), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__additive_expression,
    STATE(223), 1,
      sym__wrapped_additive_expression,
    STATE(224), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_multiplicative_expression,
    STATE(226), 1,
      sym__simple_expression,
    STATE(239), 1,
      sym__wrapped_shift_expression,
    STATE(313), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(332), 1,
      sym__assignment_expression,
    STATE(333), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(336), 1,
      sym__bitwise_or_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(338), 1,
      sym__bitwise_xor_expression,
    STATE(342), 1,
      sym__bitwise_and_expression,
    STATE(346), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(348), 1,
      sym__equality_expression,
    STATE(349), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__relational_expression,
    STATE(351), 1,
      sym__wrapped_relational_expression,
    STATE(359), 1,
      sym__logical_and_expression,
    STATE(492), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12744] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(101), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__wrapped_shift_expression,
    STATE(112), 1,
      sym__logical_and_expression,
    STATE(113), 1,
      sym__wrapped_logical_and_expression,
    STATE(114), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__bitwise_xor_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(118), 1,
      sym__bitwise_and_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(120), 1,
      sym__equality_expression,
    STATE(121), 1,
      sym__wrapped_equality_expression,
    STATE(122), 1,
      sym__relational_expression,
    STATE(123), 1,
      sym__wrapped_relational_expression,
    STATE(124), 1,
      sym__shift_expression,
    STATE(126), 1,
      sym__additive_expression,
    STATE(127), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__simple_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_logical_or_expression,
    STATE(155), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(340), 1,
      sym__wrapped_assignment_expression,
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
    STATE(140), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12869] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      sym__block_comment,
    STATE(530), 1,
      sym__line_comment,
    ACTIONS(215), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [12929] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym__block_comment,
    STATE(521), 1,
      sym__line_comment,
    ACTIONS(215), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [12989] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      aux_sym__whitespace_token1,
    STATE(104), 1,
      sym__block_comment,
    ACTIONS(219), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [13049] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym__block_comment,
    ACTIONS(215), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [13106] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym__block_comment,
    ACTIONS(225), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [13163] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      sym__block_comment,
    ACTIONS(229), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [13220] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym__block_comment,
    ACTIONS(233), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [13277] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym__block_comment,
    ACTIONS(237), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [13334] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(110), 1,
      sym__block_comment,
    ACTIONS(241), 10,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      aux_sym_decimal_token1,
      sym_float,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
    ACTIONS(239), 14,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym_elf_type_tag_token1,
      aux_sym_option_flag_token1,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [13372] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(247), 1,
      sym_shift_operator,
    STATE(111), 1,
      sym__block_comment,
    ACTIONS(243), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(245), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13411] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(112), 1,
      sym__block_comment,
    ACTIONS(249), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(251), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13448] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(257), 1,
      sym_logical_and_operator,
    STATE(113), 1,
      sym__block_comment,
    ACTIONS(253), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(255), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13487] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(114), 1,
      sym__block_comment,
    ACTIONS(259), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(261), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13524] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(247), 1,
      sym_shift_operator,
    STATE(115), 1,
      sym__block_comment,
    ACTIONS(263), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(265), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13563] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(116), 1,
      sym__block_comment,
    ACTIONS(267), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(269), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13600] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(275), 1,
      sym_bitwise_xor_operator,
    STATE(117), 1,
      sym__block_comment,
    ACTIONS(271), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(273), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13639] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(118), 1,
      sym__block_comment,
    ACTIONS(277), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(279), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13676] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(285), 1,
      sym_bitwise_and_operator,
    STATE(119), 1,
      sym__block_comment,
    ACTIONS(281), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(283), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13715] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(120), 1,
      sym__block_comment,
    ACTIONS(287), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(289), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13752] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(295), 1,
      sym_equality_operator,
    STATE(121), 1,
      sym__block_comment,
    ACTIONS(291), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(293), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13791] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(122), 1,
      sym__block_comment,
    ACTIONS(297), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(299), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13828] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(305), 1,
      sym_relational_operator,
    STATE(123), 1,
      sym__block_comment,
    ACTIONS(301), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(303), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13867] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(124), 1,
      sym__block_comment,
    ACTIONS(307), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(309), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13904] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(305), 1,
      sym_relational_operator,
    STATE(125), 1,
      sym__block_comment,
    ACTIONS(311), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(313), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13943] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(126), 1,
      sym__block_comment,
    ACTIONS(315), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(317), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [13980] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(323), 1,
      sym_additive_operator,
    STATE(127), 1,
      sym__block_comment,
    ACTIONS(319), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(321), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14019] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(128), 1,
      sym__block_comment,
    ACTIONS(325), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(327), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14056] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(333), 1,
      sym_multiplicative_operator,
    STATE(129), 1,
      sym__block_comment,
    ACTIONS(329), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(331), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14095] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(130), 1,
      sym__block_comment,
    ACTIONS(335), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(337), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14132] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(131), 1,
      sym__block_comment,
    ACTIONS(339), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(341), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14169] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      sym_assignment_operator,
    STATE(132), 1,
      sym__block_comment,
    ACTIONS(343), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(345), 15,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14210] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(323), 1,
      sym_additive_operator,
    STATE(133), 1,
      sym__block_comment,
    ACTIONS(351), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(353), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14249] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(333), 1,
      sym_multiplicative_operator,
    STATE(134), 1,
      sym__block_comment,
    ACTIONS(355), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(357), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14288] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(135), 1,
      sym__block_comment,
    ACTIONS(359), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(361), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14325] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(136), 1,
      sym__block_comment,
    ACTIONS(363), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(365), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14362] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(137), 1,
      sym__block_comment,
    ACTIONS(367), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(369), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14399] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(138), 1,
      sym__block_comment,
    ACTIONS(371), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(373), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14436] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(139), 1,
      sym__block_comment,
    ACTIONS(375), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(377), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14473] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(140), 1,
      sym__block_comment,
    ACTIONS(379), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(381), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14510] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(141), 1,
      sym__block_comment,
    ACTIONS(383), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(385), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14547] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(142), 1,
      sym__block_comment,
    ACTIONS(387), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(389), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14584] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(143), 1,
      sym__block_comment,
    ACTIONS(391), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(393), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14621] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(144), 1,
      sym__block_comment,
    ACTIONS(395), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(397), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14658] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(145), 1,
      sym__block_comment,
    ACTIONS(399), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(401), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14695] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(146), 1,
      sym__block_comment,
    ACTIONS(403), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(405), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14732] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(147), 1,
      sym__block_comment,
    ACTIONS(407), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(409), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14769] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(148), 1,
      sym__block_comment,
    ACTIONS(411), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(413), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14806] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(257), 1,
      sym_logical_and_operator,
    STATE(149), 1,
      sym__block_comment,
    ACTIONS(415), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(417), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14845] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(423), 1,
      sym_bitwise_or_operator,
    STATE(150), 1,
      sym__block_comment,
    ACTIONS(419), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(421), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14884] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(275), 1,
      sym_bitwise_xor_operator,
    STATE(151), 1,
      sym__block_comment,
    ACTIONS(425), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(427), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14923] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(433), 1,
      sym_logical_or_operator,
    STATE(152), 1,
      sym__block_comment,
    ACTIONS(429), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(431), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [14962] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(285), 1,
      sym_bitwise_and_operator,
    STATE(153), 1,
      sym__block_comment,
    ACTIONS(435), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(437), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [15001] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(295), 1,
      sym_equality_operator,
    STATE(154), 1,
      sym__block_comment,
    ACTIONS(439), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(441), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [15040] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(423), 1,
      sym_bitwise_or_operator,
    STATE(155), 1,
      sym__block_comment,
    ACTIONS(443), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(445), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [15079] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(447), 1,
      sym_bitwise_or_operator,
    STATE(156), 1,
      sym__block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(443), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15116] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(449), 1,
      sym_logical_and_operator,
    STATE(157), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15153] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(158), 1,
      sym__block_comment,
    ACTIONS(261), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(259), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15188] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(159), 1,
      sym__block_comment,
    ACTIONS(405), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(403), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15223] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(160), 1,
      sym__block_comment,
    ACTIONS(409), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(407), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15258] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(161), 1,
      sym__block_comment,
    ACTIONS(413), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(411), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15293] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(449), 1,
      sym_logical_and_operator,
    STATE(162), 1,
      sym__block_comment,
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
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15330] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(447), 1,
      sym_bitwise_or_operator,
    STATE(163), 1,
      sym__block_comment,
    ACTIONS(421), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(419), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15367] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(451), 1,
      sym_bitwise_xor_operator,
    STATE(164), 1,
      sym__block_comment,
    ACTIONS(427), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15404] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(453), 1,
      sym_bitwise_and_operator,
    STATE(165), 1,
      sym__block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(435), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15441] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(455), 1,
      sym_equality_operator,
    STATE(166), 1,
      sym__block_comment,
    ACTIONS(441), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(439), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15478] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(457), 1,
      sym_relational_operator,
    STATE(167), 1,
      sym__block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(311), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15515] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(459), 1,
      sym_shift_operator,
    STATE(168), 1,
      sym__block_comment,
    ACTIONS(265), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(263), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [15552] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(461), 1,
      sym_additive_operator,
    STATE(169), 1,
      sym__block_comment,
    ACTIONS(353), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(351), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [15589] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(463), 1,
      sym_multiplicative_operator,
    STATE(170), 1,
      sym__block_comment,
    ACTIONS(357), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(355), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15626] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(171), 1,
      sym__block_comment,
    ACTIONS(361), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(359), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15661] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(172), 1,
      sym__block_comment,
    ACTIONS(365), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(363), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15696] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(173), 1,
      sym__block_comment,
    ACTIONS(369), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(367), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15731] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(174), 1,
      sym__block_comment,
    ACTIONS(373), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(371), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15766] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(465), 1,
      sym_logical_or_operator,
    STATE(175), 1,
      sym__block_comment,
    ACTIONS(431), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(429), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15803] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(176), 1,
      sym__block_comment,
    ACTIONS(251), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(249), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15838] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(177), 1,
      sym__block_comment,
    ACTIONS(269), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(267), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15873] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(451), 1,
      sym_bitwise_xor_operator,
    STATE(178), 1,
      sym__block_comment,
    ACTIONS(273), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(271), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15910] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(179), 1,
      sym__block_comment,
    ACTIONS(279), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(277), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15945] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(453), 1,
      sym_bitwise_and_operator,
    STATE(180), 1,
      sym__block_comment,
    ACTIONS(283), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(281), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15982] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(181), 1,
      sym__block_comment,
    ACTIONS(289), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(287), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16017] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(455), 1,
      sym_equality_operator,
    STATE(182), 1,
      sym__block_comment,
    ACTIONS(293), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(291), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16054] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(183), 1,
      sym__block_comment,
    ACTIONS(299), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(297), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16089] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(457), 1,
      sym_relational_operator,
    STATE(184), 1,
      sym__block_comment,
    ACTIONS(303), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(301), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16126] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(185), 1,
      sym__block_comment,
    ACTIONS(309), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(307), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16161] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(459), 1,
      sym_shift_operator,
    STATE(186), 1,
      sym__block_comment,
    ACTIONS(245), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(243), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16198] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(187), 1,
      sym__block_comment,
    ACTIONS(317), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(315), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16233] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(461), 1,
      sym_additive_operator,
    STATE(188), 1,
      sym__block_comment,
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
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [16270] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(189), 1,
      sym__block_comment,
    ACTIONS(327), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(325), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16305] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(463), 1,
      sym_multiplicative_operator,
    STATE(190), 1,
      sym__block_comment,
    ACTIONS(331), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(329), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16342] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(191), 1,
      sym__block_comment,
    ACTIONS(337), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(335), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16377] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(469), 1,
      sym_assignment_operator,
    STATE(192), 1,
      sym__block_comment,
    ACTIONS(345), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16416] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(193), 1,
      sym__block_comment,
    ACTIONS(377), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(375), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16451] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(194), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16486] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(195), 1,
      sym__block_comment,
    ACTIONS(389), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(387), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16521] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(196), 1,
      sym__block_comment,
    ACTIONS(397), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16556] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(197), 1,
      sym__block_comment,
    ACTIONS(401), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(399), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16591] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(198), 1,
      sym__block_comment,
    ACTIONS(385), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(383), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16626] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(199), 1,
      sym__block_comment,
    ACTIONS(393), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(391), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16661] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(200), 1,
      sym__block_comment,
    ACTIONS(341), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(339), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16696] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(471), 1,
      sym_bitwise_or_operator,
    STATE(201), 1,
      sym__block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(443), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16731] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(202), 1,
      sym__block_comment,
    ACTIONS(373), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(371), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16764] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(203), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16797] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(204), 1,
      sym__block_comment,
    ACTIONS(389), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(387), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16830] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(205), 1,
      sym__block_comment,
    ACTIONS(397), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16863] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(206), 1,
      sym__block_comment,
    ACTIONS(401), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(399), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16896] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(207), 1,
      sym__block_comment,
    ACTIONS(385), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(383), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16929] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(208), 1,
      sym__block_comment,
    ACTIONS(393), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(391), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16962] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(473), 1,
      sym_logical_or_operator,
    STATE(209), 1,
      sym__block_comment,
    ACTIONS(431), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(429), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16997] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(210), 1,
      sym__block_comment,
    ACTIONS(251), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(249), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17030] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(475), 1,
      sym_logical_and_operator,
    STATE(211), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17065] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(212), 1,
      sym__block_comment,
    ACTIONS(261), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(259), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17098] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(213), 1,
      sym__block_comment,
    ACTIONS(269), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(267), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17131] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(477), 1,
      sym_bitwise_xor_operator,
    STATE(214), 1,
      sym__block_comment,
    ACTIONS(273), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(271), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17166] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(215), 1,
      sym__block_comment,
    ACTIONS(279), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(277), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17199] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(216), 1,
      sym__block_comment,
    ACTIONS(289), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(287), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17232] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(479), 1,
      sym_equality_operator,
    STATE(217), 1,
      sym__block_comment,
    ACTIONS(293), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(291), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17267] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(218), 1,
      sym__block_comment,
    ACTIONS(299), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(297), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17300] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(481), 1,
      sym_relational_operator,
    STATE(219), 1,
      sym__block_comment,
    ACTIONS(303), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(301), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17335] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(220), 1,
      sym__block_comment,
    ACTIONS(309), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(307), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17368] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(483), 1,
      sym_shift_operator,
    STATE(221), 1,
      sym__block_comment,
    ACTIONS(245), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(243), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [17403] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(222), 1,
      sym__block_comment,
    ACTIONS(317), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(315), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17436] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(485), 1,
      sym_additive_operator,
    STATE(223), 1,
      sym__block_comment,
    ACTIONS(321), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(319), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [17471] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(224), 1,
      sym__block_comment,
    ACTIONS(327), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(325), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17504] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(487), 1,
      sym_multiplicative_operator,
    STATE(225), 1,
      sym__block_comment,
    ACTIONS(331), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(329), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17539] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(226), 1,
      sym__block_comment,
    ACTIONS(337), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(335), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17572] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_assignment_operator,
    STATE(227), 1,
      sym__block_comment,
    ACTIONS(345), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17609] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(228), 1,
      sym__block_comment,
    ACTIONS(493), 9,
      anon_sym_LPAREN,
      aux_sym_elf_type_tag_token1,
      aux_sym_option_flag_token1,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(495), 10,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      aux_sym_decimal_token1,
      sym_float,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
  [17642] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(229), 1,
      sym__block_comment,
    ACTIONS(405), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(403), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17675] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(230), 1,
      sym__block_comment,
    ACTIONS(377), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(497), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(375), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17710] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(231), 1,
      sym__block_comment,
    ACTIONS(409), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(407), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17743] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(232), 1,
      sym__block_comment,
    ACTIONS(413), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(411), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17776] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(475), 1,
      sym_logical_and_operator,
    STATE(233), 1,
      sym__block_comment,
    ACTIONS(417), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(415), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17811] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(471), 1,
      sym_bitwise_or_operator,
    STATE(234), 1,
      sym__block_comment,
    ACTIONS(421), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(419), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17846] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(477), 1,
      sym_bitwise_xor_operator,
    STATE(235), 1,
      sym__block_comment,
    ACTIONS(427), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17881] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(499), 1,
      sym_bitwise_and_operator,
    STATE(236), 1,
      sym__block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(435), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17916] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(479), 1,
      sym_equality_operator,
    STATE(237), 1,
      sym__block_comment,
    ACTIONS(441), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(439), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17951] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(481), 1,
      sym_relational_operator,
    STATE(238), 1,
      sym__block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(311), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17986] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(483), 1,
      sym_shift_operator,
    STATE(239), 1,
      sym__block_comment,
    ACTIONS(265), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(263), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18021] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(485), 1,
      sym_additive_operator,
    STATE(240), 1,
      sym__block_comment,
    ACTIONS(353), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(351), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [18056] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(487), 1,
      sym_multiplicative_operator,
    STATE(241), 1,
      sym__block_comment,
    ACTIONS(357), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(355), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18091] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(242), 1,
      sym__block_comment,
    ACTIONS(361), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(359), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18124] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(243), 1,
      sym__block_comment,
    ACTIONS(377), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(375), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18157] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(244), 1,
      sym__block_comment,
    ACTIONS(341), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(339), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18190] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(245), 1,
      sym__block_comment,
    ACTIONS(365), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(363), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18223] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(246), 1,
      sym__block_comment,
    ACTIONS(369), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(367), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18256] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(499), 1,
      sym_bitwise_and_operator,
    STATE(247), 1,
      sym__block_comment,
    ACTIONS(283), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(281), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18291] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(248), 1,
      sym__block_comment,
    ACTIONS(371), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(373), 14,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [18323] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(249), 1,
      sym__block_comment,
    ACTIONS(503), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(501), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(381), 12,
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
  [18357] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(250), 1,
      sym__block_comment,
    ACTIONS(375), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(377), 14,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [18389] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(251), 1,
      sym__block_comment,
    ACTIONS(403), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(405), 14,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [18421] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(252), 1,
      sym__block_comment,
    ACTIONS(367), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(369), 14,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [18453] = 14,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      sym_assignment_operator,
    ACTIONS(515), 1,
      sym__operand_separator,
    STATE(253), 1,
      sym__block_comment,
    STATE(311), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(385), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(386), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(507), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(511), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(517), 2,
      sym__data_separator,
      sym__inline_separator_comment,
    ACTIONS(505), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [18501] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(519), 1,
      sym_logical_or_operator,
    STATE(254), 1,
      sym__block_comment,
    ACTIONS(431), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(429), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18532] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(255), 1,
      sym__block_comment,
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
  [18561] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(521), 1,
      sym_bitwise_and_operator,
    STATE(256), 1,
      sym__block_comment,
    ACTIONS(283), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [18592] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(257), 1,
      sym__block_comment,
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
  [18621] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(258), 1,
      sym__block_comment,
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
  [18650] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(523), 1,
      sym_equality_operator,
    STATE(259), 1,
      sym__block_comment,
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
      sym_shift_operator,
      sym_additive_operator,
  [18681] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(260), 1,
      sym__block_comment,
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
  [18710] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(525), 1,
      sym_relational_operator,
    STATE(261), 1,
      sym__block_comment,
    ACTIONS(303), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18741] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(262), 1,
      sym__block_comment,
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
  [18770] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(527), 1,
      sym_shift_operator,
    STATE(263), 1,
      sym__block_comment,
    ACTIONS(245), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(243), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18801] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(264), 1,
      sym__block_comment,
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
  [18830] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(529), 1,
      sym_additive_operator,
    STATE(265), 1,
      sym__block_comment,
    ACTIONS(321), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(319), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [18861] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(266), 1,
      sym__block_comment,
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
  [18890] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(531), 1,
      sym_multiplicative_operator,
    STATE(267), 1,
      sym__block_comment,
    ACTIONS(331), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [18921] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(268), 1,
      sym__block_comment,
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
  [18950] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(269), 1,
      sym__block_comment,
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
  [18979] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(270), 1,
      sym__block_comment,
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
  [19008] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19039] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(537), 1,
      sym_assignment_operator,
    STATE(272), 1,
      sym__block_comment,
    ACTIONS(345), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 9,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19072] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(273), 1,
      sym__block_comment,
    ACTIONS(261), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(259), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19101] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(539), 1,
      sym_bitwise_or_operator,
    STATE(274), 1,
      sym__block_comment,
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
  [19132] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(275), 1,
      sym__block_comment,
    ACTIONS(269), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(267), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19161] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(541), 1,
      sym_bitwise_xor_operator,
    STATE(276), 1,
      sym__block_comment,
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
  [19192] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(277), 1,
      sym__block_comment,
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
  [19221] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(278), 1,
      sym__block_comment,
    ACTIONS(401), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(399), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19250] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(279), 1,
      sym__block_comment,
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
  [19279] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(280), 1,
      sym__block_comment,
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
  [19308] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(281), 1,
      sym__block_comment,
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
  [19337] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19368] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(283), 1,
      sym__block_comment,
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
  [19397] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(284), 1,
      sym__block_comment,
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
  [19426] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(285), 1,
      sym__block_comment,
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
  [19455] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(286), 1,
      sym__block_comment,
    ACTIONS(251), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(249), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19484] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(545), 1,
      sym_logical_and_operator,
    STATE(287), 1,
      sym__block_comment,
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
  [19515] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(539), 1,
      sym_bitwise_or_operator,
    STATE(288), 1,
      sym__block_comment,
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
  [19546] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(541), 1,
      sym_bitwise_xor_operator,
    STATE(289), 1,
      sym__block_comment,
    ACTIONS(427), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19577] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(521), 1,
      sym_bitwise_and_operator,
    STATE(290), 1,
      sym__block_comment,
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
  [19608] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(523), 1,
      sym_equality_operator,
    STATE(291), 1,
      sym__block_comment,
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
  [19639] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(525), 1,
      sym_relational_operator,
    STATE(292), 1,
      sym__block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [19670] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(293), 1,
      sym__block_comment,
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
  [19699] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(527), 1,
      sym_shift_operator,
    STATE(294), 1,
      sym__block_comment,
    ACTIONS(265), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(263), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [19730] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(529), 1,
      sym_additive_operator,
    STATE(295), 1,
      sym__block_comment,
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
      sym_equality_operator,
      sym_shift_operator,
  [19761] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(296), 1,
      sym__block_comment,
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
  [19790] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19821] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19852] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19883] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19914] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19945] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19976] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20007] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20038] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20069] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      sym__block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20100] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(531), 1,
      sym_multiplicative_operator,
    STATE(307), 1,
      sym__block_comment,
    ACTIONS(357), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [20131] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(308), 1,
      sym__block_comment,
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
  [20160] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(545), 1,
      sym_logical_and_operator,
    STATE(309), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20191] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(310), 1,
      sym__block_comment,
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
  [20220] = 12,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      sym__operand_separator,
    STATE(311), 1,
      sym__block_comment,
    STATE(364), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(396), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(397), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(511), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(517), 2,
      sym__data_separator,
      sym__inline_separator_comment,
    ACTIONS(569), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(567), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [20262] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(433), 1,
      sym_logical_or_operator,
    STATE(312), 1,
      sym__block_comment,
    ACTIONS(339), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(341), 7,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym_assignment_operator,
  [20292] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(571), 1,
      sym_bitwise_xor_operator,
    STATE(313), 1,
      sym__block_comment,
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
  [20321] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(575), 1,
      sym_assignment_operator,
    STATE(314), 1,
      sym__block_comment,
    ACTIONS(345), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 7,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20352] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(315), 1,
      sym__block_comment,
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
  [20379] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(316), 1,
      sym__block_comment,
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
  [20406] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(577), 1,
      sym_logical_and_operator,
    STATE(317), 1,
      sym__block_comment,
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
  [20435] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(579), 1,
      sym_bitwise_or_operator,
    STATE(318), 1,
      sym__block_comment,
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
  [20464] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(571), 1,
      sym_bitwise_xor_operator,
    STATE(319), 1,
      sym__block_comment,
    ACTIONS(427), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20493] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(581), 1,
      sym_bitwise_and_operator,
    STATE(320), 1,
      sym__block_comment,
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
  [20522] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(583), 1,
      sym_equality_operator,
    STATE(321), 1,
      sym__block_comment,
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
  [20551] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(585), 1,
      sym_relational_operator,
    STATE(322), 1,
      sym__block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [20580] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(587), 1,
      sym_shift_operator,
    STATE(323), 1,
      sym__block_comment,
    ACTIONS(265), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(263), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [20609] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(589), 1,
      sym_additive_operator,
    STATE(324), 1,
      sym__block_comment,
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
      sym_equality_operator,
      sym_shift_operator,
  [20638] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(591), 1,
      sym_multiplicative_operator,
    STATE(325), 1,
      sym__block_comment,
    ACTIONS(357), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(355), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20667] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(326), 1,
      sym__block_comment,
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
  [20694] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(327), 1,
      sym__block_comment,
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
  [20721] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(328), 1,
      sym__block_comment,
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
  [20748] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(329), 1,
      sym__block_comment,
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
  [20775] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(330), 1,
      sym__block_comment,
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
  [20802] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(331), 1,
      sym__block_comment,
    ACTIONS(401), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(399), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20829] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(332), 1,
      sym__block_comment,
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
  [20856] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(333), 1,
      sym__block_comment,
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
  [20883] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(593), 1,
      sym_logical_or_operator,
    STATE(334), 1,
      sym__block_comment,
    ACTIONS(431), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(429), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20912] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(577), 1,
      sym_logical_and_operator,
    STATE(335), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20941] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(336), 1,
      sym__block_comment,
    ACTIONS(261), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(259), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20968] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(579), 1,
      sym_bitwise_or_operator,
    STATE(337), 1,
      sym__block_comment,
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
  [20997] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(338), 1,
      sym__block_comment,
    ACTIONS(269), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(267), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21024] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      sym_assignment_operator,
    STATE(339), 1,
      sym__block_comment,
    ACTIONS(597), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(595), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [21055] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(513), 1,
      sym_assignment_operator,
    STATE(340), 1,
      sym__block_comment,
    ACTIONS(601), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(599), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [21086] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(341), 1,
      sym__block_comment,
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
  [21113] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(342), 1,
      sym__block_comment,
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
  [21140] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(343), 1,
      sym__block_comment,
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
  [21167] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(344), 1,
      sym__block_comment,
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
  [21194] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(345), 1,
      sym__block_comment,
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
  [21221] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(581), 1,
      sym_bitwise_and_operator,
    STATE(346), 1,
      sym__block_comment,
    ACTIONS(283), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [21250] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(347), 1,
      sym__block_comment,
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
  [21277] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(348), 1,
      sym__block_comment,
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
  [21304] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(583), 1,
      sym_equality_operator,
    STATE(349), 1,
      sym__block_comment,
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
      sym_shift_operator,
      sym_additive_operator,
  [21333] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(350), 1,
      sym__block_comment,
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
  [21360] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(585), 1,
      sym_relational_operator,
    STATE(351), 1,
      sym__block_comment,
    ACTIONS(303), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [21389] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(352), 1,
      sym__block_comment,
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
  [21416] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(587), 1,
      sym_shift_operator,
    STATE(353), 1,
      sym__block_comment,
    ACTIONS(245), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(243), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [21445] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(354), 1,
      sym__block_comment,
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
  [21472] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(589), 1,
      sym_additive_operator,
    STATE(355), 1,
      sym__block_comment,
    ACTIONS(321), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(319), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [21501] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(356), 1,
      sym__block_comment,
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
  [21528] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(591), 1,
      sym_multiplicative_operator,
    STATE(357), 1,
      sym__block_comment,
    ACTIONS(331), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(329), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21557] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(358), 1,
      sym__block_comment,
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
  [21584] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(359), 1,
      sym__block_comment,
    ACTIONS(251), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(249), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21611] = 12,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(607), 1,
      aux_sym__whitespace_token1,
    ACTIONS(610), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_DQUOTE,
    STATE(360), 1,
      sym__block_comment,
    STATE(362), 1,
      aux_sym_string_operands_repeat1,
    STATE(371), 1,
      sym_string,
    STATE(487), 1,
      sym__immediate_block_comment,
    ACTIONS(605), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(603), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [21651] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(465), 1,
      sym_logical_or_operator,
    STATE(361), 1,
      sym__block_comment,
    ACTIONS(339), 11,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_assignment_operator,
  [21677] = 11,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(620), 1,
      aux_sym__whitespace_token1,
    ACTIONS(623), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_DQUOTE,
    STATE(371), 1,
      sym_string,
    STATE(487), 1,
      sym__immediate_block_comment,
    ACTIONS(618), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(362), 2,
      sym__block_comment,
      aux_sym_string_operands_repeat1,
    ACTIONS(616), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [21715] = 12,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(610), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      aux_sym__whitespace_token1,
    STATE(360), 1,
      aux_sym_string_operands_repeat1,
    STATE(363), 1,
      sym__block_comment,
    STATE(371), 1,
      sym_string,
    STATE(487), 1,
      sym__immediate_block_comment,
    ACTIONS(503), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(501), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [21755] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(597), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(638), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(364), 2,
      sym__block_comment,
      aux_sym_numeric_operands_repeat1,
    ACTIONS(595), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(641), 3,
      sym__operand_separator,
      sym__data_separator,
      sym__inline_separator_comment,
  [21787] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(646), 1,
      sym_assignment_operator,
    STATE(365), 1,
      sym__block_comment,
    ACTIONS(644), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [21814] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(10), 1,
      sym__control_operand_separator,
    STATE(366), 2,
      sym__block_comment,
      aux_sym_control_operands_repeat1,
    ACTIONS(650), 4,
      sym__operand_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      aux_sym__control_operand_separator_token1,
    ACTIONS(648), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21841] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(10), 1,
      sym__control_operand_separator,
    STATE(366), 1,
      aux_sym_control_operands_repeat1,
    STATE(367), 1,
      sym__block_comment,
    ACTIONS(655), 4,
      sym__operand_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      aux_sym__control_operand_separator_token1,
    ACTIONS(653), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21870] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(10), 1,
      sym__control_operand_separator,
    STATE(367), 1,
      aux_sym_control_operands_repeat1,
    STATE(368), 1,
      sym__block_comment,
    ACTIONS(655), 4,
      sym__operand_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      aux_sym__control_operand_separator_token1,
    ACTIONS(657), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21899] = 10,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(663), 1,
      aux_sym__whitespace_token1,
    ACTIONS(665), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(667), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__immediate_block_comment,
    STATE(369), 1,
      sym__block_comment,
    STATE(427), 1,
      sym__call_expression,
    ACTIONS(661), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(659), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [21933] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(473), 1,
      sym_logical_or_operator,
    STATE(370), 1,
      sym__block_comment,
    ACTIONS(339), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [21957] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(371), 1,
      sym__block_comment,
    ACTIONS(671), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(669), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [21980] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(372), 1,
      sym__block_comment,
    ACTIONS(673), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22001] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(373), 1,
      sym__block_comment,
    ACTIONS(618), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(616), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22024] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(374), 1,
      sym__block_comment,
    ACTIONS(677), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(675), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22047] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(375), 1,
      sym__block_comment,
    ACTIONS(648), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22068] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(376), 1,
      sym__block_comment,
    ACTIONS(681), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(679), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22091] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(377), 1,
      sym__block_comment,
    ACTIONS(675), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22112] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(685), 1,
      sym_assignment_operator,
    STATE(378), 1,
      sym__block_comment,
    ACTIONS(683), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22137] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(379), 1,
      sym__block_comment,
    ACTIONS(687), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22158] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(380), 1,
      sym__block_comment,
    ACTIONS(644), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22179] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(381), 1,
      sym__block_comment,
    ACTIONS(679), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22200] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(665), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(693), 1,
      aux_sym__whitespace_token1,
    STATE(11), 1,
      sym__immediate_block_comment,
    STATE(382), 1,
      sym__block_comment,
    ACTIONS(691), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(689), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22228] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(699), 1,
      aux_sym__whitespace_token1,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    ACTIONS(697), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(383), 2,
      sym__block_comment,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(695), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22254] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(665), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(709), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      sym__immediate_block_comment,
    STATE(384), 1,
      sym__block_comment,
    ACTIONS(707), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(705), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22282] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(385), 1,
      sym__block_comment,
    STATE(395), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(711), 2,
      sym__data_separator,
      sym__inline_separator_comment,
    ACTIONS(567), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22306] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(386), 1,
      sym__block_comment,
    STATE(394), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(569), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(713), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(567), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22332] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      sym__block_comment,
    ACTIONS(715), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(717), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22356] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(725), 1,
      aux_sym__whitespace_token1,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      sym__block_comment,
    STATE(392), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(723), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(721), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22384] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      sym__operand_separator,
    STATE(389), 1,
      sym__block_comment,
    STATE(390), 1,
      aux_sym_operands_repeat1,
    ACTIONS(729), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22410] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    ACTIONS(737), 1,
      sym__operand_separator,
    STATE(390), 1,
      sym__block_comment,
    STATE(391), 1,
      aux_sym_operands_repeat1,
    ACTIONS(735), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22436] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(741), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    STATE(391), 2,
      sym__block_comment,
      aux_sym_operands_repeat1,
    ACTIONS(739), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22458] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(725), 1,
      aux_sym__whitespace_token1,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_macro_parameters_repeat1,
    STATE(392), 1,
      sym__block_comment,
    ACTIONS(746), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(744), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22486] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(665), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(752), 1,
      aux_sym__whitespace_token1,
    STATE(7), 1,
      sym__immediate_block_comment,
    STATE(393), 1,
      sym__block_comment,
    ACTIONS(750), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(748), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22514] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(756), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(758), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(394), 2,
      sym__block_comment,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(754), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22538] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(763), 2,
      sym__data_separator,
      sym__inline_separator_comment,
    STATE(395), 2,
      sym__block_comment,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(761), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22560] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(395), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(396), 1,
      sym__block_comment,
    ACTIONS(711), 2,
      sym__data_separator,
      sym__inline_separator_comment,
    ACTIONS(766), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22584] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(394), 1,
      aux_sym_numeric_operands_repeat3,
    STATE(397), 1,
      sym__block_comment,
    ACTIONS(713), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(768), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(766), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22610] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(398), 1,
      sym__block_comment,
    ACTIONS(679), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22629] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(399), 1,
      sym__block_comment,
    ACTIONS(772), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(770), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22650] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(400), 1,
      sym__block_comment,
    ACTIONS(675), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22669] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(401), 1,
      sym__block_comment,
    ACTIONS(774), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22688] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(402), 1,
      sym__block_comment,
    ACTIONS(139), 7,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22707] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(780), 1,
      aux_sym__whitespace_token1,
    ACTIONS(782), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym__block_comment,
    ACTIONS(778), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(776), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22732] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(404), 1,
      sym__block_comment,
    ACTIONS(715), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(717), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22753] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(405), 1,
      sym__block_comment,
    ACTIONS(786), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(784), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22774] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(406), 1,
      sym__block_comment,
    ACTIONS(683), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22793] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(407), 1,
      sym__block_comment,
    ACTIONS(790), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(788), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22814] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(408), 1,
      sym__block_comment,
    ACTIONS(794), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
    ACTIONS(792), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [22835] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(409), 1,
      sym__block_comment,
    ACTIONS(697), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
    ACTIONS(695), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [22856] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(796), 1,
      ts_builtin_sym_end,
    ACTIONS(800), 1,
      aux_sym__line_comment_token1,
    STATE(410), 1,
      sym__block_comment,
    STATE(461), 1,
      sym__line_comment,
    ACTIONS(798), 3,
      sym__line_separator,
      sym__inline_end_comment,
      anon_sym_SEMI,
  [22880] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(800), 1,
      aux_sym__line_comment_token1,
    STATE(411), 1,
      sym__block_comment,
    STATE(463), 1,
      sym__line_comment,
    ACTIONS(798), 3,
      sym__line_separator,
      sym__inline_end_comment,
      anon_sym_SEMI,
  [22904] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(806), 1,
      aux_sym__whitespace_token1,
    STATE(412), 1,
      sym__block_comment,
    ACTIONS(804), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(802), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22926] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(519), 1,
      sym_logical_or_operator,
    STATE(413), 1,
      sym__block_comment,
    ACTIONS(339), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [22946] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      sym_assignment_operator,
    STATE(414), 1,
      sym__block_comment,
    ACTIONS(683), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22967] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(415), 1,
      sym__block_comment,
    ACTIONS(497), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22984] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(416), 1,
      sym__block_comment,
    ACTIONS(810), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23001] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      sym_assignment_operator,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      sym__block_comment,
    ACTIONS(683), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23024] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(418), 1,
      sym__block_comment,
    ACTIONS(815), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23041] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(419), 1,
      sym__block_comment,
    ACTIONS(817), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23058] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(420), 1,
      sym__block_comment,
    ACTIONS(819), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23075] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(421), 1,
      sym__block_comment,
    ACTIONS(821), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23092] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(422), 1,
      sym__block_comment,
    ACTIONS(823), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23109] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(423), 1,
      sym__block_comment,
    ACTIONS(825), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23126] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(424), 1,
      sym__block_comment,
    ACTIONS(821), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23143] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(425), 1,
      sym__block_comment,
    ACTIONS(827), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23160] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(426), 1,
      sym__block_comment,
    ACTIONS(821), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23177] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(427), 1,
      sym__block_comment,
    ACTIONS(829), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23194] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      sym_assignment_operator,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      sym__block_comment,
    ACTIONS(683), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23217] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(429), 1,
      sym__block_comment,
    ACTIONS(834), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23234] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      sym_assignment_operator,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      sym__block_comment,
    ACTIONS(683), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23257] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      sym_assignment_operator,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(431), 1,
      sym__block_comment,
    ACTIONS(683), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23280] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(808), 1,
      sym_assignment_operator,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      sym__block_comment,
    ACTIONS(683), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23303] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(800), 1,
      aux_sym__line_comment_token1,
    STATE(433), 1,
      sym__block_comment,
    STATE(490), 1,
      sym__line_comment,
    ACTIONS(798), 3,
      sym__line_separator,
      sym__inline_end_comment,
      anon_sym_SEMI,
  [23324] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(434), 1,
      sym__block_comment,
    ACTIONS(845), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23341] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(435), 1,
      sym__block_comment,
    ACTIONS(847), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23358] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(436), 1,
      sym__block_comment,
    ACTIONS(849), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23375] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(437), 1,
      sym__block_comment,
    ACTIONS(851), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23392] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(438), 1,
      sym__block_comment,
    ACTIONS(853), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23409] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(439), 1,
      sym__block_comment,
    ACTIONS(855), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23426] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(440), 1,
      sym__block_comment,
    ACTIONS(857), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23443] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    ACTIONS(859), 1,
      aux_sym__whitespace_token1,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(441), 2,
      sym__block_comment,
      aux_sym_macro_parameters_repeat1,
  [23463] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(865), 1,
      anon_sym_DQUOTE,
    STATE(442), 1,
      sym__block_comment,
    STATE(444), 1,
      aux_sym_string_repeat1,
    ACTIONS(867), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23483] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(869), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      sym__block_comment,
    STATE(446), 1,
      aux_sym_string_repeat1,
    ACTIONS(867), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23503] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    STATE(444), 1,
      sym__block_comment,
    STATE(446), 1,
      aux_sym_string_repeat1,
    ACTIONS(867), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23523] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(873), 1,
      anon_sym_DQUOTE,
    STATE(445), 1,
      sym__block_comment,
    STATE(447), 1,
      aux_sym_string_repeat1,
    ACTIONS(867), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23543] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
    STATE(446), 2,
      sym__block_comment,
      aux_sym_string_repeat1,
  [23561] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(880), 1,
      anon_sym_DQUOTE,
    STATE(446), 1,
      aux_sym_string_repeat1,
    STATE(447), 1,
      sym__block_comment,
    ACTIONS(867), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23581] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(882), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      aux_sym_string_repeat1,
    STATE(448), 1,
      sym__block_comment,
    ACTIONS(867), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23601] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    ACTIONS(884), 1,
      aux_sym__whitespace_token1,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    STATE(449), 1,
      sym__block_comment,
    STATE(451), 1,
      aux_sym_macro_parameters_repeat1,
  [23623] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(593), 1,
      sym_logical_or_operator,
    STATE(450), 1,
      sym__block_comment,
    ACTIONS(339), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [23641] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    ACTIONS(889), 1,
      aux_sym__whitespace_token1,
    STATE(441), 1,
      aux_sym_macro_parameters_repeat1,
    STATE(451), 1,
      sym__block_comment,
  [23663] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    ACTIONS(892), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    STATE(452), 2,
      sym__block_comment,
      aux_sym_operands_repeat1,
  [23681] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(895), 1,
      aux_sym__whitespace_token1,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
    ACTIONS(899), 1,
      sym_macro_parameter,
    STATE(453), 1,
      sym__block_comment,
    STATE(477), 1,
      sym_macro_parameters,
  [23703] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(899), 1,
      sym_macro_parameter,
    ACTIONS(901), 1,
      aux_sym__whitespace_token1,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    STATE(454), 1,
      sym__block_comment,
    STATE(491), 1,
      sym_macro_parameters,
  [23725] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(905), 1,
      anon_sym_DQUOTE,
    STATE(455), 1,
      sym__block_comment,
    STATE(458), 1,
      aux_sym_string_repeat1,
    ACTIONS(867), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23745] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      sym__operand_separator,
    STATE(452), 1,
      aux_sym_operands_repeat1,
    STATE(456), 1,
      sym__block_comment,
  [23767] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    ACTIONS(911), 1,
      sym__operand_separator,
    STATE(456), 1,
      aux_sym_operands_repeat1,
    STATE(457), 1,
      sym__block_comment,
  [23789] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(913), 1,
      anon_sym_DQUOTE,
    STATE(446), 1,
      aux_sym_string_repeat1,
    STATE(458), 1,
      sym__block_comment,
    ACTIONS(867), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23809] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    ACTIONS(917), 1,
      sym_assignment_operator,
    STATE(459), 1,
      sym__block_comment,
  [23828] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(460), 1,
      sym__block_comment,
    ACTIONS(683), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23843] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(919), 1,
      ts_builtin_sym_end,
    STATE(461), 1,
      sym__block_comment,
    ACTIONS(921), 2,
      sym__line_separator,
      sym__inline_end_comment,
  [23860] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(917), 1,
      sym_assignment_operator,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
    STATE(462), 1,
      sym__block_comment,
  [23879] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(796), 1,
      ts_builtin_sym_end,
    STATE(463), 1,
      sym__block_comment,
    ACTIONS(921), 2,
      sym__line_separator,
      sym__inline_end_comment,
  [23896] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(610), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(925), 1,
      aux_sym__whitespace_token1,
    STATE(464), 1,
      sym__block_comment,
    STATE(514), 1,
      sym__immediate_block_comment,
  [23915] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(465), 1,
      sym__block_comment,
    ACTIONS(927), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23930] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(917), 1,
      sym_assignment_operator,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      sym__block_comment,
  [23949] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(792), 1,
      aux_sym__whitespace_token1,
    STATE(467), 1,
      sym__block_comment,
    ACTIONS(794), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23966] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(468), 1,
      sym__block_comment,
    ACTIONS(679), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23981] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(917), 1,
      sym_assignment_operator,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    STATE(469), 1,
      sym__block_comment,
  [24000] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(917), 1,
      sym_assignment_operator,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym__block_comment,
  [24019] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(471), 1,
      sym__block_comment,
    ACTIONS(675), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24034] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
    ACTIONS(937), 1,
      sym_macro_parameter,
    STATE(435), 1,
      sym_macro_parameters,
    STATE(472), 1,
      sym__block_comment,
  [24053] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(473), 1,
      sym__block_comment,
    ACTIONS(774), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24068] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(474), 1,
      sym__block_comment,
    ACTIONS(939), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [24083] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(695), 1,
      aux_sym__whitespace_token1,
    STATE(475), 1,
      sym__block_comment,
    ACTIONS(697), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24100] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(917), 1,
      sym_assignment_operator,
    ACTIONS(941), 1,
      anon_sym_LPAREN,
    STATE(476), 1,
      sym__block_comment,
  [24116] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(943), 1,
      aux_sym__whitespace_token1,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    STATE(477), 1,
      sym__block_comment,
  [24132] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(947), 1,
      anon_sym_COMMA,
    ACTIONS(949), 1,
      sym_macro_parameter,
    STATE(478), 1,
      sym__block_comment,
  [24148] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(479), 1,
      sym__block_comment,
    ACTIONS(939), 2,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
  [24162] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    ACTIONS(953), 1,
      sym_macro_parameter,
    STATE(480), 1,
      sym__block_comment,
  [24178] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(481), 1,
      sym__block_comment,
    ACTIONS(955), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24192] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(798), 1,
      aux_sym__statement_token1,
    STATE(482), 1,
      sym__block_comment,
  [24208] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(483), 1,
      sym__block_comment,
    ACTIONS(957), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24222] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(484), 1,
      sym__block_comment,
    ACTIONS(959), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24236] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(796), 1,
      ts_builtin_sym_end,
    ACTIONS(798), 1,
      aux_sym__statement_token1,
    STATE(485), 1,
      sym__block_comment,
  [24252] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(486), 1,
      sym__block_comment,
    ACTIONS(961), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24266] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(373), 1,
      sym_string,
    STATE(487), 1,
      sym__block_comment,
  [24282] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(488), 1,
      sym__block_comment,
    ACTIONS(963), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24296] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(489), 1,
      sym__block_comment,
    ACTIONS(239), 2,
      anon_sym_DQUOTE,
      sym_macro_name,
  [24310] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(490), 1,
      sym__block_comment,
    ACTIONS(921), 2,
      sym__line_separator,
      sym__inline_end_comment,
  [24324] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(965), 1,
      aux_sym__whitespace_token1,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    STATE(491), 1,
      sym__block_comment,
  [24340] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(917), 1,
      sym_assignment_operator,
    STATE(492), 1,
      sym__block_comment,
  [24356] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(917), 1,
      sym_assignment_operator,
    STATE(493), 1,
      sym__block_comment,
  [24372] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(917), 1,
      sym_assignment_operator,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    STATE(494), 1,
      sym__block_comment,
  [24388] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(917), 1,
      sym_assignment_operator,
    STATE(495), 1,
      sym__block_comment,
  [24404] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(917), 1,
      sym_assignment_operator,
    STATE(496), 1,
      sym__block_comment,
  [24420] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    STATE(497), 1,
      sym__block_comment,
  [24433] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    STATE(498), 1,
      sym__block_comment,
  [24446] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(975), 1,
      anon_sym_SQUOTE,
    STATE(499), 1,
      sym__block_comment,
  [24459] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(500), 1,
      sym__block_comment,
  [24472] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(979), 1,
      ts_builtin_sym_end,
    STATE(501), 1,
      sym__block_comment,
  [24485] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(981), 1,
      anon_sym_SQUOTE,
    STATE(502), 1,
      sym__block_comment,
  [24498] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
    STATE(503), 1,
      sym__block_comment,
  [24511] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(985), 1,
      anon_sym_SQUOTE,
    STATE(504), 1,
      sym__block_comment,
  [24524] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      sym__block_comment,
  [24537] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    STATE(506), 1,
      sym__block_comment,
  [24550] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    STATE(507), 1,
      sym__block_comment,
  [24563] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(953), 1,
      sym_macro_parameter,
    STATE(508), 1,
      sym__block_comment,
  [24576] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      sym__block_comment,
  [24589] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      sym__block_comment,
  [24602] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(997), 1,
      sym_macro_parameter,
    STATE(511), 1,
      sym__block_comment,
  [24615] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    STATE(512), 1,
      sym__block_comment,
  [24628] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(798), 1,
      aux_sym__statement_token1,
    STATE(513), 1,
      sym__block_comment,
  [24641] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1001), 1,
      sym_macro_name,
    STATE(514), 1,
      sym__block_comment,
  [24654] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      sym__block_comment,
  [24667] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(949), 1,
      sym_macro_parameter,
    STATE(516), 1,
      sym__block_comment,
  [24680] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1005), 1,
      anon_sym_COMMA,
    STATE(517), 1,
      sym__block_comment,
  [24693] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    STATE(518), 1,
      sym__block_comment,
  [24706] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    STATE(519), 1,
      sym__block_comment,
  [24719] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1011), 1,
      anon_sym_SQUOTE,
    STATE(520), 1,
      sym__block_comment,
  [24732] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(796), 1,
      ts_builtin_sym_end,
    STATE(521), 1,
      sym__block_comment,
  [24745] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1013), 1,
      sym_macro_parameter,
    STATE(522), 1,
      sym__block_comment,
  [24758] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1015), 1,
      anon_sym_SQUOTE,
    STATE(523), 1,
      sym__block_comment,
  [24771] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
    STATE(524), 1,
      sym__block_comment,
  [24784] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    STATE(525), 1,
      sym__block_comment,
  [24797] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(526), 1,
      sym__block_comment,
  [24810] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1023), 1,
      anon_sym_LPAREN,
    STATE(527), 1,
      sym__block_comment,
  [24823] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    STATE(528), 1,
      sym__block_comment,
  [24836] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    STATE(529), 1,
      sym__block_comment,
  [24849] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(919), 1,
      ts_builtin_sym_end,
    STATE(530), 1,
      sym__block_comment,
  [24862] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    STATE(531), 1,
      sym__block_comment,
  [24875] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    STATE(532), 1,
      sym__block_comment,
  [24888] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      sym__block_comment,
  [24901] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    STATE(534), 1,
      sym__block_comment,
  [24914] = 1,
    ACTIONS(1037), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 152,
  [SMALL_STATE(4)] = 299,
  [SMALL_STATE(5)] = 405,
  [SMALL_STATE(6)] = 513,
  [SMALL_STATE(7)] = 654,
  [SMALL_STATE(8)] = 799,
  [SMALL_STATE(9)] = 940,
  [SMALL_STATE(10)] = 1074,
  [SMALL_STATE(11)] = 1216,
  [SMALL_STATE(12)] = 1351,
  [SMALL_STATE(13)] = 1491,
  [SMALL_STATE(14)] = 1635,
  [SMALL_STATE(15)] = 1776,
  [SMALL_STATE(16)] = 1917,
  [SMALL_STATE(17)] = 2058,
  [SMALL_STATE(18)] = 2199,
  [SMALL_STATE(19)] = 2340,
  [SMALL_STATE(20)] = 2477,
  [SMALL_STATE(21)] = 2618,
  [SMALL_STATE(22)] = 2755,
  [SMALL_STATE(23)] = 2896,
  [SMALL_STATE(24)] = 3037,
  [SMALL_STATE(25)] = 3178,
  [SMALL_STATE(26)] = 3319,
  [SMALL_STATE(27)] = 3460,
  [SMALL_STATE(28)] = 3601,
  [SMALL_STATE(29)] = 3735,
  [SMALL_STATE(30)] = 3869,
  [SMALL_STATE(31)] = 3994,
  [SMALL_STATE(32)] = 4119,
  [SMALL_STATE(33)] = 4244,
  [SMALL_STATE(34)] = 4369,
  [SMALL_STATE(35)] = 4494,
  [SMALL_STATE(36)] = 4619,
  [SMALL_STATE(37)] = 4744,
  [SMALL_STATE(38)] = 4869,
  [SMALL_STATE(39)] = 4994,
  [SMALL_STATE(40)] = 5119,
  [SMALL_STATE(41)] = 5244,
  [SMALL_STATE(42)] = 5369,
  [SMALL_STATE(43)] = 5494,
  [SMALL_STATE(44)] = 5619,
  [SMALL_STATE(45)] = 5744,
  [SMALL_STATE(46)] = 5869,
  [SMALL_STATE(47)] = 5994,
  [SMALL_STATE(48)] = 6119,
  [SMALL_STATE(49)] = 6244,
  [SMALL_STATE(50)] = 6369,
  [SMALL_STATE(51)] = 6494,
  [SMALL_STATE(52)] = 6619,
  [SMALL_STATE(53)] = 6744,
  [SMALL_STATE(54)] = 6869,
  [SMALL_STATE(55)] = 6994,
  [SMALL_STATE(56)] = 7119,
  [SMALL_STATE(57)] = 7244,
  [SMALL_STATE(58)] = 7369,
  [SMALL_STATE(59)] = 7494,
  [SMALL_STATE(60)] = 7619,
  [SMALL_STATE(61)] = 7744,
  [SMALL_STATE(62)] = 7869,
  [SMALL_STATE(63)] = 7994,
  [SMALL_STATE(64)] = 8119,
  [SMALL_STATE(65)] = 8244,
  [SMALL_STATE(66)] = 8369,
  [SMALL_STATE(67)] = 8494,
  [SMALL_STATE(68)] = 8619,
  [SMALL_STATE(69)] = 8744,
  [SMALL_STATE(70)] = 8869,
  [SMALL_STATE(71)] = 8994,
  [SMALL_STATE(72)] = 9119,
  [SMALL_STATE(73)] = 9244,
  [SMALL_STATE(74)] = 9369,
  [SMALL_STATE(75)] = 9494,
  [SMALL_STATE(76)] = 9619,
  [SMALL_STATE(77)] = 9744,
  [SMALL_STATE(78)] = 9869,
  [SMALL_STATE(79)] = 9994,
  [SMALL_STATE(80)] = 10119,
  [SMALL_STATE(81)] = 10244,
  [SMALL_STATE(82)] = 10369,
  [SMALL_STATE(83)] = 10494,
  [SMALL_STATE(84)] = 10619,
  [SMALL_STATE(85)] = 10744,
  [SMALL_STATE(86)] = 10869,
  [SMALL_STATE(87)] = 10994,
  [SMALL_STATE(88)] = 11119,
  [SMALL_STATE(89)] = 11244,
  [SMALL_STATE(90)] = 11369,
  [SMALL_STATE(91)] = 11494,
  [SMALL_STATE(92)] = 11619,
  [SMALL_STATE(93)] = 11744,
  [SMALL_STATE(94)] = 11869,
  [SMALL_STATE(95)] = 11994,
  [SMALL_STATE(96)] = 12119,
  [SMALL_STATE(97)] = 12244,
  [SMALL_STATE(98)] = 12369,
  [SMALL_STATE(99)] = 12494,
  [SMALL_STATE(100)] = 12619,
  [SMALL_STATE(101)] = 12744,
  [SMALL_STATE(102)] = 12869,
  [SMALL_STATE(103)] = 12929,
  [SMALL_STATE(104)] = 12989,
  [SMALL_STATE(105)] = 13049,
  [SMALL_STATE(106)] = 13106,
  [SMALL_STATE(107)] = 13163,
  [SMALL_STATE(108)] = 13220,
  [SMALL_STATE(109)] = 13277,
  [SMALL_STATE(110)] = 13334,
  [SMALL_STATE(111)] = 13372,
  [SMALL_STATE(112)] = 13411,
  [SMALL_STATE(113)] = 13448,
  [SMALL_STATE(114)] = 13487,
  [SMALL_STATE(115)] = 13524,
  [SMALL_STATE(116)] = 13563,
  [SMALL_STATE(117)] = 13600,
  [SMALL_STATE(118)] = 13639,
  [SMALL_STATE(119)] = 13676,
  [SMALL_STATE(120)] = 13715,
  [SMALL_STATE(121)] = 13752,
  [SMALL_STATE(122)] = 13791,
  [SMALL_STATE(123)] = 13828,
  [SMALL_STATE(124)] = 13867,
  [SMALL_STATE(125)] = 13904,
  [SMALL_STATE(126)] = 13943,
  [SMALL_STATE(127)] = 13980,
  [SMALL_STATE(128)] = 14019,
  [SMALL_STATE(129)] = 14056,
  [SMALL_STATE(130)] = 14095,
  [SMALL_STATE(131)] = 14132,
  [SMALL_STATE(132)] = 14169,
  [SMALL_STATE(133)] = 14210,
  [SMALL_STATE(134)] = 14249,
  [SMALL_STATE(135)] = 14288,
  [SMALL_STATE(136)] = 14325,
  [SMALL_STATE(137)] = 14362,
  [SMALL_STATE(138)] = 14399,
  [SMALL_STATE(139)] = 14436,
  [SMALL_STATE(140)] = 14473,
  [SMALL_STATE(141)] = 14510,
  [SMALL_STATE(142)] = 14547,
  [SMALL_STATE(143)] = 14584,
  [SMALL_STATE(144)] = 14621,
  [SMALL_STATE(145)] = 14658,
  [SMALL_STATE(146)] = 14695,
  [SMALL_STATE(147)] = 14732,
  [SMALL_STATE(148)] = 14769,
  [SMALL_STATE(149)] = 14806,
  [SMALL_STATE(150)] = 14845,
  [SMALL_STATE(151)] = 14884,
  [SMALL_STATE(152)] = 14923,
  [SMALL_STATE(153)] = 14962,
  [SMALL_STATE(154)] = 15001,
  [SMALL_STATE(155)] = 15040,
  [SMALL_STATE(156)] = 15079,
  [SMALL_STATE(157)] = 15116,
  [SMALL_STATE(158)] = 15153,
  [SMALL_STATE(159)] = 15188,
  [SMALL_STATE(160)] = 15223,
  [SMALL_STATE(161)] = 15258,
  [SMALL_STATE(162)] = 15293,
  [SMALL_STATE(163)] = 15330,
  [SMALL_STATE(164)] = 15367,
  [SMALL_STATE(165)] = 15404,
  [SMALL_STATE(166)] = 15441,
  [SMALL_STATE(167)] = 15478,
  [SMALL_STATE(168)] = 15515,
  [SMALL_STATE(169)] = 15552,
  [SMALL_STATE(170)] = 15589,
  [SMALL_STATE(171)] = 15626,
  [SMALL_STATE(172)] = 15661,
  [SMALL_STATE(173)] = 15696,
  [SMALL_STATE(174)] = 15731,
  [SMALL_STATE(175)] = 15766,
  [SMALL_STATE(176)] = 15803,
  [SMALL_STATE(177)] = 15838,
  [SMALL_STATE(178)] = 15873,
  [SMALL_STATE(179)] = 15910,
  [SMALL_STATE(180)] = 15945,
  [SMALL_STATE(181)] = 15982,
  [SMALL_STATE(182)] = 16017,
  [SMALL_STATE(183)] = 16054,
  [SMALL_STATE(184)] = 16089,
  [SMALL_STATE(185)] = 16126,
  [SMALL_STATE(186)] = 16161,
  [SMALL_STATE(187)] = 16198,
  [SMALL_STATE(188)] = 16233,
  [SMALL_STATE(189)] = 16270,
  [SMALL_STATE(190)] = 16305,
  [SMALL_STATE(191)] = 16342,
  [SMALL_STATE(192)] = 16377,
  [SMALL_STATE(193)] = 16416,
  [SMALL_STATE(194)] = 16451,
  [SMALL_STATE(195)] = 16486,
  [SMALL_STATE(196)] = 16521,
  [SMALL_STATE(197)] = 16556,
  [SMALL_STATE(198)] = 16591,
  [SMALL_STATE(199)] = 16626,
  [SMALL_STATE(200)] = 16661,
  [SMALL_STATE(201)] = 16696,
  [SMALL_STATE(202)] = 16731,
  [SMALL_STATE(203)] = 16764,
  [SMALL_STATE(204)] = 16797,
  [SMALL_STATE(205)] = 16830,
  [SMALL_STATE(206)] = 16863,
  [SMALL_STATE(207)] = 16896,
  [SMALL_STATE(208)] = 16929,
  [SMALL_STATE(209)] = 16962,
  [SMALL_STATE(210)] = 16997,
  [SMALL_STATE(211)] = 17030,
  [SMALL_STATE(212)] = 17065,
  [SMALL_STATE(213)] = 17098,
  [SMALL_STATE(214)] = 17131,
  [SMALL_STATE(215)] = 17166,
  [SMALL_STATE(216)] = 17199,
  [SMALL_STATE(217)] = 17232,
  [SMALL_STATE(218)] = 17267,
  [SMALL_STATE(219)] = 17300,
  [SMALL_STATE(220)] = 17335,
  [SMALL_STATE(221)] = 17368,
  [SMALL_STATE(222)] = 17403,
  [SMALL_STATE(223)] = 17436,
  [SMALL_STATE(224)] = 17471,
  [SMALL_STATE(225)] = 17504,
  [SMALL_STATE(226)] = 17539,
  [SMALL_STATE(227)] = 17572,
  [SMALL_STATE(228)] = 17609,
  [SMALL_STATE(229)] = 17642,
  [SMALL_STATE(230)] = 17675,
  [SMALL_STATE(231)] = 17710,
  [SMALL_STATE(232)] = 17743,
  [SMALL_STATE(233)] = 17776,
  [SMALL_STATE(234)] = 17811,
  [SMALL_STATE(235)] = 17846,
  [SMALL_STATE(236)] = 17881,
  [SMALL_STATE(237)] = 17916,
  [SMALL_STATE(238)] = 17951,
  [SMALL_STATE(239)] = 17986,
  [SMALL_STATE(240)] = 18021,
  [SMALL_STATE(241)] = 18056,
  [SMALL_STATE(242)] = 18091,
  [SMALL_STATE(243)] = 18124,
  [SMALL_STATE(244)] = 18157,
  [SMALL_STATE(245)] = 18190,
  [SMALL_STATE(246)] = 18223,
  [SMALL_STATE(247)] = 18256,
  [SMALL_STATE(248)] = 18291,
  [SMALL_STATE(249)] = 18323,
  [SMALL_STATE(250)] = 18357,
  [SMALL_STATE(251)] = 18389,
  [SMALL_STATE(252)] = 18421,
  [SMALL_STATE(253)] = 18453,
  [SMALL_STATE(254)] = 18501,
  [SMALL_STATE(255)] = 18532,
  [SMALL_STATE(256)] = 18561,
  [SMALL_STATE(257)] = 18592,
  [SMALL_STATE(258)] = 18621,
  [SMALL_STATE(259)] = 18650,
  [SMALL_STATE(260)] = 18681,
  [SMALL_STATE(261)] = 18710,
  [SMALL_STATE(262)] = 18741,
  [SMALL_STATE(263)] = 18770,
  [SMALL_STATE(264)] = 18801,
  [SMALL_STATE(265)] = 18830,
  [SMALL_STATE(266)] = 18861,
  [SMALL_STATE(267)] = 18890,
  [SMALL_STATE(268)] = 18921,
  [SMALL_STATE(269)] = 18950,
  [SMALL_STATE(270)] = 18979,
  [SMALL_STATE(271)] = 19008,
  [SMALL_STATE(272)] = 19039,
  [SMALL_STATE(273)] = 19072,
  [SMALL_STATE(274)] = 19101,
  [SMALL_STATE(275)] = 19132,
  [SMALL_STATE(276)] = 19161,
  [SMALL_STATE(277)] = 19192,
  [SMALL_STATE(278)] = 19221,
  [SMALL_STATE(279)] = 19250,
  [SMALL_STATE(280)] = 19279,
  [SMALL_STATE(281)] = 19308,
  [SMALL_STATE(282)] = 19337,
  [SMALL_STATE(283)] = 19368,
  [SMALL_STATE(284)] = 19397,
  [SMALL_STATE(285)] = 19426,
  [SMALL_STATE(286)] = 19455,
  [SMALL_STATE(287)] = 19484,
  [SMALL_STATE(288)] = 19515,
  [SMALL_STATE(289)] = 19546,
  [SMALL_STATE(290)] = 19577,
  [SMALL_STATE(291)] = 19608,
  [SMALL_STATE(292)] = 19639,
  [SMALL_STATE(293)] = 19670,
  [SMALL_STATE(294)] = 19699,
  [SMALL_STATE(295)] = 19730,
  [SMALL_STATE(296)] = 19761,
  [SMALL_STATE(297)] = 19790,
  [SMALL_STATE(298)] = 19821,
  [SMALL_STATE(299)] = 19852,
  [SMALL_STATE(300)] = 19883,
  [SMALL_STATE(301)] = 19914,
  [SMALL_STATE(302)] = 19945,
  [SMALL_STATE(303)] = 19976,
  [SMALL_STATE(304)] = 20007,
  [SMALL_STATE(305)] = 20038,
  [SMALL_STATE(306)] = 20069,
  [SMALL_STATE(307)] = 20100,
  [SMALL_STATE(308)] = 20131,
  [SMALL_STATE(309)] = 20160,
  [SMALL_STATE(310)] = 20191,
  [SMALL_STATE(311)] = 20220,
  [SMALL_STATE(312)] = 20262,
  [SMALL_STATE(313)] = 20292,
  [SMALL_STATE(314)] = 20321,
  [SMALL_STATE(315)] = 20352,
  [SMALL_STATE(316)] = 20379,
  [SMALL_STATE(317)] = 20406,
  [SMALL_STATE(318)] = 20435,
  [SMALL_STATE(319)] = 20464,
  [SMALL_STATE(320)] = 20493,
  [SMALL_STATE(321)] = 20522,
  [SMALL_STATE(322)] = 20551,
  [SMALL_STATE(323)] = 20580,
  [SMALL_STATE(324)] = 20609,
  [SMALL_STATE(325)] = 20638,
  [SMALL_STATE(326)] = 20667,
  [SMALL_STATE(327)] = 20694,
  [SMALL_STATE(328)] = 20721,
  [SMALL_STATE(329)] = 20748,
  [SMALL_STATE(330)] = 20775,
  [SMALL_STATE(331)] = 20802,
  [SMALL_STATE(332)] = 20829,
  [SMALL_STATE(333)] = 20856,
  [SMALL_STATE(334)] = 20883,
  [SMALL_STATE(335)] = 20912,
  [SMALL_STATE(336)] = 20941,
  [SMALL_STATE(337)] = 20968,
  [SMALL_STATE(338)] = 20997,
  [SMALL_STATE(339)] = 21024,
  [SMALL_STATE(340)] = 21055,
  [SMALL_STATE(341)] = 21086,
  [SMALL_STATE(342)] = 21113,
  [SMALL_STATE(343)] = 21140,
  [SMALL_STATE(344)] = 21167,
  [SMALL_STATE(345)] = 21194,
  [SMALL_STATE(346)] = 21221,
  [SMALL_STATE(347)] = 21250,
  [SMALL_STATE(348)] = 21277,
  [SMALL_STATE(349)] = 21304,
  [SMALL_STATE(350)] = 21333,
  [SMALL_STATE(351)] = 21360,
  [SMALL_STATE(352)] = 21389,
  [SMALL_STATE(353)] = 21416,
  [SMALL_STATE(354)] = 21445,
  [SMALL_STATE(355)] = 21472,
  [SMALL_STATE(356)] = 21501,
  [SMALL_STATE(357)] = 21528,
  [SMALL_STATE(358)] = 21557,
  [SMALL_STATE(359)] = 21584,
  [SMALL_STATE(360)] = 21611,
  [SMALL_STATE(361)] = 21651,
  [SMALL_STATE(362)] = 21677,
  [SMALL_STATE(363)] = 21715,
  [SMALL_STATE(364)] = 21755,
  [SMALL_STATE(365)] = 21787,
  [SMALL_STATE(366)] = 21814,
  [SMALL_STATE(367)] = 21841,
  [SMALL_STATE(368)] = 21870,
  [SMALL_STATE(369)] = 21899,
  [SMALL_STATE(370)] = 21933,
  [SMALL_STATE(371)] = 21957,
  [SMALL_STATE(372)] = 21980,
  [SMALL_STATE(373)] = 22001,
  [SMALL_STATE(374)] = 22024,
  [SMALL_STATE(375)] = 22047,
  [SMALL_STATE(376)] = 22068,
  [SMALL_STATE(377)] = 22091,
  [SMALL_STATE(378)] = 22112,
  [SMALL_STATE(379)] = 22137,
  [SMALL_STATE(380)] = 22158,
  [SMALL_STATE(381)] = 22179,
  [SMALL_STATE(382)] = 22200,
  [SMALL_STATE(383)] = 22228,
  [SMALL_STATE(384)] = 22254,
  [SMALL_STATE(385)] = 22282,
  [SMALL_STATE(386)] = 22306,
  [SMALL_STATE(387)] = 22332,
  [SMALL_STATE(388)] = 22356,
  [SMALL_STATE(389)] = 22384,
  [SMALL_STATE(390)] = 22410,
  [SMALL_STATE(391)] = 22436,
  [SMALL_STATE(392)] = 22458,
  [SMALL_STATE(393)] = 22486,
  [SMALL_STATE(394)] = 22514,
  [SMALL_STATE(395)] = 22538,
  [SMALL_STATE(396)] = 22560,
  [SMALL_STATE(397)] = 22584,
  [SMALL_STATE(398)] = 22610,
  [SMALL_STATE(399)] = 22629,
  [SMALL_STATE(400)] = 22650,
  [SMALL_STATE(401)] = 22669,
  [SMALL_STATE(402)] = 22688,
  [SMALL_STATE(403)] = 22707,
  [SMALL_STATE(404)] = 22732,
  [SMALL_STATE(405)] = 22753,
  [SMALL_STATE(406)] = 22774,
  [SMALL_STATE(407)] = 22793,
  [SMALL_STATE(408)] = 22814,
  [SMALL_STATE(409)] = 22835,
  [SMALL_STATE(410)] = 22856,
  [SMALL_STATE(411)] = 22880,
  [SMALL_STATE(412)] = 22904,
  [SMALL_STATE(413)] = 22926,
  [SMALL_STATE(414)] = 22946,
  [SMALL_STATE(415)] = 22967,
  [SMALL_STATE(416)] = 22984,
  [SMALL_STATE(417)] = 23001,
  [SMALL_STATE(418)] = 23024,
  [SMALL_STATE(419)] = 23041,
  [SMALL_STATE(420)] = 23058,
  [SMALL_STATE(421)] = 23075,
  [SMALL_STATE(422)] = 23092,
  [SMALL_STATE(423)] = 23109,
  [SMALL_STATE(424)] = 23126,
  [SMALL_STATE(425)] = 23143,
  [SMALL_STATE(426)] = 23160,
  [SMALL_STATE(427)] = 23177,
  [SMALL_STATE(428)] = 23194,
  [SMALL_STATE(429)] = 23217,
  [SMALL_STATE(430)] = 23234,
  [SMALL_STATE(431)] = 23257,
  [SMALL_STATE(432)] = 23280,
  [SMALL_STATE(433)] = 23303,
  [SMALL_STATE(434)] = 23324,
  [SMALL_STATE(435)] = 23341,
  [SMALL_STATE(436)] = 23358,
  [SMALL_STATE(437)] = 23375,
  [SMALL_STATE(438)] = 23392,
  [SMALL_STATE(439)] = 23409,
  [SMALL_STATE(440)] = 23426,
  [SMALL_STATE(441)] = 23443,
  [SMALL_STATE(442)] = 23463,
  [SMALL_STATE(443)] = 23483,
  [SMALL_STATE(444)] = 23503,
  [SMALL_STATE(445)] = 23523,
  [SMALL_STATE(446)] = 23543,
  [SMALL_STATE(447)] = 23561,
  [SMALL_STATE(448)] = 23581,
  [SMALL_STATE(449)] = 23601,
  [SMALL_STATE(450)] = 23623,
  [SMALL_STATE(451)] = 23641,
  [SMALL_STATE(452)] = 23663,
  [SMALL_STATE(453)] = 23681,
  [SMALL_STATE(454)] = 23703,
  [SMALL_STATE(455)] = 23725,
  [SMALL_STATE(456)] = 23745,
  [SMALL_STATE(457)] = 23767,
  [SMALL_STATE(458)] = 23789,
  [SMALL_STATE(459)] = 23809,
  [SMALL_STATE(460)] = 23828,
  [SMALL_STATE(461)] = 23843,
  [SMALL_STATE(462)] = 23860,
  [SMALL_STATE(463)] = 23879,
  [SMALL_STATE(464)] = 23896,
  [SMALL_STATE(465)] = 23915,
  [SMALL_STATE(466)] = 23930,
  [SMALL_STATE(467)] = 23949,
  [SMALL_STATE(468)] = 23966,
  [SMALL_STATE(469)] = 23981,
  [SMALL_STATE(470)] = 24000,
  [SMALL_STATE(471)] = 24019,
  [SMALL_STATE(472)] = 24034,
  [SMALL_STATE(473)] = 24053,
  [SMALL_STATE(474)] = 24068,
  [SMALL_STATE(475)] = 24083,
  [SMALL_STATE(476)] = 24100,
  [SMALL_STATE(477)] = 24116,
  [SMALL_STATE(478)] = 24132,
  [SMALL_STATE(479)] = 24148,
  [SMALL_STATE(480)] = 24162,
  [SMALL_STATE(481)] = 24178,
  [SMALL_STATE(482)] = 24192,
  [SMALL_STATE(483)] = 24208,
  [SMALL_STATE(484)] = 24222,
  [SMALL_STATE(485)] = 24236,
  [SMALL_STATE(486)] = 24252,
  [SMALL_STATE(487)] = 24266,
  [SMALL_STATE(488)] = 24282,
  [SMALL_STATE(489)] = 24296,
  [SMALL_STATE(490)] = 24310,
  [SMALL_STATE(491)] = 24324,
  [SMALL_STATE(492)] = 24340,
  [SMALL_STATE(493)] = 24356,
  [SMALL_STATE(494)] = 24372,
  [SMALL_STATE(495)] = 24388,
  [SMALL_STATE(496)] = 24404,
  [SMALL_STATE(497)] = 24420,
  [SMALL_STATE(498)] = 24433,
  [SMALL_STATE(499)] = 24446,
  [SMALL_STATE(500)] = 24459,
  [SMALL_STATE(501)] = 24472,
  [SMALL_STATE(502)] = 24485,
  [SMALL_STATE(503)] = 24498,
  [SMALL_STATE(504)] = 24511,
  [SMALL_STATE(505)] = 24524,
  [SMALL_STATE(506)] = 24537,
  [SMALL_STATE(507)] = 24550,
  [SMALL_STATE(508)] = 24563,
  [SMALL_STATE(509)] = 24576,
  [SMALL_STATE(510)] = 24589,
  [SMALL_STATE(511)] = 24602,
  [SMALL_STATE(512)] = 24615,
  [SMALL_STATE(513)] = 24628,
  [SMALL_STATE(514)] = 24641,
  [SMALL_STATE(515)] = 24654,
  [SMALL_STATE(516)] = 24667,
  [SMALL_STATE(517)] = 24680,
  [SMALL_STATE(518)] = 24693,
  [SMALL_STATE(519)] = 24706,
  [SMALL_STATE(520)] = 24719,
  [SMALL_STATE(521)] = 24732,
  [SMALL_STATE(522)] = 24745,
  [SMALL_STATE(523)] = 24758,
  [SMALL_STATE(524)] = 24771,
  [SMALL_STATE(525)] = 24784,
  [SMALL_STATE(526)] = 24797,
  [SMALL_STATE(527)] = 24810,
  [SMALL_STATE(528)] = 24823,
  [SMALL_STATE(529)] = 24836,
  [SMALL_STATE(530)] = 24849,
  [SMALL_STATE(531)] = 24862,
  [SMALL_STATE(532)] = 24875,
  [SMALL_STATE(533)] = 24888,
  [SMALL_STATE(534)] = 24901,
  [SMALL_STATE(535)] = 24914,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(479),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(464),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(399),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(405),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(369),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 8),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 2, 0, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 13),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 2, 0, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_block_comment, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_block_comment, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 10),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 10),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 10),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 10),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 20),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 20),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 10),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 10),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 10),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 10),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 10),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 10),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 10),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 10),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 10),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 10),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 20),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 20),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 10),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 10),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 10),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 10),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 20),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 20),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 12),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 12),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 20),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 20),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 20),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 20),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 20),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 20),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 21),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 21),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 22),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 22),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 23),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 23),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 14),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 14),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 10),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 10),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 10),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 10),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 16),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 16),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 17),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 17),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 20),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 20),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 20),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 20),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 20),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 20),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 20),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 20),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 20),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 20),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand_separator, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_operand_separator, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 14),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_operands, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_operands, 1, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_operands, 2, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_operands, 2, 0, 0),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_string_operands, 2, 0, 0), SHIFT(487),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(489),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_string_operands, 1, 0, 0), SHIFT(487),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 1, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 1, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elf_type_tag, 1, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [702] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 4),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 8),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 13),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19), SHIFT_REPEAT(28),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 1, 0, 4),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 1, 0, 4),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [758] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0), SHIFT_REPEAT(404),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(402),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 18),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 6),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 6),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 3, 0, 11),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 3, 0, 11),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 9),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(231),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 24),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 11),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 11),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 11),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 5),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(284),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 6),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(147),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(315),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(160),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 15),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 15),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 6),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 24),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 6),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 15),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 7),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(480),
  [862] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(508),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [877] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(465),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(480),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(480),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19), SHIFT_REPEAT(29),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_comment, 1, 0, 0),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [979] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 1, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__operand_separator = 0,
  ts_external_token__operator_space = 1,
  ts_external_token__line_separator = 2,
  ts_external_token__data_separator = 3,
  ts_external_token__inline_separator_comment = 4,
  ts_external_token__inline_end_comment = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__operand_separator] = sym__operand_separator,
  [ts_external_token__operator_space] = sym__operator_space,
  [ts_external_token__line_separator] = sym__line_separator,
  [ts_external_token__data_separator] = sym__data_separator,
  [ts_external_token__inline_separator_comment] = sym__inline_separator_comment,
  [ts_external_token__inline_end_comment] = sym__inline_end_comment,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_space] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__data_separator] = true,
    [ts_external_token__inline_separator_comment] = true,
    [ts_external_token__inline_end_comment] = true,
  },
  [2] = {
    [ts_external_token__operator_space] = true,
  },
  [3] = {
    [ts_external_token__operator_space] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__inline_end_comment] = true,
  },
  [4] = {
    [ts_external_token__operator_space] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__data_separator] = true,
    [ts_external_token__inline_separator_comment] = true,
    [ts_external_token__inline_end_comment] = true,
  },
  [5] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_space] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__inline_end_comment] = true,
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
