#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  aux_sym__statement_token1 = 3,
  aux_sym__statement_token2 = 4,
  aux_sym_directive_token1 = 5,
  aux_sym_directive_token2 = 6,
  sym__identifier = 7,
  sym_label = 8,
  sym_opcode = 9,
  anon_sym_COMMA = 10,
  sym_register = 11,
  sym_macro_variable = 12,
  aux_sym_number_token1 = 13,
  aux_sym_number_token2 = 14,
  aux_sym_number_token3 = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  sym_string = 18,
  sym_line_comment = 19,
  sym_block_comment = 20,
  sym_source_file = 21,
  sym__statement = 22,
  sym_directive = 23,
  sym_instruction = 24,
  sym_operands = 25,
  sym__operand = 26,
  sym_number = 27,
  sym_address = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_operands_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym__statement_token2] = "_statement_token2",
  [aux_sym_directive_token1] = "directive_token1",
  [aux_sym_directive_token2] = "directive_token2",
  [sym__identifier] = "_identifier",
  [sym_label] = "label",
  [sym_opcode] = "opcode",
  [anon_sym_COMMA] = ",",
  [sym_register] = "register",
  [sym_macro_variable] = "macro_variable",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_string] = "string",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_directive] = "directive",
  [sym_instruction] = "instruction",
  [sym_operands] = "operands",
  [sym__operand] = "_operand",
  [sym_number] = "number",
  [sym_address] = "address",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_operands_repeat1] = "operands_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [aux_sym__statement_token2] = aux_sym__statement_token2,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [aux_sym_directive_token2] = aux_sym_directive_token2,
  [sym__identifier] = sym__identifier,
  [sym_label] = sym_label,
  [sym_opcode] = sym_opcode,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_register] = sym_register,
  [sym_macro_variable] = sym_macro_variable,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_string] = sym_string,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_directive] = sym_directive,
  [sym_instruction] = sym_instruction,
  [sym_operands] = sym_operands,
  [sym__operand] = sym__operand,
  [sym_number] = sym_number,
  [sym_address] = sym_address,
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
  [aux_sym__statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_token2] = {
    .visible = false,
    .named = false,
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
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      ADVANCE_MAP(
        '"', 2,
        '#', 52,
        '$', 17,
        '(', 49,
        ')', 50,
        ',', 41,
        '-', 11,
        '.', 16,
        '/', 6,
        '0', 44,
        ';', 26,
        '%', 18,
        '\\', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '#', 52,
        '$', 17,
        '(', 49,
        '-', 11,
        '/', 6,
        '0', 44,
        '%', 18,
        '\\', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 19:
      if (eof) ADVANCE(23);
      ADVANCE_MAP(
        '\n', 24,
        '#', 52,
        '$', 17,
        '(', 49,
        ',', 41,
        '-', 11,
        '/', 6,
        '0', 44,
        ';', 26,
        '%', 18,
        '\\', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 20:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(4);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(4);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__statement_token2);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '/' || '9' < lookahead)) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead == '0') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(4);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_directive_token1] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_opcode] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_macro_variable] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym__statement] = STATE(15),
    [sym_directive] = STATE(15),
    [sym_instruction] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__statement_token2] = ACTIONS(7),
    [aux_sym_directive_token1] = ACTIONS(9),
    [sym_label] = ACTIONS(11),
    [sym_opcode] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_operands] = STATE(21),
    [sym__operand] = STATE(9),
    [sym_number] = STATE(10),
    [sym_address] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym__identifier] = ACTIONS(19),
    [sym_register] = ACTIONS(21),
    [sym_macro_variable] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [aux_sym_number_token2] = ACTIONS(23),
    [aux_sym_number_token3] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [sym_line_comment] = ACTIONS(27),
    [sym_block_comment] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      sym_opcode,
    ACTIONS(31), 1,
      anon_sym_SEMI,
    ACTIONS(33), 1,
      aux_sym__statement_token2,
    ACTIONS(35), 1,
      aux_sym_directive_token1,
    ACTIONS(37), 1,
      sym_label,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(22), 3,
      sym__statement,
      sym_directive,
      sym_instruction,
  [29] = 8,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(39), 1,
      sym__identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(43), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(19), 2,
      sym__operand,
      sym_address,
  [58] = 6,
    ACTIONS(9), 1,
      aux_sym_directive_token1,
    ACTIONS(11), 1,
      sym_label,
    ACTIONS(13), 1,
      sym_opcode,
    ACTIONS(47), 1,
      aux_sym__statement_token2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(23), 3,
      sym__statement,
      sym_directive,
      sym_instruction,
  [80] = 4,
    STATE(24), 1,
      sym_number,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(49), 2,
      aux_sym_directive_token2,
      sym_string,
    ACTIONS(23), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
  [97] = 4,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [113] = 3,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(59), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [127] = 5,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_operands_repeat1,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [145] = 4,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(69), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [161] = 5,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      aux_sym_operands_repeat1,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [179] = 5,
    ACTIONS(77), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_operands_repeat1,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [197] = 4,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      aux_sym__statement_token1,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(84), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [212] = 4,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      aux_sym__statement_token1,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [227] = 5,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
  [244] = 5,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
  [261] = 5,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
  [278] = 3,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(112), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [291] = 3,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(77), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [304] = 3,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(116), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [317] = 3,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [329] = 3,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [341] = 3,
    ACTIONS(126), 1,
      anon_sym_SEMI,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [353] = 3,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    ACTIONS(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [365] = 2,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [373] = 2,
    ACTIONS(134), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [381] = 2,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [389] = 2,
    ACTIONS(138), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [397] = 2,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 29,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 113,
  [SMALL_STATE(9)] = 127,
  [SMALL_STATE(10)] = 145,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 179,
  [SMALL_STATE(13)] = 197,
  [SMALL_STATE(14)] = 212,
  [SMALL_STATE(15)] = 227,
  [SMALL_STATE(16)] = 244,
  [SMALL_STATE(17)] = 261,
  [SMALL_STATE(18)] = 278,
  [SMALL_STATE(19)] = 291,
  [SMALL_STATE(20)] = 304,
  [SMALL_STATE(21)] = 317,
  [SMALL_STATE(22)] = 329,
  [SMALL_STATE(23)] = 341,
  [SMALL_STATE(24)] = 353,
  [SMALL_STATE(25)] = 365,
  [SMALL_STATE(26)] = 373,
  [SMALL_STATE(27)] = 381,
  [SMALL_STATE(28)] = 389,
  [SMALL_STATE(29)] = 397,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
