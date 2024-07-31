#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  anon_sym_CALLOUT_RESPONSE = 10,
  anon_sym_XDS_RESPONSE = 11,
  anon_sym_CALLOUT_REQUEST = 12,
  anon_sym_USER_INFO = 13,
  anon_sym_EXECUTION_STARTED = 14,
  anon_sym_CODE_UNIT_STARTED = 15,
  anon_sym_HEAP_ALLOCATE = 16,
  anon_sym_VARIABLE_SCOPE_BEGIN = 17,
  anon_sym_VARIABLE_ASSIGNMENT = 18,
  anon_sym_STATEMENT_EXECUTE = 19,
  anon_sym_SYSTEM_METHOD_ENTRY = 20,
  anon_sym_SYSTEM_METHOD_EXIT = 21,
  anon_sym_SOQL_EXECUTE_BEGIN = 22,
  anon_sym_SOQL_EXECUTE_END = 23,
  anon_sym_METHOD_ENTRY = 24,
  anon_sym_METHOD_EXIT = 25,
  anon_sym_CODE_UNIT_FINISHED = 26,
  anon_sym_EXECUTION_FINISHED = 27,
  anon_sym_CUMULATIVE_LIMIT_USAGE = 28,
  anon_sym_CUMULATIVE_LIMIT_USAGE_END = 29,
  aux_sym_event_identifier_token1 = 30,
  sym_number = 31,
  sym_source_file = 32,
  sym_log_header = 33,
  sym_log_level_settings = 34,
  sym_log_entry = 35,
  sym_timestamp = 36,
  sym_duration = 37,
  sym_event_identifier = 38,
  sym_event_details = 39,
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
  [anon_sym_CALLOUT_RESPONSE] = "CALLOUT_RESPONSE",
  [anon_sym_XDS_RESPONSE] = "XDS_RESPONSE",
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
  [aux_sym_event_identifier_token1] = "event_identifier_token1",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_log_header] = "log_header",
  [sym_log_level_settings] = "log_level_settings",
  [sym_log_entry] = "log_entry",
  [sym_timestamp] = "timestamp",
  [sym_duration] = "duration",
  [sym_event_identifier] = "event_identifier",
  [sym_event_details] = "event_details",
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
  [anon_sym_CALLOUT_RESPONSE] = anon_sym_CALLOUT_RESPONSE,
  [anon_sym_XDS_RESPONSE] = anon_sym_XDS_RESPONSE,
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
  [aux_sym_event_identifier_token1] = aux_sym_event_identifier_token1,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_log_header] = sym_log_header,
  [sym_log_level_settings] = sym_log_level_settings,
  [sym_log_entry] = sym_log_entry,
  [sym_timestamp] = sym_timestamp,
  [sym_duration] = sym_duration,
  [sym_event_identifier] = sym_event_identifier,
  [sym_event_details] = sym_event_details,
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
  [anon_sym_CALLOUT_RESPONSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XDS_RESPONSE] = {
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
  [aux_sym_event_identifier_token1] = {
    .visible = false,
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
  [sym_event_details] = {
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
  [25] = 25,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == '|') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'H') ADVANCE(89);
      if (lookahead == 'M') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(172);
      if (lookahead == 'U') ADVANCE(199);
      if (lookahead == 'V') ADVANCE(50);
      if (lookahead == 'X') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 8:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '|') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_component);
      if (lookahead == '_') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_component);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_log_level);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_CALLOUT_RESPONSE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_XDS_RESPONSE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_CALLOUT_REQUEST);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_USER_INFO);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EXECUTION_STARTED);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_CODE_UNIT_STARTED);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_HEAP_ALLOCATE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_VARIABLE_SCOPE_BEGIN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_VARIABLE_ASSIGNMENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_STATEMENT_EXECUTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SYSTEM_METHOD_ENTRY);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SYSTEM_METHOD_EXIT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SOQL_EXECUTE_BEGIN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SOQL_EXECUTE_END);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_METHOD_ENTRY);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_METHOD_EXIT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_CODE_UNIT_FINISHED);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EXECUTION_FINISHED);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_CUMULATIVE_LIMIT_USAGE);
      if (lookahead == '_') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_CUMULATIVE_LIMIT_USAGE_END);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'A') ADVANCE(143);
      if (lookahead == 'O') ADVANCE(77);
      if (lookahead == 'U') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'A') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'A') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'A') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'A') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'A') ADVANCE(200);
      if (lookahead == 'S') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'A') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'A') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'A') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'A') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'B') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'B') ADVANCE(93);
      if (lookahead == 'E') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'B') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      ADVANCE_MAP(
        'C', 49,
        'E', 240,
        'H', 89,
        'M', 80,
        'S', 172,
        'U', 199,
        'V', 50,
        'X', 76,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(263);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'C') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'C') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'D') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'D') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'D') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'D') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'D') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'D') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'D') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'E') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'F') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead == 'S') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'F') ADVANCE(141);
      if (lookahead == 'S') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'G') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'G') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'G') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'G') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'H') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'H') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'H') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'H') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'I') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'L') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'L') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'L') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'L') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'L') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'L') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'L') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'M') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'M') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'M') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'M') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'M') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'M') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(214);
      if (lookahead == 'X') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(217);
      if (lookahead == 'X') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'N') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'O') ADVANCE(186);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == 'Y') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'O') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'O') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'O') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'O') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'O') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'P') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'P') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'P') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'P') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'Q') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'Q') ADVANCE(236);
      if (lookahead == 'S') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'R') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'R') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'R') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'R') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'R') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'R') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'R') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'R') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'S') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'S') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'S') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'S') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'S') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'S') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'S') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'S') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'S') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'T') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'U') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'U') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'U') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'U') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'U') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'U') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'U') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'U') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'V') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'X') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'X') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'X') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'Y') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == 'Y') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '_') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_event_identifier_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
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
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym_log_header] = STATE(4),
    [sym_version] = ACTIONS(3),
  },
  [2] = {
    [sym_event_identifier] = STATE(11),
    [anon_sym_CALLOUT_RESPONSE] = ACTIONS(5),
    [anon_sym_XDS_RESPONSE] = ACTIONS(5),
    [anon_sym_CALLOUT_REQUEST] = ACTIONS(5),
    [anon_sym_USER_INFO] = ACTIONS(5),
    [anon_sym_EXECUTION_STARTED] = ACTIONS(5),
    [anon_sym_CODE_UNIT_STARTED] = ACTIONS(5),
    [anon_sym_HEAP_ALLOCATE] = ACTIONS(5),
    [anon_sym_VARIABLE_SCOPE_BEGIN] = ACTIONS(5),
    [anon_sym_VARIABLE_ASSIGNMENT] = ACTIONS(5),
    [anon_sym_STATEMENT_EXECUTE] = ACTIONS(5),
    [anon_sym_SYSTEM_METHOD_ENTRY] = ACTIONS(5),
    [anon_sym_SYSTEM_METHOD_EXIT] = ACTIONS(5),
    [anon_sym_SOQL_EXECUTE_BEGIN] = ACTIONS(5),
    [anon_sym_SOQL_EXECUTE_END] = ACTIONS(5),
    [anon_sym_METHOD_ENTRY] = ACTIONS(5),
    [anon_sym_METHOD_EXIT] = ACTIONS(5),
    [anon_sym_CODE_UNIT_FINISHED] = ACTIONS(5),
    [anon_sym_EXECUTION_FINISHED] = ACTIONS(5),
    [anon_sym_CUMULATIVE_LIMIT_USAGE] = ACTIONS(5),
    [anon_sym_CUMULATIVE_LIMIT_USAGE_END] = ACTIONS(5),
    [aux_sym_event_identifier_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym_time,
    STATE(23), 1,
      sym_timestamp,
    STATE(3), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [14] = 4,
    ACTIONS(12), 1,
      ts_builtin_sym_end,
    ACTIONS(14), 1,
      sym_time,
    STATE(23), 1,
      sym_timestamp,
    STATE(5), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [28] = 4,
    ACTIONS(14), 1,
      sym_time,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_timestamp,
    STATE(3), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [42] = 3,
    ACTIONS(20), 1,
      sym_component,
    STATE(8), 1,
      aux_sym_log_level_settings_repeat1,
    ACTIONS(18), 2,
      ts_builtin_sym_end,
      sym_time,
  [53] = 2,
    ACTIONS(24), 1,
      anon_sym_SEMI,
    ACTIONS(22), 3,
      ts_builtin_sym_end,
      sym_component,
      sym_time,
  [62] = 3,
    ACTIONS(28), 1,
      sym_component,
    STATE(8), 1,
      aux_sym_log_level_settings_repeat1,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym_time,
  [73] = 3,
    ACTIONS(20), 1,
      sym_component,
    STATE(6), 1,
      aux_sym_log_level_settings_repeat1,
    STATE(14), 1,
      sym_log_level_settings,
  [83] = 1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      sym_component,
      sym_time,
  [89] = 2,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_time,
  [97] = 3,
    ACTIONS(37), 1,
      anon_sym_PIPE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_duration,
  [107] = 1,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_time,
  [113] = 1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_time,
  [118] = 2,
    ACTIONS(45), 1,
      aux_sym_event_identifier_token1,
    STATE(17), 1,
      sym_event_details,
  [125] = 1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_time,
  [130] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_time,
  [135] = 1,
    ACTIONS(51), 1,
      sym_number,
  [139] = 1,
    ACTIONS(53), 1,
      anon_sym_PIPE,
  [143] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [147] = 1,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
  [151] = 1,
    ACTIONS(59), 1,
      sym_log_level,
  [155] = 1,
    ACTIONS(61), 1,
      anon_sym_PIPE,
  [159] = 1,
    ACTIONS(63), 1,
      anon_sym_COMMA,
  [163] = 1,
    ACTIONS(65), 1,
      anon_sym_PIPE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 14,
  [SMALL_STATE(5)] = 28,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 53,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 73,
  [SMALL_STATE(10)] = 83,
  [SMALL_STATE(11)] = 89,
  [SMALL_STATE(12)] = 97,
  [SMALL_STATE(13)] = 107,
  [SMALL_STATE(14)] = 113,
  [SMALL_STATE(15)] = 118,
  [SMALL_STATE(16)] = 125,
  [SMALL_STATE(17)] = 130,
  [SMALL_STATE(18)] = 135,
  [SMALL_STATE(19)] = 139,
  [SMALL_STATE(20)] = 143,
  [SMALL_STATE(21)] = 147,
  [SMALL_STATE(22)] = 151,
  [SMALL_STATE(23)] = 155,
  [SMALL_STATE(24)] = 159,
  [SMALL_STATE(25)] = 163,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level_settings, 1, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 3, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 4, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_identifier, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_header, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_details, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, 0, 0),
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
