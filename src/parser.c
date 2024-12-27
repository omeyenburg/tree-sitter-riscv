#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  aux_sym__statement_token1 = 3,
  sym_meta = 4,
  aux_sym_attributes_token1 = 5,
  sym_macro = 6,
  sym__identifier = 7,
  sym_label = 8,
  sym_opcode = 9,
  anon_sym_COMMA = 10,
  sym_macro_variable = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  sym__char = 14,
  sym__string = 15,
  sym__octal = 16,
  sym__decimal = 17,
  sym__hexadecimal = 18,
  aux_sym__float_token1 = 19,
  aux_sym__float_token2 = 20,
  aux_sym__float_token3 = 21,
  aux_sym__float_token4 = 22,
  sym__register = 23,
  sym_line_comment = 24,
  sym_block_comment = 25,
  sym_source_file = 26,
  sym__statement = 27,
  sym_directive = 28,
  sym_attributes = 29,
  sym_instruction = 30,
  sym_operands = 31,
  sym__operand = 32,
  sym__number = 33,
  sym_address = 34,
  sym__float = 35,
  sym_char = 36,
  sym_string = 37,
  sym_octal = 38,
  sym_decimal = 39,
  sym_hexadecimal = 40,
  sym_float = 41,
  sym_register = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_operands_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [aux_sym__statement_token1] = "_statement_token1",
  [sym_meta] = "meta",
  [aux_sym_attributes_token1] = "attributes_token1",
  [sym_macro] = "macro",
  [sym__identifier] = "_identifier",
  [sym_label] = "label",
  [sym_opcode] = "opcode",
  [anon_sym_COMMA] = ",",
  [sym_macro_variable] = "macro_variable",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__char] = "_char",
  [sym__string] = "_string",
  [sym__octal] = "_octal",
  [sym__decimal] = "_decimal",
  [sym__hexadecimal] = "_hexadecimal",
  [aux_sym__float_token1] = "_float_token1",
  [aux_sym__float_token2] = "_float_token2",
  [aux_sym__float_token3] = "_float_token3",
  [aux_sym__float_token4] = "_float_token4",
  [sym__register] = "_register",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_directive] = "directive",
  [sym_attributes] = "attributes",
  [sym_instruction] = "instruction",
  [sym_operands] = "operands",
  [sym__operand] = "_operand",
  [sym__number] = "_number",
  [sym_address] = "address",
  [sym__float] = "_float",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym_octal] = "octal",
  [sym_decimal] = "decimal",
  [sym_hexadecimal] = "hexadecimal",
  [sym_float] = "float",
  [sym_register] = "register",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_operands_repeat1] = "operands_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [sym_meta] = sym_meta,
  [aux_sym_attributes_token1] = aux_sym_attributes_token1,
  [sym_macro] = sym_macro,
  [sym__identifier] = sym__identifier,
  [sym_label] = sym_label,
  [sym_opcode] = sym_opcode,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_macro_variable] = sym_macro_variable,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__char] = sym__char,
  [sym__string] = sym__string,
  [sym__octal] = sym__octal,
  [sym__decimal] = sym__decimal,
  [sym__hexadecimal] = sym__hexadecimal,
  [aux_sym__float_token1] = aux_sym__float_token1,
  [aux_sym__float_token2] = aux_sym__float_token2,
  [aux_sym__float_token3] = aux_sym__float_token3,
  [aux_sym__float_token4] = aux_sym__float_token4,
  [sym__register] = sym__register,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_directive] = sym_directive,
  [sym_attributes] = sym_attributes,
  [sym_instruction] = sym_instruction,
  [sym_operands] = sym_operands,
  [sym__operand] = sym__operand,
  [sym__number] = sym__number,
  [sym_address] = sym_address,
  [sym__float] = sym__float,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym_octal] = sym_octal,
  [sym_decimal] = sym_decimal,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_float] = sym_float,
  [sym_register] = sym_register,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_operands_repeat1] = aux_sym_operands_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__statement_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_attributes_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_variable] = {
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
  [sym__char] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym__octal] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [sym__hexadecimal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token4] = {
    .visible = false,
    .named = false,
  },
  [sym__register] = {
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
  [sym_source_file] = {
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
  [sym_attributes] = {
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
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym__float] = {
    .visible = false,
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
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operands_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '"', 2,
        '#', 66,
        '$', 21,
        '\'', 23,
        '(', 53,
        ')', 54,
        ',', 51,
        '-', 13,
        '.', 16,
        '/', 7,
        '0', 57,
        ';', 32,
        '%', 22,
        '\\', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '#', 66,
        '$', 21,
        '\'', 23,
        '(', 53,
        '-', 13,
        '.', 15,
        '/', 7,
        '0', 57,
        '%', 22,
        '\\', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '0') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(4);
      END_STATE();
    case 24:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '#', 66,
        '$', 21,
        '\'', 23,
        '(', 53,
        ',', 51,
        '-', 13,
        '.', 15,
        '/', 7,
        '0', 57,
        ';', 32,
        '%', 22,
        '\\', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 25:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      END_STATE();
    case 26:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(5);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(5);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_meta);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '-' || '9' < lookahead)) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == ':') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(5);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__string);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(19);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__float_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_meta] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_opcode] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_macro_variable] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__char] = ACTIONS(1),
    [sym__string] = ACTIONS(1),
    [sym__octal] = ACTIONS(1),
    [sym__decimal] = ACTIONS(1),
    [sym__hexadecimal] = ACTIONS(1),
    [aux_sym__float_token1] = ACTIONS(1),
    [aux_sym__float_token2] = ACTIONS(1),
    [aux_sym__float_token4] = ACTIONS(1),
    [sym__register] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym__statement] = STATE(16),
    [sym_directive] = STATE(16),
    [sym_instruction] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_meta] = ACTIONS(7),
    [sym_macro] = ACTIONS(9),
    [sym_label] = ACTIONS(11),
    [sym_opcode] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_operands] = STATE(35),
    [sym__operand] = STATE(14),
    [sym__number] = STATE(14),
    [sym_address] = STATE(14),
    [sym__float] = STATE(19),
    [sym_char] = STATE(14),
    [sym_octal] = STATE(14),
    [sym_decimal] = STATE(14),
    [sym_hexadecimal] = STATE(14),
    [sym_float] = STATE(14),
    [sym_register] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym__identifier] = ACTIONS(19),
    [sym_macro_variable] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym__char] = ACTIONS(25),
    [sym__octal] = ACTIONS(27),
    [sym__decimal] = ACTIONS(29),
    [sym__hexadecimal] = ACTIONS(31),
    [aux_sym__float_token1] = ACTIONS(33),
    [aux_sym__float_token2] = ACTIONS(33),
    [aux_sym__float_token4] = ACTIONS(35),
    [sym__register] = ACTIONS(37),
    [sym_line_comment] = ACTIONS(39),
    [sym_block_comment] = ACTIONS(39),
  },
  [3] = {
    [sym__operand] = STATE(22),
    [sym__number] = STATE(22),
    [sym_address] = STATE(22),
    [sym__float] = STATE(19),
    [sym_char] = STATE(22),
    [sym_octal] = STATE(22),
    [sym_decimal] = STATE(22),
    [sym_hexadecimal] = STATE(22),
    [sym_float] = STATE(22),
    [sym_register] = STATE(22),
    [sym__identifier] = ACTIONS(41),
    [sym_macro_variable] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(45),
    [sym__char] = ACTIONS(47),
    [sym__octal] = ACTIONS(27),
    [sym__decimal] = ACTIONS(29),
    [sym__hexadecimal] = ACTIONS(49),
    [aux_sym__float_token1] = ACTIONS(33),
    [aux_sym__float_token2] = ACTIONS(33),
    [aux_sym__float_token4] = ACTIONS(51),
    [sym__register] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(35), 1,
      aux_sym__float_token4,
    ACTIONS(55), 1,
      aux_sym_attributes_token1,
    ACTIONS(57), 1,
      sym__char,
    ACTIONS(59), 1,
      sym__string,
    ACTIONS(61), 1,
      sym__octal,
    ACTIONS(63), 1,
      sym__decimal,
    ACTIONS(65), 1,
      sym__hexadecimal,
    STATE(19), 1,
      sym__float,
    STATE(33), 1,
      sym_attributes,
    ACTIONS(33), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(28), 7,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [45] = 8,
    ACTIONS(13), 1,
      sym_opcode,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      sym_meta,
    ACTIONS(73), 1,
      sym_macro,
    ACTIONS(75), 1,
      sym_label,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(34), 3,
      sym__statement,
      sym_directive,
      sym_instruction,
  [74] = 6,
    ACTIONS(7), 1,
      sym_meta,
    ACTIONS(11), 1,
      sym_label,
    ACTIONS(13), 1,
      sym_opcode,
    ACTIONS(77), 1,
      sym_macro,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(36), 3,
      sym__statement,
      sym_directive,
      sym_instruction,
  [96] = 5,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_operands_repeat1,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [114] = 4,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(88), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [130] = 4,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(94), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [146] = 4,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(98), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [162] = 4,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(102), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [178] = 4,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(106), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [194] = 4,
    ACTIONS(112), 1,
      aux_sym__float_token3,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(110), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [210] = 5,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_operands_repeat1,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [228] = 5,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym_operands_repeat1,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [246] = 5,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
  [263] = 4,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      aux_sym__statement_token1,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(132), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [278] = 4,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      aux_sym__statement_token1,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [293] = 3,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(144), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [306] = 5,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      anon_sym_SEMI,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
  [323] = 3,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(150), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [336] = 3,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [349] = 3,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(154), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [362] = 3,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(158), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [375] = 5,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      anon_sym_LF,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
  [392] = 3,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(170), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [405] = 3,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [417] = 3,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [429] = 3,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [441] = 3,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [453] = 3,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [465] = 3,
    ACTIONS(106), 1,
      anon_sym_SEMI,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [477] = 3,
    ACTIONS(182), 1,
      anon_sym_SEMI,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [489] = 3,
    ACTIONS(184), 1,
      anon_sym_SEMI,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [501] = 3,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [513] = 3,
    ACTIONS(192), 1,
      anon_sym_SEMI,
    ACTIONS(39), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [525] = 2,
    ACTIONS(194), 1,
      sym__register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [533] = 2,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [541] = 2,
    ACTIONS(198), 1,
      sym__register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [549] = 2,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [557] = 2,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 178,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 210,
  [SMALL_STATE(15)] = 228,
  [SMALL_STATE(16)] = 246,
  [SMALL_STATE(17)] = 263,
  [SMALL_STATE(18)] = 278,
  [SMALL_STATE(19)] = 293,
  [SMALL_STATE(20)] = 306,
  [SMALL_STATE(21)] = 323,
  [SMALL_STATE(22)] = 336,
  [SMALL_STATE(23)] = 349,
  [SMALL_STATE(24)] = 362,
  [SMALL_STATE(25)] = 375,
  [SMALL_STATE(26)] = 392,
  [SMALL_STATE(27)] = 405,
  [SMALL_STATE(28)] = 417,
  [SMALL_STATE(29)] = 429,
  [SMALL_STATE(30)] = 441,
  [SMALL_STATE(31)] = 453,
  [SMALL_STATE(32)] = 465,
  [SMALL_STATE(33)] = 477,
  [SMALL_STATE(34)] = 489,
  [SMALL_STATE(35)] = 501,
  [SMALL_STATE(36)] = 513,
  [SMALL_STATE(37)] = 525,
  [SMALL_STATE(38)] = 533,
  [SMALL_STATE(39)] = 541,
  [SMALL_STATE(40)] = 549,
  [SMALL_STATE(41)] = 557,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
