#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_identifier = 1,
  anon_sym_do = 2,
  anon_sym_DASH = 3,
  anon_sym_COLON_RPAREN = 4,
  anon_sym_COLON_LPAREN = 5,
  anon_sym_COLON_SLASH = 6,
  anon_sym_COLON_STAR = 7,
  anon_sym_COLON_PERCENT = 8,
  anon_sym_SEMI_RPAREN = 9,
  anon_sym_COLONP = 10,
  anon_sym_COLONO = 11,
  anon_sym_GT_LPAREN = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_token1 = 14,
  anon_sym_DQUOTE2 = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  sym_integer = 18,
  sym_source = 19,
  sym__statement = 20,
  sym__expression_statement = 21,
  sym__expression = 22,
  sym_block_expression = 23,
  sym_unary_expression = 24,
  sym__operator = 25,
  sym_binary_expression = 26,
  sym__literal = 27,
  sym_string = 28,
  sym_boolean = 29,
  aux_sym_source_repeat1 = 30,
  aux_sym_string_repeat1 = 31,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_do] = "do",
  [anon_sym_DASH] = "-",
  [anon_sym_COLON_RPAREN] = ":)",
  [anon_sym_COLON_LPAREN] = ":(",
  [anon_sym_COLON_SLASH] = ":/",
  [anon_sym_COLON_STAR] = ":*",
  [anon_sym_COLON_PERCENT] = ":%",
  [anon_sym_SEMI_RPAREN] = ";)",
  [anon_sym_COLONP] = ":P",
  [anon_sym_COLONO] = ":O",
  [anon_sym_GT_LPAREN] = ">(",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_source] = "source",
  [sym__statement] = "_statement",
  [sym__expression_statement] = "_expression_statement",
  [sym__expression] = "_expression",
  [sym_block_expression] = "block_expression",
  [sym_unary_expression] = "unary_expression",
  [sym__operator] = "_operator",
  [sym_binary_expression] = "binary_expression",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COLON_RPAREN] = anon_sym_COLON_RPAREN,
  [anon_sym_COLON_LPAREN] = anon_sym_COLON_LPAREN,
  [anon_sym_COLON_SLASH] = anon_sym_COLON_SLASH,
  [anon_sym_COLON_STAR] = anon_sym_COLON_STAR,
  [anon_sym_COLON_PERCENT] = anon_sym_COLON_PERCENT,
  [anon_sym_SEMI_RPAREN] = anon_sym_SEMI_RPAREN,
  [anon_sym_COLONP] = anon_sym_COLONP,
  [anon_sym_COLONO] = anon_sym_COLONO,
  [anon_sym_GT_LPAREN] = anon_sym_GT_LPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_source] = sym_source,
  [sym__statement] = sym__statement,
  [sym__expression_statement] = sym__expression_statement,
  [sym__expression] = sym__expression,
  [sym_block_expression] = sym_block_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym__operator] = sym__operator,
  [sym_binary_expression] = sym_binary_expression,
  [sym__literal] = sym__literal,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_LPAREN] = {
    .visible = true,
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
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__operator] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead == '>') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'O') ADVANCE(15);
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(13);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead == '>') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON_STAR);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON_PERCENT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLONP);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLONO);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT_LPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'd') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_LPAREN] = ACTIONS(1),
    [anon_sym_COLON_SLASH] = ACTIONS(1),
    [anon_sym_COLON_STAR] = ACTIONS(1),
    [anon_sym_COLON_PERCENT] = ACTIONS(1),
    [anon_sym_SEMI_RPAREN] = ACTIONS(1),
    [anon_sym_COLONP] = ACTIONS(1),
    [anon_sym_COLONO] = ACTIONS(1),
    [anon_sym_GT_LPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(17),
    [sym__statement] = STATE(3),
    [sym__expression_statement] = STATE(3),
    [sym__expression] = STATE(2),
    [sym_block_expression] = STATE(3),
    [sym_unary_expression] = STATE(2),
    [sym_binary_expression] = STATE(2),
    [sym__literal] = STATE(2),
    [sym_string] = STATE(2),
    [sym_boolean] = STATE(2),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(5),
  },
  [2] = {
    [sym__operator] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_COLON_RPAREN] = ACTIONS(19),
    [anon_sym_COLON_LPAREN] = ACTIONS(19),
    [anon_sym_COLON_SLASH] = ACTIONS(19),
    [anon_sym_COLON_STAR] = ACTIONS(19),
    [anon_sym_COLON_PERCENT] = ACTIONS(19),
    [anon_sym_SEMI_RPAREN] = ACTIONS(19),
    [anon_sym_COLONP] = ACTIONS(19),
    [anon_sym_COLONO] = ACTIONS(19),
    [anon_sym_GT_LPAREN] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
  },
  [3] = {
    [sym__statement] = STATE(6),
    [sym__expression_statement] = STATE(6),
    [sym__expression] = STATE(2),
    [sym_block_expression] = STATE(6),
    [sym_unary_expression] = STATE(2),
    [sym_binary_expression] = STATE(2),
    [sym__literal] = STATE(2),
    [sym_string] = STATE(2),
    [sym_boolean] = STATE(2),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_do] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [sym_integer] = ACTIONS(5),
  },
  [4] = {
    [sym__operator] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_do] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_COLON_RPAREN] = ACTIONS(19),
    [anon_sym_COLON_LPAREN] = ACTIONS(19),
    [anon_sym_COLON_SLASH] = ACTIONS(19),
    [anon_sym_COLON_STAR] = ACTIONS(19),
    [anon_sym_COLON_PERCENT] = ACTIONS(19),
    [anon_sym_SEMI_RPAREN] = ACTIONS(19),
    [anon_sym_COLONP] = ACTIONS(19),
    [anon_sym_COLONO] = ACTIONS(19),
    [anon_sym_GT_LPAREN] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_integer] = ACTIONS(25),
  },
  [5] = {
    [sym__operator] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_COLON_RPAREN] = ACTIONS(27),
    [anon_sym_COLON_LPAREN] = ACTIONS(27),
    [anon_sym_COLON_SLASH] = ACTIONS(27),
    [anon_sym_COLON_STAR] = ACTIONS(27),
    [anon_sym_COLON_PERCENT] = ACTIONS(27),
    [anon_sym_SEMI_RPAREN] = ACTIONS(27),
    [anon_sym_COLONP] = ACTIONS(27),
    [anon_sym_COLONO] = ACTIONS(27),
    [anon_sym_GT_LPAREN] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_integer] = ACTIONS(29),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym__expression_statement] = STATE(6),
    [sym__expression] = STATE(2),
    [sym_block_expression] = STATE(6),
    [sym_unary_expression] = STATE(2),
    [sym_binary_expression] = STATE(2),
    [sym__literal] = STATE(2),
    [sym_string] = STATE(2),
    [sym_boolean] = STATE(2),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [anon_sym_do] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [sym_integer] = ACTIONS(33),
  },
  [7] = {
    [sym__operator] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_identifier] = ACTIONS(50),
    [anon_sym_do] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(48),
    [anon_sym_COLON_RPAREN] = ACTIONS(48),
    [anon_sym_COLON_LPAREN] = ACTIONS(48),
    [anon_sym_COLON_SLASH] = ACTIONS(48),
    [anon_sym_COLON_STAR] = ACTIONS(48),
    [anon_sym_COLON_PERCENT] = ACTIONS(48),
    [anon_sym_SEMI_RPAREN] = ACTIONS(48),
    [anon_sym_COLONP] = ACTIONS(48),
    [anon_sym_COLONO] = ACTIONS(48),
    [anon_sym_GT_LPAREN] = ACTIONS(48),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [anon_sym_true] = ACTIONS(50),
    [anon_sym_false] = ACTIONS(50),
    [sym_integer] = ACTIONS(50),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [anon_sym_do] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(52),
    [anon_sym_COLON_RPAREN] = ACTIONS(52),
    [anon_sym_COLON_LPAREN] = ACTIONS(52),
    [anon_sym_COLON_SLASH] = ACTIONS(52),
    [anon_sym_COLON_STAR] = ACTIONS(52),
    [anon_sym_COLON_PERCENT] = ACTIONS(52),
    [anon_sym_SEMI_RPAREN] = ACTIONS(52),
    [anon_sym_COLONP] = ACTIONS(52),
    [anon_sym_COLONO] = ACTIONS(52),
    [anon_sym_GT_LPAREN] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(54),
    [anon_sym_false] = ACTIONS(54),
    [sym_integer] = ACTIONS(54),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym_identifier] = ACTIONS(58),
    [anon_sym_do] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(56),
    [anon_sym_COLON_RPAREN] = ACTIONS(56),
    [anon_sym_COLON_LPAREN] = ACTIONS(56),
    [anon_sym_COLON_SLASH] = ACTIONS(56),
    [anon_sym_COLON_STAR] = ACTIONS(56),
    [anon_sym_COLON_PERCENT] = ACTIONS(56),
    [anon_sym_SEMI_RPAREN] = ACTIONS(56),
    [anon_sym_COLONP] = ACTIONS(56),
    [anon_sym_COLONO] = ACTIONS(56),
    [anon_sym_GT_LPAREN] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [anon_sym_true] = ACTIONS(58),
    [anon_sym_false] = ACTIONS(58),
    [sym_integer] = ACTIONS(58),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [anon_sym_do] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_COLON_RPAREN] = ACTIONS(60),
    [anon_sym_COLON_LPAREN] = ACTIONS(60),
    [anon_sym_COLON_SLASH] = ACTIONS(60),
    [anon_sym_COLON_STAR] = ACTIONS(60),
    [anon_sym_COLON_PERCENT] = ACTIONS(60),
    [anon_sym_SEMI_RPAREN] = ACTIONS(60),
    [anon_sym_COLONP] = ACTIONS(60),
    [anon_sym_COLONO] = ACTIONS(60),
    [anon_sym_GT_LPAREN] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [anon_sym_true] = ACTIONS(62),
    [anon_sym_false] = ACTIONS(62),
    [sym_integer] = ACTIONS(62),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(64), 2,
      sym_integer,
      sym_identifier,
    STATE(4), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [23] = 5,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(66), 2,
      sym_integer,
      sym_identifier,
    STATE(5), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [46] = 5,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 2,
      sym_integer,
      sym_identifier,
    STATE(7), 6,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
      sym_string,
      sym_boolean,
  [69] = 3,
    ACTIONS(70), 1,
      aux_sym_string_token1,
    ACTIONS(72), 1,
      anon_sym_DQUOTE2,
    STATE(15), 1,
      aux_sym_string_repeat1,
  [79] = 3,
    ACTIONS(74), 1,
      aux_sym_string_token1,
    ACTIONS(76), 1,
      anon_sym_DQUOTE2,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [89] = 3,
    ACTIONS(78), 1,
      aux_sym_string_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE2,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [99] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 23,
  [SMALL_STATE(13)] = 46,
  [SMALL_STATE(14)] = 69,
  [SMALL_STATE(15)] = 79,
  [SMALL_STATE(16)] = 89,
  [SMALL_STATE(17)] = 99,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_twitchchat(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
