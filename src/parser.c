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
#define STATE_COUNT 587
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 148
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
  sym_section_type = 119,
  sym_option_flag = 120,
  sym_instruction = 121,
  sym_operands = 122,
  sym__operand = 123,
  sym__call_expression = 124,
  sym__expression = 125,
  sym_binary_expression = 126,
  sym__left_expression = 127,
  sym__right_expression = 128,
  sym_parenthesized_expression = 129,
  sym_unary_expression = 130,
  sym_relocation_expression = 131,
  sym_decimal = 132,
  sym_char = 133,
  sym_string = 134,
  sym__label = 135,
  sym_local_label_reference = 136,
  sym_symbol = 137,
  sym_address = 138,
  aux_sym_program_repeat1 = 139,
  aux_sym_macro_parameters_repeat1 = 140,
  aux_sym__integer_directive_repeat1 = 141,
  aux_sym_integer_operands_repeat1 = 142,
  aux_sym_integer_operands_repeat2 = 143,
  aux_sym_float_operands_repeat1 = 144,
  aux_sym_control_operands_repeat1 = 145,
  aux_sym_operands_repeat1 = 146,
  aux_sym_string_repeat1 = 147,
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
  [30] = 28,
  [31] = 19,
  [32] = 18,
  [33] = 19,
  [34] = 18,
  [35] = 29,
  [36] = 29,
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
  [51] = 51,
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
  [74] = 72,
  [75] = 75,
  [76] = 67,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 67,
  [88] = 65,
  [89] = 66,
  [90] = 90,
  [91] = 68,
  [92] = 69,
  [93] = 70,
  [94] = 77,
  [95] = 95,
  [96] = 78,
  [97] = 79,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 80,
  [102] = 82,
  [103] = 64,
  [104] = 46,
  [105] = 47,
  [106] = 49,
  [107] = 50,
  [108] = 51,
  [109] = 83,
  [110] = 52,
  [111] = 53,
  [112] = 54,
  [113] = 55,
  [114] = 45,
  [115] = 56,
  [116] = 57,
  [117] = 58,
  [118] = 59,
  [119] = 60,
  [120] = 61,
  [121] = 62,
  [122] = 63,
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
  [134] = 132,
  [135] = 125,
  [136] = 126,
  [137] = 127,
  [138] = 128,
  [139] = 129,
  [140] = 140,
  [141] = 141,
  [142] = 124,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 140,
  [150] = 141,
  [151] = 124,
  [152] = 143,
  [153] = 144,
  [154] = 145,
  [155] = 146,
  [156] = 147,
  [157] = 148,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 130,
  [162] = 131,
  [163] = 163,
  [164] = 130,
  [165] = 131,
  [166] = 163,
  [167] = 167,
  [168] = 133,
  [169] = 132,
  [170] = 125,
  [171] = 130,
  [172] = 131,
  [173] = 163,
  [174] = 133,
  [175] = 132,
  [176] = 125,
  [177] = 126,
  [178] = 127,
  [179] = 128,
  [180] = 129,
  [181] = 140,
  [182] = 141,
  [183] = 126,
  [184] = 143,
  [185] = 144,
  [186] = 145,
  [187] = 146,
  [188] = 147,
  [189] = 148,
  [190] = 130,
  [191] = 131,
  [192] = 163,
  [193] = 133,
  [194] = 132,
  [195] = 125,
  [196] = 126,
  [197] = 127,
  [198] = 128,
  [199] = 129,
  [200] = 140,
  [201] = 141,
  [202] = 124,
  [203] = 143,
  [204] = 144,
  [205] = 145,
  [206] = 146,
  [207] = 147,
  [208] = 148,
  [209] = 127,
  [210] = 128,
  [211] = 129,
  [212] = 140,
  [213] = 141,
  [214] = 124,
  [215] = 143,
  [216] = 144,
  [217] = 145,
  [218] = 146,
  [219] = 147,
  [220] = 148,
  [221] = 133,
  [222] = 163,
  [223] = 67,
  [224] = 51,
  [225] = 52,
  [226] = 53,
  [227] = 54,
  [228] = 55,
  [229] = 45,
  [230] = 56,
  [231] = 57,
  [232] = 58,
  [233] = 59,
  [234] = 60,
  [235] = 61,
  [236] = 62,
  [237] = 63,
  [238] = 83,
  [239] = 64,
  [240] = 65,
  [241] = 66,
  [242] = 49,
  [243] = 50,
  [244] = 69,
  [245] = 70,
  [246] = 80,
  [247] = 247,
  [248] = 247,
  [249] = 247,
  [250] = 250,
  [251] = 247,
  [252] = 252,
  [253] = 253,
  [254] = 253,
  [255] = 255,
  [256] = 253,
  [257] = 257,
  [258] = 247,
  [259] = 253,
  [260] = 77,
  [261] = 78,
  [262] = 253,
  [263] = 79,
  [264] = 82,
  [265] = 46,
  [266] = 47,
  [267] = 68,
  [268] = 268,
  [269] = 77,
  [270] = 78,
  [271] = 79,
  [272] = 99,
  [273] = 80,
  [274] = 82,
  [275] = 46,
  [276] = 47,
  [277] = 49,
  [278] = 50,
  [279] = 51,
  [280] = 52,
  [281] = 53,
  [282] = 54,
  [283] = 55,
  [284] = 45,
  [285] = 56,
  [286] = 57,
  [287] = 58,
  [288] = 59,
  [289] = 60,
  [290] = 61,
  [291] = 62,
  [292] = 268,
  [293] = 83,
  [294] = 64,
  [295] = 65,
  [296] = 66,
  [297] = 68,
  [298] = 69,
  [299] = 70,
  [300] = 268,
  [301] = 67,
  [302] = 302,
  [303] = 303,
  [304] = 302,
  [305] = 303,
  [306] = 268,
  [307] = 302,
  [308] = 303,
  [309] = 268,
  [310] = 302,
  [311] = 303,
  [312] = 302,
  [313] = 303,
  [314] = 268,
  [315] = 302,
  [316] = 63,
  [317] = 57,
  [318] = 318,
  [319] = 318,
  [320] = 77,
  [321] = 78,
  [322] = 79,
  [323] = 80,
  [324] = 324,
  [325] = 82,
  [326] = 46,
  [327] = 47,
  [328] = 49,
  [329] = 50,
  [330] = 51,
  [331] = 52,
  [332] = 53,
  [333] = 54,
  [334] = 55,
  [335] = 45,
  [336] = 56,
  [337] = 58,
  [338] = 59,
  [339] = 60,
  [340] = 61,
  [341] = 62,
  [342] = 63,
  [343] = 64,
  [344] = 65,
  [345] = 66,
  [346] = 67,
  [347] = 68,
  [348] = 69,
  [349] = 70,
  [350] = 82,
  [351] = 69,
  [352] = 70,
  [353] = 67,
  [354] = 318,
  [355] = 318,
  [356] = 318,
  [357] = 83,
  [358] = 358,
  [359] = 358,
  [360] = 360,
  [361] = 361,
  [362] = 360,
  [363] = 360,
  [364] = 360,
  [365] = 360,
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
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 389,
  [408] = 392,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 394,
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
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 387,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 393,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 388,
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
  [462] = 456,
  [463] = 441,
  [464] = 441,
  [465] = 391,
  [466] = 456,
  [467] = 467,
  [468] = 468,
  [469] = 441,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 456,
  [474] = 388,
  [475] = 395,
  [476] = 391,
  [477] = 386,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 396,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 398,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 393,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 394,
  [503] = 397,
  [504] = 504,
  [505] = 504,
  [506] = 504,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 507,
  [511] = 511,
  [512] = 504,
  [513] = 513,
  [514] = 504,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 523,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 517,
  [534] = 534,
  [535] = 517,
  [536] = 520,
  [537] = 537,
  [538] = 538,
  [539] = 393,
  [540] = 540,
  [541] = 394,
  [542] = 531,
  [543] = 522,
  [544] = 517,
  [545] = 545,
  [546] = 524,
  [547] = 520,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 531,
  [553] = 517,
  [554] = 554,
  [555] = 555,
  [556] = 520,
  [557] = 520,
  [558] = 517,
  [559] = 559,
  [560] = 520,
  [561] = 517,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 531,
  [569] = 569,
  [570] = 531,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 525,
  [580] = 580,
  [581] = 521,
  [582] = 582,
  [583] = 521,
  [584] = 521,
  [585] = 521,
  [586] = 586,
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
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '\n', 68,
        '!', 398,
        '"', 435,
        '$', 10,
        '%', 394,
        '&', 380,
        '\'', 432,
        '(', 71,
        ')', 76,
        '*', 393,
        '+', 389,
        ',', 79,
        '-', 391,
        '.', 528,
        '0', 402,
        '3', 410,
        ';', 63,
        '<', 383,
        '=', 395,
        '>', 384,
        '@', 48,
        'A', 516,
        'S', 505,
        'T', 518,
        '\\', 20,
        '^', 379,
        'a', 517,
        'f', 507,
        'g', 512,
        'r', 509,
        's', 506,
        't', 519,
        'z', 510,
        '|', 378,
        '~', 396,
        'C', 515,
        'c', 515,
        'K', 514,
        'k', 514,
        'V', 514,
        'v', 514,
        '1', 411,
        '2', 411,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(508);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(520);
      END_STATE();
    case 1:
      if (lookahead == '\r') SKIP(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 397,
        '"', 435,
        '$', 14,
        '%', 375,
        '\'', 432,
        '(', 71,
        ')', 76,
        '-', 391,
        '.', 534,
        '0', 403,
        '3', 413,
        'A', 543,
        'S', 526,
        'T', 545,
        '\\', 51,
        'a', 544,
        'f', 529,
        'g', 538,
        'r', 531,
        's', 527,
        't', 546,
        'z', 536,
        '~', 396,
        'C', 542,
        'c', 542,
        'K', 541,
        'k', 541,
        'V', 541,
        'v', 541,
        '1', 414,
        '2', 414,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(530);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(547);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 397,
        '"', 435,
        '$', 14,
        '%', 22,
        '\'', 432,
        '(', 71,
        '+', 49,
        '-', 392,
        '.', 535,
        '0', 406,
        '3', 416,
        '@', 48,
        'A', 543,
        'S', 526,
        'T', 545,
        '\\', 51,
        'a', 544,
        'f', 529,
        'g', 538,
        'r', 531,
        's', 527,
        't', 546,
        'z', 536,
        '~', 396,
        'C', 542,
        'c', 542,
        'K', 541,
        'k', 541,
        'V', 541,
        'v', 541,
        '1', 417,
        '2', 417,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(530);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(417);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(547);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(437);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '\\') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == ':') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(438);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '2', 177,
        '4', 183,
        '8', 184,
        ':', 525,
        'L', 6,
        'a', 263,
        'b', 172,
        'c', 304,
        'd', 303,
        'f', 264,
        'h', 173,
        'i', 293,
        'l', 191,
        'm', 168,
        'p', 153,
        'q', 358,
        's', 242,
        'u', 269,
        'w', 306,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '3', 442,
        'A', 32,
        'S', 7,
        'T', 34,
        'a', 33,
        'f', 11,
        'g', 25,
        'r', 13,
        's', 8,
        't', 38,
        'z', 23,
        'C', 31,
        'c', 31,
        'K', 29,
        'k', 29,
        'V', 29,
        'v', 29,
        '1', 445,
        '2', 445,
        'F', 12,
        'R', 12,
        'X', 12,
        'x', 12,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 11:
      if (lookahead == '3') ADVANCE(442);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(445);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(438);
      END_STATE();
    case 12:
      if (lookahead == '3') ADVANCE(442);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 13:
      if (lookahead == '3') ADVANCE(442);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '3', 443,
        'A', 499,
        'S', 450,
        'T', 501,
        'a', 500,
        'f', 455,
        'g', 487,
        'r', 457,
        's', 451,
        't', 502,
        'z', 470,
        'C', 498,
        'c', 498,
        'K', 497,
        'k', 497,
        'V', 497,
        'v', 497,
        '1', 446,
        '2', 446,
        'F', 456,
        'R', 456,
        'X', 456,
        'x', 456,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(503);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(549);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(382);
      END_STATE();
    case 20:
      if (lookahead == 'U') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == 'x') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(431);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(429);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(433);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        'a', 465,
        'c', 463,
        'd', 496,
        'g', 485,
        'h', 476,
        'l', 484,
        'p', 466,
        't', 480,
      );
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(438);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 28:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 29:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(438);
      END_STATE();
    case 30:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(409);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(438);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(438);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(438);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(438);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(429);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 49:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 50:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 51:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 52:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '\t', 74,
        '\n', 68,
        '\r', 64,
        ' ', 72,
        '!', 397,
        '$', 14,
        '%', 22,
        '\'', 432,
        '(', 71,
        ',', 126,
        '-', 391,
        '.', 534,
        '0', 403,
        '3', 413,
        ';', 63,
        'A', 543,
        'S', 526,
        'T', 545,
        '\\', 51,
        'a', 544,
        'f', 529,
        'g', 538,
        'r', 531,
        's', 527,
        't', 546,
        'z', 536,
        '~', 396,
        'C', 542,
        'c', 542,
        'K', 541,
        'k', 541,
        'V', 541,
        'v', 541,
        '1', 414,
        '2', 414,
        'F', 530,
        'R', 530,
        'X', 530,
        'x', 530,
      );
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(547);
      END_STATE();
    case 53:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '\t', 74,
        '\n', 68,
        '\r', 64,
        ' ', 72,
        '!', 397,
        '$', 14,
        '%', 22,
        '\'', 432,
        '(', 71,
        '-', 392,
        '.', 535,
        '0', 406,
        '3', 416,
        ';', 63,
        'A', 543,
        'S', 526,
        'T', 545,
        '\\', 51,
        'a', 544,
        'f', 529,
        'g', 538,
        'r', 531,
        's', 527,
        't', 546,
        'z', 536,
        '~', 396,
        'C', 542,
        'c', 542,
        'K', 541,
        'k', 541,
        'V', 541,
        'v', 541,
        '1', 417,
        '2', 417,
        'F', 530,
        'R', 530,
        'X', 530,
        'x', 530,
      );
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(417);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(547);
      END_STATE();
    case 54:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '\t', 74,
        '\n', 68,
        '\r', 64,
        ' ', 72,
        '!', 19,
        '%', 394,
        '&', 380,
        '(', 71,
        '*', 393,
        '+', 389,
        ',', 126,
        '-', 390,
        ';', 63,
        '<', 383,
        '=', 395,
        '>', 384,
        '^', 379,
        '|', 378,
      );
      END_STATE();
    case 55:
      if (eof) ADVANCE(62);
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == '\r') SKIP(55);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '\\') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 56:
      if (eof) ADVANCE(62);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 57:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '\n', 68,
        '\r', 66,
        '!', 397,
        '"', 435,
        '$', 14,
        '%', 375,
        '\'', 432,
        '(', 71,
        '-', 391,
        '.', 534,
        '0', 403,
        '3', 413,
        ';', 63,
        'A', 543,
        'S', 526,
        'T', 545,
        '\\', 51,
        'a', 544,
        'f', 529,
        'g', 538,
        'r', 531,
        's', 527,
        't', 546,
        'z', 536,
        '~', 396,
        '\t', 69,
        ' ', 69,
        'C', 542,
        'c', 542,
        'K', 541,
        'k', 541,
        'V', 541,
        'v', 541,
        '1', 414,
        '2', 414,
        'F', 530,
        'R', 530,
        'X', 530,
        'x', 530,
      );
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(547);
      END_STATE();
    case 58:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '\n', 68,
        '\r', 67,
        '!', 397,
        '"', 435,
        '$', 14,
        '%', 375,
        '\'', 432,
        '(', 71,
        ',', 79,
        '-', 391,
        '.', 534,
        '0', 403,
        '3', 413,
        ';', 63,
        'A', 543,
        'S', 526,
        'T', 545,
        '\\', 51,
        'a', 544,
        'f', 529,
        'g', 538,
        'r', 531,
        's', 527,
        't', 546,
        'z', 536,
        '~', 396,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(58);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(542);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(541);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(541);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(414);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(530);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(547);
      END_STATE();
    case 59:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '\n', 68,
        '\r', 67,
        '!', 19,
        '%', 394,
        '&', 380,
        '(', 71,
        '*', 393,
        '+', 389,
        ',', 79,
        '-', 390,
        ';', 63,
        '<', 383,
        '=', 395,
        '>', 384,
        '^', 379,
        '|', 378,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(59);
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      if (lookahead == '\r') SKIP(60);
      if (lookahead == '!') ADVANCE(397);
      if (lookahead == '"') ADVANCE(435);
      if (lookahead == '$') ADVANCE(14);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(432);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == '0') ADVANCE(406);
      if (lookahead == '3') ADVANCE(416);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == 'A') ADVANCE(543);
      if (lookahead == 'S') ADVANCE(526);
      if (lookahead == 'T') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == 'g') ADVANCE(538);
      if (lookahead == 'r') ADVANCE(531);
      if (lookahead == 's') ADVANCE(527);
      if (lookahead == 't') ADVANCE(546);
      if (lookahead == 'z') ADVANCE(536);
      if (lookahead == '~') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(542);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(541);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(541);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(417);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(530);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(417);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(547);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '!', 19,
        '%', 394,
        '&', 380,
        '(', 71,
        ')', 76,
        '*', 393,
        '+', 389,
        ',', 79,
        '-', 390,
        ';', 63,
        '<', 383,
        '=', 395,
        '>', 384,
        '^', 379,
        '|', 378,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '0') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_integer_operands_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__string_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'z') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(369);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'z') ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(370);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'z') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(369);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'z') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(370);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(148);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(150);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(151);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(152);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(154);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(174);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(155);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(156);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(157);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(175);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(114);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(116);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(115);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(117);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'E') ADVANCE(532);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(367);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'E') ADVANCE(532);
      if (lookahead == 'b') ADVANCE(363);
      if (lookahead == 'e') ADVANCE(367);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'E') ADVANCE(532);
      if (lookahead == 'b') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(367);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'E') ADVANCE(532);
      if (lookahead == 'e') ADVANCE(367);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'y') ADVANCE(344);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'w') ADVANCE(313);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'y') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'w') ADVANCE(314);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'b') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'b') ADVANCE(265);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'b') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'b') ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'b') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'b') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'b') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'c') ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'c') ADVANCE(311);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'c') ADVANCE(309);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(315);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(360);
      if (lookahead == 'w') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'g') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'g') ADVANCE(283);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'g') ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'g') ADVANCE(285);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'g') ADVANCE(288);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'g') ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'g') ADVANCE(290);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'g') ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'g') ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'h') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'k') ADVANCE(246);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == 'k') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'z') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(369);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'z') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(370);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(320);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'm') ADVANCE(279);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == 'w') ADVANCE(310);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == 'w') ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'u') ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'w') ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'w') ADVANCE(318);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'y') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'y') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'y') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'y') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'y') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'y') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_modulo_operator);
      ADVANCE_MAP(
        'a', 465,
        'c', 463,
        'd', 496,
        'g', 485,
        'h', 476,
        'l', 484,
        'p', 466,
        't', 480,
      );
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(376);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(377);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(387);
      if (lookahead == '=') ADVANCE(385);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead == '>') ADVANCE(388);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '0') ADVANCE(404);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(407);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(381);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(382);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 425,
        ':', 549,
        'b', 551,
        'f', 550,
        'E', 27,
        'e', 27,
        'X', 40,
        'x', 40,
        '8', 415,
        '9', 415,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(405);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 425,
        'b', 551,
        'f', 550,
        'E', 27,
        'e', 27,
        'X', 40,
        'x', 40,
        '8', 415,
        '9', 415,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(405);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(425);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(40);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(425);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == 'b') ADVANCE(551);
      if (lookahead == 'f') ADVANCE(550);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(40);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(408);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(40);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(425);
      if (lookahead == ':') ADVANCE(549);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(550);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(412);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(425);
      if (lookahead == ':') ADVANCE(549);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(425);
      if (lookahead == ':') ADVANCE(548);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(425);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(550);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(415);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(425);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(425);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(550);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(418);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(429);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(430);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(433);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(436);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(441);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(438);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(459);
      if (lookahead == '3') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '2') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(443);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(446);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(443);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(443);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '4') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(474);
      if (lookahead == 'g') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'h') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'b') ADVANCE(492);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'c') ADVANCE(452);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'g') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'h') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(453);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead == 'p') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('4' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_macro_parameter);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '1') ADVANCE(439);
      if (lookahead == ':') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '1') ADVANCE(439);
      if (lookahead == ':') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(441);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '3') ADVANCE(439);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(440);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(441);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '3') ADVANCE(439);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == '3') ADVANCE(439);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(441);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(441);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(511);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(441);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(441);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(441);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(533);
      if (lookahead == ':') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(547);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 158,
        '4', 159,
        '8', 160,
        ':', 525,
        'L', 523,
        'a', 257,
        'b', 164,
        'c', 297,
        'd', 299,
        'f', 262,
        'h', 167,
        'i', 286,
        'l', 192,
        'm', 163,
        'p', 149,
        'q', 356,
        's', 241,
        'u', 271,
        'w', 300,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(533);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(444);
      if (lookahead == 'a') ADVANCE(543);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(447);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(444);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(444);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(539);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'p') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(409);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 56, .external_lex_state = 2},
  [2] = {.lex_state = 56, .external_lex_state = 2},
  [3] = {.lex_state = 56, .external_lex_state = 2},
  [4] = {.lex_state = 56, .external_lex_state = 3},
  [5] = {.lex_state = 56, .external_lex_state = 3},
  [6] = {.lex_state = 56, .external_lex_state = 2},
  [7] = {.lex_state = 56, .external_lex_state = 2},
  [8] = {.lex_state = 56, .external_lex_state = 2},
  [9] = {.lex_state = 56, .external_lex_state = 2},
  [10] = {.lex_state = 56, .external_lex_state = 2},
  [11] = {.lex_state = 56, .external_lex_state = 2},
  [12] = {.lex_state = 56, .external_lex_state = 2},
  [13] = {.lex_state = 57, .external_lex_state = 4},
  [14] = {.lex_state = 60, .external_lex_state = 5},
  [15] = {.lex_state = 58, .external_lex_state = 4},
  [16] = {.lex_state = 58, .external_lex_state = 4},
  [17] = {.lex_state = 52, .external_lex_state = 6},
  [18] = {.lex_state = 58, .external_lex_state = 4},
  [19] = {.lex_state = 58, .external_lex_state = 4},
  [20] = {.lex_state = 53, .external_lex_state = 6},
  [21] = {.lex_state = 3, .external_lex_state = 7},
  [22] = {.lex_state = 54, .external_lex_state = 8},
  [23] = {.lex_state = 3, .external_lex_state = 7},
  [24] = {.lex_state = 2, .external_lex_state = 7},
  [25] = {.lex_state = 2, .external_lex_state = 7},
  [26] = {.lex_state = 2, .external_lex_state = 7},
  [27] = {.lex_state = 3, .external_lex_state = 7},
  [28] = {.lex_state = 2, .external_lex_state = 7},
  [29] = {.lex_state = 2, .external_lex_state = 7},
  [30] = {.lex_state = 2, .external_lex_state = 7},
  [31] = {.lex_state = 2, .external_lex_state = 7},
  [32] = {.lex_state = 2, .external_lex_state = 7},
  [33] = {.lex_state = 2, .external_lex_state = 7},
  [34] = {.lex_state = 2, .external_lex_state = 7},
  [35] = {.lex_state = 2, .external_lex_state = 7},
  [36] = {.lex_state = 2, .external_lex_state = 7},
  [37] = {.lex_state = 2, .external_lex_state = 7},
  [38] = {.lex_state = 2, .external_lex_state = 7},
  [39] = {.lex_state = 2, .external_lex_state = 7},
  [40] = {.lex_state = 2, .external_lex_state = 7},
  [41] = {.lex_state = 2, .external_lex_state = 7},
  [42] = {.lex_state = 2, .external_lex_state = 7},
  [43] = {.lex_state = 2, .external_lex_state = 7},
  [44] = {.lex_state = 2, .external_lex_state = 7},
  [45] = {.lex_state = 54, .external_lex_state = 8},
  [46] = {.lex_state = 54, .external_lex_state = 8},
  [47] = {.lex_state = 54, .external_lex_state = 8},
  [48] = {.lex_state = 54, .external_lex_state = 8},
  [49] = {.lex_state = 54, .external_lex_state = 8},
  [50] = {.lex_state = 54, .external_lex_state = 8},
  [51] = {.lex_state = 54, .external_lex_state = 8},
  [52] = {.lex_state = 54, .external_lex_state = 8},
  [53] = {.lex_state = 54, .external_lex_state = 8},
  [54] = {.lex_state = 54, .external_lex_state = 8},
  [55] = {.lex_state = 54, .external_lex_state = 8},
  [56] = {.lex_state = 54, .external_lex_state = 8},
  [57] = {.lex_state = 54, .external_lex_state = 8},
  [58] = {.lex_state = 54, .external_lex_state = 8},
  [59] = {.lex_state = 54, .external_lex_state = 8},
  [60] = {.lex_state = 54, .external_lex_state = 8},
  [61] = {.lex_state = 54, .external_lex_state = 8},
  [62] = {.lex_state = 54, .external_lex_state = 8},
  [63] = {.lex_state = 54, .external_lex_state = 8},
  [64] = {.lex_state = 54, .external_lex_state = 8},
  [65] = {.lex_state = 54, .external_lex_state = 8},
  [66] = {.lex_state = 54, .external_lex_state = 8},
  [67] = {.lex_state = 54, .external_lex_state = 8},
  [68] = {.lex_state = 54, .external_lex_state = 8},
  [69] = {.lex_state = 54, .external_lex_state = 8},
  [70] = {.lex_state = 54, .external_lex_state = 8},
  [71] = {.lex_state = 54, .external_lex_state = 8},
  [72] = {.lex_state = 2, .external_lex_state = 7},
  [73] = {.lex_state = 2, .external_lex_state = 9},
  [74] = {.lex_state = 2, .external_lex_state = 7},
  [75] = {.lex_state = 54, .external_lex_state = 8},
  [76] = {.lex_state = 54, .external_lex_state = 8},
  [77] = {.lex_state = 54, .external_lex_state = 8},
  [78] = {.lex_state = 54, .external_lex_state = 8},
  [79] = {.lex_state = 54, .external_lex_state = 8},
  [80] = {.lex_state = 54, .external_lex_state = 8},
  [81] = {.lex_state = 54, .external_lex_state = 8},
  [82] = {.lex_state = 54, .external_lex_state = 8},
  [83] = {.lex_state = 54, .external_lex_state = 8},
  [84] = {.lex_state = 2, .external_lex_state = 7},
  [85] = {.lex_state = 3, .external_lex_state = 7},
  [86] = {.lex_state = 3, .external_lex_state = 9},
  [87] = {.lex_state = 59, .external_lex_state = 10},
  [88] = {.lex_state = 59, .external_lex_state = 10},
  [89] = {.lex_state = 59, .external_lex_state = 10},
  [90] = {.lex_state = 2, .external_lex_state = 7},
  [91] = {.lex_state = 59, .external_lex_state = 10},
  [92] = {.lex_state = 59, .external_lex_state = 10},
  [93] = {.lex_state = 59, .external_lex_state = 10},
  [94] = {.lex_state = 59, .external_lex_state = 10},
  [95] = {.lex_state = 2, .external_lex_state = 7},
  [96] = {.lex_state = 59, .external_lex_state = 10},
  [97] = {.lex_state = 59, .external_lex_state = 10},
  [98] = {.lex_state = 2, .external_lex_state = 7},
  [99] = {.lex_state = 59, .external_lex_state = 10},
  [100] = {.lex_state = 60, .external_lex_state = 7},
  [101] = {.lex_state = 59, .external_lex_state = 10},
  [102] = {.lex_state = 59, .external_lex_state = 10},
  [103] = {.lex_state = 59, .external_lex_state = 10},
  [104] = {.lex_state = 59, .external_lex_state = 10},
  [105] = {.lex_state = 59, .external_lex_state = 10},
  [106] = {.lex_state = 59, .external_lex_state = 10},
  [107] = {.lex_state = 59, .external_lex_state = 10},
  [108] = {.lex_state = 59, .external_lex_state = 10},
  [109] = {.lex_state = 59, .external_lex_state = 10},
  [110] = {.lex_state = 59, .external_lex_state = 10},
  [111] = {.lex_state = 59, .external_lex_state = 10},
  [112] = {.lex_state = 59, .external_lex_state = 10},
  [113] = {.lex_state = 59, .external_lex_state = 10},
  [114] = {.lex_state = 59, .external_lex_state = 10},
  [115] = {.lex_state = 59, .external_lex_state = 10},
  [116] = {.lex_state = 59, .external_lex_state = 10},
  [117] = {.lex_state = 59, .external_lex_state = 10},
  [118] = {.lex_state = 59, .external_lex_state = 10},
  [119] = {.lex_state = 59, .external_lex_state = 10},
  [120] = {.lex_state = 59, .external_lex_state = 10},
  [121] = {.lex_state = 59, .external_lex_state = 10},
  [122] = {.lex_state = 59, .external_lex_state = 10},
  [123] = {.lex_state = 59, .external_lex_state = 10},
  [124] = {.lex_state = 3, .external_lex_state = 7},
  [125] = {.lex_state = 3, .external_lex_state = 7},
  [126] = {.lex_state = 3, .external_lex_state = 7},
  [127] = {.lex_state = 3, .external_lex_state = 7},
  [128] = {.lex_state = 3, .external_lex_state = 7},
  [129] = {.lex_state = 3, .external_lex_state = 7},
  [130] = {.lex_state = 3, .external_lex_state = 7},
  [131] = {.lex_state = 3, .external_lex_state = 7},
  [132] = {.lex_state = 3, .external_lex_state = 7},
  [133] = {.lex_state = 3, .external_lex_state = 7},
  [134] = {.lex_state = 3, .external_lex_state = 7},
  [135] = {.lex_state = 3, .external_lex_state = 7},
  [136] = {.lex_state = 3, .external_lex_state = 7},
  [137] = {.lex_state = 3, .external_lex_state = 7},
  [138] = {.lex_state = 3, .external_lex_state = 7},
  [139] = {.lex_state = 3, .external_lex_state = 7},
  [140] = {.lex_state = 3, .external_lex_state = 7},
  [141] = {.lex_state = 3, .external_lex_state = 7},
  [142] = {.lex_state = 3, .external_lex_state = 7},
  [143] = {.lex_state = 3, .external_lex_state = 7},
  [144] = {.lex_state = 3, .external_lex_state = 7},
  [145] = {.lex_state = 3, .external_lex_state = 7},
  [146] = {.lex_state = 3, .external_lex_state = 7},
  [147] = {.lex_state = 3, .external_lex_state = 7},
  [148] = {.lex_state = 3, .external_lex_state = 7},
  [149] = {.lex_state = 3, .external_lex_state = 7},
  [150] = {.lex_state = 3, .external_lex_state = 7},
  [151] = {.lex_state = 3, .external_lex_state = 7},
  [152] = {.lex_state = 3, .external_lex_state = 7},
  [153] = {.lex_state = 3, .external_lex_state = 7},
  [154] = {.lex_state = 3, .external_lex_state = 7},
  [155] = {.lex_state = 3, .external_lex_state = 7},
  [156] = {.lex_state = 3, .external_lex_state = 7},
  [157] = {.lex_state = 3, .external_lex_state = 7},
  [158] = {.lex_state = 3, .external_lex_state = 11},
  [159] = {.lex_state = 3, .external_lex_state = 7},
  [160] = {.lex_state = 3, .external_lex_state = 11},
  [161] = {.lex_state = 3, .external_lex_state = 7},
  [162] = {.lex_state = 3, .external_lex_state = 7},
  [163] = {.lex_state = 3, .external_lex_state = 7},
  [164] = {.lex_state = 3, .external_lex_state = 7},
  [165] = {.lex_state = 3, .external_lex_state = 7},
  [166] = {.lex_state = 3, .external_lex_state = 7},
  [167] = {.lex_state = 3, .external_lex_state = 7},
  [168] = {.lex_state = 3, .external_lex_state = 7},
  [169] = {.lex_state = 3, .external_lex_state = 7},
  [170] = {.lex_state = 3, .external_lex_state = 7},
  [171] = {.lex_state = 3, .external_lex_state = 7},
  [172] = {.lex_state = 3, .external_lex_state = 7},
  [173] = {.lex_state = 3, .external_lex_state = 7},
  [174] = {.lex_state = 3, .external_lex_state = 7},
  [175] = {.lex_state = 3, .external_lex_state = 7},
  [176] = {.lex_state = 3, .external_lex_state = 7},
  [177] = {.lex_state = 3, .external_lex_state = 7},
  [178] = {.lex_state = 3, .external_lex_state = 7},
  [179] = {.lex_state = 3, .external_lex_state = 7},
  [180] = {.lex_state = 3, .external_lex_state = 7},
  [181] = {.lex_state = 3, .external_lex_state = 7},
  [182] = {.lex_state = 3, .external_lex_state = 7},
  [183] = {.lex_state = 3, .external_lex_state = 7},
  [184] = {.lex_state = 3, .external_lex_state = 7},
  [185] = {.lex_state = 3, .external_lex_state = 7},
  [186] = {.lex_state = 3, .external_lex_state = 7},
  [187] = {.lex_state = 3, .external_lex_state = 7},
  [188] = {.lex_state = 3, .external_lex_state = 7},
  [189] = {.lex_state = 3, .external_lex_state = 7},
  [190] = {.lex_state = 3, .external_lex_state = 7},
  [191] = {.lex_state = 3, .external_lex_state = 7},
  [192] = {.lex_state = 3, .external_lex_state = 7},
  [193] = {.lex_state = 3, .external_lex_state = 7},
  [194] = {.lex_state = 3, .external_lex_state = 7},
  [195] = {.lex_state = 3, .external_lex_state = 7},
  [196] = {.lex_state = 3, .external_lex_state = 7},
  [197] = {.lex_state = 3, .external_lex_state = 7},
  [198] = {.lex_state = 3, .external_lex_state = 7},
  [199] = {.lex_state = 3, .external_lex_state = 7},
  [200] = {.lex_state = 3, .external_lex_state = 7},
  [201] = {.lex_state = 3, .external_lex_state = 7},
  [202] = {.lex_state = 3, .external_lex_state = 7},
  [203] = {.lex_state = 3, .external_lex_state = 7},
  [204] = {.lex_state = 3, .external_lex_state = 7},
  [205] = {.lex_state = 3, .external_lex_state = 7},
  [206] = {.lex_state = 3, .external_lex_state = 7},
  [207] = {.lex_state = 3, .external_lex_state = 7},
  [208] = {.lex_state = 3, .external_lex_state = 7},
  [209] = {.lex_state = 3, .external_lex_state = 7},
  [210] = {.lex_state = 3, .external_lex_state = 7},
  [211] = {.lex_state = 3, .external_lex_state = 7},
  [212] = {.lex_state = 3, .external_lex_state = 7},
  [213] = {.lex_state = 3, .external_lex_state = 7},
  [214] = {.lex_state = 3, .external_lex_state = 7},
  [215] = {.lex_state = 3, .external_lex_state = 7},
  [216] = {.lex_state = 3, .external_lex_state = 7},
  [217] = {.lex_state = 3, .external_lex_state = 7},
  [218] = {.lex_state = 3, .external_lex_state = 7},
  [219] = {.lex_state = 3, .external_lex_state = 7},
  [220] = {.lex_state = 3, .external_lex_state = 7},
  [221] = {.lex_state = 3, .external_lex_state = 7},
  [222] = {.lex_state = 3, .external_lex_state = 7},
  [223] = {.lex_state = 61, .external_lex_state = 12},
  [224] = {.lex_state = 61, .external_lex_state = 12},
  [225] = {.lex_state = 61, .external_lex_state = 12},
  [226] = {.lex_state = 61, .external_lex_state = 12},
  [227] = {.lex_state = 61, .external_lex_state = 12},
  [228] = {.lex_state = 61, .external_lex_state = 12},
  [229] = {.lex_state = 61, .external_lex_state = 12},
  [230] = {.lex_state = 61, .external_lex_state = 12},
  [231] = {.lex_state = 61, .external_lex_state = 12},
  [232] = {.lex_state = 61, .external_lex_state = 12},
  [233] = {.lex_state = 61, .external_lex_state = 12},
  [234] = {.lex_state = 61, .external_lex_state = 12},
  [235] = {.lex_state = 61, .external_lex_state = 12},
  [236] = {.lex_state = 61, .external_lex_state = 12},
  [237] = {.lex_state = 61, .external_lex_state = 12},
  [238] = {.lex_state = 61, .external_lex_state = 12},
  [239] = {.lex_state = 61, .external_lex_state = 12},
  [240] = {.lex_state = 61, .external_lex_state = 12},
  [241] = {.lex_state = 61, .external_lex_state = 12},
  [242] = {.lex_state = 61, .external_lex_state = 12},
  [243] = {.lex_state = 61, .external_lex_state = 12},
  [244] = {.lex_state = 61, .external_lex_state = 12},
  [245] = {.lex_state = 61, .external_lex_state = 12},
  [246] = {.lex_state = 61, .external_lex_state = 12},
  [247] = {.lex_state = 3, .external_lex_state = 7},
  [248] = {.lex_state = 3, .external_lex_state = 7},
  [249] = {.lex_state = 3, .external_lex_state = 7},
  [250] = {.lex_state = 3, .external_lex_state = 7},
  [251] = {.lex_state = 3, .external_lex_state = 7},
  [252] = {.lex_state = 3, .external_lex_state = 7},
  [253] = {.lex_state = 3, .external_lex_state = 7},
  [254] = {.lex_state = 3, .external_lex_state = 7},
  [255] = {.lex_state = 61, .external_lex_state = 12},
  [256] = {.lex_state = 3, .external_lex_state = 7},
  [257] = {.lex_state = 3, .external_lex_state = 7},
  [258] = {.lex_state = 3, .external_lex_state = 7},
  [259] = {.lex_state = 3, .external_lex_state = 7},
  [260] = {.lex_state = 61, .external_lex_state = 12},
  [261] = {.lex_state = 61, .external_lex_state = 12},
  [262] = {.lex_state = 3, .external_lex_state = 7},
  [263] = {.lex_state = 61, .external_lex_state = 12},
  [264] = {.lex_state = 61, .external_lex_state = 12},
  [265] = {.lex_state = 61, .external_lex_state = 12},
  [266] = {.lex_state = 61, .external_lex_state = 12},
  [267] = {.lex_state = 61, .external_lex_state = 12},
  [268] = {.lex_state = 61, .external_lex_state = 13},
  [269] = {.lex_state = 61, .external_lex_state = 13},
  [270] = {.lex_state = 61, .external_lex_state = 13},
  [271] = {.lex_state = 61, .external_lex_state = 13},
  [272] = {.lex_state = 61, .external_lex_state = 13},
  [273] = {.lex_state = 61, .external_lex_state = 13},
  [274] = {.lex_state = 61, .external_lex_state = 13},
  [275] = {.lex_state = 61, .external_lex_state = 13},
  [276] = {.lex_state = 61, .external_lex_state = 13},
  [277] = {.lex_state = 61, .external_lex_state = 13},
  [278] = {.lex_state = 61, .external_lex_state = 13},
  [279] = {.lex_state = 61, .external_lex_state = 13},
  [280] = {.lex_state = 61, .external_lex_state = 13},
  [281] = {.lex_state = 61, .external_lex_state = 13},
  [282] = {.lex_state = 61, .external_lex_state = 13},
  [283] = {.lex_state = 61, .external_lex_state = 13},
  [284] = {.lex_state = 61, .external_lex_state = 13},
  [285] = {.lex_state = 61, .external_lex_state = 13},
  [286] = {.lex_state = 61, .external_lex_state = 13},
  [287] = {.lex_state = 61, .external_lex_state = 13},
  [288] = {.lex_state = 61, .external_lex_state = 13},
  [289] = {.lex_state = 61, .external_lex_state = 13},
  [290] = {.lex_state = 61, .external_lex_state = 13},
  [291] = {.lex_state = 61, .external_lex_state = 13},
  [292] = {.lex_state = 61, .external_lex_state = 13},
  [293] = {.lex_state = 61, .external_lex_state = 13},
  [294] = {.lex_state = 61, .external_lex_state = 13},
  [295] = {.lex_state = 61, .external_lex_state = 13},
  [296] = {.lex_state = 61, .external_lex_state = 13},
  [297] = {.lex_state = 61, .external_lex_state = 13},
  [298] = {.lex_state = 61, .external_lex_state = 13},
  [299] = {.lex_state = 61, .external_lex_state = 13},
  [300] = {.lex_state = 61, .external_lex_state = 13},
  [301] = {.lex_state = 61, .external_lex_state = 13},
  [302] = {.lex_state = 61, .external_lex_state = 13},
  [303] = {.lex_state = 61, .external_lex_state = 13},
  [304] = {.lex_state = 61, .external_lex_state = 13},
  [305] = {.lex_state = 61, .external_lex_state = 13},
  [306] = {.lex_state = 61, .external_lex_state = 13},
  [307] = {.lex_state = 61, .external_lex_state = 13},
  [308] = {.lex_state = 61, .external_lex_state = 13},
  [309] = {.lex_state = 61, .external_lex_state = 13},
  [310] = {.lex_state = 61, .external_lex_state = 13},
  [311] = {.lex_state = 61, .external_lex_state = 13},
  [312] = {.lex_state = 61, .external_lex_state = 13},
  [313] = {.lex_state = 61, .external_lex_state = 13},
  [314] = {.lex_state = 61, .external_lex_state = 13},
  [315] = {.lex_state = 61, .external_lex_state = 13},
  [316] = {.lex_state = 61, .external_lex_state = 13},
  [317] = {.lex_state = 61, .external_lex_state = 14},
  [318] = {.lex_state = 61, .external_lex_state = 14},
  [319] = {.lex_state = 61, .external_lex_state = 14},
  [320] = {.lex_state = 61, .external_lex_state = 14},
  [321] = {.lex_state = 61, .external_lex_state = 14},
  [322] = {.lex_state = 61, .external_lex_state = 14},
  [323] = {.lex_state = 61, .external_lex_state = 14},
  [324] = {.lex_state = 133, .external_lex_state = 14},
  [325] = {.lex_state = 133, .external_lex_state = 14},
  [326] = {.lex_state = 61, .external_lex_state = 14},
  [327] = {.lex_state = 61, .external_lex_state = 14},
  [328] = {.lex_state = 61, .external_lex_state = 14},
  [329] = {.lex_state = 61, .external_lex_state = 14},
  [330] = {.lex_state = 61, .external_lex_state = 14},
  [331] = {.lex_state = 61, .external_lex_state = 14},
  [332] = {.lex_state = 61, .external_lex_state = 14},
  [333] = {.lex_state = 61, .external_lex_state = 14},
  [334] = {.lex_state = 61, .external_lex_state = 14},
  [335] = {.lex_state = 61, .external_lex_state = 14},
  [336] = {.lex_state = 61, .external_lex_state = 14},
  [337] = {.lex_state = 61, .external_lex_state = 14},
  [338] = {.lex_state = 61, .external_lex_state = 14},
  [339] = {.lex_state = 61, .external_lex_state = 14},
  [340] = {.lex_state = 61, .external_lex_state = 14},
  [341] = {.lex_state = 61, .external_lex_state = 14},
  [342] = {.lex_state = 61, .external_lex_state = 14},
  [343] = {.lex_state = 61, .external_lex_state = 14},
  [344] = {.lex_state = 61, .external_lex_state = 14},
  [345] = {.lex_state = 61, .external_lex_state = 14},
  [346] = {.lex_state = 133, .external_lex_state = 14},
  [347] = {.lex_state = 61, .external_lex_state = 14},
  [348] = {.lex_state = 133, .external_lex_state = 14},
  [349] = {.lex_state = 133, .external_lex_state = 14},
  [350] = {.lex_state = 61, .external_lex_state = 14},
  [351] = {.lex_state = 61, .external_lex_state = 14},
  [352] = {.lex_state = 61, .external_lex_state = 14},
  [353] = {.lex_state = 61, .external_lex_state = 14},
  [354] = {.lex_state = 61, .external_lex_state = 14},
  [355] = {.lex_state = 61, .external_lex_state = 14},
  [356] = {.lex_state = 61, .external_lex_state = 14},
  [357] = {.lex_state = 61, .external_lex_state = 14},
  [358] = {.lex_state = 61, .external_lex_state = 14},
  [359] = {.lex_state = 61, .external_lex_state = 14},
  [360] = {.lex_state = 61, .external_lex_state = 15},
  [361] = {.lex_state = 61, .external_lex_state = 15},
  [362] = {.lex_state = 61, .external_lex_state = 15},
  [363] = {.lex_state = 61, .external_lex_state = 15},
  [364] = {.lex_state = 61, .external_lex_state = 15},
  [365] = {.lex_state = 61, .external_lex_state = 15},
  [366] = {.lex_state = 52, .external_lex_state = 6},
  [367] = {.lex_state = 52, .external_lex_state = 6},
  [368] = {.lex_state = 52, .external_lex_state = 6},
  [369] = {.lex_state = 52, .external_lex_state = 6},
  [370] = {.lex_state = 52, .external_lex_state = 6},
  [371] = {.lex_state = 52, .external_lex_state = 6},
  [372] = {.lex_state = 52, .external_lex_state = 6},
  [373] = {.lex_state = 52, .external_lex_state = 6},
  [374] = {.lex_state = 52, .external_lex_state = 6},
  [375] = {.lex_state = 52, .external_lex_state = 6},
  [376] = {.lex_state = 52, .external_lex_state = 6},
  [377] = {.lex_state = 52, .external_lex_state = 6},
  [378] = {.lex_state = 52, .external_lex_state = 6},
  [379] = {.lex_state = 52, .external_lex_state = 5},
  [380] = {.lex_state = 52, .external_lex_state = 5},
  [381] = {.lex_state = 52, .external_lex_state = 5},
  [382] = {.lex_state = 52, .external_lex_state = 5},
  [383] = {.lex_state = 52, .external_lex_state = 5},
  [384] = {.lex_state = 52, .external_lex_state = 5},
  [385] = {.lex_state = 52, .external_lex_state = 5},
  [386] = {.lex_state = 58, .external_lex_state = 16},
  [387] = {.lex_state = 55, .external_lex_state = 5},
  [388] = {.lex_state = 58, .external_lex_state = 16},
  [389] = {.lex_state = 55, .external_lex_state = 5},
  [390] = {.lex_state = 57, .external_lex_state = 4},
  [391] = {.lex_state = 58, .external_lex_state = 16},
  [392] = {.lex_state = 55, .external_lex_state = 5},
  [393] = {.lex_state = 58, .external_lex_state = 16},
  [394] = {.lex_state = 58, .external_lex_state = 16},
  [395] = {.lex_state = 55, .external_lex_state = 5},
  [396] = {.lex_state = 55, .external_lex_state = 5},
  [397] = {.lex_state = 58, .external_lex_state = 16},
  [398] = {.lex_state = 55, .external_lex_state = 5},
  [399] = {.lex_state = 0, .external_lex_state = 17},
  [400] = {.lex_state = 60, .external_lex_state = 5},
  [401] = {.lex_state = 0, .external_lex_state = 17},
  [402] = {.lex_state = 58, .external_lex_state = 4},
  [403] = {.lex_state = 58, .external_lex_state = 4},
  [404] = {.lex_state = 0, .external_lex_state = 17},
  [405] = {.lex_state = 60, .external_lex_state = 5},
  [406] = {.lex_state = 55, .external_lex_state = 7},
  [407] = {.lex_state = 55, .external_lex_state = 7},
  [408] = {.lex_state = 55, .external_lex_state = 7},
  [409] = {.lex_state = 0, .external_lex_state = 17},
  [410] = {.lex_state = 0, .external_lex_state = 17},
  [411] = {.lex_state = 0, .external_lex_state = 17},
  [412] = {.lex_state = 58, .external_lex_state = 4},
  [413] = {.lex_state = 0, .external_lex_state = 17},
  [414] = {.lex_state = 58, .external_lex_state = 4},
  [415] = {.lex_state = 58, .external_lex_state = 4},
  [416] = {.lex_state = 58, .external_lex_state = 4},
  [417] = {.lex_state = 58, .external_lex_state = 4},
  [418] = {.lex_state = 0, .external_lex_state = 5},
  [419] = {.lex_state = 55, .external_lex_state = 7},
  [420] = {.lex_state = 58, .external_lex_state = 4},
  [421] = {.lex_state = 58, .external_lex_state = 4},
  [422] = {.lex_state = 58, .external_lex_state = 4},
  [423] = {.lex_state = 0, .external_lex_state = 17},
  [424] = {.lex_state = 58, .external_lex_state = 4},
  [425] = {.lex_state = 0, .external_lex_state = 17},
  [426] = {.lex_state = 55, .external_lex_state = 7},
  [427] = {.lex_state = 55, .external_lex_state = 7},
  [428] = {.lex_state = 55, .external_lex_state = 7},
  [429] = {.lex_state = 55, .external_lex_state = 7},
  [430] = {.lex_state = 58, .external_lex_state = 4},
  [431] = {.lex_state = 55, .external_lex_state = 7},
  [432] = {.lex_state = 55, .external_lex_state = 7},
  [433] = {.lex_state = 60, .external_lex_state = 5},
  [434] = {.lex_state = 55, .external_lex_state = 7},
  [435] = {.lex_state = 58, .external_lex_state = 4},
  [436] = {.lex_state = 60, .external_lex_state = 5},
  [437] = {.lex_state = 0, .external_lex_state = 5},
  [438] = {.lex_state = 58, .external_lex_state = 4},
  [439] = {.lex_state = 58, .external_lex_state = 4},
  [440] = {.lex_state = 0, .external_lex_state = 17},
  [441] = {.lex_state = 4, .external_lex_state = 7},
  [442] = {.lex_state = 0, .external_lex_state = 5},
  [443] = {.lex_state = 0, .external_lex_state = 5},
  [444] = {.lex_state = 58, .external_lex_state = 4},
  [445] = {.lex_state = 0, .external_lex_state = 18},
  [446] = {.lex_state = 0, .external_lex_state = 5},
  [447] = {.lex_state = 0, .external_lex_state = 5},
  [448] = {.lex_state = 0, .external_lex_state = 5},
  [449] = {.lex_state = 0, .external_lex_state = 5},
  [450] = {.lex_state = 0, .external_lex_state = 5},
  [451] = {.lex_state = 0, .external_lex_state = 5},
  [452] = {.lex_state = 0, .external_lex_state = 5},
  [453] = {.lex_state = 0, .external_lex_state = 5},
  [454] = {.lex_state = 0, .external_lex_state = 5},
  [455] = {.lex_state = 0, .external_lex_state = 5},
  [456] = {.lex_state = 4, .external_lex_state = 7},
  [457] = {.lex_state = 0, .external_lex_state = 5},
  [458] = {.lex_state = 0, .external_lex_state = 5},
  [459] = {.lex_state = 0, .external_lex_state = 5},
  [460] = {.lex_state = 0, .external_lex_state = 5},
  [461] = {.lex_state = 0, .external_lex_state = 5},
  [462] = {.lex_state = 4, .external_lex_state = 7},
  [463] = {.lex_state = 4, .external_lex_state = 7},
  [464] = {.lex_state = 4, .external_lex_state = 7},
  [465] = {.lex_state = 0, .external_lex_state = 18},
  [466] = {.lex_state = 4, .external_lex_state = 7},
  [467] = {.lex_state = 0, .external_lex_state = 5},
  [468] = {.lex_state = 0, .external_lex_state = 5},
  [469] = {.lex_state = 4, .external_lex_state = 7},
  [470] = {.lex_state = 0, .external_lex_state = 5},
  [471] = {.lex_state = 4, .external_lex_state = 7},
  [472] = {.lex_state = 0, .external_lex_state = 5},
  [473] = {.lex_state = 4, .external_lex_state = 7},
  [474] = {.lex_state = 0, .external_lex_state = 18},
  [475] = {.lex_state = 55, .external_lex_state = 7},
  [476] = {.lex_state = 0, .external_lex_state = 18},
  [477] = {.lex_state = 0, .external_lex_state = 18},
  [478] = {.lex_state = 0, .external_lex_state = 5},
  [479] = {.lex_state = 0, .external_lex_state = 5},
  [480] = {.lex_state = 0, .external_lex_state = 5},
  [481] = {.lex_state = 0, .external_lex_state = 5},
  [482] = {.lex_state = 0, .external_lex_state = 5},
  [483] = {.lex_state = 55, .external_lex_state = 7},
  [484] = {.lex_state = 0, .external_lex_state = 5},
  [485] = {.lex_state = 0, .external_lex_state = 5},
  [486] = {.lex_state = 0, .external_lex_state = 5},
  [487] = {.lex_state = 0, .external_lex_state = 5},
  [488] = {.lex_state = 55, .external_lex_state = 7},
  [489] = {.lex_state = 0, .external_lex_state = 5},
  [490] = {.lex_state = 58, .external_lex_state = 7},
  [491] = {.lex_state = 55, .external_lex_state = 7},
  [492] = {.lex_state = 55, .external_lex_state = 7},
  [493] = {.lex_state = 5, .external_lex_state = 7},
  [494] = {.lex_state = 58, .external_lex_state = 7},
  [495] = {.lex_state = 55, .external_lex_state = 7},
  [496] = {.lex_state = 0, .external_lex_state = 18},
  [497] = {.lex_state = 55, .external_lex_state = 7},
  [498] = {.lex_state = 55, .external_lex_state = 7},
  [499] = {.lex_state = 58, .external_lex_state = 7},
  [500] = {.lex_state = 55, .external_lex_state = 7},
  [501] = {.lex_state = 5, .external_lex_state = 7},
  [502] = {.lex_state = 0, .external_lex_state = 18},
  [503] = {.lex_state = 0, .external_lex_state = 18},
  [504] = {.lex_state = 21, .external_lex_state = 7},
  [505] = {.lex_state = 21, .external_lex_state = 7},
  [506] = {.lex_state = 21, .external_lex_state = 7},
  [507] = {.lex_state = 5, .external_lex_state = 7},
  [508] = {.lex_state = 58, .external_lex_state = 7},
  [509] = {.lex_state = 0, .external_lex_state = 19},
  [510] = {.lex_state = 5, .external_lex_state = 7},
  [511] = {.lex_state = 58, .external_lex_state = 7},
  [512] = {.lex_state = 21, .external_lex_state = 7},
  [513] = {.lex_state = 1, .external_lex_state = 7},
  [514] = {.lex_state = 21, .external_lex_state = 7},
  [515] = {.lex_state = 0, .external_lex_state = 7},
  [516] = {.lex_state = 133, .external_lex_state = 7},
  [517] = {.lex_state = 0, .external_lex_state = 7},
  [518] = {.lex_state = 60, .external_lex_state = 7},
  [519] = {.lex_state = 0, .external_lex_state = 11},
  [520] = {.lex_state = 0, .external_lex_state = 7},
  [521] = {.lex_state = 0, .external_lex_state = 7},
  [522] = {.lex_state = 5, .external_lex_state = 7},
  [523] = {.lex_state = 5, .external_lex_state = 7},
  [524] = {.lex_state = 5, .external_lex_state = 7},
  [525] = {.lex_state = 5, .external_lex_state = 7},
  [526] = {.lex_state = 5, .external_lex_state = 7},
  [527] = {.lex_state = 0, .external_lex_state = 11},
  [528] = {.lex_state = 60, .external_lex_state = 7},
  [529] = {.lex_state = 0, .external_lex_state = 7},
  [530] = {.lex_state = 60, .external_lex_state = 7},
  [531] = {.lex_state = 0, .external_lex_state = 7},
  [532] = {.lex_state = 0, .external_lex_state = 7},
  [533] = {.lex_state = 0, .external_lex_state = 7},
  [534] = {.lex_state = 0, .external_lex_state = 7},
  [535] = {.lex_state = 0, .external_lex_state = 7},
  [536] = {.lex_state = 0, .external_lex_state = 7},
  [537] = {.lex_state = 61, .external_lex_state = 7},
  [538] = {.lex_state = 0, .external_lex_state = 7},
  [539] = {.lex_state = 133, .external_lex_state = 7},
  [540] = {.lex_state = 0, .external_lex_state = 11},
  [541] = {.lex_state = 133, .external_lex_state = 7},
  [542] = {.lex_state = 0, .external_lex_state = 7},
  [543] = {.lex_state = 5, .external_lex_state = 7},
  [544] = {.lex_state = 0, .external_lex_state = 7},
  [545] = {.lex_state = 0, .external_lex_state = 7},
  [546] = {.lex_state = 5, .external_lex_state = 7},
  [547] = {.lex_state = 0, .external_lex_state = 7},
  [548] = {.lex_state = 0, .external_lex_state = 7},
  [549] = {.lex_state = 0, .external_lex_state = 7},
  [550] = {.lex_state = 0, .external_lex_state = 7},
  [551] = {.lex_state = 0, .external_lex_state = 7},
  [552] = {.lex_state = 0, .external_lex_state = 7},
  [553] = {.lex_state = 0, .external_lex_state = 7},
  [554] = {.lex_state = 61, .external_lex_state = 7},
  [555] = {.lex_state = 0, .external_lex_state = 7},
  [556] = {.lex_state = 0, .external_lex_state = 7},
  [557] = {.lex_state = 0, .external_lex_state = 7},
  [558] = {.lex_state = 0, .external_lex_state = 7},
  [559] = {.lex_state = 0, .external_lex_state = 7},
  [560] = {.lex_state = 0, .external_lex_state = 7},
  [561] = {.lex_state = 0, .external_lex_state = 7},
  [562] = {.lex_state = 0, .external_lex_state = 19},
  [563] = {.lex_state = 0, .external_lex_state = 7},
  [564] = {.lex_state = 133, .external_lex_state = 7},
  [565] = {.lex_state = 0, .external_lex_state = 7},
  [566] = {.lex_state = 0, .external_lex_state = 7},
  [567] = {.lex_state = 0, .external_lex_state = 7},
  [568] = {.lex_state = 0, .external_lex_state = 7},
  [569] = {.lex_state = 0, .external_lex_state = 7},
  [570] = {.lex_state = 0, .external_lex_state = 7},
  [571] = {.lex_state = 0, .external_lex_state = 7},
  [572] = {.lex_state = 0, .external_lex_state = 7},
  [573] = {.lex_state = 0, .external_lex_state = 7},
  [574] = {.lex_state = 0, .external_lex_state = 7},
  [575] = {.lex_state = 60, .external_lex_state = 7},
  [576] = {.lex_state = 0, .external_lex_state = 7},
  [577] = {.lex_state = 0, .external_lex_state = 11},
  [578] = {.lex_state = 0, .external_lex_state = 7},
  [579] = {.lex_state = 5, .external_lex_state = 7},
  [580] = {.lex_state = 60, .external_lex_state = 7},
  [581] = {.lex_state = 0, .external_lex_state = 7},
  [582] = {.lex_state = 60, .external_lex_state = 7},
  [583] = {.lex_state = 0, .external_lex_state = 7},
  [584] = {.lex_state = 0, .external_lex_state = 7},
  [585] = {.lex_state = 0, .external_lex_state = 7},
  [586] = {.lex_state = 60, .external_lex_state = 7},
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
    [sym_program] = STATE(574),
    [sym__statement] = STATE(3),
    [sym__comment] = STATE(494),
    [sym_directive] = STATE(418),
    [sym__macro_directive] = STATE(460),
    [sym__integer_directive] = STATE(449),
    [sym_integer_mnemonic] = STATE(528),
    [sym__float_directive] = STATE(470),
    [sym_float_mnemonic] = STATE(582),
    [sym__string_directive] = STATE(482),
    [sym_string_mnemonic] = STATE(580),
    [sym__control_directive] = STATE(461),
    [sym_control_mnemonic] = STATE(433),
    [sym_instruction] = STATE(402),
    [sym__label] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
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
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym_macro_mnemonic,
    ACTIONS(44), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(47), 1,
      sym_opcode,
    ACTIONS(53), 1,
      sym_line_comment,
    STATE(433), 1,
      sym_control_mnemonic,
    STATE(444), 1,
      sym_instruction,
    STATE(449), 1,
      sym__integer_directive,
    STATE(460), 1,
      sym__macro_directive,
    STATE(461), 1,
      sym__control_directive,
    STATE(470), 1,
      sym__float_directive,
    STATE(482), 1,
      sym__string_directive,
    STATE(489), 1,
      sym_directive,
    STATE(511), 1,
      sym__comment,
    STATE(528), 1,
      sym_integer_mnemonic,
    STATE(580), 1,
      sym_string_mnemonic,
    STATE(582), 1,
      sym_float_mnemonic,
    ACTIONS(56), 2,
      sym_block_comment,
      sym_preprocessor,
    ACTIONS(29), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(38), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    STATE(2), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
    ACTIONS(50), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(41), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(35), 23,
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
    ACTIONS(9), 1,
      sym_macro_mnemonic,
    ACTIONS(17), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(19), 1,
      sym_opcode,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_line_comment,
    STATE(403), 1,
      sym_instruction,
    STATE(433), 1,
      sym_control_mnemonic,
    STATE(437), 1,
      sym_directive,
    STATE(449), 1,
      sym__integer_directive,
    STATE(460), 1,
      sym__macro_directive,
    STATE(461), 1,
      sym__control_directive,
    STATE(470), 1,
      sym__float_directive,
    STATE(482), 1,
      sym__string_directive,
    STATE(499), 1,
      sym__comment,
    STATE(528), 1,
      sym_integer_mnemonic,
    STATE(580), 1,
      sym_string_mnemonic,
    STATE(582), 1,
      sym_float_mnemonic,
    ACTIONS(65), 2,
      sym_block_comment,
      sym_preprocessor,
    ACTIONS(13), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    ACTIONS(61), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(2), 3,
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
  [324] = 4,
    ACTIONS(73), 1,
      anon_sym_CR,
    ACTIONS(76), 1,
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
  [378] = 2,
    ACTIONS(79), 4,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      ts_builtin_sym_end,
    ACTIONS(81), 41,
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
  [578] = 4,
    ACTIONS(73), 1,
      anon_sym_CR,
    ACTIONS(76), 1,
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
  [632] = 3,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(83), 4,
      sym_line_comment,
      sym_block_comment,
      sym_preprocessor,
      ts_builtin_sym_end,
    ACTIONS(85), 40,
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
  [684] = 19,
    ACTIONS(98), 1,
      aux_sym__whitespace_token1,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(120), 1,
      sym_block_comment,
    STATE(362), 1,
      sym__left_expression,
    STATE(415), 1,
      sym_operands,
    STATE(417), 1,
      sym__call_expression,
    ACTIONS(94), 2,
      sym_line_comment,
      ts_builtin_sym_end,
    ACTIONS(102), 2,
      sym_modulo_operator,
      sym_float,
    STATE(388), 2,
      sym__operand,
      sym_string,
    ACTIONS(96), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(104), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(108), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(99), 10,
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
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(127), 1,
      aux_sym__whitespace_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      aux_sym_section_type_token1,
    ACTIONS(133), 1,
      aux_sym_option_flag_token1,
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
    STATE(360), 1,
      sym__left_expression,
    STATE(411), 1,
      sym_control_operands,
    ACTIONS(123), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
    ACTIONS(135), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    STATE(404), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(139), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(255), 10,
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
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    STATE(362), 1,
      sym__left_expression,
    STATE(415), 1,
      sym_operands,
    STATE(416), 1,
      sym__call_expression,
    ACTIONS(96), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(102), 2,
      sym_modulo_operator,
      sym_float,
    STATE(388), 2,
      sym__operand,
      sym_string,
    ACTIONS(104), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(94), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(108), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(99), 10,
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
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    STATE(362), 1,
      sym__left_expression,
    STATE(438), 1,
      sym_operands,
    STATE(439), 1,
      sym__call_expression,
    ACTIONS(102), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(156), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(388), 2,
      sym__operand,
      sym_string,
    ACTIONS(104), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(154), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(108), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(99), 10,
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
    STATE(75), 1,
      sym_address,
    STATE(365), 1,
      sym__left_expression,
    STATE(376), 1,
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
    STATE(359), 9,
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
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(184), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(188), 2,
      sym_modulo_operator,
      sym_float,
    STATE(397), 2,
      sym__operand,
      sym_string,
    ACTIONS(104), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(182), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(108), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(99), 10,
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
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(186), 1,
      anon_sym_LPAREN,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(188), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(192), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(397), 2,
      sym__operand,
      sym_string,
    ACTIONS(104), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(190), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(108), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(99), 10,
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
    STATE(81), 10,
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
    STATE(360), 1,
      sym__left_expression,
    STATE(411), 1,
      sym_control_operands,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(218), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(139), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(404), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    STATE(255), 10,
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
    STATE(366), 1,
      aux_sym_integer_operands_repeat1,
    STATE(377), 1,
      aux_sym_integer_operands_repeat2,
    STATE(577), 1,
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
    STATE(360), 1,
      sym__left_expression,
    STATE(423), 1,
      sym_control_operands,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(218), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(139), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(404), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    STATE(255), 10,
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
  [1466] = 18,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    ACTIONS(275), 1,
      sym_block_comment,
    STATE(363), 1,
      sym__left_expression,
    STATE(529), 1,
      sym_operands,
    ACTIONS(253), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(263), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(445), 2,
      sym__operand,
      sym_string,
    ACTIONS(261), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(272), 10,
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
  [1537] = 20,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    ACTIONS(275), 1,
      sym_block_comment,
    STATE(302), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(548), 1,
      sym_operands,
    ACTIONS(253), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(277), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(279), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(281), 2,
      sym_register,
      sym_macro_variable,
    STATE(445), 2,
      sym__operand,
      sym_string,
    STATE(303), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1612] = 18,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      sym_block_comment,
    STATE(363), 1,
      sym__left_expression,
    STATE(563), 1,
      sym_operands,
    ACTIONS(253), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(263), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(445), 2,
      sym__operand,
      sym_string,
    ACTIONS(261), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(272), 10,
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
  [1683] = 17,
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
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(218), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(139), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(425), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    STATE(255), 10,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(306), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(520), 1,
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
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(289), 2,
      sym_register,
      sym_macro_variable,
    STATE(474), 2,
      sym__operand,
      sym_string,
    STATE(272), 9,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(315), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(561), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(291), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(293), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(295), 2,
      sym_register,
      sym_macro_variable,
    STATE(474), 2,
      sym__operand,
      sym_string,
    STATE(311), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1896] = 19,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(300), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(557), 1,
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
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(297), 2,
      sym_register,
      sym_macro_variable,
    STATE(474), 2,
      sym__operand,
      sym_string,
    STATE(272), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1968] = 16,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(190), 2,
      sym_block_comment,
      anon_sym_RPAREN,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(263), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(299), 2,
      sym_modulo_operator,
      sym_float,
    STATE(503), 2,
      sym__operand,
      sym_string,
    ACTIONS(261), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(272), 10,
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
  [2034] = 16,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(182), 2,
      sym_block_comment,
      anon_sym_RPAREN,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(263), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(299), 2,
      sym_modulo_operator,
      sym_float,
    STATE(503), 2,
      sym__operand,
      sym_string,
    ACTIONS(261), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(272), 10,
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
  [2100] = 17,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(263), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(299), 2,
      sym_modulo_operator,
      sym_float,
    STATE(503), 2,
      sym__operand,
      sym_string,
    ACTIONS(261), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(272), 10,
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
  [2168] = 17,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(263), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(299), 2,
      sym_modulo_operator,
      sym_float,
    STATE(503), 2,
      sym__operand,
      sym_string,
    ACTIONS(261), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(272), 10,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(304), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(535), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(301), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(303), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(305), 2,
      sym_register,
      sym_macro_variable,
    STATE(474), 2,
      sym__operand,
      sym_string,
    STATE(305), 9,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(307), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(517), 1,
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
    ACTIONS(311), 2,
      sym_register,
      sym_macro_variable,
    STATE(474), 2,
      sym__operand,
      sym_string,
    STATE(308), 9,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(307), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(533), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(291), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(293), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(311), 2,
      sym_register,
      sym_macro_variable,
    STATE(474), 2,
      sym__operand,
      sym_string,
    STATE(311), 9,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(309), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(536), 1,
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
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(313), 2,
      sym_register,
      sym_macro_variable,
    STATE(474), 2,
      sym__operand,
      sym_string,
    STATE(272), 9,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(310), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(544), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(291), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(293), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(315), 2,
      sym_register,
      sym_macro_variable,
    STATE(474), 2,
      sym__operand,
      sym_string,
    STATE(311), 9,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(268), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(547), 1,
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
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(317), 2,
      sym_register,
      sym_macro_variable,
    STATE(474), 2,
      sym__operand,
      sym_string,
    STATE(272), 9,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(312), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(553), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(319), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(321), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(323), 2,
      sym_register,
      sym_macro_variable,
    STATE(474), 2,
      sym__operand,
      sym_string,
    STATE(313), 9,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(314), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(556), 1,
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
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(325), 2,
      sym_register,
      sym_macro_variable,
    STATE(474), 2,
      sym__operand,
      sym_string,
    STATE(272), 9,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(302), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(558), 1,
      sym_operands,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(277), 2,
      sym_octal,
      sym_local_numeric_label_reference,
    ACTIONS(279), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(281), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    STATE(474), 2,
      sym__operand,
      sym_string,
    STATE(303), 9,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(292), 1,
      sym_symbol,
    STATE(363), 1,
      sym__left_expression,
    STATE(560), 1,
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
    ACTIONS(287), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(327), 2,
      sym_register,
      sym_macro_variable,
    STATE(474), 2,
      sym__operand,
      sym_string,
    STATE(272), 9,
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
  [2993] = 2,
    ACTIONS(333), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(335), 25,
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
  [3030] = 2,
    ACTIONS(337), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(339), 25,
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
  [3067] = 6,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(341), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(343), 6,
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
  [3112] = 6,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(345), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(347), 6,
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
  [3157] = 2,
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
  [3194] = 2,
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
  [3231] = 2,
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
  [3268] = 2,
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
  [3305] = 2,
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
  [3342] = 2,
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
  [3379] = 2,
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
  [3416] = 2,
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
  [3453] = 2,
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
  [3490] = 2,
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
  [3527] = 2,
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
  [3564] = 2,
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
  [3601] = 2,
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
  [3638] = 2,
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
  [3675] = 2,
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
  [3712] = 2,
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
  [3749] = 2,
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
  [3786] = 4,
    ACTIONS(355), 2,
      sym__operator_separator,
      sym_division_operator,
    ACTIONS(349), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(351), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
    ACTIONS(353), 19,
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
  [3827] = 2,
    ACTIONS(357), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(359), 25,
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
  [3864] = 2,
    ACTIONS(361), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(363), 25,
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
  [3901] = 2,
    ACTIONS(365), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(367), 25,
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
  [3938] = 6,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(369), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(371), 6,
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
  [3983] = 16,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(188), 2,
      sym_modulo_operator,
      sym_float,
    ACTIONS(375), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(377), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(397), 2,
      sym__operand,
      sym_string,
    ACTIONS(108), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(99), 10,
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
  [4048] = 19,
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
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(391), 1,
      sym__data_separator,
    STATE(75), 1,
      sym_address,
    STATE(365), 1,
      sym__left_expression,
    STATE(376), 1,
      sym__float_operand,
    STATE(519), 1,
      sym__comment,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(387), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(393), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(359), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [4119] = 16,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(263), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(299), 2,
      sym_modulo_operator,
      sym_float,
    STATE(503), 2,
      sym__operand,
      sym_string,
    ACTIONS(261), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(272), 10,
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
  [4184] = 4,
    ACTIONS(401), 2,
      sym__operator_separator,
      sym_division_operator,
    ACTIONS(395), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(397), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
    ACTIONS(399), 19,
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
  [4225] = 2,
    ACTIONS(355), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(353), 25,
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
  [4262] = 2,
    ACTIONS(403), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(405), 25,
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
  [4299] = 2,
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
  [4336] = 2,
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
  [4373] = 2,
    ACTIONS(415), 7,
      sym__operator_separator,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
    ACTIONS(417), 25,
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
  [4410] = 6,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(419), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(421), 6,
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
  [4529] = 18,
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
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(427), 1,
      sym_float,
    STATE(75), 1,
      sym_address,
    STATE(365), 1,
      sym__left_expression,
    STATE(367), 1,
      sym__float_operand,
    STATE(381), 1,
      sym_float_operands,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(387), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(168), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(359), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [4596] = 17,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      sym_macro_variable,
    STATE(324), 1,
      sym_address,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(433), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(564), 2,
      sym__string_operand,
      sym_string,
    ACTIONS(431), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(358), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [4661] = 16,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    ACTIONS(447), 1,
      sym__data_separator,
    ACTIONS(449), 1,
      sym_line_comment,
    ACTIONS(451), 1,
      sym_block_comment,
    STATE(364), 1,
      sym__left_expression,
    STATE(527), 1,
      sym__comment,
    ACTIONS(441), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(443), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(200), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(81), 10,
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
  [4724] = 2,
    ACTIONS(355), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(353), 22,
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
  [4758] = 2,
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
  [4792] = 2,
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
  [4826] = 17,
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
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(453), 1,
      sym_float,
    STATE(75), 1,
      sym_address,
    STATE(365), 1,
      sym__left_expression,
    STATE(373), 1,
      sym__float_operand,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(387), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(168), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(359), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [4890] = 2,
    ACTIONS(357), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(359), 22,
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
  [4924] = 2,
    ACTIONS(361), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(363), 22,
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
  [4958] = 2,
    ACTIONS(365), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(367), 22,
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
  [4992] = 2,
    ACTIONS(403), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(405), 22,
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
  [5026] = 17,
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
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(455), 1,
      sym_float,
    STATE(75), 1,
      sym_address,
    STATE(365), 1,
      sym__left_expression,
    STATE(378), 1,
      sym__float_operand,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(387), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(168), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(359), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [5090] = 2,
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
  [5124] = 2,
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
  [5158] = 17,
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
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      sym_address,
    STATE(365), 1,
      sym__left_expression,
    STATE(376), 1,
      sym__float_operand,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(387), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(168), 3,
      sym_octal,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(359), 9,
      sym__expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [5222] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(459), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(457), 5,
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
  [5264] = 12,
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
    STATE(385), 1,
      sym_integer_operands,
    ACTIONS(463), 2,
      sym_block_comment,
      aux_sym__whitespace_token1,
    ACTIONS(196), 3,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(465), 6,
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
  [5318] = 2,
    ACTIONS(415), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(417), 22,
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
  [5352] = 2,
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
  [5386] = 2,
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
  [5420] = 2,
    ACTIONS(333), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(335), 22,
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
  [5454] = 2,
    ACTIONS(337), 7,
      sym__operand_separator,
      sym__operator_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(339), 22,
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
  [5488] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(247), 1,
      sym_division_operator,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(345), 5,
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
  [5530] = 2,
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
  [5564] = 2,
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
  [5598] = 2,
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
  [5632] = 2,
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
  [5666] = 2,
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
  [5700] = 2,
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
  [5734] = 2,
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
  [5768] = 2,
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
  [5802] = 2,
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
  [5836] = 2,
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
  [5870] = 2,
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
  [5904] = 2,
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
  [5938] = 2,
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
  [5972] = 2,
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
  [6006] = 2,
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
  [6040] = 2,
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
  [6074] = 4,
    ACTIONS(469), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(355), 3,
      sym__operand_separator,
      sym__operator_separator,
      sym_division_operator,
    ACTIONS(467), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(353), 20,
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
  [6112] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(340), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [6169] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [6226] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(114), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [6283] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(115), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [6340] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(116), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [6397] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(117), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [6454] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(50), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [6511] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [6568] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [6625] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [6682] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [6739] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [6796] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [6853] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [6910] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [6967] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [7024] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [7081] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [7138] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [7195] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [7252] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [7309] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(83), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [7366] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [7423] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [7480] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(66), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [7537] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [7594] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [7651] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(120), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [7708] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(121), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [7765] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(122), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [7822] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(109), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [7879] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(103), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [7936] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [7993] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [8050] = 13,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(443), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(485), 2,
      sym__data_separator,
      sym_block_comment,
    ACTIONS(200), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(81), 10,
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
  [8105] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    STATE(384), 1,
      sym_integer_operands,
    ACTIONS(441), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(465), 4,
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
  [8162] = 13,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(485), 2,
      sym__data_separator,
      sym_block_comment,
    ACTIONS(491), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(489), 4,
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
  [8217] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [8274] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [8331] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(110), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [8388] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(278), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [8445] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(279), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [8502] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(280), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [8559] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    STATE(385), 1,
      sym_integer_operands,
    ACTIONS(441), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(487), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(465), 4,
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
  [8616] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(281), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [8673] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(282), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [8730] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(283), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [8787] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(329), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [8844] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(330), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [8901] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [8958] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(332), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9015] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(333), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9072] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(334), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9129] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9186] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(336), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9243] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(317), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9300] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(337), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9357] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(338), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9414] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(339), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9471] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(284), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [9528] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(341), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9585] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(342), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9642] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(357), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9699] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(343), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9756] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(344), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9813] = 14,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym__right_expression,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(475), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(473), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [9870] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [9927] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(224), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [9984] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(225), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10041] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(226), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10098] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(227), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10155] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(228), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10212] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(229), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10269] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(230), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10326] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(231), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10383] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(232), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10440] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(233), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10497] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(234), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10554] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10611] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10668] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10725] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10782] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10839] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(240), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10896] = 14,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(241), 1,
      sym__right_expression,
    STATE(360), 1,
      sym__left_expression,
    ACTIONS(216), 2,
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
    STATE(242), 10,
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
  [10953] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(285), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [11010] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(286), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [11067] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(287), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [11124] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(288), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [11181] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(289), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [11238] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(290), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [11295] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(291), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [11352] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(316), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [11409] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(293), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [11466] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(294), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [11523] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(295), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [11580] = 14,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(296), 1,
      sym__right_expression,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(495), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(493), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 10,
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
  [11637] = 14,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym__right_expression,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
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
    STATE(106), 10,
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
  [11694] = 14,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym__right_expression,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
  [11751] = 2,
    ACTIONS(353), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(355), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [11783] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [11815] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [11847] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [11879] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [11911] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [11943] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [11975] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12007] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12039] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12071] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12103] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12135] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12167] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12199] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12231] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12263] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12295] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12327] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12359] = 5,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(345), 6,
      sym__operand_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
  [12397] = 2,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(329), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12429] = 2,
    ACTIONS(363), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(361), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12461] = 2,
    ACTIONS(367), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(365), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12493] = 2,
    ACTIONS(417), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(415), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [12525] = 13,
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
    ACTIONS(271), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(273), 1,
      aux_sym_symbol_token1,
    STATE(363), 1,
      sym__left_expression,
    ACTIONS(257), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(505), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(503), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(273), 10,
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
  [12579] = 13,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
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
    STATE(80), 10,
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
  [12633] = 13,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
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
    STATE(323), 10,
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
  [12687] = 13,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(443), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(200), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(81), 10,
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
  [12741] = 13,
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
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(360), 1,
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
    STATE(246), 10,
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
  [12795] = 13,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(491), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(489), 4,
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
  [12849] = 13,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
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
    STATE(354), 10,
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
  [12903] = 13,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
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
    STATE(319), 10,
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
  [12957] = 5,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(527), 6,
      sym__operand_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
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
  [12995] = 13,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(531), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(529), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(355), 10,
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
  [13049] = 13,
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
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      sym__left_expression,
    ACTIONS(441), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(535), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(533), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(71), 10,
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
  [13103] = 13,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      sym_relocation_type,
    ACTIONS(110), 1,
      aux_sym_decimal_token1,
    ACTIONS(116), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(118), 1,
      aux_sym_symbol_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(362), 1,
      sym__left_expression,
    ACTIONS(375), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(539), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(537), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(101), 10,
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
  [13157] = 13,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(543), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(541), 4,
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
  [13211] = 2,
    ACTIONS(405), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(403), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [13243] = 2,
    ACTIONS(409), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(407), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [13275] = 13,
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
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      sym__left_expression,
    ACTIONS(385), 2,
      anon_sym_TILDE,
      anon_sym_BANG,
    ACTIONS(547), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(545), 4,
      sym_octal,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(318), 10,
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
  [13329] = 2,
    ACTIONS(413), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(411), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [13361] = 2,
    ACTIONS(425), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(423), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [13393] = 2,
    ACTIONS(335), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(333), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [13425] = 2,
    ACTIONS(339), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(337), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [13457] = 2,
    ACTIONS(359), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(357), 22,
      sym__operand_separator,
      sym__operator_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      sym_division_operator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
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
  [13489] = 3,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(401), 19,
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
  [13521] = 2,
    ACTIONS(405), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(403), 20,
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
  [13551] = 2,
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
  [13581] = 2,
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
  [13611] = 5,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 4,
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
  [13647] = 2,
    ACTIONS(417), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(415), 20,
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
  [13677] = 2,
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
  [13707] = 2,
    ACTIONS(335), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(333), 20,
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
  [13737] = 2,
    ACTIONS(339), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(337), 20,
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
  [13767] = 5,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 4,
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
  [13803] = 2,
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
  [13833] = 2,
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
  [13863] = 2,
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
  [13893] = 2,
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
  [13923] = 2,
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
  [13953] = 2,
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
  [13983] = 2,
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
  [14013] = 2,
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
  [14043] = 2,
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
  [14073] = 2,
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
  [14103] = 2,
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
  [14133] = 2,
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
  [14163] = 2,
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
  [14193] = 2,
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
  [14223] = 3,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(401), 19,
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
  [14255] = 2,
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
  [14285] = 2,
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
  [14315] = 2,
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
  [14345] = 2,
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
  [14375] = 2,
    ACTIONS(359), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(357), 20,
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
  [14405] = 2,
    ACTIONS(363), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(361), 20,
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
  [14435] = 2,
    ACTIONS(367), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(365), 20,
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
  [14465] = 3,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(401), 19,
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
  [14497] = 2,
    ACTIONS(353), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(355), 20,
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
  [14527] = 3,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(401), 19,
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
  [14559] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(457), 3,
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
  [14597] = 3,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(401), 19,
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
  [14629] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(457), 3,
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
  [14667] = 3,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(401), 19,
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
  [14699] = 3,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(401), 19,
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
  [14731] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(457), 3,
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
  [14769] = 3,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(401), 19,
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
  [14801] = 3,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(401), 19,
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
  [14833] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(457), 3,
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
  [14871] = 3,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(401), 19,
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
  [14903] = 6,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(457), 3,
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
  [14941] = 3,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(401), 19,
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
  [14973] = 3,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(401), 19,
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
  [15005] = 2,
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
  [15035] = 3,
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
  [15065] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
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
  [15101] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(585), 1,
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
  [15137] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(405), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(403), 17,
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
  [15167] = 3,
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
  [15197] = 3,
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
  [15227] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(417), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(415), 17,
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
  [15257] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(591), 1,
      aux_sym__string_directive_token1,
    ACTIONS(401), 2,
      sym__operator_separator,
      sym_division_operator,
    ACTIONS(399), 19,
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
  [15289] = 3,
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
  [15319] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(335), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(333), 17,
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
    ACTIONS(339), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(337), 17,
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
  [15379] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(585), 1,
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
  [15415] = 3,
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
  [15445] = 3,
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
  [15475] = 3,
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
  [15505] = 3,
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
  [15535] = 3,
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
  [15565] = 3,
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
  [15595] = 3,
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
  [15625] = 3,
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
  [15655] = 3,
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
  [15685] = 3,
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
  [15715] = 3,
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
  [15745] = 3,
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
  [15775] = 3,
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
  [15805] = 3,
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
  [15835] = 3,
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
  [15865] = 3,
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
  [15895] = 3,
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
  [15925] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(349), 1,
      aux_sym__string_directive_token1,
    ACTIONS(355), 2,
      sym__operator_separator,
      sym_division_operator,
    ACTIONS(353), 19,
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
    ACTIONS(359), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(357), 17,
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
    ACTIONS(361), 3,
      sym__operator_separator,
      sym_division_operator,
      aux_sym__string_directive_token1,
    ACTIONS(363), 19,
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
  [16017] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(365), 3,
      sym__operator_separator,
      sym_division_operator,
      aux_sym__string_directive_token1,
    ACTIONS(367), 19,
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
  [16047] = 3,
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
  [16077] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(363), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(361), 17,
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
  [16107] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(367), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(365), 17,
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
  [16137] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(353), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(355), 17,
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
  [16167] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(585), 1,
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
  [16203] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(585), 1,
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
  [16239] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(597), 1,
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
  [16275] = 3,
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
  [16305] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(599), 1,
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
  [16338] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      sym__operator_separator,
    ACTIONS(601), 1,
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
  [16371] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(603), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(605), 1,
      anon_sym_AMP_AMP,
    ACTIONS(607), 1,
      anon_sym_PIPE,
    ACTIONS(609), 1,
      anon_sym_CARET,
    ACTIONS(611), 1,
      anon_sym_AMP,
    ACTIONS(613), 1,
      anon_sym_EQ_EQ,
    ACTIONS(615), 1,
      anon_sym_BANG_EQ,
    ACTIONS(617), 1,
      anon_sym_LT,
    ACTIONS(619), 1,
      anon_sym_GT,
    ACTIONS(621), 1,
      anon_sym_LT_EQ,
    ACTIONS(623), 1,
      anon_sym_GT_EQ,
    ACTIONS(625), 1,
      anon_sym_LT_LT,
    ACTIONS(627), 1,
      anon_sym_GT_GT,
    ACTIONS(629), 1,
      anon_sym_PLUS,
    ACTIONS(631), 1,
      anon_sym_DASH,
    ACTIONS(633), 1,
      anon_sym_STAR,
    ACTIONS(635), 1,
      anon_sym_PERCENT,
    ACTIONS(637), 1,
      anon_sym_EQ,
    ACTIONS(639), 1,
      sym_division_operator,
  [16432] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(643), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(641), 14,
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
  [16459] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(645), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(647), 1,
      anon_sym_AMP_AMP,
    ACTIONS(649), 1,
      anon_sym_PIPE,
    ACTIONS(651), 1,
      anon_sym_CARET,
    ACTIONS(653), 1,
      anon_sym_AMP,
    ACTIONS(655), 1,
      anon_sym_EQ_EQ,
    ACTIONS(657), 1,
      anon_sym_BANG_EQ,
    ACTIONS(659), 1,
      anon_sym_LT,
    ACTIONS(661), 1,
      anon_sym_GT,
    ACTIONS(663), 1,
      anon_sym_LT_EQ,
    ACTIONS(665), 1,
      anon_sym_GT_EQ,
    ACTIONS(667), 1,
      anon_sym_LT_LT,
    ACTIONS(669), 1,
      anon_sym_GT_GT,
    ACTIONS(671), 1,
      anon_sym_PLUS,
    ACTIONS(673), 1,
      anon_sym_DASH,
    ACTIONS(675), 1,
      anon_sym_STAR,
    ACTIONS(677), 1,
      anon_sym_PERCENT,
    ACTIONS(679), 1,
      anon_sym_EQ,
    ACTIONS(681), 1,
      sym_division_operator,
  [16520] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(683), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(685), 1,
      anon_sym_AMP_AMP,
    ACTIONS(687), 1,
      anon_sym_PIPE,
    ACTIONS(689), 1,
      anon_sym_CARET,
    ACTIONS(691), 1,
      anon_sym_AMP,
    ACTIONS(693), 1,
      anon_sym_EQ_EQ,
    ACTIONS(695), 1,
      anon_sym_BANG_EQ,
    ACTIONS(697), 1,
      anon_sym_LT,
    ACTIONS(699), 1,
      anon_sym_GT,
    ACTIONS(701), 1,
      anon_sym_LT_EQ,
    ACTIONS(703), 1,
      anon_sym_GT_EQ,
    ACTIONS(705), 1,
      anon_sym_LT_LT,
    ACTIONS(707), 1,
      anon_sym_GT_GT,
    ACTIONS(709), 1,
      anon_sym_PLUS,
    ACTIONS(711), 1,
      anon_sym_DASH,
    ACTIONS(713), 1,
      anon_sym_STAR,
    ACTIONS(715), 1,
      anon_sym_PERCENT,
    ACTIONS(717), 1,
      anon_sym_EQ,
    ACTIONS(719), 1,
      sym_division_operator,
  [16581] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(721), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(723), 1,
      anon_sym_AMP_AMP,
    ACTIONS(725), 1,
      anon_sym_PIPE,
    ACTIONS(727), 1,
      anon_sym_CARET,
    ACTIONS(729), 1,
      anon_sym_AMP,
    ACTIONS(731), 1,
      anon_sym_EQ_EQ,
    ACTIONS(733), 1,
      anon_sym_BANG_EQ,
    ACTIONS(735), 1,
      anon_sym_LT,
    ACTIONS(737), 1,
      anon_sym_GT,
    ACTIONS(739), 1,
      anon_sym_LT_EQ,
    ACTIONS(741), 1,
      anon_sym_GT_EQ,
    ACTIONS(743), 1,
      anon_sym_LT_LT,
    ACTIONS(745), 1,
      anon_sym_GT_GT,
    ACTIONS(747), 1,
      anon_sym_PLUS,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      anon_sym_STAR,
    ACTIONS(753), 1,
      anon_sym_PERCENT,
    ACTIONS(755), 1,
      anon_sym_EQ,
    ACTIONS(757), 1,
      sym_division_operator,
  [16642] = 20,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(759), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(761), 1,
      anon_sym_AMP_AMP,
    ACTIONS(763), 1,
      anon_sym_PIPE,
    ACTIONS(765), 1,
      anon_sym_CARET,
    ACTIONS(767), 1,
      anon_sym_AMP,
    ACTIONS(769), 1,
      anon_sym_EQ_EQ,
    ACTIONS(771), 1,
      anon_sym_BANG_EQ,
    ACTIONS(773), 1,
      anon_sym_LT,
    ACTIONS(775), 1,
      anon_sym_GT,
    ACTIONS(777), 1,
      anon_sym_LT_EQ,
    ACTIONS(779), 1,
      anon_sym_GT_EQ,
    ACTIONS(781), 1,
      anon_sym_LT_LT,
    ACTIONS(783), 1,
      anon_sym_GT_GT,
    ACTIONS(785), 1,
      anon_sym_PLUS,
    ACTIONS(787), 1,
      anon_sym_DASH,
    ACTIONS(789), 1,
      anon_sym_STAR,
    ACTIONS(791), 1,
      anon_sym_PERCENT,
    ACTIONS(793), 1,
      anon_sym_EQ,
    ACTIONS(795), 1,
      sym_division_operator,
  [16703] = 10,
    ACTIONS(233), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(239), 1,
      sym__data_separator,
    ACTIONS(804), 1,
      sym_line_comment,
    ACTIONS(807), 1,
      sym_block_comment,
    STATE(370), 1,
      aux_sym_integer_operands_repeat1,
    STATE(375), 1,
      aux_sym_integer_operands_repeat2,
    STATE(577), 1,
      sym__comment,
    ACTIONS(797), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(801), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(799), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [16738] = 9,
    ACTIONS(817), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(819), 1,
      sym__data_separator,
    STATE(368), 1,
      aux_sym_float_operands_repeat1,
    STATE(374), 1,
      aux_sym_integer_operands_repeat2,
    STATE(540), 1,
      sym__comment,
    ACTIONS(810), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(814), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(821), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(812), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [16771] = 9,
    ACTIONS(817), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(819), 1,
      sym__data_separator,
    STATE(369), 1,
      aux_sym_float_operands_repeat1,
    STATE(372), 1,
      aux_sym_integer_operands_repeat2,
    STATE(540), 1,
      sym__comment,
    ACTIONS(824), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(828), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(831), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(826), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [16804] = 8,
    ACTIONS(841), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(844), 1,
      sym__data_separator,
    STATE(369), 1,
      aux_sym_float_operands_repeat1,
    STATE(540), 1,
      sym__comment,
    ACTIONS(834), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(838), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(847), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(836), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [16834] = 9,
    ACTIONS(853), 1,
      aux_sym_integer_operands_token1,
    ACTIONS(856), 1,
      sym__data_separator,
    ACTIONS(859), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      sym_block_comment,
    STATE(370), 1,
      aux_sym_integer_operands_repeat1,
    STATE(577), 1,
      sym__comment,
    ACTIONS(419), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(850), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(421), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [16866] = 4,
    ACTIONS(869), 1,
      sym__data_separator,
    STATE(371), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(865), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(867), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [16886] = 4,
    ACTIONS(876), 1,
      sym__data_separator,
    STATE(371), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(872), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(874), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [16906] = 2,
    ACTIONS(878), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(880), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
  [16922] = 4,
    ACTIONS(876), 1,
      sym__data_separator,
    STATE(371), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(824), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(826), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [16942] = 4,
    ACTIONS(876), 1,
      sym__data_separator,
    STATE(371), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(882), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(884), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [16962] = 2,
    ACTIONS(834), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(836), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
  [16978] = 4,
    ACTIONS(876), 1,
      sym__data_separator,
    STATE(371), 1,
      aux_sym_integer_operands_repeat2,
    ACTIONS(797), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(799), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [16998] = 2,
    ACTIONS(886), 5,
      sym__line_separator,
      sym__data_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(888), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
      aux_sym_integer_operands_token1,
  [17014] = 4,
    ACTIONS(892), 1,
      anon_sym_SEMI,
    STATE(380), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(890), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(894), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17033] = 4,
    ACTIONS(898), 1,
      anon_sym_SEMI,
    STATE(380), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(896), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(900), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17052] = 4,
    ACTIONS(905), 1,
      anon_sym_SEMI,
    STATE(379), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(903), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(907), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17071] = 4,
    ACTIONS(911), 1,
      anon_sym_SEMI,
    STATE(380), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(894), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(909), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
  [17090] = 4,
    ACTIONS(915), 1,
      anon_sym_SEMI,
    STATE(380), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(894), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(913), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
  [17109] = 4,
    ACTIONS(919), 1,
      anon_sym_SEMI,
    STATE(383), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(917), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(921), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17128] = 4,
    ACTIONS(925), 1,
      anon_sym_SEMI,
    STATE(382), 1,
      aux_sym__integer_directive_repeat1,
    ACTIONS(923), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(927), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17147] = 5,
    ACTIONS(933), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      aux_sym_operands_repeat1,
    ACTIONS(931), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(936), 2,
      sym__operand_separator,
      sym_block_comment,
    ACTIONS(929), 3,
      sym_line_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17167] = 6,
    ACTIONS(941), 1,
      anon_sym_SEMI,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      sym_block_comment,
    STATE(389), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(943), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(939), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
  [17189] = 6,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(956), 1,
      sym__operand_separator,
    ACTIONS(958), 1,
      sym_block_comment,
    STATE(391), 1,
      aux_sym_operands_repeat1,
    ACTIONS(952), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(950), 3,
      sym_line_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17211] = 6,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    ACTIONS(963), 1,
      anon_sym_SEMI,
    ACTIONS(965), 1,
      sym_block_comment,
    STATE(392), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(943), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(961), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
  [17233] = 6,
    ACTIONS(972), 1,
      aux_sym__whitespace_token1,
    ACTIONS(974), 1,
      anon_sym_LPAREN,
    ACTIONS(976), 1,
      sym_block_comment,
    STATE(435), 1,
      sym__call_expression,
    ACTIONS(968), 2,
      sym_line_comment,
      ts_builtin_sym_end,
    ACTIONS(970), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [17255] = 6,
    ACTIONS(954), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      sym__operand_separator,
    ACTIONS(981), 1,
      sym_block_comment,
    STATE(386), 1,
      aux_sym_operands_repeat1,
    ACTIONS(192), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(190), 3,
      sym_line_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17277] = 6,
    ACTIONS(986), 1,
      anon_sym_SEMI,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    ACTIONS(994), 1,
      sym_block_comment,
    STATE(392), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(988), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(984), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
  [17299] = 2,
    ACTIONS(999), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(997), 5,
      sym__operand_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17312] = 2,
    ACTIONS(1003), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(1001), 5,
      sym__operand_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17325] = 2,
    ACTIONS(984), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(986), 4,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [17338] = 2,
    ACTIONS(1005), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(1007), 4,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [17351] = 2,
    ACTIONS(931), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
    ACTIONS(929), 5,
      sym__operand_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17364] = 2,
    ACTIONS(1009), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
    ACTIONS(1011), 4,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [17377] = 3,
    ACTIONS(1015), 1,
      sym__operand_separator,
    STATE(399), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(1013), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [17391] = 4,
    ACTIONS(1020), 1,
      anon_sym_SEMI,
    ACTIONS(1022), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1024), 1,
      anon_sym_LPAREN,
    ACTIONS(1018), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
  [17407] = 3,
    ACTIONS(1028), 1,
      sym__operand_separator,
    STATE(399), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(1026), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [17421] = 6,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(1033), 1,
      anon_sym_CR,
    ACTIONS(1035), 1,
      sym_line_comment,
    ACTIONS(1037), 1,
      sym_block_comment,
    STATE(567), 1,
      sym__comment,
    ACTIONS(1031), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [17441] = 6,
    ACTIONS(1033), 1,
      anon_sym_CR,
    ACTIONS(1035), 1,
      sym_line_comment,
    ACTIONS(1037), 1,
      sym_block_comment,
    ACTIONS(1039), 1,
      ts_builtin_sym_end,
    STATE(549), 1,
      sym__comment,
    ACTIONS(1031), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [17461] = 3,
    ACTIONS(1043), 1,
      sym__operand_separator,
    STATE(401), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(1041), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [17475] = 4,
    ACTIONS(1048), 1,
      anon_sym_SEMI,
    ACTIONS(1050), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1052), 1,
      anon_sym_LPAREN,
    ACTIONS(1046), 4,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
  [17491] = 5,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    ACTIONS(1058), 1,
      sym_macro_parameter,
    ACTIONS(1060), 1,
      sym_block_comment,
    STATE(492), 1,
      sym_macro_parameters,
    ACTIONS(1054), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17508] = 5,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      sym_block_comment,
    STATE(408), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1062), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17525] = 5,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
    ACTIONS(1073), 1,
      anon_sym_COMMA,
    ACTIONS(1076), 1,
      sym_block_comment,
    STATE(408), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1070), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17542] = 1,
    ACTIONS(1079), 6,
      sym__operand_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [17551] = 1,
    ACTIONS(1081), 6,
      sym__operand_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [17560] = 2,
    ACTIONS(1085), 1,
      sym__operand_separator,
    ACTIONS(1083), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [17571] = 2,
    ACTIONS(1089), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1087), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17582] = 1,
    ACTIONS(1001), 6,
      sym__operand_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [17591] = 2,
    ACTIONS(469), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(467), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17602] = 2,
    ACTIONS(1093), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1091), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17613] = 2,
    ACTIONS(1097), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1095), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17624] = 2,
    ACTIONS(1097), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1095), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17635] = 5,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(1101), 1,
      sym_line_comment,
    ACTIONS(1103), 1,
      sym_block_comment,
    STATE(567), 1,
      sym__comment,
    ACTIONS(1099), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [17652] = 5,
    ACTIONS(1058), 1,
      sym_macro_parameter,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    ACTIONS(1109), 1,
      sym_block_comment,
    STATE(500), 1,
      sym_macro_parameters,
    ACTIONS(1105), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17669] = 2,
    ACTIONS(1113), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1111), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17680] = 2,
    ACTIONS(1117), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1115), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17691] = 2,
    ACTIONS(1121), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1119), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17702] = 2,
    ACTIONS(1125), 1,
      sym__operand_separator,
    ACTIONS(1123), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [17713] = 2,
    ACTIONS(1129), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1127), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17724] = 1,
    ACTIONS(1013), 6,
      sym__operand_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [17733] = 5,
    ACTIONS(1058), 1,
      sym_macro_parameter,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    ACTIONS(1135), 1,
      sym_block_comment,
    STATE(498), 1,
      sym_macro_parameters,
    ACTIONS(1131), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17750] = 5,
    ACTIONS(1058), 1,
      sym_macro_parameter,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    ACTIONS(1141), 1,
      sym_block_comment,
    STATE(497), 1,
      sym_macro_parameters,
    ACTIONS(1137), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17767] = 5,
    ACTIONS(1058), 1,
      sym_macro_parameter,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
    ACTIONS(1147), 1,
      sym_block_comment,
    STATE(495), 1,
      sym_macro_parameters,
    ACTIONS(1143), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17784] = 5,
    ACTIONS(1058), 1,
      sym_macro_parameter,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
    ACTIONS(1149), 1,
      sym_block_comment,
    STATE(495), 1,
      sym_macro_parameters,
    ACTIONS(1143), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17801] = 2,
    ACTIONS(1153), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1151), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17812] = 5,
    ACTIONS(1058), 1,
      sym_macro_parameter,
    ACTIONS(1133), 1,
      anon_sym_RPAREN,
    ACTIONS(1155), 1,
      sym_block_comment,
    STATE(498), 1,
      sym_macro_parameters,
    ACTIONS(1131), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17829] = 5,
    ACTIONS(1058), 1,
      sym_macro_parameter,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    ACTIONS(1161), 1,
      sym_block_comment,
    STATE(491), 1,
      sym_macro_parameters,
    ACTIONS(1157), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17846] = 4,
    ACTIONS(1165), 1,
      anon_sym_SEMI,
    ACTIONS(1167), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1169), 1,
      sym_block_comment,
    ACTIONS(1163), 3,
      sym__line_separator,
      sym_line_comment,
      ts_builtin_sym_end,
  [17861] = 5,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1175), 1,
      sym_block_comment,
    STATE(407), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(1172), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17878] = 2,
    ACTIONS(1180), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1178), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17889] = 2,
    ACTIONS(1184), 1,
      anon_sym_SEMI,
    ACTIONS(1182), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [17900] = 5,
    ACTIONS(1039), 1,
      ts_builtin_sym_end,
    ACTIONS(1101), 1,
      sym_line_comment,
    ACTIONS(1103), 1,
      sym_block_comment,
    STATE(549), 1,
      sym__comment,
    ACTIONS(1099), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [17917] = 2,
    ACTIONS(1188), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1186), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17928] = 2,
    ACTIONS(1192), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(1190), 4,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_CR,
  [17939] = 1,
    ACTIONS(997), 6,
      sym__operand_separator,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [17948] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1194), 1,
      sym__escape_sequence,
    ACTIONS(1196), 1,
      anon_sym_DQUOTE,
    ACTIONS(1198), 1,
      aux_sym_string_token1,
    STATE(462), 1,
      aux_sym_string_repeat1,
  [17964] = 1,
    ACTIONS(1200), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [17972] = 1,
    ACTIONS(1202), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [17980] = 4,
    ACTIONS(1033), 1,
      anon_sym_CR,
    ACTIONS(1204), 1,
      sym_line_comment,
    ACTIONS(1206), 1,
      sym_block_comment,
    ACTIONS(1031), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [17994] = 5,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1210), 1,
      sym__operand_separator,
    ACTIONS(1212), 1,
      sym_block_comment,
    STATE(465), 1,
      aux_sym_operands_repeat1,
  [18010] = 1,
    ACTIONS(1215), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18018] = 1,
    ACTIONS(1217), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18026] = 1,
    ACTIONS(1219), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18034] = 1,
    ACTIONS(1221), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18042] = 1,
    ACTIONS(1223), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18050] = 1,
    ACTIONS(1225), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18058] = 1,
    ACTIONS(1227), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18066] = 1,
    ACTIONS(1229), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18074] = 1,
    ACTIONS(1231), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18082] = 1,
    ACTIONS(1233), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18090] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1235), 1,
      sym__escape_sequence,
    ACTIONS(1237), 1,
      anon_sym_DQUOTE,
    ACTIONS(1239), 1,
      aux_sym_string_token1,
    STATE(471), 1,
      aux_sym_string_repeat1,
  [18106] = 1,
    ACTIONS(1241), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18114] = 1,
    ACTIONS(1243), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18122] = 1,
    ACTIONS(1245), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18130] = 1,
    ACTIONS(1247), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18138] = 1,
    ACTIONS(1221), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18146] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1235), 1,
      sym__escape_sequence,
    ACTIONS(1239), 1,
      aux_sym_string_token1,
    ACTIONS(1249), 1,
      anon_sym_DQUOTE,
    STATE(471), 1,
      aux_sym_string_repeat1,
  [18162] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1251), 1,
      sym__escape_sequence,
    ACTIONS(1253), 1,
      anon_sym_DQUOTE,
    ACTIONS(1255), 1,
      aux_sym_string_token1,
    STATE(456), 1,
      aux_sym_string_repeat1,
  [18178] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1257), 1,
      sym__escape_sequence,
    ACTIONS(1259), 1,
      anon_sym_DQUOTE,
    ACTIONS(1261), 1,
      aux_sym_string_token1,
    STATE(466), 1,
      aux_sym_string_repeat1,
  [18194] = 5,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    ACTIONS(1263), 1,
      sym__operand_separator,
    ACTIONS(1265), 1,
      sym_block_comment,
    STATE(477), 1,
      aux_sym_operands_repeat1,
  [18210] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1235), 1,
      sym__escape_sequence,
    ACTIONS(1239), 1,
      aux_sym_string_token1,
    ACTIONS(1268), 1,
      anon_sym_DQUOTE,
    STATE(471), 1,
      aux_sym_string_repeat1,
  [18226] = 1,
    ACTIONS(1270), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18234] = 1,
    ACTIONS(1272), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18242] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1274), 1,
      sym__escape_sequence,
    ACTIONS(1276), 1,
      anon_sym_DQUOTE,
    ACTIONS(1278), 1,
      aux_sym_string_token1,
    STATE(473), 1,
      aux_sym_string_repeat1,
  [18258] = 1,
    ACTIONS(1221), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18266] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1280), 1,
      sym__escape_sequence,
    ACTIONS(1283), 1,
      anon_sym_DQUOTE,
    ACTIONS(1285), 1,
      aux_sym_string_token1,
    STATE(471), 1,
      aux_sym_string_repeat1,
  [18282] = 1,
    ACTIONS(1288), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18290] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1235), 1,
      sym__escape_sequence,
    ACTIONS(1239), 1,
      aux_sym_string_token1,
    ACTIONS(1290), 1,
      anon_sym_DQUOTE,
    STATE(471), 1,
      aux_sym_string_repeat1,
  [18306] = 4,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    ACTIONS(1292), 1,
      sym__operand_separator,
    STATE(476), 1,
      aux_sym_operands_repeat1,
    ACTIONS(1208), 2,
      sym_block_comment,
      anon_sym_COMMA,
  [18320] = 2,
    ACTIONS(984), 1,
      sym_block_comment,
    ACTIONS(986), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18330] = 4,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(1294), 1,
      sym__operand_separator,
    STATE(477), 1,
      aux_sym_operands_repeat1,
    ACTIONS(1208), 2,
      sym_block_comment,
      anon_sym_COMMA,
  [18344] = 3,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(477), 1,
      aux_sym_operands_repeat1,
    ACTIONS(1296), 3,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_COMMA,
  [18356] = 1,
    ACTIONS(1299), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18364] = 1,
    ACTIONS(1301), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18372] = 1,
    ACTIONS(1303), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18380] = 1,
    ACTIONS(1305), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18388] = 1,
    ACTIONS(1307), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18396] = 2,
    ACTIONS(1005), 1,
      sym_block_comment,
    ACTIONS(1007), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18406] = 1,
    ACTIONS(1309), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18414] = 1,
    ACTIONS(1311), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18422] = 1,
    ACTIONS(1313), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18430] = 1,
    ACTIONS(1315), 5,
      sym__line_separator,
      sym_line_comment,
      sym_block_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [18438] = 2,
    ACTIONS(1009), 1,
      sym_block_comment,
    ACTIONS(1011), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18448] = 3,
    ACTIONS(1317), 1,
      sym_line_comment,
    ACTIONS(1319), 1,
      sym_block_comment,
    ACTIONS(1099), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [18459] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(1321), 1,
      anon_sym_CR,
    ACTIONS(1323), 1,
      anon_sym_LF,
  [18472] = 3,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
    ACTIONS(1329), 1,
      sym_block_comment,
    ACTIONS(1325), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18483] = 3,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    ACTIONS(1335), 1,
      sym_block_comment,
    ACTIONS(1331), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18494] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1337), 1,
      anon_sym_LPAREN,
    ACTIONS(1339), 1,
      sym_macro_parameter,
    STATE(454), 1,
      sym_macro_parameters,
  [18507] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(1031), 1,
      anon_sym_LF,
    ACTIONS(1033), 1,
      anon_sym_CR,
  [18520] = 3,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
    ACTIONS(1345), 1,
      sym_block_comment,
    ACTIONS(1341), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18531] = 1,
    ACTIONS(997), 4,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18538] = 3,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
    ACTIONS(1351), 1,
      sym_block_comment,
    ACTIONS(1347), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18549] = 3,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
    ACTIONS(1357), 1,
      sym_block_comment,
    ACTIONS(1353), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18560] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1031), 1,
      anon_sym_LF,
    ACTIONS(1033), 1,
      anon_sym_CR,
    ACTIONS(1039), 1,
      ts_builtin_sym_end,
  [18573] = 3,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
    ACTIONS(1363), 1,
      sym_block_comment,
    ACTIONS(1359), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18584] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1339), 1,
      sym_macro_parameter,
    ACTIONS(1365), 1,
      anon_sym_LPAREN,
    STATE(452), 1,
      sym_macro_parameters,
  [18597] = 1,
    ACTIONS(1001), 4,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18604] = 1,
    ACTIONS(929), 4,
      sym__operand_separator,
      sym_block_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18611] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1367), 1,
      sym__escape_sequence,
    ACTIONS(1369), 1,
      aux_sym_char_token1,
  [18621] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1371), 1,
      sym__escape_sequence,
    ACTIONS(1373), 1,
      aux_sym_char_token1,
  [18631] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1375), 1,
      sym__escape_sequence,
    ACTIONS(1377), 1,
      aux_sym_char_token1,
  [18641] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    ACTIONS(1381), 1,
      sym_macro_parameter,
  [18651] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1321), 1,
      anon_sym_CR,
    ACTIONS(1323), 1,
      anon_sym_LF,
  [18661] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__line_separator,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
  [18671] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1383), 1,
      anon_sym_COMMA,
    ACTIONS(1385), 1,
      sym_macro_parameter,
  [18681] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1031), 1,
      anon_sym_LF,
    ACTIONS(1033), 1,
      anon_sym_CR,
  [18691] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1387), 1,
      sym__escape_sequence,
    ACTIONS(1389), 1,
      aux_sym_char_token1,
  [18701] = 2,
    ACTIONS(1393), 1,
      sym_macro_name,
    ACTIONS(1391), 2,
      sym_block_comment,
      aux_sym__whitespace_token1,
  [18709] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1395), 1,
      sym__escape_sequence,
    ACTIONS(1397), 1,
      aux_sym_char_token1,
  [18719] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
  [18726] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1401), 1,
      aux_sym__string_directive_token1,
  [18733] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1403), 1,
      anon_sym_RPAREN,
  [18740] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1405), 1,
      aux_sym__whitespace_token1,
  [18747] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1407), 1,
      sym__data_separator,
  [18754] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
  [18761] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1411), 1,
      anon_sym_LPAREN,
  [18768] = 2,
    ACTIONS(1381), 1,
      sym_macro_parameter,
    ACTIONS(1413), 1,
      sym_block_comment,
  [18775] = 2,
    ACTIONS(1415), 1,
      sym_macro_parameter,
    ACTIONS(1417), 1,
      sym_block_comment,
  [18782] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1415), 1,
      sym_macro_parameter,
  [18789] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1419), 1,
      sym_macro_parameter,
  [18796] = 2,
    ACTIONS(1421), 1,
      sym_macro_parameter,
    ACTIONS(1423), 1,
      sym_block_comment,
  [18803] = 1,
    ACTIONS(1425), 2,
      sym__data_separator,
      sym_block_comment,
  [18808] = 2,
    ACTIONS(1427), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1429), 1,
      sym_block_comment,
  [18815] = 2,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
    ACTIONS(1433), 1,
      sym_block_comment,
  [18822] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1435), 1,
      aux_sym__whitespace_token1,
  [18829] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1437), 1,
      anon_sym_SQUOTE,
  [18836] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1439), 1,
      anon_sym_LF,
  [18843] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1441), 1,
      anon_sym_RPAREN,
  [18850] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
  [18857] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1445), 1,
      anon_sym_RPAREN,
  [18864] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1447), 1,
      anon_sym_RPAREN,
  [18871] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1449), 1,
      sym_macro_name,
  [18878] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
  [18885] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(997), 1,
      aux_sym__string_directive_token1,
  [18892] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(391), 1,
      sym__data_separator,
  [18899] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1001), 1,
      aux_sym__string_directive_token1,
  [18906] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1453), 1,
      anon_sym_SQUOTE,
  [18913] = 2,
    ACTIONS(1385), 1,
      sym_macro_parameter,
    ACTIONS(1455), 1,
      sym_block_comment,
  [18920] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
  [18927] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
  [18934] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1421), 1,
      sym_macro_parameter,
  [18941] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1461), 1,
      anon_sym_RPAREN,
  [18948] = 2,
    ACTIONS(1433), 1,
      sym_block_comment,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
  [18955] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1465), 1,
      ts_builtin_sym_end,
  [18962] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1467), 1,
      anon_sym_RPAREN,
  [18969] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
  [18976] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1471), 1,
      anon_sym_SQUOTE,
  [18983] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
  [18990] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1475), 1,
      sym_macro_name,
  [18997] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
  [19004] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1479), 1,
      anon_sym_RPAREN,
  [19011] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1481), 1,
      anon_sym_RPAREN,
  [19018] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
  [19025] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1485), 1,
      anon_sym_RPAREN,
  [19032] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1487), 1,
      anon_sym_RPAREN,
  [19039] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
  [19046] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      sym__line_separator,
  [19053] = 2,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
    ACTIONS(1493), 1,
      sym_block_comment,
  [19060] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1495), 1,
      aux_sym__string_directive_token1,
  [19067] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
  [19074] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
  [19081] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1039), 1,
      ts_builtin_sym_end,
  [19088] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1501), 1,
      anon_sym_SQUOTE,
  [19095] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
  [19102] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1505), 1,
      anon_sym_SQUOTE,
  [19109] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1507), 1,
      anon_sym_RPAREN,
  [19116] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      anon_sym_LF,
  [19123] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
  [19130] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1511), 1,
      ts_builtin_sym_end,
  [19137] = 2,
    ACTIONS(1513), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1515), 1,
      sym_block_comment,
  [19144] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
  [19151] = 1,
    ACTIONS(447), 2,
      sym__data_separator,
      sym_block_comment,
  [19156] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
  [19163] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1521), 1,
      sym_macro_parameter,
  [19170] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1523), 1,
      aux_sym__whitespace_token1,
  [19177] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1525), 1,
      anon_sym_LPAREN,
  [19184] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1527), 1,
      aux_sym__whitespace_token1,
  [19191] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1529), 1,
      anon_sym_LPAREN,
  [19198] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1531), 1,
      anon_sym_LPAREN,
  [19205] = 2,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(1533), 1,
      anon_sym_LPAREN,
  [19212] = 1,
    ACTIONS(1535), 2,
      sym_block_comment,
      aux_sym__whitespace_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 109,
  [SMALL_STATE(4)] = 218,
  [SMALL_STATE(5)] = 271,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 378,
  [SMALL_STATE(8)] = 428,
  [SMALL_STATE(9)] = 478,
  [SMALL_STATE(10)] = 528,
  [SMALL_STATE(11)] = 578,
  [SMALL_STATE(12)] = 632,
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
  [SMALL_STATE(25)] = 1537,
  [SMALL_STATE(26)] = 1612,
  [SMALL_STATE(27)] = 1683,
  [SMALL_STATE(28)] = 1752,
  [SMALL_STATE(29)] = 1824,
  [SMALL_STATE(30)] = 1896,
  [SMALL_STATE(31)] = 1968,
  [SMALL_STATE(32)] = 2034,
  [SMALL_STATE(33)] = 2100,
  [SMALL_STATE(34)] = 2168,
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
  [SMALL_STATE(47)] = 3030,
  [SMALL_STATE(48)] = 3067,
  [SMALL_STATE(49)] = 3112,
  [SMALL_STATE(50)] = 3157,
  [SMALL_STATE(51)] = 3194,
  [SMALL_STATE(52)] = 3231,
  [SMALL_STATE(53)] = 3268,
  [SMALL_STATE(54)] = 3305,
  [SMALL_STATE(55)] = 3342,
  [SMALL_STATE(56)] = 3379,
  [SMALL_STATE(57)] = 3416,
  [SMALL_STATE(58)] = 3453,
  [SMALL_STATE(59)] = 3490,
  [SMALL_STATE(60)] = 3527,
  [SMALL_STATE(61)] = 3564,
  [SMALL_STATE(62)] = 3601,
  [SMALL_STATE(63)] = 3638,
  [SMALL_STATE(64)] = 3675,
  [SMALL_STATE(65)] = 3712,
  [SMALL_STATE(66)] = 3749,
  [SMALL_STATE(67)] = 3786,
  [SMALL_STATE(68)] = 3827,
  [SMALL_STATE(69)] = 3864,
  [SMALL_STATE(70)] = 3901,
  [SMALL_STATE(71)] = 3938,
  [SMALL_STATE(72)] = 3983,
  [SMALL_STATE(73)] = 4048,
  [SMALL_STATE(74)] = 4119,
  [SMALL_STATE(75)] = 4184,
  [SMALL_STATE(76)] = 4225,
  [SMALL_STATE(77)] = 4262,
  [SMALL_STATE(78)] = 4299,
  [SMALL_STATE(79)] = 4336,
  [SMALL_STATE(80)] = 4373,
  [SMALL_STATE(81)] = 4410,
  [SMALL_STATE(82)] = 4455,
  [SMALL_STATE(83)] = 4492,
  [SMALL_STATE(84)] = 4529,
  [SMALL_STATE(85)] = 4596,
  [SMALL_STATE(86)] = 4661,
  [SMALL_STATE(87)] = 4724,
  [SMALL_STATE(88)] = 4758,
  [SMALL_STATE(89)] = 4792,
  [SMALL_STATE(90)] = 4826,
  [SMALL_STATE(91)] = 4890,
  [SMALL_STATE(92)] = 4924,
  [SMALL_STATE(93)] = 4958,
  [SMALL_STATE(94)] = 4992,
  [SMALL_STATE(95)] = 5026,
  [SMALL_STATE(96)] = 5090,
  [SMALL_STATE(97)] = 5124,
  [SMALL_STATE(98)] = 5158,
  [SMALL_STATE(99)] = 5222,
  [SMALL_STATE(100)] = 5264,
  [SMALL_STATE(101)] = 5318,
  [SMALL_STATE(102)] = 5352,
  [SMALL_STATE(103)] = 5386,
  [SMALL_STATE(104)] = 5420,
  [SMALL_STATE(105)] = 5454,
  [SMALL_STATE(106)] = 5488,
  [SMALL_STATE(107)] = 5530,
  [SMALL_STATE(108)] = 5564,
  [SMALL_STATE(109)] = 5598,
  [SMALL_STATE(110)] = 5632,
  [SMALL_STATE(111)] = 5666,
  [SMALL_STATE(112)] = 5700,
  [SMALL_STATE(113)] = 5734,
  [SMALL_STATE(114)] = 5768,
  [SMALL_STATE(115)] = 5802,
  [SMALL_STATE(116)] = 5836,
  [SMALL_STATE(117)] = 5870,
  [SMALL_STATE(118)] = 5904,
  [SMALL_STATE(119)] = 5938,
  [SMALL_STATE(120)] = 5972,
  [SMALL_STATE(121)] = 6006,
  [SMALL_STATE(122)] = 6040,
  [SMALL_STATE(123)] = 6074,
  [SMALL_STATE(124)] = 6112,
  [SMALL_STATE(125)] = 6169,
  [SMALL_STATE(126)] = 6226,
  [SMALL_STATE(127)] = 6283,
  [SMALL_STATE(128)] = 6340,
  [SMALL_STATE(129)] = 6397,
  [SMALL_STATE(130)] = 6454,
  [SMALL_STATE(131)] = 6511,
  [SMALL_STATE(132)] = 6568,
  [SMALL_STATE(133)] = 6625,
  [SMALL_STATE(134)] = 6682,
  [SMALL_STATE(135)] = 6739,
  [SMALL_STATE(136)] = 6796,
  [SMALL_STATE(137)] = 6853,
  [SMALL_STATE(138)] = 6910,
  [SMALL_STATE(139)] = 6967,
  [SMALL_STATE(140)] = 7024,
  [SMALL_STATE(141)] = 7081,
  [SMALL_STATE(142)] = 7138,
  [SMALL_STATE(143)] = 7195,
  [SMALL_STATE(144)] = 7252,
  [SMALL_STATE(145)] = 7309,
  [SMALL_STATE(146)] = 7366,
  [SMALL_STATE(147)] = 7423,
  [SMALL_STATE(148)] = 7480,
  [SMALL_STATE(149)] = 7537,
  [SMALL_STATE(150)] = 7594,
  [SMALL_STATE(151)] = 7651,
  [SMALL_STATE(152)] = 7708,
  [SMALL_STATE(153)] = 7765,
  [SMALL_STATE(154)] = 7822,
  [SMALL_STATE(155)] = 7879,
  [SMALL_STATE(156)] = 7936,
  [SMALL_STATE(157)] = 7993,
  [SMALL_STATE(158)] = 8050,
  [SMALL_STATE(159)] = 8105,
  [SMALL_STATE(160)] = 8162,
  [SMALL_STATE(161)] = 8217,
  [SMALL_STATE(162)] = 8274,
  [SMALL_STATE(163)] = 8331,
  [SMALL_STATE(164)] = 8388,
  [SMALL_STATE(165)] = 8445,
  [SMALL_STATE(166)] = 8502,
  [SMALL_STATE(167)] = 8559,
  [SMALL_STATE(168)] = 8616,
  [SMALL_STATE(169)] = 8673,
  [SMALL_STATE(170)] = 8730,
  [SMALL_STATE(171)] = 8787,
  [SMALL_STATE(172)] = 8844,
  [SMALL_STATE(173)] = 8901,
  [SMALL_STATE(174)] = 8958,
  [SMALL_STATE(175)] = 9015,
  [SMALL_STATE(176)] = 9072,
  [SMALL_STATE(177)] = 9129,
  [SMALL_STATE(178)] = 9186,
  [SMALL_STATE(179)] = 9243,
  [SMALL_STATE(180)] = 9300,
  [SMALL_STATE(181)] = 9357,
  [SMALL_STATE(182)] = 9414,
  [SMALL_STATE(183)] = 9471,
  [SMALL_STATE(184)] = 9528,
  [SMALL_STATE(185)] = 9585,
  [SMALL_STATE(186)] = 9642,
  [SMALL_STATE(187)] = 9699,
  [SMALL_STATE(188)] = 9756,
  [SMALL_STATE(189)] = 9813,
  [SMALL_STATE(190)] = 9870,
  [SMALL_STATE(191)] = 9927,
  [SMALL_STATE(192)] = 9984,
  [SMALL_STATE(193)] = 10041,
  [SMALL_STATE(194)] = 10098,
  [SMALL_STATE(195)] = 10155,
  [SMALL_STATE(196)] = 10212,
  [SMALL_STATE(197)] = 10269,
  [SMALL_STATE(198)] = 10326,
  [SMALL_STATE(199)] = 10383,
  [SMALL_STATE(200)] = 10440,
  [SMALL_STATE(201)] = 10497,
  [SMALL_STATE(202)] = 10554,
  [SMALL_STATE(203)] = 10611,
  [SMALL_STATE(204)] = 10668,
  [SMALL_STATE(205)] = 10725,
  [SMALL_STATE(206)] = 10782,
  [SMALL_STATE(207)] = 10839,
  [SMALL_STATE(208)] = 10896,
  [SMALL_STATE(209)] = 10953,
  [SMALL_STATE(210)] = 11010,
  [SMALL_STATE(211)] = 11067,
  [SMALL_STATE(212)] = 11124,
  [SMALL_STATE(213)] = 11181,
  [SMALL_STATE(214)] = 11238,
  [SMALL_STATE(215)] = 11295,
  [SMALL_STATE(216)] = 11352,
  [SMALL_STATE(217)] = 11409,
  [SMALL_STATE(218)] = 11466,
  [SMALL_STATE(219)] = 11523,
  [SMALL_STATE(220)] = 11580,
  [SMALL_STATE(221)] = 11637,
  [SMALL_STATE(222)] = 11694,
  [SMALL_STATE(223)] = 11751,
  [SMALL_STATE(224)] = 11783,
  [SMALL_STATE(225)] = 11815,
  [SMALL_STATE(226)] = 11847,
  [SMALL_STATE(227)] = 11879,
  [SMALL_STATE(228)] = 11911,
  [SMALL_STATE(229)] = 11943,
  [SMALL_STATE(230)] = 11975,
  [SMALL_STATE(231)] = 12007,
  [SMALL_STATE(232)] = 12039,
  [SMALL_STATE(233)] = 12071,
  [SMALL_STATE(234)] = 12103,
  [SMALL_STATE(235)] = 12135,
  [SMALL_STATE(236)] = 12167,
  [SMALL_STATE(237)] = 12199,
  [SMALL_STATE(238)] = 12231,
  [SMALL_STATE(239)] = 12263,
  [SMALL_STATE(240)] = 12295,
  [SMALL_STATE(241)] = 12327,
  [SMALL_STATE(242)] = 12359,
  [SMALL_STATE(243)] = 12397,
  [SMALL_STATE(244)] = 12429,
  [SMALL_STATE(245)] = 12461,
  [SMALL_STATE(246)] = 12493,
  [SMALL_STATE(247)] = 12525,
  [SMALL_STATE(248)] = 12579,
  [SMALL_STATE(249)] = 12633,
  [SMALL_STATE(250)] = 12687,
  [SMALL_STATE(251)] = 12741,
  [SMALL_STATE(252)] = 12795,
  [SMALL_STATE(253)] = 12849,
  [SMALL_STATE(254)] = 12903,
  [SMALL_STATE(255)] = 12957,
  [SMALL_STATE(256)] = 12995,
  [SMALL_STATE(257)] = 13049,
  [SMALL_STATE(258)] = 13103,
  [SMALL_STATE(259)] = 13157,
  [SMALL_STATE(260)] = 13211,
  [SMALL_STATE(261)] = 13243,
  [SMALL_STATE(262)] = 13275,
  [SMALL_STATE(263)] = 13329,
  [SMALL_STATE(264)] = 13361,
  [SMALL_STATE(265)] = 13393,
  [SMALL_STATE(266)] = 13425,
  [SMALL_STATE(267)] = 13457,
  [SMALL_STATE(268)] = 13489,
  [SMALL_STATE(269)] = 13521,
  [SMALL_STATE(270)] = 13551,
  [SMALL_STATE(271)] = 13581,
  [SMALL_STATE(272)] = 13611,
  [SMALL_STATE(273)] = 13647,
  [SMALL_STATE(274)] = 13677,
  [SMALL_STATE(275)] = 13707,
  [SMALL_STATE(276)] = 13737,
  [SMALL_STATE(277)] = 13767,
  [SMALL_STATE(278)] = 13803,
  [SMALL_STATE(279)] = 13833,
  [SMALL_STATE(280)] = 13863,
  [SMALL_STATE(281)] = 13893,
  [SMALL_STATE(282)] = 13923,
  [SMALL_STATE(283)] = 13953,
  [SMALL_STATE(284)] = 13983,
  [SMALL_STATE(285)] = 14013,
  [SMALL_STATE(286)] = 14043,
  [SMALL_STATE(287)] = 14073,
  [SMALL_STATE(288)] = 14103,
  [SMALL_STATE(289)] = 14133,
  [SMALL_STATE(290)] = 14163,
  [SMALL_STATE(291)] = 14193,
  [SMALL_STATE(292)] = 14223,
  [SMALL_STATE(293)] = 14255,
  [SMALL_STATE(294)] = 14285,
  [SMALL_STATE(295)] = 14315,
  [SMALL_STATE(296)] = 14345,
  [SMALL_STATE(297)] = 14375,
  [SMALL_STATE(298)] = 14405,
  [SMALL_STATE(299)] = 14435,
  [SMALL_STATE(300)] = 14465,
  [SMALL_STATE(301)] = 14497,
  [SMALL_STATE(302)] = 14527,
  [SMALL_STATE(303)] = 14559,
  [SMALL_STATE(304)] = 14597,
  [SMALL_STATE(305)] = 14629,
  [SMALL_STATE(306)] = 14667,
  [SMALL_STATE(307)] = 14699,
  [SMALL_STATE(308)] = 14731,
  [SMALL_STATE(309)] = 14769,
  [SMALL_STATE(310)] = 14801,
  [SMALL_STATE(311)] = 14833,
  [SMALL_STATE(312)] = 14871,
  [SMALL_STATE(313)] = 14903,
  [SMALL_STATE(314)] = 14941,
  [SMALL_STATE(315)] = 14973,
  [SMALL_STATE(316)] = 15005,
  [SMALL_STATE(317)] = 15035,
  [SMALL_STATE(318)] = 15065,
  [SMALL_STATE(319)] = 15101,
  [SMALL_STATE(320)] = 15137,
  [SMALL_STATE(321)] = 15167,
  [SMALL_STATE(322)] = 15197,
  [SMALL_STATE(323)] = 15227,
  [SMALL_STATE(324)] = 15257,
  [SMALL_STATE(325)] = 15289,
  [SMALL_STATE(326)] = 15319,
  [SMALL_STATE(327)] = 15349,
  [SMALL_STATE(328)] = 15379,
  [SMALL_STATE(329)] = 15415,
  [SMALL_STATE(330)] = 15445,
  [SMALL_STATE(331)] = 15475,
  [SMALL_STATE(332)] = 15505,
  [SMALL_STATE(333)] = 15535,
  [SMALL_STATE(334)] = 15565,
  [SMALL_STATE(335)] = 15595,
  [SMALL_STATE(336)] = 15625,
  [SMALL_STATE(337)] = 15655,
  [SMALL_STATE(338)] = 15685,
  [SMALL_STATE(339)] = 15715,
  [SMALL_STATE(340)] = 15745,
  [SMALL_STATE(341)] = 15775,
  [SMALL_STATE(342)] = 15805,
  [SMALL_STATE(343)] = 15835,
  [SMALL_STATE(344)] = 15865,
  [SMALL_STATE(345)] = 15895,
  [SMALL_STATE(346)] = 15925,
  [SMALL_STATE(347)] = 15957,
  [SMALL_STATE(348)] = 15987,
  [SMALL_STATE(349)] = 16017,
  [SMALL_STATE(350)] = 16047,
  [SMALL_STATE(351)] = 16077,
  [SMALL_STATE(352)] = 16107,
  [SMALL_STATE(353)] = 16137,
  [SMALL_STATE(354)] = 16167,
  [SMALL_STATE(355)] = 16203,
  [SMALL_STATE(356)] = 16239,
  [SMALL_STATE(357)] = 16275,
  [SMALL_STATE(358)] = 16305,
  [SMALL_STATE(359)] = 16338,
  [SMALL_STATE(360)] = 16371,
  [SMALL_STATE(361)] = 16432,
  [SMALL_STATE(362)] = 16459,
  [SMALL_STATE(363)] = 16520,
  [SMALL_STATE(364)] = 16581,
  [SMALL_STATE(365)] = 16642,
  [SMALL_STATE(366)] = 16703,
  [SMALL_STATE(367)] = 16738,
  [SMALL_STATE(368)] = 16771,
  [SMALL_STATE(369)] = 16804,
  [SMALL_STATE(370)] = 16834,
  [SMALL_STATE(371)] = 16866,
  [SMALL_STATE(372)] = 16886,
  [SMALL_STATE(373)] = 16906,
  [SMALL_STATE(374)] = 16922,
  [SMALL_STATE(375)] = 16942,
  [SMALL_STATE(376)] = 16962,
  [SMALL_STATE(377)] = 16978,
  [SMALL_STATE(378)] = 16998,
  [SMALL_STATE(379)] = 17014,
  [SMALL_STATE(380)] = 17033,
  [SMALL_STATE(381)] = 17052,
  [SMALL_STATE(382)] = 17071,
  [SMALL_STATE(383)] = 17090,
  [SMALL_STATE(384)] = 17109,
  [SMALL_STATE(385)] = 17128,
  [SMALL_STATE(386)] = 17147,
  [SMALL_STATE(387)] = 17167,
  [SMALL_STATE(388)] = 17189,
  [SMALL_STATE(389)] = 17211,
  [SMALL_STATE(390)] = 17233,
  [SMALL_STATE(391)] = 17255,
  [SMALL_STATE(392)] = 17277,
  [SMALL_STATE(393)] = 17299,
  [SMALL_STATE(394)] = 17312,
  [SMALL_STATE(395)] = 17325,
  [SMALL_STATE(396)] = 17338,
  [SMALL_STATE(397)] = 17351,
  [SMALL_STATE(398)] = 17364,
  [SMALL_STATE(399)] = 17377,
  [SMALL_STATE(400)] = 17391,
  [SMALL_STATE(401)] = 17407,
  [SMALL_STATE(402)] = 17421,
  [SMALL_STATE(403)] = 17441,
  [SMALL_STATE(404)] = 17461,
  [SMALL_STATE(405)] = 17475,
  [SMALL_STATE(406)] = 17491,
  [SMALL_STATE(407)] = 17508,
  [SMALL_STATE(408)] = 17525,
  [SMALL_STATE(409)] = 17542,
  [SMALL_STATE(410)] = 17551,
  [SMALL_STATE(411)] = 17560,
  [SMALL_STATE(412)] = 17571,
  [SMALL_STATE(413)] = 17582,
  [SMALL_STATE(414)] = 17591,
  [SMALL_STATE(415)] = 17602,
  [SMALL_STATE(416)] = 17613,
  [SMALL_STATE(417)] = 17624,
  [SMALL_STATE(418)] = 17635,
  [SMALL_STATE(419)] = 17652,
  [SMALL_STATE(420)] = 17669,
  [SMALL_STATE(421)] = 17680,
  [SMALL_STATE(422)] = 17691,
  [SMALL_STATE(423)] = 17702,
  [SMALL_STATE(424)] = 17713,
  [SMALL_STATE(425)] = 17724,
  [SMALL_STATE(426)] = 17733,
  [SMALL_STATE(427)] = 17750,
  [SMALL_STATE(428)] = 17767,
  [SMALL_STATE(429)] = 17784,
  [SMALL_STATE(430)] = 17801,
  [SMALL_STATE(431)] = 17812,
  [SMALL_STATE(432)] = 17829,
  [SMALL_STATE(433)] = 17846,
  [SMALL_STATE(434)] = 17861,
  [SMALL_STATE(435)] = 17878,
  [SMALL_STATE(436)] = 17889,
  [SMALL_STATE(437)] = 17900,
  [SMALL_STATE(438)] = 17917,
  [SMALL_STATE(439)] = 17928,
  [SMALL_STATE(440)] = 17939,
  [SMALL_STATE(441)] = 17948,
  [SMALL_STATE(442)] = 17964,
  [SMALL_STATE(443)] = 17972,
  [SMALL_STATE(444)] = 17980,
  [SMALL_STATE(445)] = 17994,
  [SMALL_STATE(446)] = 18010,
  [SMALL_STATE(447)] = 18018,
  [SMALL_STATE(448)] = 18026,
  [SMALL_STATE(449)] = 18034,
  [SMALL_STATE(450)] = 18042,
  [SMALL_STATE(451)] = 18050,
  [SMALL_STATE(452)] = 18058,
  [SMALL_STATE(453)] = 18066,
  [SMALL_STATE(454)] = 18074,
  [SMALL_STATE(455)] = 18082,
  [SMALL_STATE(456)] = 18090,
  [SMALL_STATE(457)] = 18106,
  [SMALL_STATE(458)] = 18114,
  [SMALL_STATE(459)] = 18122,
  [SMALL_STATE(460)] = 18130,
  [SMALL_STATE(461)] = 18138,
  [SMALL_STATE(462)] = 18146,
  [SMALL_STATE(463)] = 18162,
  [SMALL_STATE(464)] = 18178,
  [SMALL_STATE(465)] = 18194,
  [SMALL_STATE(466)] = 18210,
  [SMALL_STATE(467)] = 18226,
  [SMALL_STATE(468)] = 18234,
  [SMALL_STATE(469)] = 18242,
  [SMALL_STATE(470)] = 18258,
  [SMALL_STATE(471)] = 18266,
  [SMALL_STATE(472)] = 18282,
  [SMALL_STATE(473)] = 18290,
  [SMALL_STATE(474)] = 18306,
  [SMALL_STATE(475)] = 18320,
  [SMALL_STATE(476)] = 18330,
  [SMALL_STATE(477)] = 18344,
  [SMALL_STATE(478)] = 18356,
  [SMALL_STATE(479)] = 18364,
  [SMALL_STATE(480)] = 18372,
  [SMALL_STATE(481)] = 18380,
  [SMALL_STATE(482)] = 18388,
  [SMALL_STATE(483)] = 18396,
  [SMALL_STATE(484)] = 18406,
  [SMALL_STATE(485)] = 18414,
  [SMALL_STATE(486)] = 18422,
  [SMALL_STATE(487)] = 18430,
  [SMALL_STATE(488)] = 18438,
  [SMALL_STATE(489)] = 18448,
  [SMALL_STATE(490)] = 18459,
  [SMALL_STATE(491)] = 18472,
  [SMALL_STATE(492)] = 18483,
  [SMALL_STATE(493)] = 18494,
  [SMALL_STATE(494)] = 18507,
  [SMALL_STATE(495)] = 18520,
  [SMALL_STATE(496)] = 18531,
  [SMALL_STATE(497)] = 18538,
  [SMALL_STATE(498)] = 18549,
  [SMALL_STATE(499)] = 18560,
  [SMALL_STATE(500)] = 18573,
  [SMALL_STATE(501)] = 18584,
  [SMALL_STATE(502)] = 18597,
  [SMALL_STATE(503)] = 18604,
  [SMALL_STATE(504)] = 18611,
  [SMALL_STATE(505)] = 18621,
  [SMALL_STATE(506)] = 18631,
  [SMALL_STATE(507)] = 18641,
  [SMALL_STATE(508)] = 18651,
  [SMALL_STATE(509)] = 18661,
  [SMALL_STATE(510)] = 18671,
  [SMALL_STATE(511)] = 18681,
  [SMALL_STATE(512)] = 18691,
  [SMALL_STATE(513)] = 18701,
  [SMALL_STATE(514)] = 18709,
  [SMALL_STATE(515)] = 18719,
  [SMALL_STATE(516)] = 18726,
  [SMALL_STATE(517)] = 18733,
  [SMALL_STATE(518)] = 18740,
  [SMALL_STATE(519)] = 18747,
  [SMALL_STATE(520)] = 18754,
  [SMALL_STATE(521)] = 18761,
  [SMALL_STATE(522)] = 18768,
  [SMALL_STATE(523)] = 18775,
  [SMALL_STATE(524)] = 18782,
  [SMALL_STATE(525)] = 18789,
  [SMALL_STATE(526)] = 18796,
  [SMALL_STATE(527)] = 18803,
  [SMALL_STATE(528)] = 18808,
  [SMALL_STATE(529)] = 18815,
  [SMALL_STATE(530)] = 18822,
  [SMALL_STATE(531)] = 18829,
  [SMALL_STATE(532)] = 18836,
  [SMALL_STATE(533)] = 18843,
  [SMALL_STATE(534)] = 18850,
  [SMALL_STATE(535)] = 18857,
  [SMALL_STATE(536)] = 18864,
  [SMALL_STATE(537)] = 18871,
  [SMALL_STATE(538)] = 18878,
  [SMALL_STATE(539)] = 18885,
  [SMALL_STATE(540)] = 18892,
  [SMALL_STATE(541)] = 18899,
  [SMALL_STATE(542)] = 18906,
  [SMALL_STATE(543)] = 18913,
  [SMALL_STATE(544)] = 18920,
  [SMALL_STATE(545)] = 18927,
  [SMALL_STATE(546)] = 18934,
  [SMALL_STATE(547)] = 18941,
  [SMALL_STATE(548)] = 18948,
  [SMALL_STATE(549)] = 18955,
  [SMALL_STATE(550)] = 18962,
  [SMALL_STATE(551)] = 18969,
  [SMALL_STATE(552)] = 18976,
  [SMALL_STATE(553)] = 18983,
  [SMALL_STATE(554)] = 18990,
  [SMALL_STATE(555)] = 18997,
  [SMALL_STATE(556)] = 19004,
  [SMALL_STATE(557)] = 19011,
  [SMALL_STATE(558)] = 19018,
  [SMALL_STATE(559)] = 19025,
  [SMALL_STATE(560)] = 19032,
  [SMALL_STATE(561)] = 19039,
  [SMALL_STATE(562)] = 19046,
  [SMALL_STATE(563)] = 19053,
  [SMALL_STATE(564)] = 19060,
  [SMALL_STATE(565)] = 19067,
  [SMALL_STATE(566)] = 19074,
  [SMALL_STATE(567)] = 19081,
  [SMALL_STATE(568)] = 19088,
  [SMALL_STATE(569)] = 19095,
  [SMALL_STATE(570)] = 19102,
  [SMALL_STATE(571)] = 19109,
  [SMALL_STATE(572)] = 19116,
  [SMALL_STATE(573)] = 19123,
  [SMALL_STATE(574)] = 19130,
  [SMALL_STATE(575)] = 19137,
  [SMALL_STATE(576)] = 19144,
  [SMALL_STATE(577)] = 19151,
  [SMALL_STATE(578)] = 19156,
  [SMALL_STATE(579)] = 19163,
  [SMALL_STATE(580)] = 19170,
  [SMALL_STATE(581)] = 19177,
  [SMALL_STATE(582)] = 19184,
  [SMALL_STATE(583)] = 19191,
  [SMALL_STATE(584)] = 19198,
  [SMALL_STATE(585)] = 19205,
  [SMALL_STATE(586)] = 19212,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(575),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(586),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(518),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(530),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(516),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0), SHIFT(12),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0), SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0), SHIFT(10),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1), SHIFT(16),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 5),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 2, 0, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 5), SHIFT(23),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat2, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat2, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_operands, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_operands, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 1, 0, 0), SHIFT(86),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_expression, 1, 0, 10),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer_operands, 1, 0, 0), SHIFT(577),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer_operands, 1, 0, 0), SHIFT(158),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_expression, 1, 0, 10),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 22),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 22),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 13),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 13),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__right_expression, 1, 0, 21),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__right_expression, 1, 0, 21),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 16),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 16),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 16),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 16),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 25),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 25),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 26),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 26),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 27),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 27),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 4, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 4, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_operand, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_operand, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 13),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 13),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 20),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 20),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 16),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 3, 0, 16),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_expression, 2, 0, 10),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_expression, 2, 0, 10),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_operands, 2, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_operands, 2, 0, 0),
  [801] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer_operands, 2, 0, 0), SHIFT(86),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer_operands, 2, 0, 0), SHIFT(577),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer_operands, 2, 0, 0), SHIFT(158),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operands, 1, 0, 0),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operands, 1, 0, 0),
  [814] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_float_operands, 1, 0, 0), SHIFT(73),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_float_operands, 1, 0, 0), SHIFT(540),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operands, 2, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operands, 2, 0, 0),
  [828] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_float_operands, 2, 0, 0), SHIFT(73),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_float_operands, 2, 0, 0), SHIFT(540),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0),
  [838] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [841] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(540),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [853] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(577),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat2, 2, 0, 0),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_operands_repeat2, 2, 0, 0),
  [869] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(371),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_operands, 3, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_operands, 3, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 3, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 3, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_operands, 3, 0, 0),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_operands, 3, 0, 0),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_float_operands_repeat1, 4, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_float_operands_repeat1, 4, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_directive, 4, 0, 11),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_directive, 4, 0, 11),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_directive_repeat1, 2, 0, 0),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__integer_directive_repeat1, 2, 0, 0),
  [900] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__integer_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_directive, 3, 0, 11),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float_directive, 3, 0, 11),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 4, 0, 11),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 4, 0, 11),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 5, 0, 17),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 5, 0, 17),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 4, 0, 17),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 4, 0, 17),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_directive, 3, 0, 11),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer_directive, 3, 0, 11),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [933] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(510),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 0),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [958] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0), SHIFT(72),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(510),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1), SHIFT(15),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operands, 2, 0, 0), SHIFT(72),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [988] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [991] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(543),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 4, 0, 0),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 4, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [1015] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [1020] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0), SHIFT(27),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0), SHIFT(27),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 4, 0, 12),
  [1048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 4, 0, 12),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1062] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(507),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1067] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(507),
  [1070] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [1073] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(522),
  [1076] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 11),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 0),
  [1089] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 3, 0, 0),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 8),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 8),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 9),
  [1097] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 9),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 4, 0, 0),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 4, 0, 0),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 4, 0, 23),
  [1117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 4, 0, 23),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 4, 0, 16),
  [1121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 4, 0, 16),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 4, 0, 17),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 2, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 5, 0, 23),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 5, 0, 23),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 5),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 5),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 5), SHIFT(21),
  [1172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(507),
  [1175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(507),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [1180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 6),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [1184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 14),
  [1188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 4, 0, 14),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 15),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 4, 0, 15),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 10, 0, 31),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 30),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0), SHIFT(74),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 5, 0, 17),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 24),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 7),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 19),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 9, 0, 29),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 24),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 12),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 19),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 9, 0, 30),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 7),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 7),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 28),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_operands, 2, 0, 0), SHIFT(74),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 18),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 4, 0, 11),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [1283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [1285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 9, 0, 12),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 19),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 12),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 12),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 24),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 4),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 9, 0, 31),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 7),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 29),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 28),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_mnemonic, 1, 0, 0),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1511] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_mnemonic, 1, 0, 0),
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

static const bool ts_external_scanner_states[20][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
  },
  [5] = {
    [ts_external_token__line_separator] = true,
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
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_separator] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_division_operator] = true,
  },
  [11] = {
    [ts_external_token__data_separator] = true,
    [ts_external_token_block_comment] = true,
  },
  [12] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_separator] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
    [ts_external_token_division_operator] = true,
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
    [ts_external_token__line_separator] = true,
    [ts_external_token_line_comment] = true,
    [ts_external_token_block_comment] = true,
  },
  [18] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token_block_comment] = true,
  },
  [19] = {
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
