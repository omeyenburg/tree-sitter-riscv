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
#define STATE_COUNT 593
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 150
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 32

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_CR = 2,
  anon_sym_LF = 3,
  aux_sym__whitespace_token1 = 4,
  anon_sym_LPAREN = 5,
  anon_sym_SPACE = 6,
  anon_sym_TAB = 7,
  anon_sym_RPAREN = 8,
  sym_macro_mnemonic = 9,
  anon_sym_COMMA = 10,
  anon_sym_DOTbyte = 11,
  anon_sym_DOT2byte = 12,
  anon_sym_DOTshort = 13,
  anon_sym_DOThalf = 14,
  anon_sym_DOThword = 15,
  anon_sym_DOT4byte = 16,
  anon_sym_DOTword = 17,
  anon_sym_DOTint = 18,
  anon_sym_DOT8byte = 19,
  anon_sym_DOTdword = 20,
  anon_sym_DOTlong = 21,
  anon_sym_DOTquad = 22,
  anon_sym_DOTcomm = 23,
  anon_sym_DOTlcomm = 24,
  anon_sym_DOTalign = 25,
  anon_sym_DOTbalign = 26,
  anon_sym_DOTp2align = 27,
  anon_sym_DOTsleb128 = 28,
  anon_sym_DOTuleb128 = 29,
  anon_sym_DOTdtprelword = 30,
  anon_sym_DOTdtpreldword = 31,
  anon_sym_DOTskip = 32,
  anon_sym_DOTspace = 33,
  aux_sym_integer_operands_token1 = 34,
  anon_sym_DOTfloat = 35,
  anon_sym_DOTdouble = 36,
  anon_sym_DOTsingle = 37,
  aux_sym__string_directive_token1 = 38,
  anon_sym_DOTasciz = 39,
  anon_sym_DOTascii = 40,
  anon_sym_DOTasciiz = 41,
  anon_sym_DOTstring = 42,
  anon_sym_DOTstringz = 43,
  aux_sym_control_mnemonic_token1 = 44,
  aux_sym_section_type_token1 = 45,
  aux_sym_option_flag_token1 = 46,
  sym_opcode = 47,
  sym_modulo_operator = 48,
  anon_sym_PIPE_PIPE = 49,
  anon_sym_AMP_AMP = 50,
  anon_sym_PIPE = 51,
  anon_sym_CARET = 52,
  anon_sym_AMP = 53,
  anon_sym_EQ_EQ = 54,
  anon_sym_BANG_EQ = 55,
  anon_sym_LT = 56,
  anon_sym_GT = 57,
  anon_sym_LT_EQ = 58,
  anon_sym_GT_EQ = 59,
  anon_sym_LT_LT = 60,
  anon_sym_GT_GT = 61,
  anon_sym_PLUS = 62,
  anon_sym_DASH = 63,
  anon_sym_STAR = 64,
  anon_sym_PERCENT = 65,
  anon_sym_EQ = 66,
  anon_sym_TILDE = 67,
  anon_sym_BANG = 68,
  sym_relocation_type = 69,
  sym_octal = 70,
  sym_binary = 71,
  aux_sym_decimal_token1 = 72,
  sym_hexadecimal = 73,
  sym_float = 74,
  sym__escape_sequence = 75,
  anon_sym_SQUOTE = 76,
  aux_sym_char_token1 = 77,
  anon_sym_DQUOTE = 78,
  aux_sym_string_token1 = 79,
  sym_register = 80,
  sym_macro_variable = 81,
  sym_macro_parameter = 82,
  sym_macro_name = 83,
  sym_local_label = 84,
  aux_sym_local_label_reference_token1 = 85,
  sym_global_label = 86,
  aux_sym_symbol_token1 = 87,
  sym_global_numeric_label = 88,
  sym_local_numeric_label = 89,
  sym_local_numeric_label_reference = 90,
  sym__operand_separator = 91,
  sym__operator_separator = 92,
  sym__line_separator = 93,
  sym__data_separator = 94,
  sym_line_comment = 95,
  sym_block_comment = 96,
  sym_preprocessor = 97,
  sym_division_operator = 98,
  sym_program = 99,
  sym__statement = 100,
  sym__comment = 101,
  sym_directive = 102,
  sym__macro_directive = 103,
  sym_macro_parameters = 104,
  sym__integer_directive = 105,
  sym_integer_mnemonic = 106,
  sym_integer_operands = 107,
  sym__float_directive = 108,
  sym_float_mnemonic = 109,
  sym_float_operands = 110,
  sym__float_operand = 111,
  sym__string_directive = 112,
  sym_string_mnemonic = 113,
  sym__string_operand = 114,
  sym__control_directive = 115,
  sym_control_mnemonic = 116,
  sym_control_operands = 117,
  sym__control_operand = 118,
  sym__control_operand_separator = 119,
  sym_section_type = 120,
  sym_option_flag = 121,
  sym_instruction = 122,
  sym_operands = 123,
  sym__operand = 124,
  sym__call_expression = 125,
  sym__expression = 126,
  sym_binary_expression = 127,
  sym__left_expression = 128,
  sym__right_expression = 129,
  sym_parenthesized_expression = 130,
  sym_unary_expression = 131,
  sym_relocation_expression = 132,
  sym_decimal = 133,
  sym_char = 134,
  sym_string = 135,
  sym__label = 136,
  sym_local_label_reference = 137,
  sym_symbol = 138,
  sym_address = 139,
  aux_sym_program_repeat1 = 140,
  aux_sym_macro_parameters_repeat1 = 141,
  aux_sym__integer_directive_repeat1 = 142,
  aux_sym_integer_operands_repeat1 = 143,
  aux_sym_integer_operands_repeat2 = 144,
  aux_sym_float_operands_repeat1 = 145,
  aux_sym_control_operands_repeat1 = 146,
  aux_sym__control_operand_separator_repeat1 = 147,
  aux_sym_operands_repeat1 = 148,
  aux_sym_string_repeat1 = 149,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
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
  [sym_modulo_operator] = "modulo_operator",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG] = "!",
  [sym_relocation_type] = "relocation_type",
  [sym_octal] = "octal",
  [sym_binary] = "binary",
  [aux_sym_decimal_token1] = "decimal_token1",
  [sym_hexadecimal] = "hexadecimal",
  [sym_float] = "float",
  [sym__escape_sequence] = "_escape_sequence",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
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
  [sym__operator_separator] = "_operator_separator",
  [sym__line_separator] = "_line_separator",
  [sym__data_separator] = "_data_separator",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_preprocessor] = "preprocessor",
  [sym_division_operator] = "division_operator",
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
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__left_expression] = "_left_expression",
  [sym__right_expression] = "_right_expression",
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
  [aux_sym__control_operand_separator_repeat1] = "_control_operand_separator_repeat1",
  [aux_sym_operands_repeat1] = "operands_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
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
  [sym_modulo_operator] = sym_modulo_operator,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_relocation_type] = sym_relocation_type,
  [sym_octal] = sym_octal,
  [sym_binary] = sym_binary,
  [aux_sym_decimal_token1] = aux_sym_decimal_token1,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_float] = sym_float,
  [sym__escape_sequence] = sym__escape_sequence,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
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
  [sym__operator_separator] = sym__operator_separator,
  [sym__line_separator] = sym__line_separator,
  [sym__data_separator] = sym__data_separator,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_preprocessor] = sym_preprocessor,
  [sym_division_operator] = sym_division_operator,
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
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__left_expression] = sym__left_expression,
  [sym__right_expression] = sym__right_expression,
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
  [aux_sym__control_operand_separator_repeat1] = aux_sym__control_operand_separator_repeat1,
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
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
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
  [sym_modulo_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
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
  [sym__escape_sequence] = {
    .visible = false,
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
  [sym__operator_separator] = {
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
  [sym_division_operator] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__left_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__right_expression] = {
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
  [aux_sym__control_operand_separator_repeat1] = {
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
  field_operands = 8,
  field_parameters = 9,
  field_right = 10,
  field_string = 11,
  field_type = 12,
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
  [field_operands] = "operands",
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
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 1},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 1},
  [17] = {.index = 28, .length = 2},
  [18] = {.index = 30, .length = 2},
  [19] = {.index = 32, .length = 3},
  [20] = {.index = 35, .length = 1},
  [21] = {.index = 36, .length = 1},
  [22] = {.index = 37, .length = 2},
  [23] = {.index = 39, .length = 1},
  [24] = {.index = 40, .length = 3},
  [25] = {.index = 43, .length = 2},
  [26] = {.index = 45, .length = 2},
  [27] = {.index = 47, .length = 2},
  [28] = {.index = 49, .length = 3},
  [29] = {.index = 52, .length = 3},
  [30] = {.index = 55, .length = 3},
  [31] = {.index = 58, .length = 3},
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
    {field_opcode, 0},
    {field_operands, 2, .inherited = true},
  [17] =
    {field_left, 0},
  [18] =
    {field_mnemonic, 0},
    {field_operands, 2},
  [20] =
    {field_mnemonic, 0},
    {field_name, 3},
  [22] =
    {field_argument, 1},
  [23] =
    {field_opcode, 0},
    {field_operands, 3},
  [25] =
    {field_opcode, 0},
    {field_operands, 3, .inherited = true},
  [27] =
    {field_operands, 1},
  [28] =
    {field_mnemonic, 0},
    {field_operands, 3},
  [30] =
    {field_mnemonic, 0},
    {field_string, 2},
  [32] =
    {field_mnemonic, 0},
    {field_name, 2},
    {field_parameters, 4},
  [35] =
    {field_base, 1},
  [36] =
    {field_right, 0},
  [37] =
    {field_left, 0, .inherited = true},
    {field_right, 2, .inherited = true},
  [39] =
    {field_operands, 2},
  [40] =
    {field_mnemonic, 0},
    {field_name, 3},
    {field_parameters, 5},
  [43] =
    {field_argument, 2},
    {field_type, 0},
  [45] =
    {field_base, 2},
    {field_offset, 0},
  [47] =
    {field_offset, 0},
    {field_operands, 2},
  [49] =
    {field_mnemonic, 0},
    {field_name, 2},
    {field_parameters, 5},
  [52] =
    {field_mnemonic, 0},
    {field_name, 2},
    {field_parameters, 6},
  [55] =
    {field_mnemonic, 0},
    {field_name, 3},
    {field_parameters, 6},
  [58] =
    {field_mnemonic, 0},
    {field_name, 3},
    {field_parameters, 7},
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
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 18,
  [31] = 19,
  [32] = 18,
  [33] = 19,
  [34] = 28,
  [35] = 29,
  [36] = 28,
  [37] = 29,
  [38] = 28,
  [39] = 29,
  [40] = 28,
  [41] = 29,
  [42] = 28,
  [43] = 29,
  [44] = 28,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 46,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
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
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 53,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 74,
  [88] = 59,
  [89] = 60,
  [90] = 61,
  [91] = 83,
  [92] = 63,
  [93] = 64,
  [94] = 65,
  [95] = 66,
  [96] = 67,
  [97] = 68,
  [98] = 69,
  [99] = 70,
  [100] = 71,
  [101] = 72,
  [102] = 73,
  [103] = 74,
  [104] = 75,
  [105] = 76,
  [106] = 77,
  [107] = 78,
  [108] = 79,
  [109] = 109,
  [110] = 110,
  [111] = 81,
  [112] = 82,
  [113] = 62,
  [114] = 114,
  [115] = 115,
  [116] = 58,
  [117] = 117,
  [118] = 45,
  [119] = 54,
  [120] = 55,
  [121] = 56,
  [122] = 57,
  [123] = 123,
  [124] = 45,
  [125] = 59,
  [126] = 60,
  [127] = 61,
  [128] = 83,
  [129] = 63,
  [130] = 64,
  [131] = 65,
  [132] = 66,
  [133] = 67,
  [134] = 68,
  [135] = 69,
  [136] = 70,
  [137] = 71,
  [138] = 72,
  [139] = 73,
  [140] = 56,
  [141] = 75,
  [142] = 76,
  [143] = 77,
  [144] = 78,
  [145] = 79,
  [146] = 53,
  [147] = 81,
  [148] = 82,
  [149] = 62,
  [150] = 53,
  [151] = 151,
  [152] = 54,
  [153] = 55,
  [154] = 57,
  [155] = 58,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 156,
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
  [173] = 162,
  [174] = 163,
  [175] = 164,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 157,
  [180] = 158,
  [181] = 159,
  [182] = 156,
  [183] = 161,
  [184] = 176,
  [185] = 177,
  [186] = 178,
  [187] = 157,
  [188] = 158,
  [189] = 159,
  [190] = 165,
  [191] = 161,
  [192] = 192,
  [193] = 166,
  [194] = 167,
  [195] = 168,
  [196] = 169,
  [197] = 197,
  [198] = 165,
  [199] = 166,
  [200] = 167,
  [201] = 168,
  [202] = 169,
  [203] = 170,
  [204] = 171,
  [205] = 172,
  [206] = 162,
  [207] = 163,
  [208] = 164,
  [209] = 178,
  [210] = 177,
  [211] = 178,
  [212] = 157,
  [213] = 158,
  [214] = 159,
  [215] = 156,
  [216] = 161,
  [217] = 165,
  [218] = 166,
  [219] = 167,
  [220] = 168,
  [221] = 169,
  [222] = 170,
  [223] = 171,
  [224] = 172,
  [225] = 162,
  [226] = 163,
  [227] = 164,
  [228] = 176,
  [229] = 177,
  [230] = 178,
  [231] = 157,
  [232] = 158,
  [233] = 159,
  [234] = 156,
  [235] = 161,
  [236] = 170,
  [237] = 171,
  [238] = 238,
  [239] = 239,
  [240] = 172,
  [241] = 165,
  [242] = 166,
  [243] = 167,
  [244] = 168,
  [245] = 169,
  [246] = 170,
  [247] = 171,
  [248] = 172,
  [249] = 162,
  [250] = 163,
  [251] = 164,
  [252] = 176,
  [253] = 177,
  [254] = 176,
  [255] = 255,
  [256] = 255,
  [257] = 255,
  [258] = 258,
  [259] = 258,
  [260] = 260,
  [261] = 261,
  [262] = 258,
  [263] = 263,
  [264] = 258,
  [265] = 255,
  [266] = 258,
  [267] = 255,
  [268] = 60,
  [269] = 58,
  [270] = 81,
  [271] = 82,
  [272] = 62,
  [273] = 45,
  [274] = 59,
  [275] = 275,
  [276] = 53,
  [277] = 54,
  [278] = 55,
  [279] = 56,
  [280] = 123,
  [281] = 57,
  [282] = 61,
  [283] = 83,
  [284] = 63,
  [285] = 64,
  [286] = 65,
  [287] = 66,
  [288] = 288,
  [289] = 289,
  [290] = 275,
  [291] = 67,
  [292] = 78,
  [293] = 289,
  [294] = 275,
  [295] = 68,
  [296] = 288,
  [297] = 289,
  [298] = 275,
  [299] = 69,
  [300] = 288,
  [301] = 289,
  [302] = 79,
  [303] = 275,
  [304] = 288,
  [305] = 275,
  [306] = 70,
  [307] = 71,
  [308] = 72,
  [309] = 73,
  [310] = 74,
  [311] = 75,
  [312] = 288,
  [313] = 76,
  [314] = 289,
  [315] = 77,
  [316] = 288,
  [317] = 317,
  [318] = 64,
  [319] = 58,
  [320] = 65,
  [321] = 66,
  [322] = 67,
  [323] = 68,
  [324] = 69,
  [325] = 70,
  [326] = 71,
  [327] = 54,
  [328] = 55,
  [329] = 56,
  [330] = 57,
  [331] = 72,
  [332] = 73,
  [333] = 74,
  [334] = 58,
  [335] = 75,
  [336] = 82,
  [337] = 62,
  [338] = 53,
  [339] = 76,
  [340] = 77,
  [341] = 78,
  [342] = 317,
  [343] = 79,
  [344] = 53,
  [345] = 81,
  [346] = 82,
  [347] = 317,
  [348] = 62,
  [349] = 317,
  [350] = 45,
  [351] = 351,
  [352] = 59,
  [353] = 60,
  [354] = 61,
  [355] = 355,
  [356] = 317,
  [357] = 83,
  [358] = 63,
  [359] = 359,
  [360] = 360,
  [361] = 360,
  [362] = 362,
  [363] = 363,
  [364] = 363,
  [365] = 363,
  [366] = 363,
  [367] = 363,
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
  [397] = 359,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 351,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 406,
  [412] = 404,
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
  [424] = 398,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 395,
  [431] = 396,
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
  [449] = 400,
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
  [460] = 403,
  [461] = 461,
  [462] = 405,
  [463] = 407,
  [464] = 459,
  [465] = 465,
  [466] = 466,
  [467] = 452,
  [468] = 401,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 400,
  [473] = 473,
  [474] = 452,
  [475] = 475,
  [476] = 459,
  [477] = 477,
  [478] = 452,
  [479] = 479,
  [480] = 480,
  [481] = 401,
  [482] = 482,
  [483] = 483,
  [484] = 399,
  [485] = 485,
  [486] = 368,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 459,
  [495] = 495,
  [496] = 496,
  [497] = 404,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 406,
  [506] = 410,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 510,
  [515] = 515,
  [516] = 511,
  [517] = 511,
  [518] = 511,
  [519] = 519,
  [520] = 511,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 521,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 527,
  [532] = 404,
  [533] = 533,
  [534] = 534,
  [535] = 529,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 523,
  [540] = 540,
  [541] = 541,
  [542] = 521,
  [543] = 543,
  [544] = 544,
  [545] = 530,
  [546] = 546,
  [547] = 547,
  [548] = 537,
  [549] = 549,
  [550] = 523,
  [551] = 523,
  [552] = 552,
  [553] = 521,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 537,
  [559] = 523,
  [560] = 560,
  [561] = 561,
  [562] = 521,
  [563] = 563,
  [564] = 523,
  [565] = 565,
  [566] = 521,
  [567] = 523,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 406,
  [576] = 537,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 537,
  [585] = 528,
  [586] = 586,
  [587] = 579,
  [588] = 588,
  [589] = 579,
  [590] = 579,
  [591] = 579,
  [592] = 592,
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
      if (eof) ADVANCE(64);
      ADVANCE_MAP(
        '\n', 70,
        '!', 400,
        '"', 437,
        '$', 13,
        '%', 396,
        '&', 382,
        '\'', 434,
        '(', 73,
        ')', 78,
        '*', 395,
        '+', 391,
        ',', 81,
        '-', 393,
        '.', 530,
        '0', 404,
        '3', 412,
        ';', 65,
        '<', 385,
        '=', 397,
        '>', 386,
        '@', 51,
        'A', 518,
        'S', 507,
        'T', 520,
        '\\', 23,
        '^', 381,
        'a', 519,
        'f', 509,
        'g', 514,
        'r', 511,
        's', 508,
        't', 521,
        'z', 512,
        '|', 380,
        '~', 398,
        'C', 517,
        'c', 517,
        'K', 516,
        'k', 516,
        'V', 516,
        'v', 516,
        '1', 413,
        '2', 413,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(510);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(522);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '!') ADVANCE(399);
      if (lookahead == '"') ADVANCE(437);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(434);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(394);
      if (lookahead == '.') ADVANCE(537);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '3') ADVANCE(418);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'A') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead == 'f') ADVANCE(531);
      if (lookahead == 'g') ADVANCE(540);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == 't') ADVANCE(548);
      if (lookahead == 'z') ADVANCE(538);
      if (lookahead == '~') ADVANCE(398);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(544);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(543);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(543);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(419);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(532);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(549);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == '\r') SKIP(2);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '\\') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 3:
      if (lookahead == '\r') SKIP(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 399,
        '"', 437,
        '$', 17,
        '%', 25,
        '\'', 434,
        '(', 73,
        '+', 52,
        '-', 394,
        '.', 537,
        '0', 408,
        '3', 418,
        '@', 51,
        'A', 545,
        'S', 528,
        'T', 547,
        '\\', 54,
        'a', 546,
        'f', 531,
        'g', 540,
        'r', 533,
        's', 529,
        't', 548,
        'z', 538,
        '~', 398,
        'C', 544,
        'c', 544,
        'K', 543,
        'k', 543,
        'V', 543,
        'v', 543,
        '1', 419,
        '2', 419,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(532);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(549);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 399,
        '"', 437,
        '$', 17,
        '%', 377,
        '\'', 434,
        '(', 73,
        ')', 78,
        '-', 393,
        '.', 536,
        '0', 405,
        '3', 415,
        'A', 545,
        'S', 528,
        'T', 547,
        '\\', 54,
        'a', 546,
        'f', 531,
        'g', 540,
        'r', 533,
        's', 529,
        't', 548,
        'z', 538,
        '~', 398,
        'C', 544,
        'c', 544,
        'K', 543,
        'k', 543,
        'V', 543,
        'v', 543,
        '1', 416,
        '2', 416,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(532);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(416);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(549);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 22,
        '%', 396,
        '&', 382,
        '(', 73,
        ')', 78,
        '*', 395,
        '+', 391,
        ',', 81,
        '-', 392,
        '<', 385,
        '=', 397,
        '>', 386,
        '^', 381,
        '|', 380,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(437);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(439);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '\\') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(440);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '2', 179,
        '4', 185,
        '8', 186,
        ':', 527,
        'L', 9,
        'a', 265,
        'b', 174,
        'c', 306,
        'd', 305,
        'f', 266,
        'h', 175,
        'i', 295,
        'l', 193,
        'm', 170,
        'p', 155,
        'q', 360,
        's', 244,
        'u', 271,
        'w', 308,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '3', 444,
        'A', 35,
        'S', 10,
        'T', 37,
        'a', 36,
        'f', 14,
        'g', 28,
        'r', 16,
        's', 11,
        't', 41,
        'z', 26,
        'C', 34,
        'c', 34,
        'K', 32,
        'k', 32,
        'V', 32,
        'v', 32,
        '1', 447,
        '2', 447,
        'F', 15,
        'R', 15,
        'X', 15,
        'x', 15,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 14:
      if (lookahead == '3') ADVANCE(444);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(447);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(440);
      END_STATE();
    case 15:
      if (lookahead == '3') ADVANCE(444);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 16:
      if (lookahead == '3') ADVANCE(444);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '3', 445,
        'A', 501,
        'S', 452,
        'T', 503,
        'a', 502,
        'f', 457,
        'g', 489,
        'r', 459,
        's', 453,
        't', 504,
        'z', 472,
        'C', 500,
        'c', 500,
        'K', 499,
        'k', 499,
        'V', 499,
        'v', 499,
        '1', 448,
        '2', 448,
        'F', 458,
        'R', 458,
        'X', 458,
        'x', 458,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(505);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(551);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(384);
      END_STATE();
    case 23:
      if (lookahead == 'U') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(433);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(431);
      END_STATE();
    case 24:
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(435);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        'a', 467,
        'c', 465,
        'd', 498,
        'g', 487,
        'h', 478,
        'l', 486,
        'p', 468,
        't', 482,
      );
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(440);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 31:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 32:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(440);
      END_STATE();
    case 33:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(411);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(440);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(440);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(440);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(440);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(431);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(421);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 52:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 53:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 54:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 55:
      if (eof) ADVANCE(64);
      ADVANCE_MAP(
        '\t', 76,
        '\n', 70,
        '\r', 66,
        ' ', 74,
        '!', 399,
        '$', 17,
        '%', 25,
        '\'', 434,
        '(', 73,
        ',', 128,
        '-', 393,
        '.', 536,
        '0', 405,
        '3', 415,
        ';', 65,
        'A', 545,
        'S', 528,
        'T', 547,
        '\\', 54,
        'a', 546,
        'f', 531,
        'g', 540,
        'r', 533,
        's', 529,
        't', 548,
        'z', 538,
        '~', 398,
        'C', 544,
        'c', 544,
        'K', 543,
        'k', 543,
        'V', 543,
        'v', 543,
        '1', 416,
        '2', 416,
        'F', 532,
        'R', 532,
        'X', 532,
        'x', 532,
      );
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(416);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(549);
      END_STATE();
    case 56:
      if (eof) ADVANCE(64);
      ADVANCE_MAP(
        '\t', 76,
        '\n', 70,
        '\r', 66,
        ' ', 74,
        '!', 399,
        '$', 17,
        '%', 25,
        '\'', 434,
        '(', 73,
        '-', 394,
        '.', 537,
        '0', 408,
        '3', 418,
        ';', 65,
        'A', 545,
        'S', 528,
        'T', 547,
        '\\', 54,
        'a', 546,
        'f', 531,
        'g', 540,
        'r', 533,
        's', 529,
        't', 548,
        'z', 538,
        '~', 398,
        'C', 544,
        'c', 544,
        'K', 543,
        'k', 543,
        'V', 543,
        'v', 543,
        '1', 419,
        '2', 419,
        'F', 532,
        'R', 532,
        'X', 532,
        'x', 532,
      );
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(549);
      END_STATE();
    case 57:
      if (eof) ADVANCE(64);
      ADVANCE_MAP(
        '\t', 76,
        '\n', 70,
        '\r', 66,
        ' ', 74,
        '!', 22,
        '%', 396,
        '&', 382,
        '(', 73,
        '*', 395,
        '+', 391,
        ',', 128,
        '-', 392,
        ';', 65,
        '<', 385,
        '=', 397,
        '>', 386,
        '^', 381,
        '|', 380,
      );
      END_STATE();
    case 58:
      if (eof) ADVANCE(64);
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == '\r') SKIP(58);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == '&') ADVANCE(382);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '+') ADVANCE(391);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '<') ADVANCE(385);
      if (lookahead == '=') ADVANCE(397);
      if (lookahead == '>') ADVANCE(386);
      if (lookahead == '^') ADVANCE(381);
      if (lookahead == '|') ADVANCE(380);
      END_STATE();
    case 59:
      if (eof) ADVANCE(64);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 60:
      if (eof) ADVANCE(64);
      ADVANCE_MAP(
        '\n', 70,
        '\r', 68,
        '!', 399,
        '"', 437,
        '$', 17,
        '%', 377,
        '\'', 434,
        '(', 73,
        '-', 393,
        '.', 536,
        '0', 405,
        '3', 415,
        ';', 65,
        'A', 545,
        'S', 528,
        'T', 547,
        '\\', 54,
        'a', 546,
        'f', 531,
        'g', 540,
        'r', 533,
        's', 529,
        't', 548,
        'z', 538,
        '~', 398,
        '\t', 71,
        ' ', 71,
        'C', 544,
        'c', 544,
        'K', 543,
        'k', 543,
        'V', 543,
        'v', 543,
        '1', 416,
        '2', 416,
        'F', 532,
        'R', 532,
        'X', 532,
        'x', 532,
      );
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(416);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(549);
      END_STATE();
    case 61:
      if (eof) ADVANCE(64);
      ADVANCE_MAP(
        '\n', 70,
        '\r', 69,
        '!', 399,
        '"', 437,
        '$', 17,
        '%', 377,
        '\'', 434,
        '(', 73,
        ',', 81,
        '-', 393,
        '.', 536,
        '0', 405,
        '3', 415,
        ';', 65,
        'A', 545,
        'S', 528,
        'T', 547,
        '\\', 54,
        'a', 546,
        'f', 531,
        'g', 540,
        'r', 533,
        's', 529,
        't', 548,
        'z', 538,
        '~', 398,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(61);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(544);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(543);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(543);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(416);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(532);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(416);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(549);
      END_STATE();
    case 62:
      if (eof) ADVANCE(64);
      ADVANCE_MAP(
        '\n', 70,
        '\r', 69,
        '!', 22,
        '%', 396,
        '&', 382,
        '(', 73,
        '*', 395,
        '+', 391,
        ',', 81,
        '-', 392,
        ';', 65,
        '<', 385,
        '=', 397,
        '>', 386,
        '^', 381,
        '|', 380,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62);
      END_STATE();
    case 63:
      if (eof) ADVANCE(64);
      if (lookahead == '\r') SKIP(63);
      if (lookahead == '!') ADVANCE(399);
      if (lookahead == '"') ADVANCE(437);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(434);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(394);
      if (lookahead == '.') ADVANCE(537);
      if (lookahead == '0') ADVANCE(408);
      if (lookahead == '3') ADVANCE(418);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'A') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead == 'f') ADVANCE(531);
      if (lookahead == 'g') ADVANCE(540);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == 't') ADVANCE(548);
      if (lookahead == 'z') ADVANCE(538);
      if (lookahead == '~') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(544);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(543);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(543);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(419);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(532);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(549);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(76);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '0') ADVANCE(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(76);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(76);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_integer_operands_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__string_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'z') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(371);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'z') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(372);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'z') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(371);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'z') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(372);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(150);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(152);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(153);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(154);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(156);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(176);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(157);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(158);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(159);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(177);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(116);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(118);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(117);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(119);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'E') ADVANCE(534);
      if (lookahead == 'b') ADVANCE(363);
      if (lookahead == 'e') ADVANCE(369);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'E') ADVANCE(534);
      if (lookahead == 'b') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(369);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'E') ADVANCE(534);
      if (lookahead == 'b') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(369);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'E') ADVANCE(534);
      if (lookahead == 'e') ADVANCE(369);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'y') ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'w') ADVANCE(315);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'y') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'w') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'b') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'b') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'b') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'b') ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'b') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'b') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'c') ADVANCE(246);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'c') ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'c') ADVANCE(311);
      if (lookahead == 'o') ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(361);
      if (lookahead == 'w') ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == 'w') ADVANCE(318);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(103);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(285);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(286);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(287);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(290);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(291);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(292);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(270);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'h') ADVANCE(307);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'k') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(167);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == 'k') ADVANCE(251);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'z') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(371);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'z') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(372);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(281);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead == 'w') ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == 'w') ADVANCE(314);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'p') ADVANCE(124);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'p') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'p') ADVANCE(332);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'p') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(345);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(225);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'u') ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'u') ADVANCE(164);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'u') ADVANCE(173);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'w') ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'w') ADVANCE(320);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'y') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'y') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'y') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'y') ADVANCE(355);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'y') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'y') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_modulo_operator);
      ADVANCE_MAP(
        'a', 467,
        'c', 465,
        'd', 498,
        'g', 487,
        'h', 478,
        'l', 486,
        'p', 468,
        't', 482,
      );
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(378);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(379);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(389);
      if (lookahead == '=') ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(390);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(406);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(409);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(383);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(384);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 427,
        ':', 551,
        'b', 553,
        'f', 552,
        'E', 30,
        'e', 30,
        'X', 43,
        'x', 43,
        '8', 417,
        '9', 417,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(407);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 427,
        'b', 553,
        'f', 552,
        'E', 30,
        'e', 30,
        'X', 43,
        'x', 43,
        '8', 417,
        '9', 417,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(407);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(43);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == 'b') ADVANCE(553);
      if (lookahead == 'f') ADVANCE(552);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(43);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(410);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(43);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(552);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(414);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(550);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(552);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(417);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(552);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(420);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(431);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(432);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(438);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(443);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(440);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(461);
      if (lookahead == '3') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '2') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(445);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(448);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(445);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(445);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '4') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == 'g') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == 'h') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'b') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'c') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'g') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'h') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(496);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('4' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_macro_parameter);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == '1') ADVANCE(441);
      if (lookahead == ':') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == '1') ADVANCE(441);
      if (lookahead == ':') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(443);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == '3') ADVANCE(441);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(442);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(443);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == '3') ADVANCE(441);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == '3') ADVANCE(441);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(443);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'p') ADVANCE(443);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(443);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(443);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(443);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == ':') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(549);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 160,
        '4', 161,
        '8', 162,
        ':', 527,
        'L', 525,
        'a', 259,
        'b', 166,
        'c', 299,
        'd', 301,
        'f', 264,
        'h', 169,
        'i', 288,
        'l', 194,
        'm', 165,
        'p', 151,
        'q', 358,
        's', 243,
        'u', 273,
        'w', 302,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(535);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(446);
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(449);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(446);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(446);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(526);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'p') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(411);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 59, .external_lex_state = 2},
  [2] = {.lex_state = 59, .external_lex_state = 2},
  [3] = {.lex_state = 59, .external_lex_state = 2},
  [4] = {.lex_state = 59, .external_lex_state = 3},
  [5] = {.lex_state = 59, .external_lex_state = 3},
  [6] = {.lex_state = 59, .external_lex_state = 2},
  [7] = {.lex_state = 59, .external_lex_state = 2},
  [8] = {.lex_state = 59, .external_lex_state = 2},
  [9] = {.lex_state = 59, .external_lex_state = 2},
  [10] = {.lex_state = 59, .external_lex_state = 2},
  [11] = {.lex_state = 59, .external_lex_state = 2},
  [12] = {.lex_state = 59, .external_lex_state = 2},
  [13] = {.lex_state = 63, .external_lex_state = 4},
  [14] = {.lex_state = 60, .external_lex_state = 5},
  [15] = {.lex_state = 61, .external_lex_state = 5},
  [16] = {.lex_state = 61, .external_lex_state = 5},
  [17] = {.lex_state = 55, .external_lex_state = 6},
  [18] = {.lex_state = 61, .external_lex_state = 5},
  [19] = {.lex_state = 61, .external_lex_state = 5},
  [20] = {.lex_state = 56, .external_lex_state = 6},
  [21] = {.lex_state = 4, .external_lex_state = 7},
  [22] = {.lex_state = 57, .external_lex_state = 8},
  [23] = {.lex_state = 4, .external_lex_state = 7},
  [24] = {.lex_state = 5, .external_lex_state = 7},
  [25] = {.lex_state = 4, .external_lex_state = 7},
  [26] = {.lex_state = 5, .external_lex_state = 7},
  [27] = {.lex_state = 5, .external_lex_state = 7},
  [28] = {.lex_state = 5, .external_lex_state = 7},
  [29] = {.lex_state = 5, .external_lex_state = 7},
  [30] = {.lex_state = 5, .external_lex_state = 7},
  [31] = {.lex_state = 5, .external_lex_state = 7},
  [32] = {.lex_state = 5, .external_lex_state = 7},
  [33] = {.lex_state = 5, .external_lex_state = 7},
  [34] = {.lex_state = 5, .external_lex_state = 7},
  [35] = {.lex_state = 5, .external_lex_state = 7},
  [36] = {.lex_state = 5, .external_lex_state = 7},
  [37] = {.lex_state = 5, .external_lex_state = 7},
  [38] = {.lex_state = 5, .external_lex_state = 7},
  [39] = {.lex_state = 5, .external_lex_state = 7},
  [40] = {.lex_state = 5, .external_lex_state = 7},
  [41] = {.lex_state = 5, .external_lex_state = 7},
  [42] = {.lex_state = 5, .external_lex_state = 7},
  [43] = {.lex_state = 5, .external_lex_state = 7},
  [44] = {.lex_state = 5, .external_lex_state = 7},
  [45] = {.lex_state = 57, .external_lex_state = 8},
  [46] = {.lex_state = 5, .external_lex_state = 7},
  [47] = {.lex_state = 5, .external_lex_state = 9},
  [48] = {.lex_state = 57, .external_lex_state = 8},
  [49] = {.lex_state = 57, .external_lex_state = 8},
  [50] = {.lex_state = 57, .external_lex_state = 8},
  [51] = {.lex_state = 5, .external_lex_state = 7},
  [52] = {.lex_state = 57, .external_lex_state = 8},
  [53] = {.lex_state = 57, .external_lex_state = 8},
  [54] = {.lex_state = 57, .external_lex_state = 8},
  [55] = {.lex_state = 57, .external_lex_state = 8},
  [56] = {.lex_state = 57, .external_lex_state = 8},
  [57] = {.lex_state = 57, .external_lex_state = 8},
  [58] = {.lex_state = 57, .external_lex_state = 8},
  [59] = {.lex_state = 57, .external_lex_state = 8},
  [60] = {.lex_state = 57, .external_lex_state = 8},
  [61] = {.lex_state = 57, .external_lex_state = 8},
  [62] = {.lex_state = 57, .external_lex_state = 8},
  [63] = {.lex_state = 57, .external_lex_state = 8},
  [64] = {.lex_state = 57, .external_lex_state = 8},
  [65] = {.lex_state = 57, .external_lex_state = 8},
  [66] = {.lex_state = 57, .external_lex_state = 8},
  [67] = {.lex_state = 57, .external_lex_state = 8},
  [68] = {.lex_state = 57, .external_lex_state = 8},
  [69] = {.lex_state = 57, .external_lex_state = 8},
  [70] = {.lex_state = 57, .external_lex_state = 8},
  [71] = {.lex_state = 57, .external_lex_state = 8},
  [72] = {.lex_state = 57, .external_lex_state = 8},
  [73] = {.lex_state = 57, .external_lex_state = 8},
  [74] = {.lex_state = 57, .external_lex_state = 8},
  [75] = {.lex_state = 57, .external_lex_state = 8},
  [76] = {.lex_state = 57, .external_lex_state = 8},
  [77] = {.lex_state = 57, .external_lex_state = 8},
  [78] = {.lex_state = 57, .external_lex_state = 8},
  [79] = {.lex_state = 57, .external_lex_state = 8},
  [80] = {.lex_state = 57, .external_lex_state = 8},
  [81] = {.lex_state = 57, .external_lex_state = 8},
  [82] = {.lex_state = 57, .external_lex_state = 8},
  [83] = {.lex_state = 57, .external_lex_state = 8},
  [84] = {.lex_state = 4, .external_lex_state = 7},
  [85] = {.lex_state = 4, .external_lex_state = 9},
  [86] = {.lex_state = 5, .external_lex_state = 7},
  [87] = {.lex_state = 58, .external_lex_state = 10},
  [88] = {.lex_state = 62, .external_lex_state = 11},
  [89] = {.lex_state = 62, .external_lex_state = 11},
  [90] = {.lex_state = 62, .external_lex_state = 11},
  [91] = {.lex_state = 62, .external_lex_state = 11},
  [92] = {.lex_state = 62, .external_lex_state = 11},
  [93] = {.lex_state = 62, .external_lex_state = 11},
  [94] = {.lex_state = 62, .external_lex_state = 11},
  [95] = {.lex_state = 62, .external_lex_state = 11},
  [96] = {.lex_state = 62, .external_lex_state = 11},
  [97] = {.lex_state = 62, .external_lex_state = 11},
  [98] = {.lex_state = 62, .external_lex_state = 11},
  [99] = {.lex_state = 62, .external_lex_state = 11},
  [100] = {.lex_state = 62, .external_lex_state = 11},
  [101] = {.lex_state = 62, .external_lex_state = 11},
  [102] = {.lex_state = 62, .external_lex_state = 11},
  [103] = {.lex_state = 62, .external_lex_state = 11},
  [104] = {.lex_state = 62, .external_lex_state = 11},
  [105] = {.lex_state = 62, .external_lex_state = 11},
  [106] = {.lex_state = 62, .external_lex_state = 11},
  [107] = {.lex_state = 62, .external_lex_state = 11},
  [108] = {.lex_state = 62, .external_lex_state = 11},
  [109] = {.lex_state = 63, .external_lex_state = 7},
  [110] = {.lex_state = 5, .external_lex_state = 7},
  [111] = {.lex_state = 62, .external_lex_state = 11},
  [112] = {.lex_state = 62, .external_lex_state = 11},
  [113] = {.lex_state = 62, .external_lex_state = 11},
  [114] = {.lex_state = 5, .external_lex_state = 7},
  [115] = {.lex_state = 5, .external_lex_state = 7},
  [116] = {.lex_state = 62, .external_lex_state = 11},
  [117] = {.lex_state = 62, .external_lex_state = 11},
  [118] = {.lex_state = 62, .external_lex_state = 11},
  [119] = {.lex_state = 58, .external_lex_state = 10},
  [120] = {.lex_state = 58, .external_lex_state = 10},
  [121] = {.lex_state = 58, .external_lex_state = 10},
  [122] = {.lex_state = 58, .external_lex_state = 10},
  [123] = {.lex_state = 62, .external_lex_state = 11},
  [124] = {.lex_state = 58, .external_lex_state = 10},
  [125] = {.lex_state = 58, .external_lex_state = 10},
  [126] = {.lex_state = 58, .external_lex_state = 10},
  [127] = {.lex_state = 58, .external_lex_state = 10},
  [128] = {.lex_state = 58, .external_lex_state = 10},
  [129] = {.lex_state = 58, .external_lex_state = 10},
  [130] = {.lex_state = 58, .external_lex_state = 10},
  [131] = {.lex_state = 58, .external_lex_state = 10},
  [132] = {.lex_state = 58, .external_lex_state = 10},
  [133] = {.lex_state = 58, .external_lex_state = 10},
  [134] = {.lex_state = 58, .external_lex_state = 10},
  [135] = {.lex_state = 58, .external_lex_state = 10},
  [136] = {.lex_state = 58, .external_lex_state = 10},
  [137] = {.lex_state = 58, .external_lex_state = 10},
  [138] = {.lex_state = 58, .external_lex_state = 10},
  [139] = {.lex_state = 58, .external_lex_state = 10},
  [140] = {.lex_state = 62, .external_lex_state = 11},
  [141] = {.lex_state = 58, .external_lex_state = 10},
  [142] = {.lex_state = 58, .external_lex_state = 10},
  [143] = {.lex_state = 58, .external_lex_state = 10},
  [144] = {.lex_state = 58, .external_lex_state = 10},
  [145] = {.lex_state = 58, .external_lex_state = 10},
  [146] = {.lex_state = 58, .external_lex_state = 10},
  [147] = {.lex_state = 58, .external_lex_state = 10},
  [148] = {.lex_state = 58, .external_lex_state = 10},
  [149] = {.lex_state = 58, .external_lex_state = 10},
  [150] = {.lex_state = 62, .external_lex_state = 11},
  [151] = {.lex_state = 58, .external_lex_state = 10},
  [152] = {.lex_state = 62, .external_lex_state = 11},
  [153] = {.lex_state = 62, .external_lex_state = 11},
  [154] = {.lex_state = 62, .external_lex_state = 11},
  [155] = {.lex_state = 58, .external_lex_state = 10},
  [156] = {.lex_state = 4, .external_lex_state = 7},
  [157] = {.lex_state = 4, .external_lex_state = 7},
  [158] = {.lex_state = 4, .external_lex_state = 7},
  [159] = {.lex_state = 4, .external_lex_state = 7},
  [160] = {.lex_state = 4, .external_lex_state = 7},
  [161] = {.lex_state = 4, .external_lex_state = 7},
  [162] = {.lex_state = 4, .external_lex_state = 7},
  [163] = {.lex_state = 4, .external_lex_state = 7},
  [164] = {.lex_state = 4, .external_lex_state = 7},
  [165] = {.lex_state = 4, .external_lex_state = 7},
  [166] = {.lex_state = 4, .external_lex_state = 7},
  [167] = {.lex_state = 4, .external_lex_state = 7},
  [168] = {.lex_state = 4, .external_lex_state = 7},
  [169] = {.lex_state = 4, .external_lex_state = 7},
  [170] = {.lex_state = 4, .external_lex_state = 7},
  [171] = {.lex_state = 4, .external_lex_state = 7},
  [172] = {.lex_state = 4, .external_lex_state = 7},
  [173] = {.lex_state = 4, .external_lex_state = 7},
  [174] = {.lex_state = 4, .external_lex_state = 7},
  [175] = {.lex_state = 4, .external_lex_state = 7},
  [176] = {.lex_state = 4, .external_lex_state = 7},
  [177] = {.lex_state = 4, .external_lex_state = 7},
  [178] = {.lex_state = 4, .external_lex_state = 7},
  [179] = {.lex_state = 4, .external_lex_state = 7},
  [180] = {.lex_state = 4, .external_lex_state = 7},
  [181] = {.lex_state = 4, .external_lex_state = 7},
  [182] = {.lex_state = 4, .external_lex_state = 7},
  [183] = {.lex_state = 4, .external_lex_state = 7},
  [184] = {.lex_state = 4, .external_lex_state = 7},
  [185] = {.lex_state = 4, .external_lex_state = 7},
  [186] = {.lex_state = 4, .external_lex_state = 7},
  [187] = {.lex_state = 4, .external_lex_state = 7},
  [188] = {.lex_state = 4, .external_lex_state = 7},
  [189] = {.lex_state = 4, .external_lex_state = 7},
  [190] = {.lex_state = 4, .external_lex_state = 7},
  [191] = {.lex_state = 4, .external_lex_state = 7},
  [192] = {.lex_state = 4, .external_lex_state = 12},
  [193] = {.lex_state = 4, .external_lex_state = 7},
  [194] = {.lex_state = 4, .external_lex_state = 7},
  [195] = {.lex_state = 4, .external_lex_state = 7},
  [196] = {.lex_state = 4, .external_lex_state = 7},
  [197] = {.lex_state = 4, .external_lex_state = 12},
  [198] = {.lex_state = 4, .external_lex_state = 7},
  [199] = {.lex_state = 4, .external_lex_state = 7},
  [200] = {.lex_state = 4, .external_lex_state = 7},
  [201] = {.lex_state = 4, .external_lex_state = 7},
  [202] = {.lex_state = 4, .external_lex_state = 7},
  [203] = {.lex_state = 4, .external_lex_state = 7},
  [204] = {.lex_state = 4, .external_lex_state = 7},
  [205] = {.lex_state = 4, .external_lex_state = 7},
  [206] = {.lex_state = 4, .external_lex_state = 7},
  [207] = {.lex_state = 4, .external_lex_state = 7},
  [208] = {.lex_state = 4, .external_lex_state = 7},
  [209] = {.lex_state = 4, .external_lex_state = 7},
  [210] = {.lex_state = 4, .external_lex_state = 7},
  [211] = {.lex_state = 4, .external_lex_state = 7},
  [212] = {.lex_state = 4, .external_lex_state = 7},
  [213] = {.lex_state = 4, .external_lex_state = 7},
  [214] = {.lex_state = 4, .external_lex_state = 7},
  [215] = {.lex_state = 4, .external_lex_state = 7},
  [216] = {.lex_state = 4, .external_lex_state = 7},
  [217] = {.lex_state = 4, .external_lex_state = 7},
  [218] = {.lex_state = 4, .external_lex_state = 7},
  [219] = {.lex_state = 4, .external_lex_state = 7},
  [220] = {.lex_state = 4, .external_lex_state = 7},
  [221] = {.lex_state = 4, .external_lex_state = 7},
  [222] = {.lex_state = 4, .external_lex_state = 7},
  [223] = {.lex_state = 4, .external_lex_state = 7},
  [224] = {.lex_state = 4, .external_lex_state = 7},
  [225] = {.lex_state = 4, .external_lex_state = 7},
  [226] = {.lex_state = 4, .external_lex_state = 7},
  [227] = {.lex_state = 4, .external_lex_state = 7},
  [228] = {.lex_state = 4, .external_lex_state = 7},
  [229] = {.lex_state = 4, .external_lex_state = 7},
  [230] = {.lex_state = 4, .external_lex_state = 7},
  [231] = {.lex_state = 4, .external_lex_state = 7},
  [232] = {.lex_state = 4, .external_lex_state = 7},
  [233] = {.lex_state = 4, .external_lex_state = 7},
  [234] = {.lex_state = 4, .external_lex_state = 7},
  [235] = {.lex_state = 4, .external_lex_state = 7},
  [236] = {.lex_state = 4, .external_lex_state = 7},
  [237] = {.lex_state = 4, .external_lex_state = 7},
  [238] = {.lex_state = 4, .external_lex_state = 7},
  [239] = {.lex_state = 4, .external_lex_state = 7},
  [240] = {.lex_state = 4, .external_lex_state = 7},
  [241] = {.lex_state = 4, .external_lex_state = 7},
  [242] = {.lex_state = 4, .external_lex_state = 7},
  [243] = {.lex_state = 4, .external_lex_state = 7},
  [244] = {.lex_state = 4, .external_lex_state = 7},
  [245] = {.lex_state = 4, .external_lex_state = 7},
  [246] = {.lex_state = 4, .external_lex_state = 7},
  [247] = {.lex_state = 4, .external_lex_state = 7},
  [248] = {.lex_state = 4, .external_lex_state = 7},
  [249] = {.lex_state = 4, .external_lex_state = 7},
  [250] = {.lex_state = 4, .external_lex_state = 7},
  [251] = {.lex_state = 4, .external_lex_state = 7},
  [252] = {.lex_state = 4, .external_lex_state = 7},
  [253] = {.lex_state = 4, .external_lex_state = 7},
  [254] = {.lex_state = 4, .external_lex_state = 7},
  [255] = {.lex_state = 4, .external_lex_state = 7},
  [256] = {.lex_state = 4, .external_lex_state = 7},
  [257] = {.lex_state = 4, .external_lex_state = 7},
  [258] = {.lex_state = 4, .external_lex_state = 7},
  [259] = {.lex_state = 4, .external_lex_state = 7},
  [260] = {.lex_state = 4, .external_lex_state = 7},
  [261] = {.lex_state = 4, .external_lex_state = 7},
  [262] = {.lex_state = 4, .external_lex_state = 7},
  [263] = {.lex_state = 4, .external_lex_state = 7},
  [264] = {.lex_state = 4, .external_lex_state = 7},
  [265] = {.lex_state = 4, .external_lex_state = 7},
  [266] = {.lex_state = 4, .external_lex_state = 7},
  [267] = {.lex_state = 4, .external_lex_state = 7},
  [268] = {.lex_state = 6, .external_lex_state = 13},
  [269] = {.lex_state = 6, .external_lex_state = 13},
  [270] = {.lex_state = 6, .external_lex_state = 13},
  [271] = {.lex_state = 6, .external_lex_state = 13},
  [272] = {.lex_state = 6, .external_lex_state = 13},
  [273] = {.lex_state = 6, .external_lex_state = 13},
  [274] = {.lex_state = 6, .external_lex_state = 13},
  [275] = {.lex_state = 6, .external_lex_state = 13},
  [276] = {.lex_state = 6, .external_lex_state = 13},
  [277] = {.lex_state = 6, .external_lex_state = 13},
  [278] = {.lex_state = 6, .external_lex_state = 13},
  [279] = {.lex_state = 6, .external_lex_state = 13},
  [280] = {.lex_state = 6, .external_lex_state = 13},
  [281] = {.lex_state = 6, .external_lex_state = 13},
  [282] = {.lex_state = 6, .external_lex_state = 13},
  [283] = {.lex_state = 6, .external_lex_state = 13},
  [284] = {.lex_state = 6, .external_lex_state = 13},
  [285] = {.lex_state = 6, .external_lex_state = 13},
  [286] = {.lex_state = 6, .external_lex_state = 13},
  [287] = {.lex_state = 6, .external_lex_state = 13},
  [288] = {.lex_state = 6, .external_lex_state = 13},
  [289] = {.lex_state = 6, .external_lex_state = 13},
  [290] = {.lex_state = 6, .external_lex_state = 13},
  [291] = {.lex_state = 6, .external_lex_state = 13},
  [292] = {.lex_state = 6, .external_lex_state = 13},
  [293] = {.lex_state = 6, .external_lex_state = 13},
  [294] = {.lex_state = 6, .external_lex_state = 13},
  [295] = {.lex_state = 6, .external_lex_state = 13},
  [296] = {.lex_state = 6, .external_lex_state = 13},
  [297] = {.lex_state = 6, .external_lex_state = 13},
  [298] = {.lex_state = 6, .external_lex_state = 13},
  [299] = {.lex_state = 6, .external_lex_state = 13},
  [300] = {.lex_state = 6, .external_lex_state = 13},
  [301] = {.lex_state = 6, .external_lex_state = 13},
  [302] = {.lex_state = 6, .external_lex_state = 13},
  [303] = {.lex_state = 6, .external_lex_state = 13},
  [304] = {.lex_state = 6, .external_lex_state = 13},
  [305] = {.lex_state = 6, .external_lex_state = 13},
  [306] = {.lex_state = 6, .external_lex_state = 13},
  [307] = {.lex_state = 6, .external_lex_state = 13},
  [308] = {.lex_state = 6, .external_lex_state = 13},
  [309] = {.lex_state = 6, .external_lex_state = 13},
  [310] = {.lex_state = 6, .external_lex_state = 13},
  [311] = {.lex_state = 6, .external_lex_state = 13},
  [312] = {.lex_state = 6, .external_lex_state = 13},
  [313] = {.lex_state = 6, .external_lex_state = 13},
  [314] = {.lex_state = 6, .external_lex_state = 13},
  [315] = {.lex_state = 6, .external_lex_state = 13},
  [316] = {.lex_state = 6, .external_lex_state = 13},
  [317] = {.lex_state = 6, .external_lex_state = 14},
  [318] = {.lex_state = 6, .external_lex_state = 14},
  [319] = {.lex_state = 135, .external_lex_state = 14},
  [320] = {.lex_state = 6, .external_lex_state = 14},
  [321] = {.lex_state = 6, .external_lex_state = 14},
  [322] = {.lex_state = 6, .external_lex_state = 14},
  [323] = {.lex_state = 6, .external_lex_state = 14},
  [324] = {.lex_state = 6, .external_lex_state = 14},
  [325] = {.lex_state = 6, .external_lex_state = 14},
  [326] = {.lex_state = 6, .external_lex_state = 14},
  [327] = {.lex_state = 6, .external_lex_state = 14},
  [328] = {.lex_state = 6, .external_lex_state = 14},
  [329] = {.lex_state = 6, .external_lex_state = 14},
  [330] = {.lex_state = 6, .external_lex_state = 14},
  [331] = {.lex_state = 6, .external_lex_state = 14},
  [332] = {.lex_state = 6, .external_lex_state = 14},
  [333] = {.lex_state = 6, .external_lex_state = 14},
  [334] = {.lex_state = 6, .external_lex_state = 14},
  [335] = {.lex_state = 6, .external_lex_state = 14},
  [336] = {.lex_state = 6, .external_lex_state = 14},
  [337] = {.lex_state = 6, .external_lex_state = 14},
  [338] = {.lex_state = 6, .external_lex_state = 14},
  [339] = {.lex_state = 6, .external_lex_state = 14},
  [340] = {.lex_state = 6, .external_lex_state = 14},
  [341] = {.lex_state = 6, .external_lex_state = 14},
  [342] = {.lex_state = 6, .external_lex_state = 14},
  [343] = {.lex_state = 6, .external_lex_state = 14},
  [344] = {.lex_state = 135, .external_lex_state = 14},
  [345] = {.lex_state = 6, .external_lex_state = 14},
  [346] = {.lex_state = 135, .external_lex_state = 14},
  [347] = {.lex_state = 6, .external_lex_state = 14},
  [348] = {.lex_state = 135, .external_lex_state = 14},
  [349] = {.lex_state = 6, .external_lex_state = 14},
  [350] = {.lex_state = 6, .external_lex_state = 14},
  [351] = {.lex_state = 1, .external_lex_state = 7},
  [352] = {.lex_state = 6, .external_lex_state = 14},
  [353] = {.lex_state = 6, .external_lex_state = 14},
  [354] = {.lex_state = 6, .external_lex_state = 14},
  [355] = {.lex_state = 135, .external_lex_state = 14},
  [356] = {.lex_state = 6, .external_lex_state = 14},
  [357] = {.lex_state = 6, .external_lex_state = 14},
  [358] = {.lex_state = 6, .external_lex_state = 14},
  [359] = {.lex_state = 1, .external_lex_state = 7},
  [360] = {.lex_state = 6, .external_lex_state = 14},
  [361] = {.lex_state = 6, .external_lex_state = 14},
  [362] = {.lex_state = 6, .external_lex_state = 15},
  [363] = {.lex_state = 6, .external_lex_state = 15},
  [364] = {.lex_state = 6, .external_lex_state = 15},
  [365] = {.lex_state = 6, .external_lex_state = 15},
  [366] = {.lex_state = 6, .external_lex_state = 15},
  [367] = {.lex_state = 6, .external_lex_state = 15},
  [368] = {.lex_state = 4, .external_lex_state = 7},
  [369] = {.lex_state = 55, .external_lex_state = 6},
  [370] = {.lex_state = 55, .external_lex_state = 6},
  [371] = {.lex_state = 55, .external_lex_state = 6},
  [372] = {.lex_state = 55, .external_lex_state = 6},
  [373] = {.lex_state = 55, .external_lex_state = 6},
  [374] = {.lex_state = 58, .external_lex_state = 4},
  [375] = {.lex_state = 55, .external_lex_state = 6},
  [376] = {.lex_state = 55, .external_lex_state = 6},
  [377] = {.lex_state = 55, .external_lex_state = 6},
  [378] = {.lex_state = 58, .external_lex_state = 4},
  [379] = {.lex_state = 58, .external_lex_state = 4},
  [380] = {.lex_state = 55, .external_lex_state = 6},
  [381] = {.lex_state = 55, .external_lex_state = 6},
  [382] = {.lex_state = 55, .external_lex_state = 6},
  [383] = {.lex_state = 55, .external_lex_state = 6},
  [384] = {.lex_state = 55, .external_lex_state = 6},
  [385] = {.lex_state = 55, .external_lex_state = 4},
  [386] = {.lex_state = 55, .external_lex_state = 4},
  [387] = {.lex_state = 58, .external_lex_state = 4},
  [388] = {.lex_state = 55, .external_lex_state = 4},
  [389] = {.lex_state = 58, .external_lex_state = 4},
  [390] = {.lex_state = 55, .external_lex_state = 4},
  [391] = {.lex_state = 55, .external_lex_state = 4},
  [392] = {.lex_state = 55, .external_lex_state = 4},
  [393] = {.lex_state = 55, .external_lex_state = 4},
  [394] = {.lex_state = 60, .external_lex_state = 5},
  [395] = {.lex_state = 58, .external_lex_state = 4},
  [396] = {.lex_state = 58, .external_lex_state = 4},
  [397] = {.lex_state = 58, .external_lex_state = 4},
  [398] = {.lex_state = 58, .external_lex_state = 4},
  [399] = {.lex_state = 61, .external_lex_state = 16},
  [400] = {.lex_state = 61, .external_lex_state = 16},
  [401] = {.lex_state = 61, .external_lex_state = 16},
  [402] = {.lex_state = 58, .external_lex_state = 4},
  [403] = {.lex_state = 58, .external_lex_state = 4},
  [404] = {.lex_state = 58, .external_lex_state = 4},
  [405] = {.lex_state = 58, .external_lex_state = 4},
  [406] = {.lex_state = 58, .external_lex_state = 4},
  [407] = {.lex_state = 58, .external_lex_state = 4},
  [408] = {.lex_state = 58, .external_lex_state = 4},
  [409] = {.lex_state = 58, .external_lex_state = 4},
  [410] = {.lex_state = 61, .external_lex_state = 16},
  [411] = {.lex_state = 61, .external_lex_state = 16},
  [412] = {.lex_state = 61, .external_lex_state = 16},
  [413] = {.lex_state = 58, .external_lex_state = 4},
  [414] = {.lex_state = 63, .external_lex_state = 4},
  [415] = {.lex_state = 63, .external_lex_state = 4},
  [416] = {.lex_state = 61, .external_lex_state = 5},
  [417] = {.lex_state = 61, .external_lex_state = 5},
  [418] = {.lex_state = 61, .external_lex_state = 5},
  [419] = {.lex_state = 2, .external_lex_state = 7},
  [420] = {.lex_state = 0, .external_lex_state = 4},
  [421] = {.lex_state = 2, .external_lex_state = 7},
  [422] = {.lex_state = 2, .external_lex_state = 7},
  [423] = {.lex_state = 2, .external_lex_state = 7},
  [424] = {.lex_state = 58, .external_lex_state = 7},
  [425] = {.lex_state = 2, .external_lex_state = 7},
  [426] = {.lex_state = 2, .external_lex_state = 7},
  [427] = {.lex_state = 2, .external_lex_state = 7},
  [428] = {.lex_state = 0, .external_lex_state = 4},
  [429] = {.lex_state = 61, .external_lex_state = 5},
  [430] = {.lex_state = 58, .external_lex_state = 7},
  [431] = {.lex_state = 58, .external_lex_state = 7},
  [432] = {.lex_state = 61, .external_lex_state = 5},
  [433] = {.lex_state = 61, .external_lex_state = 5},
  [434] = {.lex_state = 61, .external_lex_state = 5},
  [435] = {.lex_state = 61, .external_lex_state = 5},
  [436] = {.lex_state = 61, .external_lex_state = 5},
  [437] = {.lex_state = 61, .external_lex_state = 5},
  [438] = {.lex_state = 63, .external_lex_state = 4},
  [439] = {.lex_state = 61, .external_lex_state = 5},
  [440] = {.lex_state = 61, .external_lex_state = 5},
  [441] = {.lex_state = 61, .external_lex_state = 5},
  [442] = {.lex_state = 61, .external_lex_state = 5},
  [443] = {.lex_state = 61, .external_lex_state = 5},
  [444] = {.lex_state = 2, .external_lex_state = 7},
  [445] = {.lex_state = 63, .external_lex_state = 4},
  [446] = {.lex_state = 0, .external_lex_state = 4},
  [447] = {.lex_state = 0, .external_lex_state = 4},
  [448] = {.lex_state = 0, .external_lex_state = 4},
  [449] = {.lex_state = 0, .external_lex_state = 17},
  [450] = {.lex_state = 0, .external_lex_state = 4},
  [451] = {.lex_state = 0, .external_lex_state = 4},
  [452] = {.lex_state = 7, .external_lex_state = 7},
  [453] = {.lex_state = 0, .external_lex_state = 4},
  [454] = {.lex_state = 0, .external_lex_state = 4},
  [455] = {.lex_state = 0, .external_lex_state = 4},
  [456] = {.lex_state = 0, .external_lex_state = 4},
  [457] = {.lex_state = 0, .external_lex_state = 4},
  [458] = {.lex_state = 0, .external_lex_state = 4},
  [459] = {.lex_state = 7, .external_lex_state = 7},
  [460] = {.lex_state = 58, .external_lex_state = 7},
  [461] = {.lex_state = 0, .external_lex_state = 4},
  [462] = {.lex_state = 58, .external_lex_state = 7},
  [463] = {.lex_state = 58, .external_lex_state = 7},
  [464] = {.lex_state = 7, .external_lex_state = 7},
  [465] = {.lex_state = 0, .external_lex_state = 4},
  [466] = {.lex_state = 0, .external_lex_state = 4},
  [467] = {.lex_state = 7, .external_lex_state = 7},
  [468] = {.lex_state = 0, .external_lex_state = 17},
  [469] = {.lex_state = 0, .external_lex_state = 4},
  [470] = {.lex_state = 7, .external_lex_state = 7},
  [471] = {.lex_state = 0, .external_lex_state = 4},
  [472] = {.lex_state = 0, .external_lex_state = 17},
  [473] = {.lex_state = 0, .external_lex_state = 4},
  [474] = {.lex_state = 7, .external_lex_state = 7},
  [475] = {.lex_state = 0, .external_lex_state = 4},
  [476] = {.lex_state = 7, .external_lex_state = 7},
  [477] = {.lex_state = 0, .external_lex_state = 4},
  [478] = {.lex_state = 7, .external_lex_state = 7},
  [479] = {.lex_state = 0, .external_lex_state = 4},
  [480] = {.lex_state = 0, .external_lex_state = 4},
  [481] = {.lex_state = 0, .external_lex_state = 17},
  [482] = {.lex_state = 0, .external_lex_state = 4},
  [483] = {.lex_state = 61, .external_lex_state = 5},
  [484] = {.lex_state = 0, .external_lex_state = 17},
  [485] = {.lex_state = 0, .external_lex_state = 4},
  [486] = {.lex_state = 0, .external_lex_state = 4},
  [487] = {.lex_state = 0, .external_lex_state = 4},
  [488] = {.lex_state = 0, .external_lex_state = 4},
  [489] = {.lex_state = 0, .external_lex_state = 4},
  [490] = {.lex_state = 0, .external_lex_state = 4},
  [491] = {.lex_state = 0, .external_lex_state = 4},
  [492] = {.lex_state = 0, .external_lex_state = 4},
  [493] = {.lex_state = 0, .external_lex_state = 4},
  [494] = {.lex_state = 7, .external_lex_state = 7},
  [495] = {.lex_state = 58, .external_lex_state = 7},
  [496] = {.lex_state = 61, .external_lex_state = 7},
  [497] = {.lex_state = 0, .external_lex_state = 17},
  [498] = {.lex_state = 58, .external_lex_state = 7},
  [499] = {.lex_state = 61, .external_lex_state = 7},
  [500] = {.lex_state = 0, .external_lex_state = 4},
  [501] = {.lex_state = 58, .external_lex_state = 7},
  [502] = {.lex_state = 58, .external_lex_state = 7},
  [503] = {.lex_state = 58, .external_lex_state = 7},
  [504] = {.lex_state = 8, .external_lex_state = 7},
  [505] = {.lex_state = 0, .external_lex_state = 17},
  [506] = {.lex_state = 0, .external_lex_state = 17},
  [507] = {.lex_state = 8, .external_lex_state = 7},
  [508] = {.lex_state = 58, .external_lex_state = 7},
  [509] = {.lex_state = 61, .external_lex_state = 7},
  [510] = {.lex_state = 8, .external_lex_state = 7},
  [511] = {.lex_state = 24, .external_lex_state = 7},
  [512] = {.lex_state = 61, .external_lex_state = 7},
  [513] = {.lex_state = 61, .external_lex_state = 7},
  [514] = {.lex_state = 8, .external_lex_state = 7},
  [515] = {.lex_state = 3, .external_lex_state = 7},
  [516] = {.lex_state = 24, .external_lex_state = 7},
  [517] = {.lex_state = 24, .external_lex_state = 7},
  [518] = {.lex_state = 24, .external_lex_state = 7},
  [519] = {.lex_state = 0, .external_lex_state = 18},
  [520] = {.lex_state = 24, .external_lex_state = 7},
  [521] = {.lex_state = 0, .external_lex_state = 7},
  [522] = {.lex_state = 0, .external_lex_state = 18},
  [523] = {.lex_state = 0, .external_lex_state = 7},
  [524] = {.lex_state = 63, .external_lex_state = 7},
  [525] = {.lex_state = 0, .external_lex_state = 7},
  [526] = {.lex_state = 0, .external_lex_state = 7},
  [527] = {.lex_state = 8, .external_lex_state = 7},
  [528] = {.lex_state = 8, .external_lex_state = 7},
  [529] = {.lex_state = 8, .external_lex_state = 7},
  [530] = {.lex_state = 8, .external_lex_state = 7},
  [531] = {.lex_state = 8, .external_lex_state = 7},
  [532] = {.lex_state = 135, .external_lex_state = 7},
  [533] = {.lex_state = 135, .external_lex_state = 7},
  [534] = {.lex_state = 0, .external_lex_state = 7},
  [535] = {.lex_state = 8, .external_lex_state = 7},
  [536] = {.lex_state = 0, .external_lex_state = 7},
  [537] = {.lex_state = 0, .external_lex_state = 7},
  [538] = {.lex_state = 0, .external_lex_state = 7},
  [539] = {.lex_state = 0, .external_lex_state = 7},
  [540] = {.lex_state = 0, .external_lex_state = 7},
  [541] = {.lex_state = 0, .external_lex_state = 7},
  [542] = {.lex_state = 0, .external_lex_state = 7},
  [543] = {.lex_state = 6, .external_lex_state = 7},
  [544] = {.lex_state = 0, .external_lex_state = 7},
  [545] = {.lex_state = 8, .external_lex_state = 7},
  [546] = {.lex_state = 0, .external_lex_state = 7},
  [547] = {.lex_state = 63, .external_lex_state = 7},
  [548] = {.lex_state = 0, .external_lex_state = 7},
  [549] = {.lex_state = 0, .external_lex_state = 12},
  [550] = {.lex_state = 0, .external_lex_state = 7},
  [551] = {.lex_state = 0, .external_lex_state = 7},
  [552] = {.lex_state = 63, .external_lex_state = 7},
  [553] = {.lex_state = 0, .external_lex_state = 7},
  [554] = {.lex_state = 0, .external_lex_state = 12},
  [555] = {.lex_state = 63, .external_lex_state = 7},
  [556] = {.lex_state = 6, .external_lex_state = 7},
  [557] = {.lex_state = 0, .external_lex_state = 7},
  [558] = {.lex_state = 0, .external_lex_state = 7},
  [559] = {.lex_state = 0, .external_lex_state = 7},
  [560] = {.lex_state = 63, .external_lex_state = 7},
  [561] = {.lex_state = 0, .external_lex_state = 7},
  [562] = {.lex_state = 0, .external_lex_state = 7},
  [563] = {.lex_state = 135, .external_lex_state = 7},
  [564] = {.lex_state = 0, .external_lex_state = 7},
  [565] = {.lex_state = 0, .external_lex_state = 12},
  [566] = {.lex_state = 0, .external_lex_state = 7},
  [567] = {.lex_state = 0, .external_lex_state = 7},
  [568] = {.lex_state = 0, .external_lex_state = 7},
  [569] = {.lex_state = 0, .external_lex_state = 7},
  [570] = {.lex_state = 0, .external_lex_state = 7},
  [571] = {.lex_state = 0, .external_lex_state = 7},
  [572] = {.lex_state = 0, .external_lex_state = 7},
  [573] = {.lex_state = 0, .external_lex_state = 7},
  [574] = {.lex_state = 63, .external_lex_state = 7},
  [575] = {.lex_state = 135, .external_lex_state = 7},
  [576] = {.lex_state = 0, .external_lex_state = 7},
  [577] = {.lex_state = 0, .external_lex_state = 7},
  [578] = {.lex_state = 63, .external_lex_state = 7},
  [579] = {.lex_state = 0, .external_lex_state = 7},
  [580] = {.lex_state = 0, .external_lex_state = 7},
  [581] = {.lex_state = 0, .external_lex_state = 7},
  [582] = {.lex_state = 0, .external_lex_state = 7},
  [583] = {.lex_state = 0, .external_lex_state = 7},
  [584] = {.lex_state = 0, .external_lex_state = 7},
  [585] = {.lex_state = 8, .external_lex_state = 7},
  [586] = {.lex_state = 0, .external_lex_state = 12},
  [587] = {.lex_state = 0, .external_lex_state = 7},
  [588] = {.lex_state = 0, .external_lex_state = 7},
  [589] = {.lex_state = 0, .external_lex_state = 7},
  [590] = {.lex_state = 0, .external_lex_state = 7},
  [591] = {.lex_state = 0, .external_lex_state = 7},
  [592] = {.lex_state = 0, .external_lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
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
    [sym_modulo_operator] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_octal] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [aux_sym_decimal_token1] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
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
    [sym__operator_separator] = ACTIONS(1),
    [sym__line_separator] = ACTIONS(1),
    [sym__data_separator] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
    [sym_preprocessor] = ACTIONS(1),
    [sym_division_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(536),
    [sym__statement] = STATE(2),
    [sym__comment] = STATE(496),
    [sym_directive] = STATE(420),
    [sym__macro_directive] = STATE(490),
    [sym__integer_directive] = STATE(454),
    [sym_integer_mnemonic] = STATE(524),
    [sym__float_directive] = STATE(471),
    [sym_float_mnemonic] = STATE(574),
    [sym__string_directive] = STATE(453),
    [sym_string_mnemonic] = STATE(560),
    [sym__control_directive] = STATE(456),
    [sym_control_mnemonic] = STATE(445),
    [sym_instruction] = STATE(417),
    [sym__label] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_CR] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(7),
    [sym_macro_mnemonic] = ACTIONS(9),
    [anon_sym_DOTbyte] = ACTIONS(11),
    [anon_sym_DOT2byte] = ACTIONS(11),
    [anon_sym_DOTshort] = ACTIONS(11),
    [anon_sym_DOThalf] = ACTIONS(11),
    [anon_sym_DOThword] = ACTIONS(11),
    [anon_sym_DOT4byte] = ACTIONS(11),
    [anon_sym_DOTword] = ACTIONS(11),
    [anon_sym_DOTint] = ACTIONS(11),
    [anon_sym_DOT8byte] = ACTIONS(11),
    [anon_sym_DOTdword] = ACTIONS(11),
    [anon_sym_DOTlong] = ACTIONS(11),
    [anon_sym_DOTquad] = ACTIONS(11),
    [anon_sym_DOTcomm] = ACTIONS(11),
    [anon_sym_DOTlcomm] = ACTIONS(11),
    [anon_sym_DOTalign] = ACTIONS(11),
    [anon_sym_DOTbalign] = ACTIONS(11),
    [anon_sym_DOTp2align] = ACTIONS(11),
    [anon_sym_DOTsleb128] = ACTIONS(11),
    [anon_sym_DOTuleb128] = ACTIONS(11),
    [anon_sym_DOTdtprelword] = ACTIONS(11),
    [anon_sym_DOTdtpreldword] = ACTIONS(11),
    [anon_sym_DOTskip] = ACTIONS(11),
    [anon_sym_DOTspace] = ACTIONS(11),
    [anon_sym_DOTfloat] = ACTIONS(13),
    [anon_sym_DOTdouble] = ACTIONS(13),
    [anon_sym_DOTsingle] = ACTIONS(13),
    [anon_sym_DOTasciz] = ACTIONS(15),
    [anon_sym_DOTascii] = ACTIONS(15),
    [anon_sym_DOTasciiz] = ACTIONS(15),
    [anon_sym_DOTstring] = ACTIONS(15),
    [anon_sym_DOTstringz] = ACTIONS(15),
    [aux_sym_control_mnemonic_token1] = ACTIONS(17),
    [sym_opcode] = ACTIONS(19),
    [sym_local_label] = ACTIONS(21),
    [sym_global_label] = ACTIONS(21),
    [sym_global_numeric_label] = ACTIONS(21),
    [sym_local_numeric_label] = ACTIONS(21),
    [sym_line_comment] = ACTIONS(23),
    [sym_block_comment] = ACTIONS(25),
    [sym_preprocessor] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(9), 1,
      sym_macro_mnemonic,
    ACTIONS(17), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(19), 1,
      sym_opcode,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_line_comment,
    STATE(416), 1,
      sym_instruction,
    STATE(428), 1,
      sym_directive,
    STATE(445), 1,
      sym_control_mnemonic,
    STATE(453), 1,
      sym__string_directive,
    STATE(454), 1,
      sym__integer_directive,
    STATE(456), 1,
      sym__control_directive,
    STATE(471), 1,
      sym__float_directive,
    STATE(490), 1,
      sym__macro_directive,
    STATE(509), 1,
      sym__comment,
    STATE(524), 1,
      sym_integer_mnemonic,
    STATE(560), 1,
      sym_string_mnemonic,
    STATE(574), 1,
      sym_float_mnemonic,
    ACTIONS(33), 2,
      sym_block_comment,
      sym_preprocessor,
    ACTIONS(13), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    ACTIONS(29), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(3), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
    ACTIONS(21), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(15), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(11), 23,
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
  [109] = 24,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      sym_macro_mnemonic,
    ACTIONS(52), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(55), 1,
      sym_opcode,
    ACTIONS(61), 1,
      sym_line_comment,
    STATE(445), 1,
      sym_control_mnemonic,
    STATE(453), 1,
      sym__string_directive,
    STATE(454), 1,
      sym__integer_directive,
    STATE(456), 1,
      sym__control_directive,
    STATE(471), 1,
      sym__float_directive,
    STATE(483), 1,
      sym_instruction,
    STATE(490), 1,
      sym__macro_directive,
    STATE(500), 1,
      sym_directive,
    STATE(512), 1,
      sym__comment,
    STATE(524), 1,
      sym_integer_mnemonic,
    STATE(560), 1,
      sym_string_mnemonic,
    STATE(574), 1,
      sym_float_mnemonic,
    ACTIONS(64), 2,
      sym_block_comment,
      sym_preprocessor,
    ACTIONS(37), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(46), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    STATE(3), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
    ACTIONS(58), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(49), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(43), 23,
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
  [218] = 3,
    ACTIONS(71), 1,
      sym__line_separator,
    ACTIONS(67), 4,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      ts_builtin_sym_end,
    ACTIONS(69), 41,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [271] = 3,
    ACTIONS(71), 1,
      sym__line_separator,
    ACTIONS(67), 4,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      ts_builtin_sym_end,
    ACTIONS(69), 41,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [324] = 2,
    ACTIONS(73), 4,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      ts_builtin_sym_end,
    ACTIONS(75), 41,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [374] = 4,
    ACTIONS(77), 1,
      anon_sym_CR,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(67), 4,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      ts_builtin_sym_end,
    ACTIONS(69), 39,
      anon_sym_SEMI,
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
  [428] = 2,
    ACTIONS(67), 4,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      ts_builtin_sym_end,
    ACTIONS(69), 41,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [478] = 2,
    ACTIONS(83), 4,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      ts_builtin_sym_end,
    ACTIONS(85), 41,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [528] = 2,
    ACTIONS(87), 4,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      ts_builtin_sym_end,
    ACTIONS(89), 41,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [578] = 3,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(87), 4,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      ts_builtin_sym_end,
    ACTIONS(89), 40,
      anon_sym_SEMI,
      anon_sym_CR,
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
  [630] = 4,
    ACTIONS(77), 1,
      anon_sym_CR,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(67), 4,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      ts_builtin_sym_end,
    ACTIONS(69), 39,
      anon_sym_SEMI,
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
  [684] = 19,
    ACTIONS(96), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      aux_sym__whitespace_token1,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      aux_sym_section_type_token1,
    ACTIONS(104), 1,
      aux_sym_option_flag_token1,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(122), 1,
      sym_block_comment,
    STATE(363), 1,
      sym__left_expression,
    STATE(387), 1,
      sym_control_operands,
    ACTIONS(94), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
    ACTIONS(106), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(378), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(110), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(151), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [763] = 19,
    ACTIONS(129), 1,
      aux_sym__whitespace_token1,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(151), 1,
      sym_block_comment,
    STATE(365), 1,
      sym__left_expression,
    STATE(432), 1,
      sym_operands,
    STATE(437), 1,
      sym__call_expression,
    ACTIONS(125), 2,
      sym_line_comment,
      ts_builtin_sym_end,
    ACTIONS(133), 2,
      sym_modulo_operator,
      sym_float,
    STATE(401), 2,
      sym__operand,
      sym_string,
    ACTIONS(127), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(135), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(139), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(123), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [842] = 17,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    STATE(365), 1,
      sym__left_expression,
    STATE(432), 1,
      sym_operands,
    STATE(433), 1,
      sym__call_expression,
    ACTIONS(127), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(133), 2,
      sym_modulo_operator,
      sym_float,
    STATE(401), 2,
      sym__operand,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(125), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(139), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(123), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [916] = 17,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    STATE(365), 1,
      sym__left_expression,
    STATE(441), 1,
      sym_operands,
    STATE(442), 1,
      sym__call_expression,
    ACTIONS(133), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(156), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(401), 2,
      sym__operand,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(154), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(139), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(123), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [990] = 16,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(172), 1,
      sym_float,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      sym_macro_variable,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    STATE(52), 1,
      sym_address,
    STATE(367), 1,
      sym__left_expression,
    STATE(381), 1,
      sym__float_operand,
    ACTIONS(164), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(158), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(160), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(168), 5,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(360), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [1061] = 15,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(184), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(188), 2,
      sym_modulo_operator,
      sym_float,
    STATE(410), 2,
      sym__operand,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(182), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(139), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(123), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1129] = 15,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(188), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(192), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(410), 2,
      sym__operand,
      sym_string,
    ACTIONS(135), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(190), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(139), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(123), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1197] = 12,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(196), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(158), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(160), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(200), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(48), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1258] = 18,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      aux_sym_section_type_token1,
    ACTIONS(214), 1,
      aux_sym_option_flag_token1,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    STATE(363), 1,
      sym__left_expression,
    STATE(387), 1,
      sym_control_operands,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(218), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(378), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    STATE(151), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1330] = 14,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(239), 1,
      sym__data_separator,
    ACTIONS(241), 1,
      sym_line_comment,
    ACTIONS(244), 1,
      sym_block_comment,
    ACTIONS(247), 1,
      sym_division_operator,
    STATE(370), 1,
      aux_sym_integer_operands_repeat1,
    STATE(382), 1,
      aux_sym_integer_operands_repeat2,
    STATE(549), 1,
      sym__comment,
    ACTIONS(224), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(230), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(226), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(235), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [1394] = 18,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      aux_sym_section_type_token1,
    ACTIONS(214), 1,
      aux_sym_option_flag_token1,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    STATE(363), 1,
      sym__left_expression,
    STATE(389), 1,
      sym_control_operands,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(218), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(378), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    STATE(151), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1466] = 20,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    ACTIONS(277), 1,
      sym_block_comment,
    STATE(312), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(583), 1,
      sym_operands,
    ACTIONS(253), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(261), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(263), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(271), 2,
      sym_register,
      sym_macro_variable,
    STATE(481), 2,
      sym__operand,
      sym_string,
    STATE(314), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1541] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      aux_sym_section_type_token1,
    ACTIONS(214), 1,
      aux_sym_option_flag_token1,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(218), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(110), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(413), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    STATE(151), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1610] = 18,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      sym_block_comment,
    STATE(366), 1,
      sym__left_expression,
    STATE(577), 1,
      sym_operands,
    ACTIONS(253), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(283), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(481), 2,
      sym__operand,
      sym_string,
    ACTIONS(281), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(280), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1681] = 18,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    ACTIONS(277), 1,
      sym_block_comment,
    STATE(366), 1,
      sym__left_expression,
    STATE(592), 1,
      sym_operands,
    ACTIONS(253), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(283), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(481), 2,
      sym__operand,
      sym_string,
    ACTIONS(281), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(280), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1752] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(288), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(551), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(289), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(291), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(293), 2,
      sym_register,
      sym_macro_variable,
    STATE(468), 2,
      sym__operand,
      sym_string,
    STATE(289), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1824] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(275), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(553), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(281), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(283), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(295), 2,
      sym_register,
      sym_macro_variable,
    STATE(468), 2,
      sym__operand,
      sym_string,
    STATE(280), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1896] = 16,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(182), 2,
      sym_block_comment,
      anon_sym_RPAREN,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(283), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(297), 2,
      sym_modulo_operator,
      sym_float,
    STATE(506), 2,
      sym__operand,
      sym_string,
    ACTIONS(281), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(280), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1962] = 16,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(190), 2,
      sym_block_comment,
      anon_sym_RPAREN,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(283), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(297), 2,
      sym_modulo_operator,
      sym_float,
    STATE(506), 2,
      sym__operand,
      sym_string,
    ACTIONS(281), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(280), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2028] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(283), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(297), 2,
      sym_modulo_operator,
      sym_float,
    STATE(506), 2,
      sym__operand,
      sym_string,
    ACTIONS(281), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(280), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2096] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(283), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(297), 2,
      sym_modulo_operator,
      sym_float,
    STATE(506), 2,
      sym__operand,
      sym_string,
    ACTIONS(281), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(280), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2164] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(316), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(523), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(299), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(301), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(303), 2,
      sym_register,
      sym_macro_variable,
    STATE(468), 2,
      sym__operand,
      sym_string,
    STATE(293), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2236] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(290), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(526), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(281), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(283), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(305), 2,
      sym_register,
      sym_macro_variable,
    STATE(468), 2,
      sym__operand,
      sym_string,
    STATE(280), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2308] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(316), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(539), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(303), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(307), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(309), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(468), 2,
      sym__operand,
      sym_string,
    STATE(297), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2380] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(294), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(542), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(281), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(283), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(311), 2,
      sym_register,
      sym_macro_variable,
    STATE(468), 2,
      sym__operand,
      sym_string,
    STATE(280), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2452] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(296), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(550), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(307), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(309), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(313), 2,
      sym_register,
      sym_macro_variable,
    STATE(468), 2,
      sym__operand,
      sym_string,
    STATE(297), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2524] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(298), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(521), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(281), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(283), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(315), 2,
      sym_register,
      sym_macro_variable,
    STATE(468), 2,
      sym__operand,
      sym_string,
    STATE(280), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2596] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(300), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(559), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(317), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(319), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(321), 2,
      sym_register,
      sym_macro_variable,
    STATE(468), 2,
      sym__operand,
      sym_string,
    STATE(301), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2668] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(303), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(562), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(281), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(283), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(323), 2,
      sym_register,
      sym_macro_variable,
    STATE(468), 2,
      sym__operand,
      sym_string,
    STATE(280), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2740] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(312), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(564), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(261), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(263), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(271), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    STATE(468), 2,
      sym__operand,
      sym_string,
    STATE(314), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2812] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(305), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(566), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(281), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(283), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(325), 2,
      sym_register,
      sym_macro_variable,
    STATE(468), 2,
      sym__operand,
      sym_string,
    STATE(280), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2884] = 19,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(304), 1,
      sym_symbol,
    STATE(366), 1,
      sym__left_expression,
    STATE(567), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(307), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(309), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(327), 2,
      sym_register,
      sym_macro_variable,
    STATE(468), 2,
      sym__operand,
      sym_string,
    STATE(297), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2956] = 2,
    ACTIONS(329), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(331), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [2993] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(188), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(337), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(410), 2,
      sym__operand,
      sym_string,
    ACTIONS(139), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(123), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3058] = 19,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(172), 1,
      sym_float,
    ACTIONS(176), 1,
      sym_macro_variable,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      sym__data_separator,
    STATE(52), 1,
      sym_address,
    STATE(367), 1,
      sym__left_expression,
    STATE(381), 1,
      sym__float_operand,
    STATE(565), 1,
      sym__comment,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(347), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(353), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(360), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [3129] = 6,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(355), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(357), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
    ACTIONS(235), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3174] = 6,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(359), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(361), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
    ACTIONS(235), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3219] = 6,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(363), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(365), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
    ACTIONS(235), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3264] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(283), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(297), 2,
      sym_modulo_operator,
      sym_float,
    STATE(506), 2,
      sym__operand,
      sym_string,
    ACTIONS(281), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(280), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3329] = 4,
    ACTIONS(373), 2,
      sym__operator_separator,
      sym_division_operator,
    ACTIONS(367), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(369), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
    ACTIONS(371), 19,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3370] = 2,
    ACTIONS(375), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(377), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3407] = 2,
    ACTIONS(379), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(381), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3444] = 2,
    ACTIONS(383), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(385), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3481] = 2,
    ACTIONS(387), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(389), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3518] = 2,
    ACTIONS(391), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(393), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3555] = 2,
    ACTIONS(395), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(397), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3592] = 2,
    ACTIONS(399), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(401), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3629] = 6,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(403), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(405), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
    ACTIONS(235), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3674] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3711] = 2,
    ACTIONS(411), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(413), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3748] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3785] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3822] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3859] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3896] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3933] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [3970] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4007] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4044] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4081] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4118] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4155] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4192] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4229] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4266] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4303] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4340] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4377] = 4,
    ACTIONS(375), 2,
      sym__operator_separator,
      sym_division_operator,
    ACTIONS(415), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(417), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
    ACTIONS(377), 19,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4418] = 2,
    ACTIONS(419), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(421), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4455] = 2,
    ACTIONS(423), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(425), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4492] = 2,
    ACTIONS(407), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4529] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      sym_macro_variable,
    STATE(355), 1,
      sym_address,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(431), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(533), 2,
      sym__string_operand,
      sym_string,
    ACTIONS(429), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(361), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [4594] = 16,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    ACTIONS(445), 1,
      sym__data_separator,
    ACTIONS(447), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      sym_block_comment,
    STATE(364), 1,
      sym__left_expression,
    STATE(554), 1,
      sym__comment,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(441), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(200), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(48), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4657] = 18,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(176), 1,
      sym_macro_variable,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      sym_float,
    STATE(52), 1,
      sym_address,
    STATE(367), 1,
      sym__left_expression,
    STATE(371), 1,
      sym__float_operand,
    STATE(393), 1,
      sym_float_operands,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(347), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(168), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(360), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [4724] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4758] = 2,
    ACTIONS(399), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(401), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4792] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(403), 5,
      sym__operand_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(235), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4834] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4868] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4902] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4936] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [4970] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5004] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5038] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5072] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5106] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5140] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5174] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5208] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5242] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5276] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5310] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5344] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5378] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5412] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5446] = 2,
    ACTIONS(407), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(409), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5480] = 12,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    STATE(364), 1,
      sym__left_expression,
    STATE(386), 1,
      sym_integer_operands,
    ACTIONS(455), 2,
      sym_block_comment,
      aux_sym__whitespace_token1,
    ACTIONS(196), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(457), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(22), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5534] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(176), 1,
      sym_macro_variable,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(459), 1,
      sym_float,
    STATE(52), 1,
      sym_address,
    STATE(367), 1,
      sym__left_expression,
    STATE(384), 1,
      sym__float_operand,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(347), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(168), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(360), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [5598] = 2,
    ACTIONS(419), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(421), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5632] = 2,
    ACTIONS(423), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(425), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5666] = 2,
    ACTIONS(411), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(413), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5700] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(172), 1,
      sym_float,
    ACTIONS(176), 1,
      sym_macro_variable,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym_address,
    STATE(367), 1,
      sym__left_expression,
    STATE(381), 1,
      sym__float_operand,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(347), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(168), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(360), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [5764] = 17,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(176), 1,
      sym_macro_variable,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(461), 1,
      sym_float,
    STATE(52), 1,
      sym_address,
    STATE(367), 1,
      sym__left_expression,
    STATE(376), 1,
      sym__float_operand,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(347), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(168), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(360), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [5828] = 2,
    ACTIONS(395), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(397), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5862] = 4,
    ACTIONS(465), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(375), 3,
      sym__operand_separator,
      sym__operator_separator,
      sym_division_operator,
    ACTIONS(463), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(377), 20,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5900] = 2,
    ACTIONS(329), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(331), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5934] = 2,
    ACTIONS(379), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(381), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [5968] = 2,
    ACTIONS(383), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(385), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6002] = 2,
    ACTIONS(387), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(389), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6036] = 2,
    ACTIONS(391), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(393), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6070] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(469), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(467), 5,
      sym__operand_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(235), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6112] = 2,
    ACTIONS(329), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(331), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6146] = 2,
    ACTIONS(399), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(401), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6180] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(405), 4,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
    ACTIONS(235), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6222] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6256] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6290] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6324] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6358] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6392] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6426] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6460] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6494] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6528] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6562] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6596] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6630] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6664] = 2,
    ACTIONS(387), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(389), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6698] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6732] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6766] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6800] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6834] = 2,
    ACTIONS(407), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(409), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6868] = 2,
    ACTIONS(375), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(377), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6902] = 2,
    ACTIONS(419), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(421), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6936] = 2,
    ACTIONS(423), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(425), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [6970] = 2,
    ACTIONS(411), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(413), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [7004] = 2,
    ACTIONS(375), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(377), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [7038] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    ACTIONS(473), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(475), 4,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
    ACTIONS(235), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [7080] = 2,
    ACTIONS(379), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(381), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [7114] = 2,
    ACTIONS(383), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(385), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [7148] = 2,
    ACTIONS(391), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(393), 22,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [7182] = 2,
    ACTIONS(395), 6,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(397), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [7216] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7273] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(311), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7330] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(313), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7387] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(315), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7444] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(292), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7501] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(302), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7558] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(98), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7615] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7672] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7729] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7786] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(83), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7843] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7900] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7957] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8014] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(66), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8071] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(67), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8128] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(68), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8185] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(69), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8242] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(70), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8299] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8356] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8413] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(73), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8470] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(74), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8527] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8584] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(76), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8641] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8698] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8755] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(60), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8812] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8869] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(102), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8926] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(103), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8983] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(104), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9040] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(105), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9097] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9154] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9211] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9268] = 13,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(441), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(489), 2,
      sym__data_separator,
      sym_block_comment,
    ACTIONS(200), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(48), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9323] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(91), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9380] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(92), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9437] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(93), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9494] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(94), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9551] = 13,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(489), 2,
      sym__data_separator,
      sym_block_comment,
    ACTIONS(493), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(491), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(49), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9606] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(354), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9663] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(357), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9720] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(358), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9777] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(318), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9834] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(320), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9891] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9948] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10005] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(323), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10062] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(324), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10119] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(325), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10176] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(326), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10233] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(310), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10290] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(332), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10347] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(333), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10404] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10461] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(339), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10518] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(340), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10575] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(341), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10632] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(343), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10689] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10746] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(128), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10803] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(129), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10860] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(130), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10917] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(131), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10974] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(132), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11031] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(133), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11088] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(134), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11145] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(135), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11202] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(136), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11259] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(137), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11316] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(138), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11373] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(139), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11430] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11487] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(141), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11544] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(142), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11601] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(143), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11658] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(144), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11715] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(145), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(503), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(501), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(126), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11772] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(95), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11829] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(96), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11886] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    STATE(386), 1,
      sym_integer_operands,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(505), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(457), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(22), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11943] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    STATE(390), 1,
      sym_integer_operands,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(505), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(457), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(22), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12000] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(97), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(479), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(477), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(89), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12057] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(282), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12114] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(283), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12171] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(284), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12228] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(285), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12285] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(286), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12342] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(287), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12399] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(291), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12456] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(295), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12513] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(299), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12570] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(306), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12627] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(307), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12684] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(308), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12741] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(309), 1,
      sym__right_expression,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(483), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(481), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(268), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12798] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__right_expression,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(499), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(497), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(353), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12855] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(509), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(507), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(57), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12909] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(513), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(511), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(330), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12963] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      sym_relocation_type,
    ACTIONS(112), 1,
      aux_sym_decimal_token1,
    ACTIONS(118), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(120), 1,
      aux_sym_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(517), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(515), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(122), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13017] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(521), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(519), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(342), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13071] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(525), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(523), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(347), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13125] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(529), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(527), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(50), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13179] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(493), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(491), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(49), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13233] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(533), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(531), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(349), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13287] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      sym_relocation_type,
    ACTIONS(202), 1,
      aux_sym_decimal_token1,
    ACTIONS(206), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(208), 1,
      aux_sym_symbol_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(439), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(441), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(200), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(48), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13341] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(537), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(535), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13395] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(135), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_relocation_type,
    ACTIONS(141), 1,
      aux_sym_decimal_token1,
    ACTIONS(147), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(149), 1,
      aux_sym_symbol_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(541), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(539), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(154), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13449] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      sym_relocation_type,
    ACTIONS(170), 1,
      aux_sym_decimal_token1,
    ACTIONS(178), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(180), 1,
      aux_sym_symbol_token1,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(367), 1,
      sym__left_expression,
    ACTIONS(345), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(545), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(543), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(356), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13503] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_DASH,
    ACTIONS(259), 1,
      sym_relocation_type,
    ACTIONS(265), 1,
      aux_sym_decimal_token1,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(275), 1,
      aux_sym_symbol_token1,
    STATE(366), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(549), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(547), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(281), 10,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13557] = 5,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 4,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13593] = 2,
    ACTIONS(397), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(395), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13623] = 2,
    ACTIONS(421), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(419), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13653] = 2,
    ACTIONS(425), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(423), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13683] = 2,
    ACTIONS(413), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(411), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13713] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13743] = 2,
    ACTIONS(401), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(399), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13773] = 3,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(373), 19,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13805] = 2,
    ACTIONS(377), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(375), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13835] = 2,
    ACTIONS(381), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(379), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13865] = 2,
    ACTIONS(385), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(383), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13895] = 2,
    ACTIONS(389), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(387), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13925] = 5,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(467), 4,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13961] = 2,
    ACTIONS(393), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(391), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [13991] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14021] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14051] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14081] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14111] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14141] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14171] = 3,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(373), 19,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14203] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 3,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_COMMA,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14241] = 3,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(373), 19,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14273] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14303] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14333] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 3,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_COMMA,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14371] = 3,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(373), 19,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14403] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14433] = 3,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(373), 19,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14465] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 3,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_COMMA,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14503] = 3,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(373), 19,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14535] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14565] = 3,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(373), 19,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14597] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 3,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_COMMA,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14635] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14665] = 3,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(373), 19,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14697] = 3,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(373), 19,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14729] = 3,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(373), 19,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14761] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14791] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14821] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14851] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14881] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14911] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14941] = 3,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(373), 19,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14973] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15003] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 3,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_COMMA,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15041] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 20,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15071] = 3,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(373), 19,
      sym__operand_separator,
      sym__operator_separator,
      sym_block_comment,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15103] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15139] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15169] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(395), 3,
      sym__operator_separator,
      sym_division_operator,
      aux_sym__string_directive_token1,
    ACTIONS(397), 19,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [15199] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15229] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15259] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15289] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15319] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15349] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15379] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15409] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(381), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(379), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15439] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(385), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(383), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15469] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(389), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(387), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15499] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(391), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15529] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15559] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15589] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15619] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(397), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(395), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15649] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15679] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(425), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(423), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15709] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(413), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(411), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15739] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(377), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(375), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15769] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15799] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15829] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15859] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15895] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15925] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(415), 1,
      aux_sym__string_directive_token1,
    ACTIONS(375), 2,
      sym__operator_separator,
      sym_division_operator,
    ACTIONS(377), 19,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [15957] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(421), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(419), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15987] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(423), 3,
      sym__operator_separator,
      sym_division_operator,
      aux_sym__string_directive_token1,
    ACTIONS(425), 19,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [16017] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16053] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(411), 3,
      sym__operator_separator,
      sym_division_operator,
      aux_sym__string_directive_token1,
    ACTIONS(413), 19,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [16083] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16119] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16149] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    STATE(351), 1,
      aux_sym__control_operand_separator_repeat1,
    ACTIONS(599), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(597), 19,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      aux_sym_section_type_token1,
      aux_sym_option_flag_token1,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      sym_relocation_type,
      sym_octal,
      sym_binary,
      aux_sym_decimal_token1,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
  [16181] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(401), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(399), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16211] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16247] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16277] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(602), 1,
      aux_sym__string_directive_token1,
    ACTIONS(373), 2,
      sym__operator_separator,
      sym_division_operator,
    ACTIONS(371), 19,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_EQ,
  [16309] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16345] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16375] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 17,
      sym__operator_separator,
      sym_division_operator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16405] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym__control_operand_separator_repeat1,
    ACTIONS(608), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(606), 18,
      anon_sym_LPAREN,
      aux_sym_section_type_token1,
      aux_sym_option_flag_token1,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
      sym_relocation_type,
      sym_octal,
      sym_binary,
      aux_sym_decimal_token1,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
  [16439] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16472] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(614), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(247), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16505] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(618), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(616), 14,
      sym_division_operator,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16532] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(620), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(622), 1,
      anon_sym_AMP_AMP,
    ACTIONS(624), 1,
      anon_sym_PIPE,
    ACTIONS(626), 1,
      anon_sym_CARET,
    ACTIONS(628), 1,
      anon_sym_AMP,
    ACTIONS(630), 1,
      anon_sym_EQ_EQ,
    ACTIONS(632), 1,
      anon_sym_BANG_EQ,
    ACTIONS(634), 1,
      anon_sym_LT,
    ACTIONS(636), 1,
      anon_sym_GT,
    ACTIONS(638), 1,
      anon_sym_LT_EQ,
    ACTIONS(640), 1,
      anon_sym_GT_EQ,
    ACTIONS(642), 1,
      anon_sym_LT_LT,
    ACTIONS(644), 1,
      anon_sym_GT_GT,
    ACTIONS(646), 1,
      anon_sym_PLUS,
    ACTIONS(648), 1,
      anon_sym_DASH,
    ACTIONS(650), 1,
      anon_sym_STAR,
    ACTIONS(652), 1,
      anon_sym_PERCENT,
    ACTIONS(654), 1,
      anon_sym_EQ,
    ACTIONS(656), 1,
      sym_division_operator,
  [16593] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(658), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(660), 1,
      anon_sym_AMP_AMP,
    ACTIONS(662), 1,
      anon_sym_PIPE,
    ACTIONS(664), 1,
      anon_sym_CARET,
    ACTIONS(666), 1,
      anon_sym_AMP,
    ACTIONS(668), 1,
      anon_sym_EQ_EQ,
    ACTIONS(670), 1,
      anon_sym_BANG_EQ,
    ACTIONS(672), 1,
      anon_sym_LT,
    ACTIONS(674), 1,
      anon_sym_GT,
    ACTIONS(676), 1,
      anon_sym_LT_EQ,
    ACTIONS(678), 1,
      anon_sym_GT_EQ,
    ACTIONS(680), 1,
      anon_sym_LT_LT,
    ACTIONS(682), 1,
      anon_sym_GT_GT,
    ACTIONS(684), 1,
      anon_sym_PLUS,
    ACTIONS(686), 1,
      anon_sym_DASH,
    ACTIONS(688), 1,
      anon_sym_STAR,
    ACTIONS(690), 1,
      anon_sym_PERCENT,
    ACTIONS(692), 1,
      anon_sym_EQ,
    ACTIONS(694), 1,
      sym_division_operator,
  [16654] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(696), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(698), 1,
      anon_sym_AMP_AMP,
    ACTIONS(700), 1,
      anon_sym_PIPE,
    ACTIONS(702), 1,
      anon_sym_CARET,
    ACTIONS(704), 1,
      anon_sym_AMP,
    ACTIONS(706), 1,
      anon_sym_EQ_EQ,
    ACTIONS(708), 1,
      anon_sym_BANG_EQ,
    ACTIONS(710), 1,
      anon_sym_LT,
    ACTIONS(712), 1,
      anon_sym_GT,
    ACTIONS(714), 1,
      anon_sym_LT_EQ,
    ACTIONS(716), 1,
      anon_sym_GT_EQ,
    ACTIONS(718), 1,
      anon_sym_LT_LT,
    ACTIONS(720), 1,
      anon_sym_GT_GT,
    ACTIONS(722), 1,
      anon_sym_PLUS,
    ACTIONS(724), 1,
      anon_sym_DASH,
    ACTIONS(726), 1,
      anon_sym_STAR,
    ACTIONS(728), 1,
      anon_sym_PERCENT,
    ACTIONS(730), 1,
      anon_sym_EQ,
    ACTIONS(732), 1,
      sym_division_operator,
  [16715] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(734), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(736), 1,
      anon_sym_AMP_AMP,
    ACTIONS(738), 1,
      anon_sym_PIPE,
    ACTIONS(740), 1,
      anon_sym_CARET,
    ACTIONS(742), 1,
      anon_sym_AMP,
    ACTIONS(744), 1,
      anon_sym_EQ_EQ,
    ACTIONS(746), 1,
      anon_sym_BANG_EQ,
    ACTIONS(748), 1,
      anon_sym_LT,
    ACTIONS(750), 1,
      anon_sym_GT,
    ACTIONS(752), 1,
      anon_sym_LT_EQ,
    ACTIONS(754), 1,
      anon_sym_GT_EQ,
    ACTIONS(756), 1,
      anon_sym_LT_LT,
    ACTIONS(758), 1,
      anon_sym_GT_GT,
    ACTIONS(760), 1,
      anon_sym_PLUS,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      anon_sym_STAR,
    ACTIONS(766), 1,
      anon_sym_PERCENT,
    ACTIONS(768), 1,
      anon_sym_EQ,
    ACTIONS(770), 1,
      sym_division_operator,
  [16776] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(772), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(774), 1,
      anon_sym_AMP_AMP,
    ACTIONS(776), 1,
      anon_sym_PIPE,
    ACTIONS(778), 1,
      anon_sym_CARET,
    ACTIONS(780), 1,
      anon_sym_AMP,
    ACTIONS(782), 1,
      anon_sym_EQ_EQ,
    ACTIONS(784), 1,
      anon_sym_BANG_EQ,
    ACTIONS(786), 1,
      anon_sym_LT,
    ACTIONS(788), 1,
      anon_sym_GT,
    ACTIONS(790), 1,
      anon_sym_LT_EQ,
    ACTIONS(792), 1,
      anon_sym_GT_EQ,
    ACTIONS(794), 1,
      anon_sym_LT_LT,
    ACTIONS(796), 1,
      anon_sym_GT_GT,
    ACTIONS(798), 1,
      anon_sym_PLUS,
    ACTIONS(800), 1,
      anon_sym_DASH,
    ACTIONS(802), 1,
      anon_sym_STAR,
    ACTIONS(804), 1,
      anon_sym_PERCENT,
    ACTIONS(806), 1,
      anon_sym_EQ,
    ACTIONS(808), 1,
      sym_division_operator,
  [16837] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(810), 9,
      anon_sym_LPAREN,
      aux_sym_section_type_token1,
      aux_sym_option_flag_token1,
      anon_sym_TILDE,
      anon_sym_BANG,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(812), 9,
      anon_sym_DASH,
      sym_relocation_type,
      sym_octal,
      aux_sym_decimal_token1,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
  [16863] = 9,
    ACTIONS(821), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(823), 1,
      sym__data_separator,
    STATE(372), 1,
      aux_sym_float_operands_repeat1,
    STATE(377), 1,
      aux_sym_integer_operands_repeat2,
    STATE(586), 1,
      sym__comment,
    ACTIONS(814), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(818), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(825), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(816), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [16896] = 10,
    ACTIONS(233), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(239), 1,
      sym__data_separator,
    ACTIONS(835), 1,
      sym_line_comment,
    ACTIONS(838), 1,
      sym_block_comment,
    STATE(373), 1,
      aux_sym_integer_operands_repeat1,
    STATE(375), 1,
      aux_sym_integer_operands_repeat2,
    STATE(549), 1,
      sym__comment,
    ACTIONS(828), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(832), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(830), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [16931] = 9,
    ACTIONS(821), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(823), 1,
      sym__data_separator,
    STATE(369), 1,
      aux_sym_float_operands_repeat1,
    STATE(383), 1,
      aux_sym_integer_operands_repeat2,
    STATE(586), 1,
      sym__comment,
    ACTIONS(841), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(845), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(848), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(843), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [16964] = 8,
    ACTIONS(858), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(861), 1,
      sym__data_separator,
    STATE(372), 1,
      aux_sym_float_operands_repeat1,
    STATE(586), 1,
      sym__comment,
    ACTIONS(851), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(855), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(864), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(853), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [16994] = 9,
    ACTIONS(870), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(873), 1,
      sym__data_separator,
    ACTIONS(876), 1,
      sym_line_comment,
    ACTIONS(879), 1,
      sym_block_comment,
    STATE(373), 1,
      aux_sym_integer_operands_repeat1,
    STATE(549), 1,
      sym__comment,
    ACTIONS(355), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(867), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(357), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [17026] = 8,
    ACTIONS(884), 1,
      anon_sym_SEMI,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(892), 1,
      sym_block_comment,
    STATE(25), 1,
      sym__control_operand_separator,
    STATE(359), 1,
      aux_sym__control_operand_separator_repeat1,
    STATE(374), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(886), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(882), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
  [17054] = 4,
    ACTIONS(899), 1,
      sym__data_separator,
    STATE(380), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(895), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(897), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17074] = 2,
    ACTIONS(901), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(903), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
  [17090] = 4,
    ACTIONS(899), 1,
      sym__data_separator,
    STATE(380), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(905), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(907), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17110] = 8,
    ACTIONS(911), 1,
      anon_sym_SEMI,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    ACTIONS(919), 1,
      sym_block_comment,
    STATE(25), 1,
      sym__control_operand_separator,
    STATE(359), 1,
      aux_sym__control_operand_separator_repeat1,
    STATE(379), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(913), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(909), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
  [17138] = 8,
    ACTIONS(924), 1,
      anon_sym_SEMI,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      sym_block_comment,
    STATE(25), 1,
      sym__control_operand_separator,
    STATE(359), 1,
      aux_sym__control_operand_separator_repeat1,
    STATE(374), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(926), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(922), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
  [17166] = 4,
    ACTIONS(939), 1,
      sym__data_separator,
    STATE(380), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(935), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(937), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17186] = 2,
    ACTIONS(851), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(853), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
  [17202] = 4,
    ACTIONS(899), 1,
      sym__data_separator,
    STATE(380), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(828), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(830), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17222] = 4,
    ACTIONS(899), 1,
      sym__data_separator,
    STATE(380), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(814), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(816), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17242] = 2,
    ACTIONS(942), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(944), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
  [17258] = 4,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    STATE(392), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(946), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(950), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17277] = 4,
    ACTIONS(954), 1,
      anon_sym_SEMI,
    STATE(385), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(952), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(956), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17296] = 7,
    ACTIONS(960), 1,
      anon_sym_SEMI,
    ACTIONS(964), 1,
      anon_sym_COMMA,
    ACTIONS(966), 1,
      sym_block_comment,
    STATE(397), 1,
      aux_sym__control_operand_separator_repeat1,
    STATE(461), 1,
      sym__control_operand_separator,
    ACTIONS(962), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(958), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
  [17321] = 4,
    ACTIONS(971), 1,
      anon_sym_SEMI,
    STATE(392), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(950), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(969), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
  [17340] = 7,
    ACTIONS(975), 1,
      anon_sym_SEMI,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      sym_block_comment,
    STATE(397), 1,
      aux_sym__control_operand_separator_repeat1,
    STATE(489), 1,
      sym__control_operand_separator,
    ACTIONS(962), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(973), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
  [17365] = 4,
    ACTIONS(984), 1,
      anon_sym_SEMI,
    STATE(388), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(982), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(986), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17384] = 4,
    ACTIONS(990), 1,
      anon_sym_SEMI,
    STATE(392), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(950), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(988), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
  [17403] = 4,
    ACTIONS(994), 1,
      anon_sym_SEMI,
    STATE(392), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(992), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(996), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17422] = 4,
    ACTIONS(1001), 1,
      anon_sym_SEMI,
    STATE(391), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(999), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(1003), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17441] = 6,
    ACTIONS(1009), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1011), 1,
      anon_sym_LPAREN,
    ACTIONS(1013), 1,
      sym_block_comment,
    STATE(440), 1,
      sym__call_expression,
    ACTIONS(1005), 2,
      sym_line_comment,
      ts_builtin_sym_end,
    ACTIONS(1007), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [17463] = 6,
    ACTIONS(1018), 1,
      anon_sym_SEMI,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1024), 1,
      sym_block_comment,
    STATE(396), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1020), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(1016), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
  [17485] = 6,
    ACTIONS(1029), 1,
      anon_sym_SEMI,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    ACTIONS(1037), 1,
      sym_block_comment,
    STATE(396), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1031), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(1027), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
  [17507] = 5,
    ACTIONS(606), 1,
      anon_sym_SEMI,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    STATE(402), 1,
      aux_sym__control_operand_separator_repeat1,
    ACTIONS(1042), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(1040), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
  [17527] = 6,
    ACTIONS(1022), 1,
      anon_sym_COMMA,
    ACTIONS(1048), 1,
      anon_sym_SEMI,
    ACTIONS(1050), 1,
      sym_block_comment,
    STATE(395), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1020), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(1046), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
  [17549] = 5,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym_operands_repeat1,
    ACTIONS(1055), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1060), 2,
      sym__operand_separator,
      sym_block_comment,
    ACTIONS(1053), 3,
      sym_line_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17569] = 6,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1065), 1,
      sym__operand_separator,
    ACTIONS(1067), 1,
      sym_block_comment,
    STATE(399), 1,
      aux_sym_operands_repeat1,
    ACTIONS(184), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(182), 3,
      sym_line_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17591] = 6,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      sym__operand_separator,
    ACTIONS(1076), 1,
      sym_block_comment,
    STATE(400), 1,
      aux_sym_operands_repeat1,
    ACTIONS(1072), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1070), 3,
      sym_line_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17613] = 4,
    STATE(402), 1,
      aux_sym__control_operand_separator_repeat1,
    ACTIONS(597), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(1081), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(1079), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
  [17631] = 2,
    ACTIONS(1027), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(1029), 4,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [17644] = 2,
    ACTIONS(1084), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(1086), 4,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [17657] = 2,
    ACTIONS(1088), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(1090), 4,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [17670] = 2,
    ACTIONS(1092), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(1094), 4,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [17683] = 2,
    ACTIONS(1096), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(1098), 4,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [17696] = 2,
    ACTIONS(1100), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(1102), 4,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [17709] = 2,
    ACTIONS(1104), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(1106), 4,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [17722] = 2,
    ACTIONS(1055), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(1053), 5,
      sym__operand_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17735] = 2,
    ACTIONS(1094), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(1092), 5,
      sym__operand_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17748] = 2,
    ACTIONS(1086), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(1084), 5,
      sym__operand_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17761] = 2,
    ACTIONS(882), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(884), 4,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [17774] = 4,
    ACTIONS(1110), 1,
      anon_sym_SEMI,
    ACTIONS(1112), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1114), 1,
      anon_sym_LPAREN,
    ACTIONS(1108), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
  [17790] = 4,
    ACTIONS(1118), 1,
      anon_sym_SEMI,
    ACTIONS(1120), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1122), 1,
      anon_sym_LPAREN,
    ACTIONS(1116), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
  [17806] = 6,
    ACTIONS(1124), 1,
      ts_builtin_sym_end,
    ACTIONS(1128), 1,
      anon_sym_CR,
    ACTIONS(1130), 1,
      sym_line_comment,
    ACTIONS(1132), 1,
      sym_block_comment,
    STATE(580), 1,
      sym__comment,
    ACTIONS(1126), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [17826] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(1128), 1,
      anon_sym_CR,
    ACTIONS(1130), 1,
      sym_line_comment,
    ACTIONS(1132), 1,
      sym_block_comment,
    STATE(582), 1,
      sym__comment,
    ACTIONS(1126), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [17846] = 2,
    ACTIONS(465), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(463), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17857] = 5,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    ACTIONS(1138), 1,
      sym_macro_parameter,
    ACTIONS(1140), 1,
      sym_block_comment,
    STATE(508), 1,
      sym_macro_parameters,
    ACTIONS(1134), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17874] = 5,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(1144), 1,
      sym_line_comment,
    ACTIONS(1146), 1,
      sym_block_comment,
    STATE(582), 1,
      sym__comment,
    ACTIONS(1142), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [17891] = 5,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    ACTIONS(1138), 1,
      sym_macro_parameter,
    ACTIONS(1148), 1,
      sym_block_comment,
    STATE(508), 1,
      sym_macro_parameters,
    ACTIONS(1134), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17908] = 5,
    ACTIONS(1138), 1,
      sym_macro_parameter,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
    ACTIONS(1154), 1,
      sym_block_comment,
    STATE(495), 1,
      sym_macro_parameters,
    ACTIONS(1150), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17925] = 5,
    ACTIONS(1138), 1,
      sym_macro_parameter,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
    ACTIONS(1156), 1,
      sym_block_comment,
    STATE(495), 1,
      sym_macro_parameters,
    ACTIONS(1150), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17942] = 5,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      sym_block_comment,
    STATE(430), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1158), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17959] = 5,
    ACTIONS(1138), 1,
      sym_macro_parameter,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    ACTIONS(1170), 1,
      sym_block_comment,
    STATE(502), 1,
      sym_macro_parameters,
    ACTIONS(1166), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17976] = 5,
    ACTIONS(1138), 1,
      sym_macro_parameter,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    ACTIONS(1176), 1,
      sym_block_comment,
    STATE(503), 1,
      sym_macro_parameters,
    ACTIONS(1172), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17993] = 5,
    ACTIONS(1138), 1,
      sym_macro_parameter,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    ACTIONS(1182), 1,
      sym_block_comment,
    STATE(501), 1,
      sym_macro_parameters,
    ACTIONS(1178), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18010] = 5,
    ACTIONS(1124), 1,
      ts_builtin_sym_end,
    ACTIONS(1144), 1,
      sym_line_comment,
    ACTIONS(1146), 1,
      sym_block_comment,
    STATE(580), 1,
      sym__comment,
    ACTIONS(1142), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [18027] = 2,
    ACTIONS(1186), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1184), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [18038] = 5,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      sym_block_comment,
    STATE(431), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1188), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18055] = 5,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      sym_block_comment,
    STATE(431), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1194), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18072] = 2,
    ACTIONS(1205), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1203), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [18083] = 2,
    ACTIONS(1209), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1207), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [18094] = 2,
    ACTIONS(1213), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1211), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [18105] = 2,
    ACTIONS(1217), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1215), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [18116] = 2,
    ACTIONS(1221), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1219), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [18127] = 2,
    ACTIONS(1209), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1207), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [18138] = 2,
    ACTIONS(1225), 1,
      anon_sym_SEMI,
    ACTIONS(1223), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [18149] = 2,
    ACTIONS(1229), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1227), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [18160] = 2,
    ACTIONS(1233), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1231), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [18171] = 2,
    ACTIONS(1237), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1235), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [18182] = 2,
    ACTIONS(1241), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1239), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [18193] = 2,
    ACTIONS(1245), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1243), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [18204] = 5,
    ACTIONS(1138), 1,
      sym_macro_parameter,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    ACTIONS(1251), 1,
      sym_block_comment,
    STATE(498), 1,
      sym_macro_parameters,
    ACTIONS(1247), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18221] = 4,
    ACTIONS(1255), 1,
      anon_sym_SEMI,
    ACTIONS(1257), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1259), 1,
      sym_block_comment,
    ACTIONS(1253), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
  [18236] = 1,
    ACTIONS(1262), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18244] = 1,
    ACTIONS(1264), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18252] = 1,
    ACTIONS(1266), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18260] = 5,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    ACTIONS(1270), 1,
      sym__operand_separator,
    ACTIONS(1272), 1,
      sym_block_comment,
    STATE(484), 1,
      aux_sym_operands_repeat1,
  [18276] = 1,
    ACTIONS(1275), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18284] = 1,
    ACTIONS(1277), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18292] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1279), 1,
      sym__escape_sequence,
    ACTIONS(1281), 1,
      anon_sym_DQUOTE,
    ACTIONS(1283), 1,
      aux_sym_string_token1,
    STATE(470), 1,
      aux_sym_string_repeat1,
  [18308] = 1,
    ACTIONS(1285), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18316] = 1,
    ACTIONS(1287), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18324] = 1,
    ACTIONS(1289), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18332] = 1,
    ACTIONS(1287), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18340] = 1,
    ACTIONS(1291), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18348] = 1,
    ACTIONS(1293), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18356] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1295), 1,
      sym__escape_sequence,
    ACTIONS(1297), 1,
      anon_sym_DQUOTE,
    ACTIONS(1299), 1,
      aux_sym_string_token1,
    STATE(452), 1,
      aux_sym_string_repeat1,
  [18372] = 2,
    ACTIONS(1027), 1,
      sym_block_comment,
    ACTIONS(1029), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18382] = 1,
    ACTIONS(1301), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18390] = 2,
    ACTIONS(1088), 1,
      sym_block_comment,
    ACTIONS(1090), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18400] = 2,
    ACTIONS(1096), 1,
      sym_block_comment,
    ACTIONS(1098), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18410] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1303), 1,
      sym__escape_sequence,
    ACTIONS(1305), 1,
      anon_sym_DQUOTE,
    ACTIONS(1307), 1,
      aux_sym_string_token1,
    STATE(467), 1,
      aux_sym_string_repeat1,
  [18426] = 1,
    ACTIONS(1309), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18434] = 1,
    ACTIONS(1311), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18442] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1279), 1,
      sym__escape_sequence,
    ACTIONS(1283), 1,
      aux_sym_string_token1,
    ACTIONS(1313), 1,
      anon_sym_DQUOTE,
    STATE(470), 1,
      aux_sym_string_repeat1,
  [18458] = 4,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    ACTIONS(1315), 1,
      sym__operand_separator,
    STATE(472), 1,
      aux_sym_operands_repeat1,
    ACTIONS(1268), 2,
      sym_block_comment,
      anon_sym_COMMA,
  [18472] = 1,
    ACTIONS(1317), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18480] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1319), 1,
      sym__escape_sequence,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE,
    ACTIONS(1324), 1,
      aux_sym_string_token1,
    STATE(470), 1,
      aux_sym_string_repeat1,
  [18496] = 1,
    ACTIONS(1287), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18504] = 4,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(1327), 1,
      sym__operand_separator,
    STATE(484), 1,
      aux_sym_operands_repeat1,
    ACTIONS(1268), 2,
      sym_block_comment,
      anon_sym_COMMA,
  [18518] = 1,
    ACTIONS(1329), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18526] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1279), 1,
      sym__escape_sequence,
    ACTIONS(1283), 1,
      aux_sym_string_token1,
    ACTIONS(1331), 1,
      anon_sym_DQUOTE,
    STATE(470), 1,
      aux_sym_string_repeat1,
  [18542] = 1,
    ACTIONS(1333), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18550] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1335), 1,
      sym__escape_sequence,
    ACTIONS(1337), 1,
      anon_sym_DQUOTE,
    ACTIONS(1339), 1,
      aux_sym_string_token1,
    STATE(478), 1,
      aux_sym_string_repeat1,
  [18566] = 1,
    ACTIONS(1341), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18574] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1279), 1,
      sym__escape_sequence,
    ACTIONS(1283), 1,
      aux_sym_string_token1,
    ACTIONS(1343), 1,
      anon_sym_DQUOTE,
    STATE(470), 1,
      aux_sym_string_repeat1,
  [18590] = 1,
    ACTIONS(1345), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18598] = 1,
    ACTIONS(1347), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18606] = 5,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    ACTIONS(1349), 1,
      sym__operand_separator,
    ACTIONS(1351), 1,
      sym_block_comment,
    STATE(449), 1,
      aux_sym_operands_repeat1,
  [18622] = 1,
    ACTIONS(1354), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18630] = 4,
    ACTIONS(1128), 1,
      anon_sym_CR,
    ACTIONS(1356), 1,
      sym_line_comment,
    ACTIONS(1358), 1,
      sym_block_comment,
    ACTIONS(1126), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [18644] = 3,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_operands_repeat1,
    ACTIONS(1360), 3,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_COMMA,
  [18656] = 1,
    ACTIONS(1363), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18664] = 1,
    ACTIONS(810), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18672] = 1,
    ACTIONS(1365), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18680] = 1,
    ACTIONS(1367), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18688] = 1,
    ACTIONS(1369), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18696] = 1,
    ACTIONS(1371), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18704] = 1,
    ACTIONS(1373), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18712] = 1,
    ACTIONS(1375), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18720] = 1,
    ACTIONS(1377), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18728] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1379), 1,
      sym__escape_sequence,
    ACTIONS(1381), 1,
      anon_sym_DQUOTE,
    ACTIONS(1383), 1,
      aux_sym_string_token1,
    STATE(474), 1,
      aux_sym_string_repeat1,
  [18744] = 3,
    ACTIONS(1387), 1,
      anon_sym_RPAREN,
    ACTIONS(1389), 1,
      sym_block_comment,
    ACTIONS(1385), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18755] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(1126), 1,
      anon_sym_LF,
    ACTIONS(1128), 1,
      anon_sym_CR,
  [18768] = 1,
    ACTIONS(1084), 4,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18775] = 3,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
    ACTIONS(1395), 1,
      sym_block_comment,
    ACTIONS(1391), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18786] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    ACTIONS(1397), 1,
      anon_sym_CR,
    ACTIONS(1399), 1,
      anon_sym_LF,
  [18799] = 3,
    ACTIONS(1401), 1,
      sym_line_comment,
    ACTIONS(1403), 1,
      sym_block_comment,
    ACTIONS(1142), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [18810] = 3,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
    ACTIONS(1409), 1,
      sym_block_comment,
    ACTIONS(1405), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18821] = 3,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
    ACTIONS(1415), 1,
      sym_block_comment,
    ACTIONS(1411), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18832] = 3,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
    ACTIONS(1421), 1,
      sym_block_comment,
    ACTIONS(1417), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18843] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1423), 1,
      anon_sym_LPAREN,
    ACTIONS(1425), 1,
      sym_macro_parameter,
    STATE(458), 1,
      sym_macro_parameters,
  [18856] = 1,
    ACTIONS(1092), 4,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18863] = 1,
    ACTIONS(1053), 4,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18870] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1425), 1,
      sym_macro_parameter,
    ACTIONS(1427), 1,
      anon_sym_LPAREN,
    STATE(477), 1,
      sym_macro_parameters,
  [18883] = 3,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
    ACTIONS(1433), 1,
      sym_block_comment,
    ACTIONS(1429), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18894] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1124), 1,
      ts_builtin_sym_end,
    ACTIONS(1126), 1,
      anon_sym_LF,
    ACTIONS(1128), 1,
      anon_sym_CR,
  [18907] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1435), 1,
      anon_sym_COMMA,
    ACTIONS(1437), 1,
      sym_macro_parameter,
  [18917] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1439), 1,
      sym__escape_sequence,
    ACTIONS(1441), 1,
      aux_sym_char_token1,
  [18927] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1126), 1,
      anon_sym_LF,
    ACTIONS(1128), 1,
      anon_sym_CR,
  [18937] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1397), 1,
      anon_sym_CR,
    ACTIONS(1399), 1,
      anon_sym_LF,
  [18947] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1443), 1,
      anon_sym_COMMA,
    ACTIONS(1445), 1,
      sym_macro_parameter,
  [18957] = 2,
    ACTIONS(1449), 1,
      sym_macro_name,
    ACTIONS(1447), 2,
      sym_block_comment,
      aux_sym__whitespace_token1,
  [18965] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1451), 1,
      sym__escape_sequence,
    ACTIONS(1453), 1,
      aux_sym_char_token1,
  [18975] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1455), 1,
      sym__escape_sequence,
    ACTIONS(1457), 1,
      aux_sym_char_token1,
  [18985] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1459), 1,
      sym__escape_sequence,
    ACTIONS(1461), 1,
      aux_sym_char_token1,
  [18995] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__line_separator,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
  [19005] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1463), 1,
      sym__escape_sequence,
    ACTIONS(1465), 1,
      aux_sym_char_token1,
  [19015] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1467), 1,
      anon_sym_RPAREN,
  [19022] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__line_separator,
  [19029] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
  [19036] = 2,
    ACTIONS(1471), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1473), 1,
      sym_block_comment,
  [19043] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1475), 1,
      anon_sym_RPAREN,
  [19050] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
  [19057] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1479), 1,
      sym_macro_parameter,
  [19064] = 2,
    ACTIONS(1445), 1,
      sym_macro_parameter,
    ACTIONS(1481), 1,
      sym_block_comment,
  [19071] = 2,
    ACTIONS(1483), 1,
      sym_macro_parameter,
    ACTIONS(1485), 1,
      sym_block_comment,
  [19078] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1483), 1,
      sym_macro_parameter,
  [19085] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1487), 1,
      sym_macro_parameter,
  [19092] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1084), 1,
      aux_sym__string_directive_token1,
  [19099] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1489), 1,
      aux_sym__string_directive_token1,
  [19106] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
  [19113] = 2,
    ACTIONS(1493), 1,
      sym_macro_parameter,
    ACTIONS(1495), 1,
      sym_block_comment,
  [19120] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1497), 1,
      ts_builtin_sym_end,
  [19127] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1499), 1,
      anon_sym_SQUOTE,
  [19134] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1501), 1,
      anon_sym_RPAREN,
  [19141] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
  [19148] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
  [19155] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1507), 1,
      anon_sym_RPAREN,
  [19162] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
  [19169] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1511), 1,
      sym_macro_name,
  [19176] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1513), 1,
      anon_sym_RPAREN,
  [19183] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1493), 1,
      sym_macro_parameter,
  [19190] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
  [19197] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1517), 1,
      aux_sym__whitespace_token1,
  [19204] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1519), 1,
      anon_sym_SQUOTE,
  [19211] = 1,
    ACTIONS(445), 2,
      sym__data_separator,
      sym_block_comment,
  [19216] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
  [19223] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
  [19230] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1525), 1,
      aux_sym__whitespace_token1,
  [19237] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1527), 1,
      anon_sym_RPAREN,
  [19244] = 1,
    ACTIONS(1529), 2,
      sym__data_separator,
      sym_block_comment,
  [19249] = 2,
    ACTIONS(1531), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1533), 1,
      sym_block_comment,
  [19256] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1535), 1,
      sym_macro_name,
  [19263] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1537), 1,
      anon_sym_RPAREN,
  [19270] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1539), 1,
      anon_sym_SQUOTE,
  [19277] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1541), 1,
      anon_sym_RPAREN,
  [19284] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1543), 1,
      aux_sym__whitespace_token1,
  [19291] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      anon_sym_LF,
  [19298] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1545), 1,
      anon_sym_RPAREN,
  [19305] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1547), 1,
      aux_sym__string_directive_token1,
  [19312] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1549), 1,
      anon_sym_RPAREN,
  [19319] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1551), 1,
      sym__data_separator,
  [19326] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1553), 1,
      anon_sym_RPAREN,
  [19333] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1555), 1,
      anon_sym_RPAREN,
  [19340] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1557), 1,
      anon_sym_RPAREN,
  [19347] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1559), 1,
      anon_sym_RPAREN,
  [19354] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1561), 1,
      anon_sym_RPAREN,
  [19361] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1563), 1,
      anon_sym_RPAREN,
  [19368] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1565), 1,
      anon_sym_LF,
  [19375] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1567), 1,
      anon_sym_RPAREN,
  [19382] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1569), 1,
      aux_sym__whitespace_token1,
  [19389] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1092), 1,
      aux_sym__string_directive_token1,
  [19396] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1571), 1,
      anon_sym_SQUOTE,
  [19403] = 2,
    ACTIONS(1573), 1,
      anon_sym_RPAREN,
    ACTIONS(1575), 1,
      sym_block_comment,
  [19410] = 1,
    ACTIONS(1577), 2,
      sym_block_comment,
      aux_sym__whitespace_token1,
  [19415] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1579), 1,
      anon_sym_LPAREN,
  [19422] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1581), 1,
      ts_builtin_sym_end,
  [19429] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1583), 1,
      anon_sym_RPAREN,
  [19436] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1124), 1,
      ts_builtin_sym_end,
  [19443] = 2,
    ACTIONS(1585), 1,
      anon_sym_RPAREN,
    ACTIONS(1587), 1,
      sym_block_comment,
  [19450] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1589), 1,
      anon_sym_SQUOTE,
  [19457] = 2,
    ACTIONS(1437), 1,
      sym_macro_parameter,
    ACTIONS(1591), 1,
      sym_block_comment,
  [19464] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(351), 1,
      sym__data_separator,
  [19471] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1593), 1,
      anon_sym_LPAREN,
  [19478] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1595), 1,
      anon_sym_RPAREN,
  [19485] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1597), 1,
      anon_sym_LPAREN,
  [19492] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1599), 1,
      anon_sym_LPAREN,
  [19499] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1601), 1,
      anon_sym_LPAREN,
  [19506] = 2,
    ACTIONS(1587), 1,
      sym_block_comment,
    ACTIONS(1603), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 109,
  [SMALL_STATE(4)] = 218,
  [SMALL_STATE(5)] = 271,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 374,
  [SMALL_STATE(8)] = 428,
  [SMALL_STATE(9)] = 478,
  [SMALL_STATE(10)] = 528,
  [SMALL_STATE(11)] = 578,
  [SMALL_STATE(12)] = 630,
  [SMALL_STATE(13)] = 684,
  [SMALL_STATE(14)] = 763,
  [SMALL_STATE(15)] = 842,
  [SMALL_STATE(16)] = 916,
  [SMALL_STATE(17)] = 990,
  [SMALL_STATE(18)] = 1061,
  [SMALL_STATE(19)] = 1129,
  [SMALL_STATE(20)] = 1197,
  [SMALL_STATE(21)] = 1258,
  [SMALL_STATE(22)] = 1330,
  [SMALL_STATE(23)] = 1394,
  [SMALL_STATE(24)] = 1466,
  [SMALL_STATE(25)] = 1541,
  [SMALL_STATE(26)] = 1610,
  [SMALL_STATE(27)] = 1681,
  [SMALL_STATE(28)] = 1752,
  [SMALL_STATE(29)] = 1824,
  [SMALL_STATE(30)] = 1896,
  [SMALL_STATE(31)] = 1962,
  [SMALL_STATE(32)] = 2028,
  [SMALL_STATE(33)] = 2096,
  [SMALL_STATE(34)] = 2164,
  [SMALL_STATE(35)] = 2236,
  [SMALL_STATE(36)] = 2308,
  [SMALL_STATE(37)] = 2380,
  [SMALL_STATE(38)] = 2452,
  [SMALL_STATE(39)] = 2524,
  [SMALL_STATE(40)] = 2596,
  [SMALL_STATE(41)] = 2668,
  [SMALL_STATE(42)] = 2740,
  [SMALL_STATE(43)] = 2812,
  [SMALL_STATE(44)] = 2884,
  [SMALL_STATE(45)] = 2956,
  [SMALL_STATE(46)] = 2993,
  [SMALL_STATE(47)] = 3058,
  [SMALL_STATE(48)] = 3129,
  [SMALL_STATE(49)] = 3174,
  [SMALL_STATE(50)] = 3219,
  [SMALL_STATE(51)] = 3264,
  [SMALL_STATE(52)] = 3329,
  [SMALL_STATE(53)] = 3370,
  [SMALL_STATE(54)] = 3407,
  [SMALL_STATE(55)] = 3444,
  [SMALL_STATE(56)] = 3481,
  [SMALL_STATE(57)] = 3518,
  [SMALL_STATE(58)] = 3555,
  [SMALL_STATE(59)] = 3592,
  [SMALL_STATE(60)] = 3629,
  [SMALL_STATE(61)] = 3674,
  [SMALL_STATE(62)] = 3711,
  [SMALL_STATE(63)] = 3748,
  [SMALL_STATE(64)] = 3785,
  [SMALL_STATE(65)] = 3822,
  [SMALL_STATE(66)] = 3859,
  [SMALL_STATE(67)] = 3896,
  [SMALL_STATE(68)] = 3933,
  [SMALL_STATE(69)] = 3970,
  [SMALL_STATE(70)] = 4007,
  [SMALL_STATE(71)] = 4044,
  [SMALL_STATE(72)] = 4081,
  [SMALL_STATE(73)] = 4118,
  [SMALL_STATE(74)] = 4155,
  [SMALL_STATE(75)] = 4192,
  [SMALL_STATE(76)] = 4229,
  [SMALL_STATE(77)] = 4266,
  [SMALL_STATE(78)] = 4303,
  [SMALL_STATE(79)] = 4340,
  [SMALL_STATE(80)] = 4377,
  [SMALL_STATE(81)] = 4418,
  [SMALL_STATE(82)] = 4455,
  [SMALL_STATE(83)] = 4492,
  [SMALL_STATE(84)] = 4529,
  [SMALL_STATE(85)] = 4594,
  [SMALL_STATE(86)] = 4657,
  [SMALL_STATE(87)] = 4724,
  [SMALL_STATE(88)] = 4758,
  [SMALL_STATE(89)] = 4792,
  [SMALL_STATE(90)] = 4834,
  [SMALL_STATE(91)] = 4868,
  [SMALL_STATE(92)] = 4902,
  [SMALL_STATE(93)] = 4936,
  [SMALL_STATE(94)] = 4970,
  [SMALL_STATE(95)] = 5004,
  [SMALL_STATE(96)] = 5038,
  [SMALL_STATE(97)] = 5072,
  [SMALL_STATE(98)] = 5106,
  [SMALL_STATE(99)] = 5140,
  [SMALL_STATE(100)] = 5174,
  [SMALL_STATE(101)] = 5208,
  [SMALL_STATE(102)] = 5242,
  [SMALL_STATE(103)] = 5276,
  [SMALL_STATE(104)] = 5310,
  [SMALL_STATE(105)] = 5344,
  [SMALL_STATE(106)] = 5378,
  [SMALL_STATE(107)] = 5412,
  [SMALL_STATE(108)] = 5446,
  [SMALL_STATE(109)] = 5480,
  [SMALL_STATE(110)] = 5534,
  [SMALL_STATE(111)] = 5598,
  [SMALL_STATE(112)] = 5632,
  [SMALL_STATE(113)] = 5666,
  [SMALL_STATE(114)] = 5700,
  [SMALL_STATE(115)] = 5764,
  [SMALL_STATE(116)] = 5828,
  [SMALL_STATE(117)] = 5862,
  [SMALL_STATE(118)] = 5900,
  [SMALL_STATE(119)] = 5934,
  [SMALL_STATE(120)] = 5968,
  [SMALL_STATE(121)] = 6002,
  [SMALL_STATE(122)] = 6036,
  [SMALL_STATE(123)] = 6070,
  [SMALL_STATE(124)] = 6112,
  [SMALL_STATE(125)] = 6146,
  [SMALL_STATE(126)] = 6180,
  [SMALL_STATE(127)] = 6222,
  [SMALL_STATE(128)] = 6256,
  [SMALL_STATE(129)] = 6290,
  [SMALL_STATE(130)] = 6324,
  [SMALL_STATE(131)] = 6358,
  [SMALL_STATE(132)] = 6392,
  [SMALL_STATE(133)] = 6426,
  [SMALL_STATE(134)] = 6460,
  [SMALL_STATE(135)] = 6494,
  [SMALL_STATE(136)] = 6528,
  [SMALL_STATE(137)] = 6562,
  [SMALL_STATE(138)] = 6596,
  [SMALL_STATE(139)] = 6630,
  [SMALL_STATE(140)] = 6664,
  [SMALL_STATE(141)] = 6698,
  [SMALL_STATE(142)] = 6732,
  [SMALL_STATE(143)] = 6766,
  [SMALL_STATE(144)] = 6800,
  [SMALL_STATE(145)] = 6834,
  [SMALL_STATE(146)] = 6868,
  [SMALL_STATE(147)] = 6902,
  [SMALL_STATE(148)] = 6936,
  [SMALL_STATE(149)] = 6970,
  [SMALL_STATE(150)] = 7004,
  [SMALL_STATE(151)] = 7038,
  [SMALL_STATE(152)] = 7080,
  [SMALL_STATE(153)] = 7114,
  [SMALL_STATE(154)] = 7148,
  [SMALL_STATE(155)] = 7182,
  [SMALL_STATE(156)] = 7216,
  [SMALL_STATE(157)] = 7273,
  [SMALL_STATE(158)] = 7330,
  [SMALL_STATE(159)] = 7387,
  [SMALL_STATE(160)] = 7444,
  [SMALL_STATE(161)] = 7501,
  [SMALL_STATE(162)] = 7558,
  [SMALL_STATE(163)] = 7615,
  [SMALL_STATE(164)] = 7672,
  [SMALL_STATE(165)] = 7729,
  [SMALL_STATE(166)] = 7786,
  [SMALL_STATE(167)] = 7843,
  [SMALL_STATE(168)] = 7900,
  [SMALL_STATE(169)] = 7957,
  [SMALL_STATE(170)] = 8014,
  [SMALL_STATE(171)] = 8071,
  [SMALL_STATE(172)] = 8128,
  [SMALL_STATE(173)] = 8185,
  [SMALL_STATE(174)] = 8242,
  [SMALL_STATE(175)] = 8299,
  [SMALL_STATE(176)] = 8356,
  [SMALL_STATE(177)] = 8413,
  [SMALL_STATE(178)] = 8470,
  [SMALL_STATE(179)] = 8527,
  [SMALL_STATE(180)] = 8584,
  [SMALL_STATE(181)] = 8641,
  [SMALL_STATE(182)] = 8698,
  [SMALL_STATE(183)] = 8755,
  [SMALL_STATE(184)] = 8812,
  [SMALL_STATE(185)] = 8869,
  [SMALL_STATE(186)] = 8926,
  [SMALL_STATE(187)] = 8983,
  [SMALL_STATE(188)] = 9040,
  [SMALL_STATE(189)] = 9097,
  [SMALL_STATE(190)] = 9154,
  [SMALL_STATE(191)] = 9211,
  [SMALL_STATE(192)] = 9268,
  [SMALL_STATE(193)] = 9323,
  [SMALL_STATE(194)] = 9380,
  [SMALL_STATE(195)] = 9437,
  [SMALL_STATE(196)] = 9494,
  [SMALL_STATE(197)] = 9551,
  [SMALL_STATE(198)] = 9606,
  [SMALL_STATE(199)] = 9663,
  [SMALL_STATE(200)] = 9720,
  [SMALL_STATE(201)] = 9777,
  [SMALL_STATE(202)] = 9834,
  [SMALL_STATE(203)] = 9891,
  [SMALL_STATE(204)] = 9948,
  [SMALL_STATE(205)] = 10005,
  [SMALL_STATE(206)] = 10062,
  [SMALL_STATE(207)] = 10119,
  [SMALL_STATE(208)] = 10176,
  [SMALL_STATE(209)] = 10233,
  [SMALL_STATE(210)] = 10290,
  [SMALL_STATE(211)] = 10347,
  [SMALL_STATE(212)] = 10404,
  [SMALL_STATE(213)] = 10461,
  [SMALL_STATE(214)] = 10518,
  [SMALL_STATE(215)] = 10575,
  [SMALL_STATE(216)] = 10632,
  [SMALL_STATE(217)] = 10689,
  [SMALL_STATE(218)] = 10746,
  [SMALL_STATE(219)] = 10803,
  [SMALL_STATE(220)] = 10860,
  [SMALL_STATE(221)] = 10917,
  [SMALL_STATE(222)] = 10974,
  [SMALL_STATE(223)] = 11031,
  [SMALL_STATE(224)] = 11088,
  [SMALL_STATE(225)] = 11145,
  [SMALL_STATE(226)] = 11202,
  [SMALL_STATE(227)] = 11259,
  [SMALL_STATE(228)] = 11316,
  [SMALL_STATE(229)] = 11373,
  [SMALL_STATE(230)] = 11430,
  [SMALL_STATE(231)] = 11487,
  [SMALL_STATE(232)] = 11544,
  [SMALL_STATE(233)] = 11601,
  [SMALL_STATE(234)] = 11658,
  [SMALL_STATE(235)] = 11715,
  [SMALL_STATE(236)] = 11772,
  [SMALL_STATE(237)] = 11829,
  [SMALL_STATE(238)] = 11886,
  [SMALL_STATE(239)] = 11943,
  [SMALL_STATE(240)] = 12000,
  [SMALL_STATE(241)] = 12057,
  [SMALL_STATE(242)] = 12114,
  [SMALL_STATE(243)] = 12171,
  [SMALL_STATE(244)] = 12228,
  [SMALL_STATE(245)] = 12285,
  [SMALL_STATE(246)] = 12342,
  [SMALL_STATE(247)] = 12399,
  [SMALL_STATE(248)] = 12456,
  [SMALL_STATE(249)] = 12513,
  [SMALL_STATE(250)] = 12570,
  [SMALL_STATE(251)] = 12627,
  [SMALL_STATE(252)] = 12684,
  [SMALL_STATE(253)] = 12741,
  [SMALL_STATE(254)] = 12798,
  [SMALL_STATE(255)] = 12855,
  [SMALL_STATE(256)] = 12909,
  [SMALL_STATE(257)] = 12963,
  [SMALL_STATE(258)] = 13017,
  [SMALL_STATE(259)] = 13071,
  [SMALL_STATE(260)] = 13125,
  [SMALL_STATE(261)] = 13179,
  [SMALL_STATE(262)] = 13233,
  [SMALL_STATE(263)] = 13287,
  [SMALL_STATE(264)] = 13341,
  [SMALL_STATE(265)] = 13395,
  [SMALL_STATE(266)] = 13449,
  [SMALL_STATE(267)] = 13503,
  [SMALL_STATE(268)] = 13557,
  [SMALL_STATE(269)] = 13593,
  [SMALL_STATE(270)] = 13623,
  [SMALL_STATE(271)] = 13653,
  [SMALL_STATE(272)] = 13683,
  [SMALL_STATE(273)] = 13713,
  [SMALL_STATE(274)] = 13743,
  [SMALL_STATE(275)] = 13773,
  [SMALL_STATE(276)] = 13805,
  [SMALL_STATE(277)] = 13835,
  [SMALL_STATE(278)] = 13865,
  [SMALL_STATE(279)] = 13895,
  [SMALL_STATE(280)] = 13925,
  [SMALL_STATE(281)] = 13961,
  [SMALL_STATE(282)] = 13991,
  [SMALL_STATE(283)] = 14021,
  [SMALL_STATE(284)] = 14051,
  [SMALL_STATE(285)] = 14081,
  [SMALL_STATE(286)] = 14111,
  [SMALL_STATE(287)] = 14141,
  [SMALL_STATE(288)] = 14171,
  [SMALL_STATE(289)] = 14203,
  [SMALL_STATE(290)] = 14241,
  [SMALL_STATE(291)] = 14273,
  [SMALL_STATE(292)] = 14303,
  [SMALL_STATE(293)] = 14333,
  [SMALL_STATE(294)] = 14371,
  [SMALL_STATE(295)] = 14403,
  [SMALL_STATE(296)] = 14433,
  [SMALL_STATE(297)] = 14465,
  [SMALL_STATE(298)] = 14503,
  [SMALL_STATE(299)] = 14535,
  [SMALL_STATE(300)] = 14565,
  [SMALL_STATE(301)] = 14597,
  [SMALL_STATE(302)] = 14635,
  [SMALL_STATE(303)] = 14665,
  [SMALL_STATE(304)] = 14697,
  [SMALL_STATE(305)] = 14729,
  [SMALL_STATE(306)] = 14761,
  [SMALL_STATE(307)] = 14791,
  [SMALL_STATE(308)] = 14821,
  [SMALL_STATE(309)] = 14851,
  [SMALL_STATE(310)] = 14881,
  [SMALL_STATE(311)] = 14911,
  [SMALL_STATE(312)] = 14941,
  [SMALL_STATE(313)] = 14973,
  [SMALL_STATE(314)] = 15003,
  [SMALL_STATE(315)] = 15041,
  [SMALL_STATE(316)] = 15071,
  [SMALL_STATE(317)] = 15103,
  [SMALL_STATE(318)] = 15139,
  [SMALL_STATE(319)] = 15169,
  [SMALL_STATE(320)] = 15199,
  [SMALL_STATE(321)] = 15229,
  [SMALL_STATE(322)] = 15259,
  [SMALL_STATE(323)] = 15289,
  [SMALL_STATE(324)] = 15319,
  [SMALL_STATE(325)] = 15349,
  [SMALL_STATE(326)] = 15379,
  [SMALL_STATE(327)] = 15409,
  [SMALL_STATE(328)] = 15439,
  [SMALL_STATE(329)] = 15469,
  [SMALL_STATE(330)] = 15499,
  [SMALL_STATE(331)] = 15529,
  [SMALL_STATE(332)] = 15559,
  [SMALL_STATE(333)] = 15589,
  [SMALL_STATE(334)] = 15619,
  [SMALL_STATE(335)] = 15649,
  [SMALL_STATE(336)] = 15679,
  [SMALL_STATE(337)] = 15709,
  [SMALL_STATE(338)] = 15739,
  [SMALL_STATE(339)] = 15769,
  [SMALL_STATE(340)] = 15799,
  [SMALL_STATE(341)] = 15829,
  [SMALL_STATE(342)] = 15859,
  [SMALL_STATE(343)] = 15895,
  [SMALL_STATE(344)] = 15925,
  [SMALL_STATE(345)] = 15957,
  [SMALL_STATE(346)] = 15987,
  [SMALL_STATE(347)] = 16017,
  [SMALL_STATE(348)] = 16053,
  [SMALL_STATE(349)] = 16083,
  [SMALL_STATE(350)] = 16119,
  [SMALL_STATE(351)] = 16149,
  [SMALL_STATE(352)] = 16181,
  [SMALL_STATE(353)] = 16211,
  [SMALL_STATE(354)] = 16247,
  [SMALL_STATE(355)] = 16277,
  [SMALL_STATE(356)] = 16309,
  [SMALL_STATE(357)] = 16345,
  [SMALL_STATE(358)] = 16375,
  [SMALL_STATE(359)] = 16405,
  [SMALL_STATE(360)] = 16439,
  [SMALL_STATE(361)] = 16472,
  [SMALL_STATE(362)] = 16505,
  [SMALL_STATE(363)] = 16532,
  [SMALL_STATE(364)] = 16593,
  [SMALL_STATE(365)] = 16654,
  [SMALL_STATE(366)] = 16715,
  [SMALL_STATE(367)] = 16776,
  [SMALL_STATE(368)] = 16837,
  [SMALL_STATE(369)] = 16863,
  [SMALL_STATE(370)] = 16896,
  [SMALL_STATE(371)] = 16931,
  [SMALL_STATE(372)] = 16964,
  [SMALL_STATE(373)] = 16994,
  [SMALL_STATE(374)] = 17026,
  [SMALL_STATE(375)] = 17054,
  [SMALL_STATE(376)] = 17074,
  [SMALL_STATE(377)] = 17090,
  [SMALL_STATE(378)] = 17110,
  [SMALL_STATE(379)] = 17138,
  [SMALL_STATE(380)] = 17166,
  [SMALL_STATE(381)] = 17186,
  [SMALL_STATE(382)] = 17202,
  [SMALL_STATE(383)] = 17222,
  [SMALL_STATE(384)] = 17242,
  [SMALL_STATE(385)] = 17258,
  [SMALL_STATE(386)] = 17277,
  [SMALL_STATE(387)] = 17296,
  [SMALL_STATE(388)] = 17321,
  [SMALL_STATE(389)] = 17340,
  [SMALL_STATE(390)] = 17365,
  [SMALL_STATE(391)] = 17384,
  [SMALL_STATE(392)] = 17403,
  [SMALL_STATE(393)] = 17422,
  [SMALL_STATE(394)] = 17441,
  [SMALL_STATE(395)] = 17463,
  [SMALL_STATE(396)] = 17485,
  [SMALL_STATE(397)] = 17507,
  [SMALL_STATE(398)] = 17527,
  [SMALL_STATE(399)] = 17549,
  [SMALL_STATE(400)] = 17569,
  [SMALL_STATE(401)] = 17591,
  [SMALL_STATE(402)] = 17613,
  [SMALL_STATE(403)] = 17631,
  [SMALL_STATE(404)] = 17644,
  [SMALL_STATE(405)] = 17657,
  [SMALL_STATE(406)] = 17670,
  [SMALL_STATE(407)] = 17683,
  [SMALL_STATE(408)] = 17696,
  [SMALL_STATE(409)] = 17709,
  [SMALL_STATE(410)] = 17722,
  [SMALL_STATE(411)] = 17735,
  [SMALL_STATE(412)] = 17748,
  [SMALL_STATE(413)] = 17761,
  [SMALL_STATE(414)] = 17774,
  [SMALL_STATE(415)] = 17790,
  [SMALL_STATE(416)] = 17806,
  [SMALL_STATE(417)] = 17826,
  [SMALL_STATE(418)] = 17846,
  [SMALL_STATE(419)] = 17857,
  [SMALL_STATE(420)] = 17874,
  [SMALL_STATE(421)] = 17891,
  [SMALL_STATE(422)] = 17908,
  [SMALL_STATE(423)] = 17925,
  [SMALL_STATE(424)] = 17942,
  [SMALL_STATE(425)] = 17959,
  [SMALL_STATE(426)] = 17976,
  [SMALL_STATE(427)] = 17993,
  [SMALL_STATE(428)] = 18010,
  [SMALL_STATE(429)] = 18027,
  [SMALL_STATE(430)] = 18038,
  [SMALL_STATE(431)] = 18055,
  [SMALL_STATE(432)] = 18072,
  [SMALL_STATE(433)] = 18083,
  [SMALL_STATE(434)] = 18094,
  [SMALL_STATE(435)] = 18105,
  [SMALL_STATE(436)] = 18116,
  [SMALL_STATE(437)] = 18127,
  [SMALL_STATE(438)] = 18138,
  [SMALL_STATE(439)] = 18149,
  [SMALL_STATE(440)] = 18160,
  [SMALL_STATE(441)] = 18171,
  [SMALL_STATE(442)] = 18182,
  [SMALL_STATE(443)] = 18193,
  [SMALL_STATE(444)] = 18204,
  [SMALL_STATE(445)] = 18221,
  [SMALL_STATE(446)] = 18236,
  [SMALL_STATE(447)] = 18244,
  [SMALL_STATE(448)] = 18252,
  [SMALL_STATE(449)] = 18260,
  [SMALL_STATE(450)] = 18276,
  [SMALL_STATE(451)] = 18284,
  [SMALL_STATE(452)] = 18292,
  [SMALL_STATE(453)] = 18308,
  [SMALL_STATE(454)] = 18316,
  [SMALL_STATE(455)] = 18324,
  [SMALL_STATE(456)] = 18332,
  [SMALL_STATE(457)] = 18340,
  [SMALL_STATE(458)] = 18348,
  [SMALL_STATE(459)] = 18356,
  [SMALL_STATE(460)] = 18372,
  [SMALL_STATE(461)] = 18382,
  [SMALL_STATE(462)] = 18390,
  [SMALL_STATE(463)] = 18400,
  [SMALL_STATE(464)] = 18410,
  [SMALL_STATE(465)] = 18426,
  [SMALL_STATE(466)] = 18434,
  [SMALL_STATE(467)] = 18442,
  [SMALL_STATE(468)] = 18458,
  [SMALL_STATE(469)] = 18472,
  [SMALL_STATE(470)] = 18480,
  [SMALL_STATE(471)] = 18496,
  [SMALL_STATE(472)] = 18504,
  [SMALL_STATE(473)] = 18518,
  [SMALL_STATE(474)] = 18526,
  [SMALL_STATE(475)] = 18542,
  [SMALL_STATE(476)] = 18550,
  [SMALL_STATE(477)] = 18566,
  [SMALL_STATE(478)] = 18574,
  [SMALL_STATE(479)] = 18590,
  [SMALL_STATE(480)] = 18598,
  [SMALL_STATE(481)] = 18606,
  [SMALL_STATE(482)] = 18622,
  [SMALL_STATE(483)] = 18630,
  [SMALL_STATE(484)] = 18644,
  [SMALL_STATE(485)] = 18656,
  [SMALL_STATE(486)] = 18664,
  [SMALL_STATE(487)] = 18672,
  [SMALL_STATE(488)] = 18680,
  [SMALL_STATE(489)] = 18688,
  [SMALL_STATE(490)] = 18696,
  [SMALL_STATE(491)] = 18704,
  [SMALL_STATE(492)] = 18712,
  [SMALL_STATE(493)] = 18720,
  [SMALL_STATE(494)] = 18728,
  [SMALL_STATE(495)] = 18744,
  [SMALL_STATE(496)] = 18755,
  [SMALL_STATE(497)] = 18768,
  [SMALL_STATE(498)] = 18775,
  [SMALL_STATE(499)] = 18786,
  [SMALL_STATE(500)] = 18799,
  [SMALL_STATE(501)] = 18810,
  [SMALL_STATE(502)] = 18821,
  [SMALL_STATE(503)] = 18832,
  [SMALL_STATE(504)] = 18843,
  [SMALL_STATE(505)] = 18856,
  [SMALL_STATE(506)] = 18863,
  [SMALL_STATE(507)] = 18870,
  [SMALL_STATE(508)] = 18883,
  [SMALL_STATE(509)] = 18894,
  [SMALL_STATE(510)] = 18907,
  [SMALL_STATE(511)] = 18917,
  [SMALL_STATE(512)] = 18927,
  [SMALL_STATE(513)] = 18937,
  [SMALL_STATE(514)] = 18947,
  [SMALL_STATE(515)] = 18957,
  [SMALL_STATE(516)] = 18965,
  [SMALL_STATE(517)] = 18975,
  [SMALL_STATE(518)] = 18985,
  [SMALL_STATE(519)] = 18995,
  [SMALL_STATE(520)] = 19005,
  [SMALL_STATE(521)] = 19015,
  [SMALL_STATE(522)] = 19022,
  [SMALL_STATE(523)] = 19029,
  [SMALL_STATE(524)] = 19036,
  [SMALL_STATE(525)] = 19043,
  [SMALL_STATE(526)] = 19050,
  [SMALL_STATE(527)] = 19057,
  [SMALL_STATE(528)] = 19064,
  [SMALL_STATE(529)] = 19071,
  [SMALL_STATE(530)] = 19078,
  [SMALL_STATE(531)] = 19085,
  [SMALL_STATE(532)] = 19092,
  [SMALL_STATE(533)] = 19099,
  [SMALL_STATE(534)] = 19106,
  [SMALL_STATE(535)] = 19113,
  [SMALL_STATE(536)] = 19120,
  [SMALL_STATE(537)] = 19127,
  [SMALL_STATE(538)] = 19134,
  [SMALL_STATE(539)] = 19141,
  [SMALL_STATE(540)] = 19148,
  [SMALL_STATE(541)] = 19155,
  [SMALL_STATE(542)] = 19162,
  [SMALL_STATE(543)] = 19169,
  [SMALL_STATE(544)] = 19176,
  [SMALL_STATE(545)] = 19183,
  [SMALL_STATE(546)] = 19190,
  [SMALL_STATE(547)] = 19197,
  [SMALL_STATE(548)] = 19204,
  [SMALL_STATE(549)] = 19211,
  [SMALL_STATE(550)] = 19216,
  [SMALL_STATE(551)] = 19223,
  [SMALL_STATE(552)] = 19230,
  [SMALL_STATE(553)] = 19237,
  [SMALL_STATE(554)] = 19244,
  [SMALL_STATE(555)] = 19249,
  [SMALL_STATE(556)] = 19256,
  [SMALL_STATE(557)] = 19263,
  [SMALL_STATE(558)] = 19270,
  [SMALL_STATE(559)] = 19277,
  [SMALL_STATE(560)] = 19284,
  [SMALL_STATE(561)] = 19291,
  [SMALL_STATE(562)] = 19298,
  [SMALL_STATE(563)] = 19305,
  [SMALL_STATE(564)] = 19312,
  [SMALL_STATE(565)] = 19319,
  [SMALL_STATE(566)] = 19326,
  [SMALL_STATE(567)] = 19333,
  [SMALL_STATE(568)] = 19340,
  [SMALL_STATE(569)] = 19347,
  [SMALL_STATE(570)] = 19354,
  [SMALL_STATE(571)] = 19361,
  [SMALL_STATE(572)] = 19368,
  [SMALL_STATE(573)] = 19375,
  [SMALL_STATE(574)] = 19382,
  [SMALL_STATE(575)] = 19389,
  [SMALL_STATE(576)] = 19396,
  [SMALL_STATE(577)] = 19403,
  [SMALL_STATE(578)] = 19410,
  [SMALL_STATE(579)] = 19415,
  [SMALL_STATE(580)] = 19422,
  [SMALL_STATE(581)] = 19429,
  [SMALL_STATE(582)] = 19436,
  [SMALL_STATE(583)] = 19443,
  [SMALL_STATE(584)] = 19450,
  [SMALL_STATE(585)] = 19457,
  [SMALL_STATE(586)] = 19464,
  [SMALL_STATE(587)] = 19471,
  [SMALL_STATE(588)] = 19478,
  [SMALL_STATE(589)] = 19485,
  [SMALL_STATE(590)] = 19492,
  [SMALL_STATE(591)] = 19499,
  [SMALL_STATE(592)] = 19506,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(555),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(578),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(547),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(552),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(563),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(512),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0), SHIFT(11),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0), SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0), SHIFT(9),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 5),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 2, 0, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 5), SHIFT(23),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1), SHIFT(16),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat2, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat2, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_operands, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_operands, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 1, 0, 0), SHIFT(85),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_expression, 1, 0, 10),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer_operands, 1, 0, 0), SHIFT(549),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer_operands, 1, 0, 0), SHIFT(192),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_expression, 1, 0, 10),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 13),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 13),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 4, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_operand, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_operand, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 16),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 16),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 13),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 13),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 20),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 20),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__right_expression, 1, 0, 21),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__right_expression, 1, 0, 21),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 22),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 22),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 27),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 27),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 16),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 16),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 25),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 25),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 26),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 26),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 16),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 3, 0, 16),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_operand, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 1, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__control_operand_separator_repeat1, 2, 0, 0),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__control_operand_separator_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_operand_separator, 1, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_expression, 2, 0, 10),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_expression, 2, 0, 10),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand_separator, 2, 0, 0),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_operand_separator, 2, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operands, 2, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operands, 2, 0, 0),
  [818] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_float_operands, 2, 0, 0), SHIFT(47),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [825] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_float_operands, 2, 0, 0), SHIFT(586),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_operands, 2, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_operands, 2, 0, 0),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 2, 0, 0), SHIFT(85),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer_operands, 2, 0, 0), SHIFT(549),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer_operands, 2, 0, 0), SHIFT(192),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operands, 1, 0, 0),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operands, 1, 0, 0),
  [845] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_float_operands, 1, 0, 0), SHIFT(47),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_float_operands, 1, 0, 0), SHIFT(586),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0),
  [855] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [858] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(586),
  [867] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [870] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(549),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [886] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [889] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_operands, 3, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_operands, 3, 0, 0),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 4, 0, 0),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 4, 0, 0),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operands, 3, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operands, 3, 0, 0),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_operands, 1, 0, 0),
  [913] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_control_operands, 1, 0, 0), SHIFT(359),
  [916] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_control_operands, 1, 0, 0), SHIFT(25),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0), SHIFT(25),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_operands, 2, 0, 0),
  [926] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_control_operands, 2, 0, 0), SHIFT(359),
  [929] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_control_operands, 2, 0, 0), SHIFT(25),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0), SHIFT(25),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat2, 2, 0, 0),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat2, 2, 0, 0),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(380),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 3, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 3, 0, 0),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 4, 0, 11),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 4, 0, 11),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 3, 0, 11),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 3, 0, 11),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 11),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 3, 0, 11),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 11), SHIFT(461),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 5, 0, 17),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 5, 0, 17),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 4, 0, 17),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 4, 0, 17),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__control_directive, 4, 0, 17), SHIFT(489),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 4, 0, 17),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 4, 0, 17),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_directive, 4, 0, 11),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_directive, 4, 0, 11),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_directive_repeat1, 2, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__integer_directive_repeat1, 2, 0, 0),
  [996] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__integer_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_directive, 3, 0, 11),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_directive, 3, 0, 11),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [1013] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1), SHIFT(15),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [1018] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(510),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [1031] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [1034] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(585),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand_separator, 1, 0, 0),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [1048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(510),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [1057] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1067] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operands, 2, 0, 0), SHIFT(46),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 0),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1076] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0), SHIFT(46),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__control_operand_separator_repeat1, 2, 0, 0),
  [1081] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__control_operand_separator_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 4, 0, 0),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 4, 0, 0),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_type, 1, 0, 0),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_flag, 1, 0, 0),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 4, 0, 12),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 4, 0, 12),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(514),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(514),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 5, 0, 23),
  [1186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 5, 0, 23),
  [1188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(514),
  [1191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(514),
  [1194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(514),
  [1197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(528),
  [1200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(514),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 8),
  [1205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 8),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 9),
  [1209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 9),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 4, 0, 0),
  [1213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 4, 0, 0),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 4, 0, 23),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 4, 0, 23),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 4, 0, 16),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 4, 0, 16),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 2, 0, 0),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 6),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 14),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 4, 0, 14),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 15),
  [1241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 4, 0, 15),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 0),
  [1245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 3, 0, 0),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 5),
  [1255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 5),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 5), SHIFT(21),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 30),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 24),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 7),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operands, 2, 0, 0), SHIFT(51),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 29),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 28),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 4),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 12),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 18),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 24),
  [1295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 4, 0, 11),
  [1303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 7),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 9, 0, 30),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 9, 0, 12),
  [1319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [1324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 10, 0, 31),
  [1331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 19),
  [1335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 19),
  [1343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 9, 0, 31),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 7),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0), SHIFT(51),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 28),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 12),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 24),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 9, 0, 29),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 5, 0, 17),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 7),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 19),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 12),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [1413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [1451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1497] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_mnemonic, 1, 0, 0),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_mnemonic, 1, 0, 0),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__operand_separator = 0,
  ts_external_token__operator_separator = 1,
  ts_external_token__line_separator = 2,
  ts_external_token__data_separator = 3,
  ts_external_token_line_comment = 4,
  ts_external_token_block_comment = 5,
  ts_external_token_preprocessor = 6,
  ts_external_token_division_operator = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__operand_separator] = sym__operand_separator,
  [ts_external_token__operator_separator] = sym__operator_separator,
  [ts_external_token__line_separator] = sym__line_separator,
  [ts_external_token__data_separator] = sym__data_separator,
  [ts_external_token_line_comment] = sym_line_comment,
  [ts_external_token_block_comment] = sym_block_comment,
  [ts_external_token_preprocessor] = sym_preprocessor,
  [ts_external_token_division_operator] = sym_division_operator,
};

