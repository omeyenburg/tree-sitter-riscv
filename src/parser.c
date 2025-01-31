#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
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
  aux_sym_instruction_token1 = 9,
  sym_opcode = 10,
  anon_sym_SPACE = 11,
  anon_sym_COMMA = 12,
  anon_sym_TAB = 13,
  sym_macro_variable = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  sym__char = 17,
  sym__string = 18,
  sym__octal = 19,
  sym__decimal = 20,
  sym__hexadecimal = 21,
  aux_sym__float_token1 = 22,
  aux_sym__float_token2 = 23,
  aux_sym__float_token3 = 24,
  aux_sym__float_token4 = 25,
  sym__register = 26,
  sym__identifier = 27,
  sym_program = 28,
  sym__statement = 29,
  sym_directive = 30,
  sym_attributes = 31,
  sym_instruction = 32,
  sym_operands = 33,
  sym__operand = 34,
  sym__number = 35,
  sym_address = 36,
  sym__float = 37,
  sym_char = 38,
  sym_string = 39,
  sym_octal = 40,
  sym_decimal = 41,
  sym_hexadecimal = 42,
  sym_float = 43,
  sym_register = 44,
  aux_sym_program_repeat1 = 45,
  aux_sym_operands_repeat1 = 46,
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
  [aux_sym_instruction_token1] = "instruction_token1",
  [sym_opcode] = "opcode",
  [anon_sym_SPACE] = " ",
  [anon_sym_COMMA] = ",",
  [anon_sym_TAB] = "\t",
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
  [aux_sym_operands_repeat1] = "operands_repeat1",
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
  [aux_sym_instruction_token1] = aux_sym_instruction_token1,
  [sym_opcode] = sym_opcode,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_TAB] = anon_sym_TAB,
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
  [aux_sym_operands_repeat1] = aux_sym_operands_repeat1,
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
  [aux_sym_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 6,
  [10] = 10,
  [11] = 10,
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
  [25] = 20,
  [26] = 17,
  [27] = 27,
  [28] = 16,
  [29] = 22,
  [30] = 18,
  [31] = 19,
  [32] = 24,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 23,
  [37] = 21,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 34,
  [42] = 35,
  [43] = 38,
  [44] = 39,
  [45] = 27,
  [46] = 40,
  [47] = 33,
  [48] = 48,
  [49] = 21,
  [50] = 50,
  [51] = 48,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 33,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 21,
  [63] = 63,
  [64] = 64,
  [65] = 27,
  [66] = 63,
  [67] = 52,
  [68] = 54,
  [69] = 59,
  [70] = 61,
  [71] = 60,
  [72] = 64,
  [73] = 55,
  [74] = 74,
  [75] = 27,
  [76] = 33,
  [77] = 58,
  [78] = 57,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 83,
  [89] = 86,
  [90] = 84,
  [91] = 82,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\t', 48,
        '\n', 28,
        ' ', 46,
        '"', 2,
        '#', 26,
        '$', 17,
        '\'', 19,
        '(', 50,
        ')', 51,
        ',', 47,
        '-', 9,
        '.', 12,
        '0', 54,
        ';', 27,
        'E', 64,
        'e', 41,
        '%', 18,
        '\\', 18,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '0') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(4);
      END_STATE();
    case 20:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\t', 48,
        '\n', 28,
        ' ', 46,
        '#', 26,
        ',', 47,
        ';', 27,
        'E', 7,
        'e', 7,
      );
      END_STATE();
    case 21:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(5);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 28,
        '$', 17,
        '\'', 19,
        '(', 50,
        ')', 51,
        ',', 47,
        '-', 9,
        '.', 11,
        '0', 54,
        '\t', 38,
        ' ', 38,
        '%', 18,
        '\\', 18,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_meta);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '0') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(6);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(5);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(10);
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
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__string);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__float_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 20},
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
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 21},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 21},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 21},
  [79] = {.lex_state = 24},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 24},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 24},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 24},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 24},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_meta] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [aux_sym_instruction_token1] = ACTIONS(3),
    [sym_opcode] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
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
    [sym_program] = STATE(87),
    [sym__statement] = STATE(13),
    [sym_directive] = STATE(50),
    [sym_instruction] = STATE(50),
    [aux_sym_program_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(9),
    [sym_meta] = ACTIONS(11),
    [sym_macro] = ACTIONS(13),
    [sym_label] = ACTIONS(9),
    [aux_sym_instruction_token1] = ACTIONS(3),
    [sym_opcode] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(19), 1,
      sym_macro_variable,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__char,
    ACTIONS(25), 1,
      sym__octal,
    ACTIONS(27), 1,
      sym__decimal,
    ACTIONS(29), 1,
      sym__hexadecimal,
    ACTIONS(33), 1,
      aux_sym__float_token4,
    ACTIONS(35), 1,
      sym__register,
    ACTIONS(37), 1,
      sym__identifier,
    STATE(45), 1,
      sym__float,
    STATE(68), 1,
      sym_operands,
    ACTIONS(31), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(29), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [52] = 14,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(39), 1,
      sym_macro_variable,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__char,
    ACTIONS(45), 1,
      sym__octal,
    ACTIONS(47), 1,
      sym__decimal,
    ACTIONS(49), 1,
      sym__hexadecimal,
    ACTIONS(53), 1,
      aux_sym__float_token4,
    ACTIONS(55), 1,
      sym__register,
    ACTIONS(57), 1,
      sym__identifier,
    STATE(27), 1,
      sym__float,
    STATE(54), 1,
      sym_operands,
    ACTIONS(51), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(22), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [104] = 14,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__char,
    ACTIONS(25), 1,
      sym__octal,
    ACTIONS(27), 1,
      sym__decimal,
    ACTIONS(29), 1,
      sym__hexadecimal,
    ACTIONS(33), 1,
      aux_sym__float_token4,
    ACTIONS(35), 1,
      sym__register,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      sym_macro_variable,
    STATE(45), 1,
      sym__float,
    ACTIONS(31), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(42), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [156] = 14,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__char,
    ACTIONS(45), 1,
      sym__octal,
    ACTIONS(47), 1,
      sym__decimal,
    ACTIONS(49), 1,
      sym__hexadecimal,
    ACTIONS(53), 1,
      aux_sym__float_token4,
    ACTIONS(55), 1,
      sym__register,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      sym_macro_variable,
    STATE(27), 1,
      sym__float,
    ACTIONS(51), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(35), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [208] = 13,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__char,
    ACTIONS(45), 1,
      sym__octal,
    ACTIONS(47), 1,
      sym__decimal,
    ACTIONS(49), 1,
      sym__hexadecimal,
    ACTIONS(53), 1,
      aux_sym__float_token4,
    ACTIONS(55), 1,
      sym__register,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(65), 1,
      sym_macro_variable,
    STATE(27), 1,
      sym__float,
    ACTIONS(51), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(35), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [257] = 13,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__char,
    ACTIONS(25), 1,
      sym__octal,
    ACTIONS(27), 1,
      sym__decimal,
    ACTIONS(29), 1,
      sym__hexadecimal,
    ACTIONS(33), 1,
      aux_sym__float_token4,
    ACTIONS(35), 1,
      sym__register,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(67), 1,
      sym_macro_variable,
    STATE(45), 1,
      sym__float,
    ACTIONS(31), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(44), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [306] = 13,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__char,
    ACTIONS(45), 1,
      sym__octal,
    ACTIONS(47), 1,
      sym__decimal,
    ACTIONS(49), 1,
      sym__hexadecimal,
    ACTIONS(53), 1,
      aux_sym__float_token4,
    ACTIONS(55), 1,
      sym__register,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(69), 1,
      sym_macro_variable,
    STATE(27), 1,
      sym__float,
    ACTIONS(51), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(39), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [355] = 13,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__char,
    ACTIONS(25), 1,
      sym__octal,
    ACTIONS(27), 1,
      sym__decimal,
    ACTIONS(29), 1,
      sym__hexadecimal,
    ACTIONS(33), 1,
      aux_sym__float_token4,
    ACTIONS(35), 1,
      sym__register,
    ACTIONS(37), 1,
      sym__identifier,
    ACTIONS(61), 1,
      sym_macro_variable,
    STATE(45), 1,
      sym__float,
    ACTIONS(31), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(42), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [404] = 12,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(71), 1,
      aux_sym_attributes_token1,
    ACTIONS(73), 1,
      sym__char,
    ACTIONS(75), 1,
      sym__string,
    ACTIONS(77), 1,
      sym__octal,
    ACTIONS(79), 1,
      sym__decimal,
    ACTIONS(81), 1,
      sym__hexadecimal,
    ACTIONS(85), 1,
      aux_sym__float_token4,
    STATE(64), 1,
      sym_attributes,
    STATE(65), 1,
      sym__float,
    ACTIONS(83), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(55), 7,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [448] = 12,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(87), 1,
      aux_sym_attributes_token1,
    ACTIONS(89), 1,
      sym__char,
    ACTIONS(91), 1,
      sym__string,
    ACTIONS(93), 1,
      sym__octal,
    ACTIONS(95), 1,
      sym__decimal,
    ACTIONS(97), 1,
      sym__hexadecimal,
    ACTIONS(101), 1,
      aux_sym__float_token4,
    STATE(72), 1,
      sym_attributes,
    STATE(75), 1,
      sym__float,
    ACTIONS(99), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(73), 7,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [492] = 9,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_meta,
    ACTIONS(114), 1,
      sym_macro,
    ACTIONS(117), 1,
      sym_opcode,
    STATE(12), 2,
      sym__statement,
      aux_sym_program_repeat1,
    STATE(74), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(108), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_label,
  [524] = 9,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(11), 1,
      sym_meta,
    ACTIONS(13), 1,
      sym_macro,
    ACTIONS(15), 1,
      sym_opcode,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      sym_comment,
    STATE(12), 2,
      sym__statement,
      aux_sym_program_repeat1,
    STATE(53), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(124), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_label,
  [556] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(128), 1,
      sym_opcode,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_meta,
      sym_macro,
      sym_label,
  [572] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(132), 1,
      sym_opcode,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_meta,
      sym_macro,
      sym_label,
  [588] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [606] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [624] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [642] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [660] = 5,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_operands_repeat1,
    ACTIONS(154), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [680] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(164), 1,
      aux_sym__float_token3,
    ACTIONS(162), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(160), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [698] = 5,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_operands_repeat1,
    ACTIONS(168), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [718] = 5,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_operands_repeat1,
    ACTIONS(168), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [738] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(174), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [756] = 5,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_operands_repeat1,
    ACTIONS(178), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(152), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [775] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(140), 4,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [792] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(188), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [807] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(134), 4,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [824] = 5,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_operands_repeat1,
    ACTIONS(190), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(166), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [843] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(144), 4,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [860] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(148), 4,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [877] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(174), 4,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [894] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(196), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [909] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(200), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [924] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(202), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [939] = 5,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_operands_repeat1,
    ACTIONS(190), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(172), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [958] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(204), 1,
      aux_sym__float_token3,
    ACTIONS(162), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(160), 4,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [975] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(208), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(206), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [990] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(212), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [1005] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [1020] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(200), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(198), 4,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [1034] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(202), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(152), 4,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [1048] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(208), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(206), 4,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [1062] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(212), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(210), 4,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [1076] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(188), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(186), 4,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [1090] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(214), 4,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [1104] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(196), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(194), 4,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COMMA,
  [1118] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(220), 1,
      aux_sym_directive_token1,
    ACTIONS(218), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1131] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(222), 1,
      aux_sym__float_token3,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1144] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1158] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(228), 1,
      aux_sym_directive_token1,
    ACTIONS(218), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1170] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(230), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1180] = 4,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1194] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(234), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1204] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(236), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1214] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(194), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1224] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(134), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1234] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(238), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1244] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1254] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1264] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1274] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(240), 1,
      aux_sym__float_token3,
    ACTIONS(160), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1286] = 3,
    ACTIONS(244), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_instruction_token1,
    ACTIONS(242), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
  [1298] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(249), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1308] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1318] = 3,
    ACTIONS(251), 1,
      sym_comment,
    ACTIONS(254), 1,
      aux_sym_instruction_token1,
    ACTIONS(242), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1329] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(230), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1338] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(234), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1347] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(140), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1356] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(148), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1365] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(144), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1374] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(249), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1383] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(236), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1392] = 3,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [1403] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(186), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1412] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(194), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1421] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(238), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1430] = 2,
    ACTIONS(3), 1,
      aux_sym_instruction_token1,
    ACTIONS(134), 3,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LF,
  [1439] = 3,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 1,
      anon_sym_LF,
  [1449] = 3,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
  [1459] = 2,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(226), 1,
      anon_sym_LF,
  [1466] = 2,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(256), 1,
      sym__register,
  [1473] = 2,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
  [1480] = 2,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(260), 1,
      sym__register,
  [1487] = 2,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(262), 1,
      anon_sym_LF,
  [1494] = 2,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
  [1501] = 2,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
  [1508] = 2,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
  [1515] = 2,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
  [1522] = 2,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(272), 1,
      sym__register,
  [1529] = 2,
    ACTIONS(17), 1,
      aux_sym_instruction_token1,
    ACTIONS(274), 1,
      sym__register,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 257,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 355,
  [SMALL_STATE(10)] = 404,
  [SMALL_STATE(11)] = 448,
  [SMALL_STATE(12)] = 492,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 556,
  [SMALL_STATE(15)] = 572,
  [SMALL_STATE(16)] = 588,
  [SMALL_STATE(17)] = 606,
  [SMALL_STATE(18)] = 624,
  [SMALL_STATE(19)] = 642,
  [SMALL_STATE(20)] = 660,
  [SMALL_STATE(21)] = 680,
  [SMALL_STATE(22)] = 698,
  [SMALL_STATE(23)] = 718,
  [SMALL_STATE(24)] = 738,
  [SMALL_STATE(25)] = 756,
  [SMALL_STATE(26)] = 775,
  [SMALL_STATE(27)] = 792,
  [SMALL_STATE(28)] = 807,
  [SMALL_STATE(29)] = 824,
  [SMALL_STATE(30)] = 843,
  [SMALL_STATE(31)] = 860,
  [SMALL_STATE(32)] = 877,
  [SMALL_STATE(33)] = 894,
  [SMALL_STATE(34)] = 909,
  [SMALL_STATE(35)] = 924,
  [SMALL_STATE(36)] = 939,
  [SMALL_STATE(37)] = 958,
  [SMALL_STATE(38)] = 975,
  [SMALL_STATE(39)] = 990,
  [SMALL_STATE(40)] = 1005,
  [SMALL_STATE(41)] = 1020,
  [SMALL_STATE(42)] = 1034,
  [SMALL_STATE(43)] = 1048,
  [SMALL_STATE(44)] = 1062,
  [SMALL_STATE(45)] = 1076,
  [SMALL_STATE(46)] = 1090,
  [SMALL_STATE(47)] = 1104,
  [SMALL_STATE(48)] = 1118,
  [SMALL_STATE(49)] = 1131,
  [SMALL_STATE(50)] = 1144,
  [SMALL_STATE(51)] = 1158,
  [SMALL_STATE(52)] = 1170,
  [SMALL_STATE(53)] = 1180,
  [SMALL_STATE(54)] = 1194,
  [SMALL_STATE(55)] = 1204,
  [SMALL_STATE(56)] = 1214,
  [SMALL_STATE(57)] = 1224,
  [SMALL_STATE(58)] = 1234,
  [SMALL_STATE(59)] = 1244,
  [SMALL_STATE(60)] = 1254,
  [SMALL_STATE(61)] = 1264,
  [SMALL_STATE(62)] = 1274,
  [SMALL_STATE(63)] = 1286,
  [SMALL_STATE(64)] = 1298,
  [SMALL_STATE(65)] = 1308,
  [SMALL_STATE(66)] = 1318,
  [SMALL_STATE(67)] = 1329,
  [SMALL_STATE(68)] = 1338,
  [SMALL_STATE(69)] = 1347,
  [SMALL_STATE(70)] = 1356,
  [SMALL_STATE(71)] = 1365,
  [SMALL_STATE(72)] = 1374,
  [SMALL_STATE(73)] = 1383,
  [SMALL_STATE(74)] = 1392,
  [SMALL_STATE(75)] = 1403,
  [SMALL_STATE(76)] = 1412,
  [SMALL_STATE(77)] = 1421,
  [SMALL_STATE(78)] = 1430,
  [SMALL_STATE(79)] = 1439,
  [SMALL_STATE(80)] = 1449,
  [SMALL_STATE(81)] = 1459,
  [SMALL_STATE(82)] = 1466,
  [SMALL_STATE(83)] = 1473,
  [SMALL_STATE(84)] = 1480,
  [SMALL_STATE(85)] = 1487,
  [SMALL_STATE(86)] = 1494,
  [SMALL_STATE(87)] = 1501,
  [SMALL_STATE(88)] = 1508,
  [SMALL_STATE(89)] = 1515,
  [SMALL_STATE(90)] = 1522,
  [SMALL_STATE(91)] = 1529,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 1, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0), SHIFT(52),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0), SHIFT(67),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [266] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
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
