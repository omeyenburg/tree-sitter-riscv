#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_SEMI = 2,
  anon_sym_LF = 3,
  aux_sym_directive_token1 = 4,
  sym_meta = 5,
  aux_sym_attributes_token1 = 6,
  sym_macro = 7,
  sym_label = 8,
  anon_sym_SPACE = 9,
  anon_sym_TAB = 10,
  sym_opcode = 11,
  sym_macro_variable = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  sym__char = 15,
  sym__string = 16,
  sym__octal = 17,
  sym__decimal = 18,
  sym__hexadecimal = 19,
  aux_sym__float_token1 = 20,
  aux_sym__float_token2 = 21,
  aux_sym__float_token3 = 22,
  aux_sym__float_token4 = 23,
  sym__register = 24,
  sym__identifier = 25,
  sym_program = 26,
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
  aux_sym_program_repeat1 = 43,
  aux_sym_instruction_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
      if (eof) ADVANCE(23);
      ADVANCE_MAP(
        '\n', 26,
        '"', 2,
        '#', 24,
        '$', 16,
        '\'', 18,
        '(', 46,
        ')', 47,
        '-', 8,
        '.', 11,
        '0', 50,
        ';', 25,
        'E', 60,
        'e', 40,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '%' ||
          lookahead == '\\') ADVANCE(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '0') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(3);
      END_STATE();
    case 19:
      if (eof) ADVANCE(23);
      ADVANCE_MAP(
        '\t', 38,
        '\n', 26,
        ' ', 37,
        '#', 24,
        '$', 16,
        '\'', 18,
        '(', 46,
        '-', 8,
        '.', 10,
        '0', 50,
        ';', 25,
        '%', 17,
        '\\', 17,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 20:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(4);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_meta);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
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
      if (lookahead == '0') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
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
          lookahead != '#') ADVANCE(5);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(4);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__string);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__float_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
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
    [sym_label] = ACTIONS(1),
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
    [sym__statement] = STATE(6),
    [sym_directive] = STATE(23),
    [sym_instruction] = STATE(23),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(7),
    [sym_meta] = ACTIONS(9),
    [sym_macro] = ACTIONS(11),
    [sym_label] = ACTIONS(7),
    [sym_opcode] = ACTIONS(13),
  },
  [2] = {
    [sym_operands] = STATE(17),
    [sym__operand] = STATE(29),
    [sym__number] = STATE(29),
    [sym_address] = STATE(29),
    [sym__float] = STATE(21),
    [sym_char] = STATE(29),
    [sym_octal] = STATE(29),
    [sym_decimal] = STATE(29),
    [sym_hexadecimal] = STATE(29),
    [sym_float] = STATE(29),
    [sym_register] = STATE(29),
    [aux_sym_instruction_repeat1] = STATE(4),
    [anon_sym_SPACE] = ACTIONS(15),
    [anon_sym_TAB] = ACTIONS(15),
    [sym_macro_variable] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym__char] = ACTIONS(21),
    [sym__octal] = ACTIONS(23),
    [sym__decimal] = ACTIONS(25),
    [sym__hexadecimal] = ACTIONS(27),
    [aux_sym__float_token1] = ACTIONS(29),
    [aux_sym__float_token2] = ACTIONS(29),
    [aux_sym__float_token4] = ACTIONS(31),
    [sym__register] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(31), 1,
      aux_sym__float_token4,
    ACTIONS(37), 1,
      aux_sym_attributes_token1,
    ACTIONS(39), 1,
      sym__char,
    ACTIONS(41), 1,
      sym__string,
    ACTIONS(43), 1,
      sym__octal,
    ACTIONS(45), 1,
      sym__decimal,
    ACTIONS(47), 1,
      sym__hexadecimal,
    STATE(21), 1,
      sym__float,
    STATE(22), 1,
      sym_attributes,
    ACTIONS(29), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(25), 7,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [41] = 3,
    STATE(4), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(49), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(52), 11,
      sym_macro_variable,
      anon_sym_LPAREN,
      sym__char,
      sym__octal,
      sym__decimal,
      sym__hexadecimal,
      aux_sym__float_token1,
      aux_sym__float_token2,
      aux_sym__float_token4,
      sym__register,
      sym__identifier,
  [62] = 8,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_meta,
    ACTIONS(65), 1,
      sym_macro,
    ACTIONS(68), 1,
      sym_opcode,
    STATE(5), 2,
      sym__statement,
      aux_sym_program_repeat1,
    STATE(33), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(59), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_label,
  [91] = 8,
    ACTIONS(9), 1,
      sym_meta,
    ACTIONS(11), 1,
      sym_macro,
    ACTIONS(13), 1,
      sym_opcode,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_comment,
    STATE(5), 2,
      sym__statement,
      aux_sym_program_repeat1,
    STATE(24), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(75), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_label,
  [120] = 2,
    ACTIONS(79), 1,
      sym_opcode,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_meta,
      sym_macro,
      sym_label,
  [133] = 2,
    ACTIONS(83), 1,
      sym_opcode,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_meta,
      sym_macro,
      sym_label,
  [146] = 4,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(89), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(87), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [162] = 3,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      aux_sym_directive_token1,
    ACTIONS(93), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [174] = 2,
    ACTIONS(99), 1,
      aux_sym__float_token3,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [184] = 2,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [194] = 2,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [204] = 2,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [214] = 2,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [224] = 2,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [234] = 1,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [241] = 1,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [248] = 1,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [255] = 1,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [262] = 1,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [269] = 1,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [276] = 3,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [287] = 3,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [298] = 1,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [305] = 1,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [312] = 1,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [319] = 1,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [326] = 1,
    ACTIONS(131), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [333] = 1,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [340] = 1,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [347] = 1,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [354] = 2,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [362] = 2,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
  [369] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_LF,
  [376] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [380] = 1,
    ACTIONS(141), 1,
      anon_sym_LF,
  [384] = 1,
    ACTIONS(143), 1,
      sym__register,
  [388] = 1,
    ACTIONS(145), 1,
      sym__register,
  [392] = 1,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
  [396] = 1,
    ACTIONS(121), 1,
      anon_sym_LF,
  [400] = 1,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 204,
  [SMALL_STATE(15)] = 214,
  [SMALL_STATE(16)] = 224,
  [SMALL_STATE(17)] = 234,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 248,
  [SMALL_STATE(20)] = 255,
  [SMALL_STATE(21)] = 262,
  [SMALL_STATE(22)] = 269,
  [SMALL_STATE(23)] = 276,
  [SMALL_STATE(24)] = 287,
  [SMALL_STATE(25)] = 298,
  [SMALL_STATE(26)] = 305,
  [SMALL_STATE(27)] = 312,
  [SMALL_STATE(28)] = 319,
  [SMALL_STATE(29)] = 326,
  [SMALL_STATE(30)] = 333,
  [SMALL_STATE(31)] = 340,
  [SMALL_STATE(32)] = 347,
  [SMALL_STATE(33)] = 354,
  [SMALL_STATE(34)] = 362,
  [SMALL_STATE(35)] = 369,
  [SMALL_STATE(36)] = 376,
  [SMALL_STATE(37)] = 380,
  [SMALL_STATE(38)] = 384,
  [SMALL_STATE(39)] = 388,
  [SMALL_STATE(40)] = 392,
  [SMALL_STATE(41)] = 396,
  [SMALL_STATE(42)] = 400,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
