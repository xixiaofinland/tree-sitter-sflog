#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_version = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  sym_component = 4,
  sym_log_level = 5,
  anon_sym_PIPE = 6,
  sym_time = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_CALLOUT_REQUEST = 10,
  anon_sym_USER_INFO = 11,
  anon_sym_EXECUTION_STARTED = 12,
  anon_sym_CODE_UNIT_STARTED = 13,
  anon_sym_HEAP_ALLOCATE = 14,
  anon_sym_VARIABLE_SCOPE_BEGIN = 15,
  anon_sym_VARIABLE_ASSIGNMENT = 16,
  anon_sym_STATEMENT_EXECUTE = 17,
  anon_sym_SYSTEM_METHOD_ENTRY = 18,
  anon_sym_SYSTEM_METHOD_EXIT = 19,
  anon_sym_SOQL_EXECUTE_BEGIN = 20,
  anon_sym_SOQL_EXECUTE_END = 21,
  anon_sym_METHOD_ENTRY = 22,
  anon_sym_METHOD_EXIT = 23,
  anon_sym_CODE_UNIT_FINISHED = 24,
  anon_sym_EXECUTION_FINISHED = 25,
  anon_sym_CUMULATIVE_LIMIT_USAGE = 26,
  anon_sym_CUMULATIVE_LIMIT_USAGE_END = 27,
  sym_event_details = 28,
  anon_sym_LBRACK = 29,
  anon_sym_EXTERNAL = 30,
  anon_sym_RBRACK = 31,
  sym_number = 32,
  sym_source_file = 33,
  sym_log_header = 34,
  sym_log_level_settings = 35,
  sym_log_entry = 36,
  sym_timestamp = 37,
  sym_duration = 38,
  sym_event_identifier = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_log_level_settings_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_version] = "version",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [sym_component] = "component",
  [sym_log_level] = "log_level",
  [anon_sym_PIPE] = "|",
  [sym_time] = "time",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_CALLOUT_REQUEST] = "CALLOUT_REQUEST",
  [anon_sym_USER_INFO] = "USER_INFO",
  [anon_sym_EXECUTION_STARTED] = "EXECUTION_STARTED",
  [anon_sym_CODE_UNIT_STARTED] = "CODE_UNIT_STARTED",
  [anon_sym_HEAP_ALLOCATE] = "HEAP_ALLOCATE",
  [anon_sym_VARIABLE_SCOPE_BEGIN] = "VARIABLE_SCOPE_BEGIN",
  [anon_sym_VARIABLE_ASSIGNMENT] = "VARIABLE_ASSIGNMENT",
  [anon_sym_STATEMENT_EXECUTE] = "STATEMENT_EXECUTE",
  [anon_sym_SYSTEM_METHOD_ENTRY] = "SYSTEM_METHOD_ENTRY",
  [anon_sym_SYSTEM_METHOD_EXIT] = "SYSTEM_METHOD_EXIT",
  [anon_sym_SOQL_EXECUTE_BEGIN] = "SOQL_EXECUTE_BEGIN",
  [anon_sym_SOQL_EXECUTE_END] = "SOQL_EXECUTE_END",
  [anon_sym_METHOD_ENTRY] = "METHOD_ENTRY",
  [anon_sym_METHOD_EXIT] = "METHOD_EXIT",
  [anon_sym_CODE_UNIT_FINISHED] = "CODE_UNIT_FINISHED",
  [anon_sym_EXECUTION_FINISHED] = "EXECUTION_FINISHED",
  [anon_sym_CUMULATIVE_LIMIT_USAGE] = "CUMULATIVE_LIMIT_USAGE",
  [anon_sym_CUMULATIVE_LIMIT_USAGE_END] = "CUMULATIVE_LIMIT_USAGE_END",
  [sym_event_details] = "event_details",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EXTERNAL] = "EXTERNAL",
  [anon_sym_RBRACK] = "]",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_log_header] = "log_header",
  [sym_log_level_settings] = "log_level_settings",
  [sym_log_entry] = "log_entry",
  [sym_timestamp] = "timestamp",
  [sym_duration] = "duration",
  [sym_event_identifier] = "event_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_log_level_settings_repeat1] = "log_level_settings_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_version] = sym_version,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_component] = sym_component,
  [sym_log_level] = sym_log_level,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_time] = sym_time,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_CALLOUT_REQUEST] = anon_sym_CALLOUT_REQUEST,
  [anon_sym_USER_INFO] = anon_sym_USER_INFO,
  [anon_sym_EXECUTION_STARTED] = anon_sym_EXECUTION_STARTED,
  [anon_sym_CODE_UNIT_STARTED] = anon_sym_CODE_UNIT_STARTED,
  [anon_sym_HEAP_ALLOCATE] = anon_sym_HEAP_ALLOCATE,
  [anon_sym_VARIABLE_SCOPE_BEGIN] = anon_sym_VARIABLE_SCOPE_BEGIN,
  [anon_sym_VARIABLE_ASSIGNMENT] = anon_sym_VARIABLE_ASSIGNMENT,
  [anon_sym_STATEMENT_EXECUTE] = anon_sym_STATEMENT_EXECUTE,
  [anon_sym_SYSTEM_METHOD_ENTRY] = anon_sym_SYSTEM_METHOD_ENTRY,
  [anon_sym_SYSTEM_METHOD_EXIT] = anon_sym_SYSTEM_METHOD_EXIT,
  [anon_sym_SOQL_EXECUTE_BEGIN] = anon_sym_SOQL_EXECUTE_BEGIN,
  [anon_sym_SOQL_EXECUTE_END] = anon_sym_SOQL_EXECUTE_END,
  [anon_sym_METHOD_ENTRY] = anon_sym_METHOD_ENTRY,
  [anon_sym_METHOD_EXIT] = anon_sym_METHOD_EXIT,
  [anon_sym_CODE_UNIT_FINISHED] = anon_sym_CODE_UNIT_FINISHED,
  [anon_sym_EXECUTION_FINISHED] = anon_sym_EXECUTION_FINISHED,
  [anon_sym_CUMULATIVE_LIMIT_USAGE] = anon_sym_CUMULATIVE_LIMIT_USAGE,
  [anon_sym_CUMULATIVE_LIMIT_USAGE_END] = anon_sym_CUMULATIVE_LIMIT_USAGE_END,
  [sym_event_details] = sym_event_details,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EXTERNAL] = anon_sym_EXTERNAL,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_log_header] = sym_log_header,
  [sym_log_level_settings] = sym_log_level_settings,
  [sym_log_entry] = sym_log_entry,
  [sym_timestamp] = sym_timestamp,
  [sym_duration] = sym_duration,
  [sym_event_identifier] = sym_event_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_log_level_settings_repeat1] = aux_sym_log_level_settings_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_log_level] = {
    .visible = true,
    .named = true,
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
  [anon_sym_CALLOUT_REQUEST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USER_INFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXECUTION_STARTED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CODE_UNIT_STARTED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAP_ALLOCATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARIABLE_SCOPE_BEGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARIABLE_ASSIGNMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STATEMENT_EXECUTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYSTEM_METHOD_ENTRY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYSTEM_METHOD_EXIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOQL_EXECUTE_BEGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOQL_EXECUTE_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_METHOD_ENTRY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_METHOD_EXIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CODE_UNIT_FINISHED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXECUTION_FINISHED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CUMULATIVE_LIMIT_USAGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CUMULATIVE_LIMIT_USAGE_END] = {
    .visible = true,
    .named = false,
  },
  [sym_event_details] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_log_level_settings_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(214);
      ADVANCE_MAP(
        '(', 232,
        ')', 233,
        ',', 216,
        ';', 217,
        'E', 224,
        '[', 254,
        ']', 256,
        '_', 226,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(208);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(209);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(210);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'U') ADVANCE(104);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(159);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(141);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(158);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(165);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(142);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(103);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(48);
      if (lookahead == 'E') ADVANCE(113);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(175);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(180);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(128);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(181);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(245);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(237);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(236);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(248);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(249);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(251);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(200);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(201);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(116);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(238);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(241);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(188);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(198);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(190);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(192);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(119);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(120);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(185);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 69:
      if (lookahead == 'F') ADVANCE(125);
      END_STATE();
    case 70:
      if (lookahead == 'F') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(169);
      END_STATE();
    case 71:
      if (lookahead == 'F') ADVANCE(95);
      if (lookahead == 'S') ADVANCE(171);
      END_STATE();
    case 72:
      if (lookahead == 'G') ADVANCE(122);
      END_STATE();
    case 73:
      if (lookahead == 'G') ADVANCE(43);
      END_STATE();
    case 74:
      if (lookahead == 'G') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'G') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'H') ADVANCE(126);
      END_STATE();
    case 77:
      if (lookahead == 'H') ADVANCE(53);
      END_STATE();
    case 78:
      if (lookahead == 'H') ADVANCE(54);
      END_STATE();
    case 79:
      if (lookahead == 'H') ADVANCE(131);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(182);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(129);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(11);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(143);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(152);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(111);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(170);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(154);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(118);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(163);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(150);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(199);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(127);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(17);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(99);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(86);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(55);
      END_STATE();
    case 104:
      if (lookahead == 'M') ADVANCE(176);
      END_STATE();
    case 105:
      if (lookahead == 'M') ADVANCE(195);
      END_STATE();
    case 106:
      if (lookahead == 'M') ADVANCE(50);
      END_STATE();
    case 107:
      if (lookahead == 'M') ADVANCE(90);
      END_STATE();
    case 108:
      if (lookahead == 'M') ADVANCE(63);
      END_STATE();
    case 109:
      if (lookahead == 'M') ADVANCE(68);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(69);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(244);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(239);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(173);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(157);
      if (lookahead == 'X') ADVANCE(87);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(160);
      if (lookahead == 'X') ADVANCE(91);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(155);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(94);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(202);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(134);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == 'Y') ADVANCE(149);
      END_STATE();
    case 125:
      if (lookahead == 'O') ADVANCE(235);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(133);
      END_STATE();
    case 129:
      if (lookahead == 'O') ADVANCE(123);
      END_STATE();
    case 130:
      if (lookahead == 'O') ADVANCE(177);
      END_STATE();
    case 131:
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 132:
      if (lookahead == 'P') ADVANCE(196);
      END_STATE();
    case 133:
      if (lookahead == 'P') ADVANCE(59);
      END_STATE();
    case 134:
      if (lookahead == 'Q') ADVANCE(98);
      END_STATE();
    case 135:
      if (lookahead == 'Q') ADVANCE(179);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(186);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(187);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(191);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(46);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(166);
      END_STATE();
    case 142:
      if (lookahead == 'R') ADVANCE(167);
      END_STATE();
    case 143:
      if (lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 144:
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 145:
      if (lookahead == 'S') ADVANCE(148);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 147:
      if (lookahead == 'S') ADVANCE(153);
      END_STATE();
    case 148:
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 149:
      if (lookahead == 'S') ADVANCE(162);
      END_STATE();
    case 150:
      if (lookahead == 'S') ADVANCE(78);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(247);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(234);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(243);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(240);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(137);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(138);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(193);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(189);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 170:
      if (lookahead == 'T') ADVANCE(197);
      END_STATE();
    case 171:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 172:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 173:
      if (lookahead == 'T') ADVANCE(203);
      END_STATE();
    case 174:
      if (lookahead == 'U') ADVANCE(114);
      END_STATE();
    case 175:
      if (lookahead == 'U') ADVANCE(156);
      END_STATE();
    case 176:
      if (lookahead == 'U') ADVANCE(100);
      END_STATE();
    case 177:
      if (lookahead == 'U') ADVANCE(161);
      END_STATE();
    case 178:
      if (lookahead == 'U') ADVANCE(146);
      END_STATE();
    case 179:
      if (lookahead == 'U') ADVANCE(62);
      END_STATE();
    case 180:
      if (lookahead == 'U') ADVANCE(164);
      END_STATE();
    case 181:
      if (lookahead == 'U') ADVANCE(168);
      END_STATE();
    case 182:
      if (lookahead == 'V') ADVANCE(56);
      END_STATE();
    case 183:
      if (lookahead == 'X') ADVANCE(38);
      END_STATE();
    case 184:
      if (lookahead == 'X') ADVANCE(60);
      END_STATE();
    case 185:
      if (lookahead == 'X') ADVANCE(66);
      END_STATE();
    case 186:
      if (lookahead == 'Y') ADVANCE(246);
      END_STATE();
    case 187:
      if (lookahead == 'Y') ADVANCE(242);
      END_STATE();
    case 188:
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 189:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 190:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 191:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 192:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 193:
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 194:
      if (lookahead == '_') ADVANCE(174);
      END_STATE();
    case 195:
      if (lookahead == '_') ADVANCE(109);
      END_STATE();
    case 196:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 197:
      if (lookahead == '_') ADVANCE(178);
      END_STATE();
    case 198:
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 199:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 200:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 201:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 202:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 203:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 204:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 212:
      if (eof) ADVANCE(214);
      if (lookahead == ';') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(226);
      END_STATE();
    case 213:
      if (eof) ADVANCE(214);
      ADVANCE_MAP(
        'C', 8,
        'E', 183,
        'H', 44,
        'M', 37,
        'S', 124,
        'U', 144,
        'V', 9,
        '|', 228,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == 'A') ADVANCE(220);
      if (lookahead == '_') ADVANCE(226);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == '_') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == 'L') ADVANCE(255);
      if (lookahead == '_') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == '_') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == 'R') ADVANCE(221);
      if (lookahead == '_') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == 'T') ADVANCE(219);
      if (lookahead == '_') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == 'X') ADVANCE(223);
      if (lookahead == '_') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '_') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_component);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_log_level);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_CALLOUT_REQUEST);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_USER_INFO);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_EXECUTION_STARTED);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_CODE_UNIT_STARTED);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_HEAP_ALLOCATE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_VARIABLE_SCOPE_BEGIN);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_VARIABLE_ASSIGNMENT);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_STATEMENT_EXECUTE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SYSTEM_METHOD_ENTRY);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_SYSTEM_METHOD_EXIT);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_SOQL_EXECUTE_BEGIN);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SOQL_EXECUTE_END);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_METHOD_ENTRY);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_METHOD_EXIT);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_CODE_UNIT_FINISHED);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_EXECUTION_FINISHED);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_CUMULATIVE_LIMIT_USAGE);
      if (lookahead == '_') ADVANCE(57);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_CUMULATIVE_LIMIT_USAGE_END);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_event_details);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_event_details);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_EXTERNAL);
      if (lookahead == '_') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 213},
  [2] = {.lex_state = 213},
  [3] = {.lex_state = 213},
  [4] = {.lex_state = 213},
  [5] = {.lex_state = 213},
  [6] = {.lex_state = 212},
  [7] = {.lex_state = 212},
  [8] = {.lex_state = 212},
  [9] = {.lex_state = 212},
  [10] = {.lex_state = 212},
  [11] = {.lex_state = 213},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 213},
  [14] = {.lex_state = 213},
  [15] = {.lex_state = 213},
  [16] = {.lex_state = 204},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 204},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_component] = ACTIONS(1),
    [sym_log_level] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EXTERNAL] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym_log_header] = STATE(4),
    [sym_version] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      anon_sym_CUMULATIVE_LIMIT_USAGE,
    STATE(11), 1,
      sym_event_identifier,
    ACTIONS(5), 17,
      anon_sym_CALLOUT_REQUEST,
      anon_sym_USER_INFO,
      anon_sym_EXECUTION_STARTED,
      anon_sym_CODE_UNIT_STARTED,
      anon_sym_HEAP_ALLOCATE,
      anon_sym_VARIABLE_SCOPE_BEGIN,
      anon_sym_VARIABLE_ASSIGNMENT,
      anon_sym_STATEMENT_EXECUTE,
      anon_sym_SYSTEM_METHOD_ENTRY,
      anon_sym_SYSTEM_METHOD_EXIT,
      anon_sym_SOQL_EXECUTE_BEGIN,
      anon_sym_SOQL_EXECUTE_END,
      anon_sym_METHOD_ENTRY,
      anon_sym_METHOD_EXIT,
      anon_sym_CODE_UNIT_FINISHED,
      anon_sym_EXECUTION_FINISHED,
      anon_sym_CUMULATIVE_LIMIT_USAGE_END,
  [26] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_time,
    STATE(21), 1,
      sym_timestamp,
    STATE(3), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [40] = 4,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    ACTIONS(16), 1,
      sym_time,
    STATE(21), 1,
      sym_timestamp,
    STATE(5), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [54] = 4,
    ACTIONS(16), 1,
      sym_time,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_timestamp,
    STATE(3), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [68] = 3,
    ACTIONS(22), 1,
      sym_component,
    STATE(8), 1,
      aux_sym_log_level_settings_repeat1,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      sym_time,
  [79] = 2,
    ACTIONS(26), 1,
      anon_sym_SEMI,
    ACTIONS(24), 3,
      ts_builtin_sym_end,
      sym_component,
      sym_time,
  [88] = 3,
    ACTIONS(30), 1,
      sym_component,
    STATE(8), 1,
      aux_sym_log_level_settings_repeat1,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      sym_time,
  [99] = 3,
    ACTIONS(22), 1,
      sym_component,
    STATE(6), 1,
      aux_sym_log_level_settings_repeat1,
    STATE(14), 1,
      sym_log_level_settings,
  [109] = 1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      sym_component,
      sym_time,
  [115] = 2,
    ACTIONS(37), 1,
      anon_sym_PIPE,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_time,
  [123] = 3,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_duration,
  [133] = 1,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_time,
  [139] = 1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym_time,
  [144] = 1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_time,
  [149] = 1,
    ACTIONS(49), 1,
      sym_number,
  [153] = 1,
    ACTIONS(51), 1,
      anon_sym_PIPE,
  [157] = 1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
  [161] = 1,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
  [165] = 1,
    ACTIONS(57), 1,
      sym_log_level,
  [169] = 1,
    ACTIONS(59), 1,
      anon_sym_PIPE,
  [173] = 1,
    ACTIONS(61), 1,
      anon_sym_COMMA,
  [177] = 1,
    ACTIONS(63), 1,
      anon_sym_PIPE,
  [181] = 1,
    ACTIONS(65), 1,
      sym_event_details,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 79,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 109,
  [SMALL_STATE(11)] = 115,
  [SMALL_STATE(12)] = 123,
  [SMALL_STATE(13)] = 133,
  [SMALL_STATE(14)] = 139,
  [SMALL_STATE(15)] = 144,
  [SMALL_STATE(16)] = 149,
  [SMALL_STATE(17)] = 153,
  [SMALL_STATE(18)] = 157,
  [SMALL_STATE(19)] = 161,
  [SMALL_STATE(20)] = 165,
  [SMALL_STATE(21)] = 169,
  [SMALL_STATE(22)] = 173,
  [SMALL_STATE(23)] = 177,
  [SMALL_STATE(24)] = 181,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level_settings, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 3, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 4, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_identifier, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_header, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
