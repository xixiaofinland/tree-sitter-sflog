#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_log_level_settings_token1 = 1,
  anon_sym_PIPE = 2,
  sym_time = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  sym_event_name = 6,
  anon_sym_LBRACK = 7,
  anon_sym_EXTERNAL = 8,
  anon_sym_RBRACK = 9,
  sym_log_level = 10,
  sym_number = 11,
  sym_source_file = 12,
  sym_log_header = 13,
  sym_log_level_settings = 14,
  sym_log_entry = 15,
  sym_timestamp = 16,
  sym_duration = 17,
  sym_event_identifier = 18,
  sym_line_number = 19,
  sym_event_details = 20,
  aux_sym_source_file_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_log_level_settings_token1] = "log_level_settings_token1",
  [anon_sym_PIPE] = "|",
  [sym_time] = "time",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_event_name] = "event_name",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EXTERNAL] = "EXTERNAL",
  [anon_sym_RBRACK] = "]",
  [sym_log_level] = "log_level",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_log_header] = "log_header",
  [sym_log_level_settings] = "log_level_settings",
  [sym_log_entry] = "log_entry",
  [sym_timestamp] = "timestamp",
  [sym_duration] = "duration",
  [sym_event_identifier] = "event_identifier",
  [sym_line_number] = "line_number",
  [sym_event_details] = "event_details",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_log_level_settings_token1] = aux_sym_log_level_settings_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_time] = sym_time,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_event_name] = sym_event_name,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EXTERNAL] = anon_sym_EXTERNAL,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_log_level] = sym_log_level,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_log_header] = sym_log_header,
  [sym_log_level_settings] = sym_log_level_settings,
  [sym_log_entry] = sym_log_entry,
  [sym_timestamp] = sym_timestamp,
  [sym_duration] = sym_duration,
  [sym_event_identifier] = sym_event_identifier,
  [sym_line_number] = sym_line_number,
  [sym_event_details] = sym_event_details,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_log_level_settings_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_time] = {
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
  [sym_event_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXTERNAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_log_level] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_log_header] = {
    .visible = true,
    .named = true,
  },
  [sym_log_level_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_log_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_event_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_line_number] = {
    .visible = true,
    .named = true,
  },
  [sym_event_details] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == 'E') ADVANCE(47);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '|') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'L') ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == 'N') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == 'R') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'T') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'X') ADVANCE(10);
      END_STATE();
    case 12:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '|') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_log_level_settings_token1);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_log_level_settings_token1);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_log_level_settings_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_log_level_settings_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(36);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_log_level_settings_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_log_level_settings_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_log_level_settings_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_log_level_settings_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_log_level_settings_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_log_level_settings_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_log_level_settings_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_log_level_settings_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_log_level_settings_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_event_name);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == '_') ADVANCE(49);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_event_name);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == '_') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_event_name);
      if (lookahead == 'L') ADVANCE(52);
      if (lookahead == '_') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_event_name);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == '_') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_event_name);
      if (lookahead == 'R') ADVANCE(44);
      if (lookahead == '_') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_event_name);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '_') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_event_name);
      if (lookahead == 'X') ADVANCE(46);
      if (lookahead == '_') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_event_name);
      if (lookahead == '_') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_event_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EXTERNAL);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EXTERNAL);
      if (lookahead == '_') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_log_level);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_event_name] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EXTERNAL] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_log_level] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym_log_header] = STATE(3),
    [sym_log_level_settings] = STATE(15),
    [sym_log_entry] = STATE(4),
    [sym_timestamp] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_log_level_settings_token1] = ACTIONS(5),
    [sym_time] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_log_level,
    STATE(8), 1,
      sym_line_number,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_time,
  [15] = 4,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_time,
    STATE(24), 1,
      sym_timestamp,
    STATE(6), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [29] = 4,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_time,
    STATE(24), 1,
      sym_timestamp,
    STATE(5), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [43] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_time,
    STATE(24), 1,
      sym_timestamp,
    STATE(5), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [57] = 4,
    ACTIONS(17), 1,
      sym_time,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_timestamp,
    STATE(5), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [71] = 1,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_time,
      sym_log_level,
  [78] = 2,
    ACTIONS(30), 1,
      sym_log_level,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_time,
  [87] = 1,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_time,
  [93] = 1,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_time,
  [99] = 2,
    ACTIONS(36), 1,
      anon_sym_PIPE,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      sym_time,
  [107] = 2,
    ACTIONS(38), 1,
      sym_event_name,
    STATE(11), 1,
      sym_event_identifier,
  [114] = 1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      sym_time,
  [119] = 1,
    ACTIONS(42), 2,
      anon_sym_EXTERNAL,
      sym_number,
  [124] = 1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      sym_time,
  [129] = 2,
    ACTIONS(46), 1,
      aux_sym_log_level_settings_token1,
    STATE(18), 1,
      sym_event_details,
  [136] = 1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_time,
  [141] = 1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      sym_time,
  [146] = 2,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_duration,
  [153] = 1,
    ACTIONS(54), 1,
      anon_sym_PIPE,
  [157] = 1,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
  [161] = 1,
    ACTIONS(58), 1,
      sym_number,
  [165] = 1,
    ACTIONS(60), 1,
      anon_sym_PIPE,
  [169] = 1,
    ACTIONS(62), 1,
      anon_sym_PIPE,
  [173] = 1,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
  [177] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 29,
  [SMALL_STATE(5)] = 43,
  [SMALL_STATE(6)] = 57,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 78,
  [SMALL_STATE(9)] = 87,
  [SMALL_STATE(10)] = 93,
  [SMALL_STATE(11)] = 99,
  [SMALL_STATE(12)] = 107,
  [SMALL_STATE(13)] = 114,
  [SMALL_STATE(14)] = 119,
  [SMALL_STATE(15)] = 124,
  [SMALL_STATE(16)] = 129,
  [SMALL_STATE(17)] = 136,
  [SMALL_STATE(18)] = 141,
  [SMALL_STATE(19)] = 146,
  [SMALL_STATE(20)] = 153,
  [SMALL_STATE(21)] = 157,
  [SMALL_STATE(22)] = 161,
  [SMALL_STATE(23)] = 165,
  [SMALL_STATE(24)] = 169,
  [SMALL_STATE(25)] = 173,
  [SMALL_STATE(26)] = 177,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_identifier, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_number, 3, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_identifier, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_identifier, 3, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level_settings, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_header, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_details, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_sflog(void) {
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