static const bool ts_external_scanner_states[19][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_separator] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__data_separator] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_preprocessor] = true,
    [ts_external_token_division_operator] = true,
  },
  [2] = {
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_preprocessor] = true,
  },
  [3] = {
    [ts_external_token__line_separator] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_preprocessor] = true,
  },
  [4] = {
    [ts_external_token__line_separator] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
  },
  [5] = {
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
  },
  [6] = {
    [ts_external_token__line_separator] = true,
    [ts_external_token__data_separator] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
  },
  [7] = {
    [ts_external_token_block_comment] = true,
  },
  [8] = {
    [ts_external_token__operator_separator] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__data_separator] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_division_operator] = true,
  },
  [9] = {
    [ts_external_token__data_separator] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
  },
  [10] = {
    [ts_external_token__operator_separator] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_division_operator] = true,
  },
  [11] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_separator] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_division_operator] = true,
  },
  [12] = {
    [ts_external_token__data_separator] = true,
    [ts_external_token_block_comment] = true,
  },
  [13] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_separator] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_division_operator] = true,
  },
  [14] = {
    [ts_external_token__operator_separator] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_division_operator] = true,
  },
  [15] = {
    [ts_external_token_block_comment] = true,
    [ts_external_token_division_operator] = true,
  },
  [16] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
  },
  [17] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token_block_comment] = true,
  },
  [18] = {
    [ts_external_token__line_separator] = true,
    [ts_external_token_block_comment] = true,
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
