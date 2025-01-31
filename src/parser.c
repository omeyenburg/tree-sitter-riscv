#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__whitespace = 1,
  sym_comment = 2,
  anon_sym_SEMI = 3,
  anon_sym_LF = 4,
  aux_sym_directive_token1 = 5,
  sym_meta = 6,
  aux_sym_attributes_token1 = 7,
  sym_macro = 8,
  sym_label = 9,
  anon_sym_SPACE = 10,
  anon_sym_TAB = 11,
  sym_opcode = 12,
  sym_macro_variable = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  sym__char = 16,
  sym__string = 17,
  sym__octal = 18,
  sym__decimal = 19,
  sym__hexadecimal = 20,
  aux_sym__float_token1 = 21,
  aux_sym__float_token2 = 22,
  aux_sym__float_token3 = 23,
  aux_sym__float_token4 = 24,
  sym__register = 25,
  sym__identifier = 26,
  sym_program = 27,
  sym__statement = 28,
  sym_directive = 29,
  sym_attributes = 30,
  sym_instruction = 31,
  sym_operands = 32,
  sym__operand = 33,
  sym__number = 34,
  sym_address = 35,
  sym__float = 36,
  sym_char = 37,
  sym_string = 38,
  sym_octal = 39,
  sym_decimal = 40,
  sym_hexadecimal = 41,
  sym_float = 42,
  sym_register = 43,
  aux_sym_program_repeat1 = 44,
  aux_sym_instruction_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__whitespace] = "_whitespace",
  [sym_comment] = "comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [aux_sym_directive_token1] = "directive_token1",
  [sym_meta] = "meta",
  [aux_sym_attributes_token1] = "attributes_token1",
  [sym_macro] = "macro",
  [sym_label] = "label",
  [anon_sym_SPACE] = " ",
  [anon_sym_TAB] = "\t",
  [sym_opcode] = "opcode",
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
  [sym__identifier] = "_identifier",
  [sym_program] = "program",
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
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__whitespace] = sym__whitespace,
  [sym_comment] = sym_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [sym_meta] = sym_meta,
  [aux_sym_attributes_token1] = aux_sym_attributes_token1,
  [sym_macro] = sym_macro,
  [sym_label] = sym_label,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_TAB] = anon_sym_TAB,
  [sym_opcode] = sym_opcode,
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
  [sym__identifier] = sym__identifier,
  [sym_program] = sym_program,
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
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_token1] = {
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
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
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
  [sym__identifier] = {
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
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
  [42] = 42,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      ADVANCE_MAP(
        '\t', 38,
        '\n', 27,
        ' ', 37,
        '"', 5,
        '#', 25,
        '$', 19,
        '\'', 21,
        '(', 47,
        ')', 48,
        '-', 11,
        '.', 14,
        '0', 51,
        ';', 26,
        'E', 61,
        'e', 39,
        '%', 20,
        '\\', 20,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 38,
        ' ', 37,
        '$', 19,
        '\'', 21,
        '(', 47,
        '-', 11,
        '.', 13,
        '0', 51,
        '%', 20,
        '\\', 20,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '0') ADVANCE(51);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(51);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__whitespace);
      if (eof) ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_meta);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '0') ADVANCE(51);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(8);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(7);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__string);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(17);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__float_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_meta] = ACTIONS(1),
    [sym_macro] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [sym_opcode] = ACTIONS(1),
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
    [aux_sym__float_token3] = ACTIONS(1),
    [aux_sym__float_token4] = ACTIONS(1),
    [sym__register] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(36),
    [aux_sym_program_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(5),
  },
  [2] = {
    [sym_operands] = STATE(18),
    [sym__operand] = STATE(19),
    [sym__number] = STATE(19),
    [sym_address] = STATE(19),
    [sym__float] = STATE(14),
    [sym_char] = STATE(19),
    [sym_octal] = STATE(19),
    [sym_decimal] = STATE(19),
    [sym_hexadecimal] = STATE(19),
    [sym_float] = STATE(19),
    [sym_register] = STATE(19),
    [aux_sym_instruction_repeat1] = STATE(4),
    [anon_sym_SPACE] = ACTIONS(7),
    [anon_sym_TAB] = ACTIONS(7),
    [sym_macro_variable] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym__char] = ACTIONS(13),
    [sym__octal] = ACTIONS(15),
    [sym__decimal] = ACTIONS(17),
    [sym__hexadecimal] = ACTIONS(19),
    [aux_sym__float_token1] = ACTIONS(21),
    [aux_sym__float_token2] = ACTIONS(21),
    [aux_sym__float_token4] = ACTIONS(23),
    [sym__register] = ACTIONS(25),
    [sym__identifier] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(23), 1,
      aux_sym__float_token4,
    ACTIONS(29), 1,
      aux_sym_attributes_token1,
    ACTIONS(31), 1,
      sym__char,
    ACTIONS(33), 1,
      sym__string,
    ACTIONS(35), 1,
      sym__octal,
    ACTIONS(37), 1,
      sym__decimal,
    ACTIONS(39), 1,
      sym__hexadecimal,
    STATE(14), 1,
      sym__float,
    STATE(32), 1,
      sym_attributes,
    ACTIONS(21), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(29), 7,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [41] = 4,
    STATE(4), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(41), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(46), 4,
      sym__octal,
      sym__decimal,
      aux_sym__float_token1,
      aux_sym__float_token2,
    ACTIONS(44), 7,
      sym_macro_variable,
      anon_sym_LPAREN,
      sym__char,
      sym__hexadecimal,
      aux_sym__float_token4,
      sym__register,
      sym__identifier,
  [64] = 8,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_meta,
    ACTIONS(54), 1,
      sym_macro,
    ACTIONS(56), 1,
      sym_opcode,
    STATE(13), 1,
      sym_instruction,
    STATE(25), 1,
      sym_directive,
    STATE(40), 1,
      sym__statement,
    ACTIONS(50), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_label,
  [91] = 3,
    STATE(2), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(60), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(58), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [104] = 2,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [113] = 2,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [122] = 2,
    ACTIONS(70), 1,
      aux_sym__float_token3,
    ACTIONS(68), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [131] = 2,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [140] = 2,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [149] = 2,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [158] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(80), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [166] = 1,
    ACTIONS(82), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [172] = 2,
    ACTIONS(86), 1,
      aux_sym_directive_token1,
    ACTIONS(84), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [180] = 3,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym__whitespace,
    STATE(16), 1,
      aux_sym_program_repeat1,
  [190] = 1,
    ACTIONS(93), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [196] = 1,
    ACTIONS(95), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [202] = 1,
    ACTIONS(97), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [208] = 3,
    ACTIONS(5), 1,
      sym__whitespace,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_program_repeat1,
  [218] = 1,
    ACTIONS(101), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [224] = 1,
    ACTIONS(103), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [230] = 1,
    ACTIONS(105), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [236] = 1,
    ACTIONS(72), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [241] = 1,
    ACTIONS(80), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [246] = 1,
    ACTIONS(62), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [251] = 1,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym__whitespace,
  [256] = 1,
    ACTIONS(109), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [261] = 1,
    ACTIONS(111), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [266] = 1,
    ACTIONS(66), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [271] = 1,
    ACTIONS(74), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [276] = 1,
    ACTIONS(113), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [281] = 1,
    ACTIONS(115), 1,
      sym__whitespace,
  [285] = 1,
    ACTIONS(117), 1,
      anon_sym_LF,
  [289] = 1,
    ACTIONS(119), 1,
      sym__register,
  [293] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [297] = 1,
    ACTIONS(80), 1,
      anon_sym_LF,
  [301] = 1,
    ACTIONS(123), 1,
      sym__whitespace,
  [305] = 1,
    ACTIONS(125), 1,
      sym__register,
  [309] = 1,
    ACTIONS(127), 1,
      sym__whitespace,
  [313] = 1,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
  [317] = 1,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 113,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 140,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 158,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 172,
  [SMALL_STATE(16)] = 180,
  [SMALL_STATE(17)] = 190,
  [SMALL_STATE(18)] = 196,
  [SMALL_STATE(19)] = 202,
  [SMALL_STATE(20)] = 208,
  [SMALL_STATE(21)] = 218,
  [SMALL_STATE(22)] = 224,
  [SMALL_STATE(23)] = 230,
  [SMALL_STATE(24)] = 236,
  [SMALL_STATE(25)] = 241,
  [SMALL_STATE(26)] = 246,
  [SMALL_STATE(27)] = 251,
  [SMALL_STATE(28)] = 256,
  [SMALL_STATE(29)] = 261,
  [SMALL_STATE(30)] = 266,
  [SMALL_STATE(31)] = 271,
  [SMALL_STATE(32)] = 276,
  [SMALL_STATE(33)] = 281,
  [SMALL_STATE(34)] = 285,
  [SMALL_STATE(35)] = 289,
  [SMALL_STATE(36)] = 293,
  [SMALL_STATE(37)] = 297,
  [SMALL_STATE(38)] = 301,
  [SMALL_STATE(39)] = 305,
  [SMALL_STATE(40)] = 309,
  [SMALL_STATE(41)] = 313,
  [SMALL_STATE(42)] = 317,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
