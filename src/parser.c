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
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_version = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_DB = 4,
  anon_sym_WORKFLOW = 5,
  anon_sym_NBA = 6,
  anon_sym_VALIDATION = 7,
  anon_sym_CALLOUT = 8,
  anon_sym_APEX_CODE = 9,
  anon_sym_APEX_PROFILING = 10,
  anon_sym_VISUALFORCE = 11,
  anon_sym_SYSTEM = 12,
  anon_sym_WAVE = 13,
  anon_sym_NONE = 14,
  anon_sym_ERROR = 15,
  anon_sym_WARN = 16,
  anon_sym_INFO = 17,
  anon_sym_DEBUG = 18,
  anon_sym_FINE = 19,
  anon_sym_FINER = 20,
  anon_sym_FINEST = 21,
  anon_sym_PIPE = 22,
  aux_sym_event_details_token1 = 23,
  sym_time = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_CALLOUT_RESPONSE = 27,
  anon_sym_XDS_RESPONSE = 28,
  anon_sym_CALLOUT_REQUEST = 29,
  anon_sym_USER_INFO = 30,
  anon_sym_EXECUTION_STARTED = 31,
  anon_sym_CODE_UNIT_STARTED = 32,
  anon_sym_HEAP_ALLOCATE = 33,
  anon_sym_VARIABLE_SCOPE_BEGIN = 34,
  anon_sym_VARIABLE_ASSIGNMENT = 35,
  anon_sym_STATEMENT_EXECUTE = 36,
  anon_sym_SYSTEM_METHOD_ENTRY = 37,
  anon_sym_SYSTEM_METHOD_EXIT = 38,
  anon_sym_SOQL_EXECUTE_BEGIN = 39,
  anon_sym_SOQL_EXECUTE_END = 40,
  anon_sym_METHOD_ENTRY = 41,
  anon_sym_METHOD_EXIT = 42,
  anon_sym_CODE_UNIT_FINISHED = 43,
  anon_sym_EXECUTION_FINISHED = 44,
  anon_sym_CUMULATIVE_LIMIT_USAGE = 45,
  anon_sym_CUMULATIVE_LIMIT_USAGE_END = 46,
  sym_number = 47,
  sym_source_file = 48,
  sym_log_header = 49,
  sym_log_level_settings = 50,
  sym_component = 51,
  sym_log_level = 52,
  sym_log_entry = 53,
  sym_event_details = 54,
  sym_timestamp = 55,
  sym_duration = 56,
  sym_event_identifier = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_log_level_settings_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_version] = "version",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_DB] = "DB",
  [anon_sym_WORKFLOW] = "WORKFLOW",
  [anon_sym_NBA] = "NBA",
  [anon_sym_VALIDATION] = "VALIDATION",
  [anon_sym_CALLOUT] = "CALLOUT",
  [anon_sym_APEX_CODE] = "APEX_CODE",
  [anon_sym_APEX_PROFILING] = "APEX_PROFILING",
  [anon_sym_VISUALFORCE] = "VISUALFORCE",
  [anon_sym_SYSTEM] = "SYSTEM",
  [anon_sym_WAVE] = "WAVE",
  [anon_sym_NONE] = "NONE",
  [anon_sym_ERROR] = "ERROR",
  [anon_sym_WARN] = "WARN",
  [anon_sym_INFO] = "INFO",
  [anon_sym_DEBUG] = "DEBUG",
  [anon_sym_FINE] = "FINE",
  [anon_sym_FINER] = "FINER",
  [anon_sym_FINEST] = "FINEST",
  [anon_sym_PIPE] = "|",
  [aux_sym_event_details_token1] = "event_details_token1",
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
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_log_header] = "log_header",
  [sym_log_level_settings] = "log_level_settings",
  [sym_component] = "component",
  [sym_log_level] = "log_level",
  [sym_log_entry] = "log_entry",
  [sym_event_details] = "event_details",
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
  [anon_sym_DB] = anon_sym_DB,
  [anon_sym_WORKFLOW] = anon_sym_WORKFLOW,
  [anon_sym_NBA] = anon_sym_NBA,
  [anon_sym_VALIDATION] = anon_sym_VALIDATION,
  [anon_sym_CALLOUT] = anon_sym_CALLOUT,
  [anon_sym_APEX_CODE] = anon_sym_APEX_CODE,
  [anon_sym_APEX_PROFILING] = anon_sym_APEX_PROFILING,
  [anon_sym_VISUALFORCE] = anon_sym_VISUALFORCE,
  [anon_sym_SYSTEM] = anon_sym_SYSTEM,
  [anon_sym_WAVE] = anon_sym_WAVE,
  [anon_sym_NONE] = anon_sym_NONE,
  [anon_sym_ERROR] = anon_sym_ERROR,
  [anon_sym_WARN] = anon_sym_WARN,
  [anon_sym_INFO] = anon_sym_INFO,
  [anon_sym_DEBUG] = anon_sym_DEBUG,
  [anon_sym_FINE] = anon_sym_FINE,
  [anon_sym_FINER] = anon_sym_FINER,
  [anon_sym_FINEST] = anon_sym_FINEST,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_event_details_token1] = aux_sym_event_details_token1,
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
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_log_header] = sym_log_header,
  [sym_log_level_settings] = sym_log_level_settings,
  [sym_component] = sym_component,
  [sym_log_level] = sym_log_level,
  [sym_log_entry] = sym_log_entry,
  [sym_event_details] = sym_event_details,
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
  [anon_sym_DB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WORKFLOW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NBA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VALIDATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CALLOUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_APEX_CODE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_APEX_PROFILING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VISUALFORCE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYSTEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WAVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ERROR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEBUG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FINER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FINEST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_event_details_token1] = {
    .visible = false,
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
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_log_level] = {
    .visible = true,
    .named = true,
  },
  [sym_log_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_event_details] = {
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
  [25] = 25,
  [26] = 26,
  [27] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(303);
      ADVANCE_MAP(
        '(', 546,
        ')', 547,
        ',', 305,
        ';', 306,
        'A', 197,
        'C', 8,
        'D', 28,
        'E', 204,
        'F', 114,
        'H', 54,
        'I', 157,
        'M', 55,
        'N', 30,
        'S', 179,
        'U', 222,
        'V', 9,
        'W', 10,
        'X', 48,
        '|', 327,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'C') ADVANCE(328);
      if (lookahead == 'E') ADVANCE(519);
      if (lookahead == 'H') ADVANCE(368);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'S') ADVANCE(451);
      if (lookahead == 'U') ADVANCE(478);
      if (lookahead == 'V') ADVANCE(329);
      if (lookahead == 'X') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0) ADVANCE(542);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(541);
      if (lookahead != 0) ADVANCE(542);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(299);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(301);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'O') ADVANCE(49);
      if (lookahead == 'U') ADVANCE(150);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(221);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(210);
      if (lookahead == 'O') ADVANCE(206);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(309);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(198);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(246);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(145);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(106);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(223);
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(216);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(135);
      if (lookahead == 'I') ADVANCE(221);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(270);
      if (lookahead == 'O') ADVANCE(206);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(241);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(249);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(148);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(255);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(217);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(149);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(307);
      END_STATE();
    case 28:
      if (lookahead == 'B') ADVANCE(307);
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'B') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(167);
      END_STATE();
    case 31:
      if (lookahead == 'B') ADVANCE(259);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(144);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(92);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(260);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(194);
      if (lookahead == 'P') ADVANCE(213);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(268);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(193);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(22);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(269);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(574);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(558);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(556);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(580);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(582);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(586);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(218);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(290);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(24);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(292);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(232);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(273);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(324);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(319);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(318);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(313);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(203);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(315);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(550);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(560);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(548);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(566);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(585);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(274);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(212);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(285);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(220);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(280);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(287);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(282);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(283);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(171);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(226);
      END_STATE();
    case 91:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 92:
      if (lookahead == 'E') ADVANCE(108);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(275);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(257);
      END_STATE();
    case 96:
      if (lookahead == 'F') ADVANCE(180);
      END_STATE();
    case 97:
      if (lookahead == 'F') ADVANCE(120);
      END_STATE();
    case 98:
      if (lookahead == 'F') ADVANCE(182);
      END_STATE();
    case 99:
      if (lookahead == 'F') ADVANCE(189);
      END_STATE();
    case 100:
      if (lookahead == 'F') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'S') ADVANCE(243);
      END_STATE();
    case 102:
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'S') ADVANCE(256);
      END_STATE();
    case 103:
      if (lookahead == 'G') ADVANCE(323);
      END_STATE();
    case 104:
      if (lookahead == 'G') ADVANCE(314);
      END_STATE();
    case 105:
      if (lookahead == 'G') ADVANCE(177);
      END_STATE();
    case 106:
      if (lookahead == 'G') ADVANCE(69);
      END_STATE();
    case 107:
      if (lookahead == 'G') ADVANCE(126);
      END_STATE();
    case 108:
      if (lookahead == 'G') ADVANCE(128);
      END_STATE();
    case 109:
      if (lookahead == 'H') ADVANCE(185);
      END_STATE();
    case 110:
      if (lookahead == 'H') ADVANCE(82);
      END_STATE();
    case 111:
      if (lookahead == 'H') ADVANCE(83);
      END_STATE();
    case 112:
      if (lookahead == 'H') ADVANCE(195);
      END_STATE();
    case 113:
      if (lookahead == 'I') ADVANCE(271);
      END_STATE();
    case 114:
      if (lookahead == 'I') ADVANCE(165);
      END_STATE();
    case 115:
      if (lookahead == 'I') ADVANCE(52);
      END_STATE();
    case 116:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 117:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 118:
      if (lookahead == 'I') ADVANCE(155);
      END_STATE();
    case 119:
      if (lookahead == 'I') ADVANCE(244);
      END_STATE();
    case 120:
      if (lookahead == 'I') ADVANCE(147);
      END_STATE();
    case 121:
      if (lookahead == 'I') ADVANCE(219);
      END_STATE();
    case 122:
      if (lookahead == 'I') ADVANCE(188);
      END_STATE();
    case 123:
      if (lookahead == 'I') ADVANCE(162);
      END_STATE();
    case 124:
      if (lookahead == 'I') ADVANCE(235);
      END_STATE();
    case 125:
      if (lookahead == 'I') ADVANCE(190);
      END_STATE();
    case 126:
      if (lookahead == 'I') ADVANCE(160);
      END_STATE();
    case 127:
      if (lookahead == 'I') ADVANCE(254);
      END_STATE();
    case 128:
      if (lookahead == 'I') ADVANCE(161);
      END_STATE();
    case 129:
      if (lookahead == 'I') ADVANCE(237);
      END_STATE();
    case 130:
      if (lookahead == 'I') ADVANCE(169);
      END_STATE();
    case 131:
      if (lookahead == 'I') ADVANCE(230);
      END_STATE();
    case 132:
      if (lookahead == 'I') ADVANCE(174);
      END_STATE();
    case 133:
      if (lookahead == 'I') ADVANCE(176);
      END_STATE();
    case 134:
      if (lookahead == 'K') ADVANCE(100);
      END_STATE();
    case 135:
      if (lookahead == 'L') ADVANCE(115);
      END_STATE();
    case 136:
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(117);
      END_STATE();
    case 137:
      if (lookahead == 'L') ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'L') ADVANCE(187);
      END_STATE();
    case 139:
      if (lookahead == 'L') ADVANCE(289);
      END_STATE();
    case 140:
      if (lookahead == 'L') ADVANCE(21);
      END_STATE();
    case 141:
      if (lookahead == 'L') ADVANCE(181);
      END_STATE();
    case 142:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 143:
      if (lookahead == 'L') ADVANCE(183);
      END_STATE();
    case 144:
      if (lookahead == 'L') ADVANCE(81);
      END_STATE();
    case 145:
      if (lookahead == 'L') ADVANCE(99);
      END_STATE();
    case 146:
      if (lookahead == 'L') ADVANCE(192);
      END_STATE();
    case 147:
      if (lookahead == 'L') ADVANCE(123);
      END_STATE();
    case 148:
      if (lookahead == 'L') ADVANCE(143);
      END_STATE();
    case 149:
      if (lookahead == 'L') ADVANCE(146);
      END_STATE();
    case 150:
      if (lookahead == 'M') ADVANCE(262);
      END_STATE();
    case 151:
      if (lookahead == 'M') ADVANCE(317);
      END_STATE();
    case 152:
      if (lookahead == 'M') ADVANCE(316);
      END_STATE();
    case 153:
      if (lookahead == 'M') ADVANCE(76);
      END_STATE();
    case 154:
      if (lookahead == 'M') ADVANCE(91);
      END_STATE();
    case 155:
      if (lookahead == 'M') ADVANCE(127);
      END_STATE();
    case 156:
      if (lookahead == 'M') ADVANCE(95);
      END_STATE();
    case 157:
      if (lookahead == 'N') ADVANCE(96);
      END_STATE();
    case 158:
      if (lookahead == 'N') ADVANCE(321);
      END_STATE();
    case 159:
      if (lookahead == 'N') ADVANCE(310);
      END_STATE();
    case 160:
      if (lookahead == 'N') ADVANCE(572);
      END_STATE();
    case 161:
      if (lookahead == 'N') ADVANCE(562);
      END_STATE();
    case 162:
      if (lookahead == 'N') ADVANCE(104);
      END_STATE();
    case 163:
      if (lookahead == 'N') ADVANCE(119);
      END_STATE();
    case 164:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 165:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 166:
      if (lookahead == 'N') ADVANCE(258);
      END_STATE();
    case 167:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 168:
      if (lookahead == 'N') ADVANCE(242);
      if (lookahead == 'X') ADVANCE(124);
      END_STATE();
    case 169:
      if (lookahead == 'N') ADVANCE(121);
      END_STATE();
    case 170:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 171:
      if (lookahead == 'N') ADVANCE(245);
      if (lookahead == 'X') ADVANCE(129);
      END_STATE();
    case 172:
      if (lookahead == 'N') ADVANCE(238);
      END_STATE();
    case 173:
      if (lookahead == 'N') ADVANCE(227);
      END_STATE();
    case 174:
      if (lookahead == 'N') ADVANCE(131);
      END_STATE();
    case 175:
      if (lookahead == 'N') ADVANCE(228);
      END_STATE();
    case 176:
      if (lookahead == 'N') ADVANCE(98);
      END_STATE();
    case 177:
      if (lookahead == 'N') ADVANCE(154);
      END_STATE();
    case 178:
      if (lookahead == 'N') ADVANCE(293);
      END_STATE();
    case 179:
      if (lookahead == 'O') ADVANCE(202);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == 'Y') ADVANCE(229);
      END_STATE();
    case 180:
      if (lookahead == 'O') ADVANCE(322);
      END_STATE();
    case 181:
      if (lookahead == 'O') ADVANCE(272);
      END_STATE();
    case 182:
      if (lookahead == 'O') ADVANCE(554);
      END_STATE();
    case 183:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 184:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 185:
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 186:
      if (lookahead == 'O') ADVANCE(207);
      END_STATE();
    case 187:
      if (lookahead == 'O') ADVANCE(264);
      END_STATE();
    case 188:
      if (lookahead == 'O') ADVANCE(178);
      END_STATE();
    case 189:
      if (lookahead == 'O') ADVANCE(211);
      END_STATE();
    case 190:
      if (lookahead == 'O') ADVANCE(159);
      END_STATE();
    case 191:
      if (lookahead == 'O') ADVANCE(173);
      END_STATE();
    case 192:
      if (lookahead == 'O') ADVANCE(266);
      END_STATE();
    case 193:
      if (lookahead == 'O') ADVANCE(200);
      END_STATE();
    case 194:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 195:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 196:
      if (lookahead == 'O') ADVANCE(175);
      END_STATE();
    case 197:
      if (lookahead == 'P') ADVANCE(56);
      END_STATE();
    case 198:
      if (lookahead == 'P') ADVANCE(286);
      END_STATE();
    case 199:
      if (lookahead == 'P') ADVANCE(191);
      END_STATE();
    case 200:
      if (lookahead == 'P') ADVANCE(86);
      END_STATE();
    case 201:
      if (lookahead == 'P') ADVANCE(196);
      END_STATE();
    case 202:
      if (lookahead == 'Q') ADVANCE(139);
      END_STATE();
    case 203:
      if (lookahead == 'Q') ADVANCE(267);
      if (lookahead == 'S') ADVANCE(201);
      END_STATE();
    case 204:
      if (lookahead == 'R') ADVANCE(205);
      if (lookahead == 'X') ADVANCE(57);
      END_STATE();
    case 205:
      if (lookahead == 'R') ADVANCE(186);
      END_STATE();
    case 206:
      if (lookahead == 'R') ADVANCE(134);
      END_STATE();
    case 207:
      if (lookahead == 'R') ADVANCE(320);
      END_STATE();
    case 208:
      if (lookahead == 'R') ADVANCE(276);
      END_STATE();
    case 209:
      if (lookahead == 'R') ADVANCE(277);
      END_STATE();
    case 210:
      if (lookahead == 'R') ADVANCE(158);
      if (lookahead == 'V') ADVANCE(60);
      END_STATE();
    case 211:
      if (lookahead == 'R') ADVANCE(39);
      END_STATE();
    case 212:
      if (lookahead == 'R') ADVANCE(291);
      END_STATE();
    case 213:
      if (lookahead == 'R') ADVANCE(184);
      END_STATE();
    case 214:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 215:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 216:
      if (lookahead == 'R') ADVANCE(250);
      END_STATE();
    case 217:
      if (lookahead == 'R') ADVANCE(251);
      END_STATE();
    case 218:
      if (lookahead == 'S') ADVANCE(284);
      END_STATE();
    case 219:
      if (lookahead == 'S') ADVANCE(110);
      END_STATE();
    case 220:
      if (lookahead == 'S') ADVANCE(199);
      END_STATE();
    case 221:
      if (lookahead == 'S') ADVANCE(263);
      END_STATE();
    case 222:
      if (lookahead == 'S') ADVANCE(73);
      END_STATE();
    case 223:
      if (lookahead == 'S') ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'S') ADVANCE(116);
      END_STATE();
    case 225:
      if (lookahead == 'S') ADVANCE(16);
      END_STATE();
    case 226:
      if (lookahead == 'S') ADVANCE(236);
      END_STATE();
    case 227:
      if (lookahead == 'S') ADVANCE(65);
      END_STATE();
    case 228:
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 229:
      if (lookahead == 'S') ADVANCE(247);
      END_STATE();
    case 230:
      if (lookahead == 'S') ADVANCE(111);
      END_STATE();
    case 231:
      if (lookahead == 'S') ADVANCE(253);
      END_STATE();
    case 232:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 233:
      if (lookahead == 'T') ADVANCE(326);
      END_STATE();
    case 234:
      if (lookahead == 'T') ADVANCE(312);
      END_STATE();
    case 235:
      if (lookahead == 'T') ADVANCE(578);
      END_STATE();
    case 236:
      if (lookahead == 'T') ADVANCE(552);
      END_STATE();
    case 237:
      if (lookahead == 'T') ADVANCE(570);
      END_STATE();
    case 238:
      if (lookahead == 'T') ADVANCE(564);
      END_STATE();
    case 239:
      if (lookahead == 'T') ADVANCE(311);
      END_STATE();
    case 240:
      if (lookahead == 'T') ADVANCE(122);
      END_STATE();
    case 241:
      if (lookahead == 'T') ADVANCE(113);
      END_STATE();
    case 242:
      if (lookahead == 'T') ADVANCE(208);
      END_STATE();
    case 243:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 244:
      if (lookahead == 'T') ADVANCE(281);
      END_STATE();
    case 245:
      if (lookahead == 'T') ADVANCE(209);
      END_STATE();
    case 246:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 247:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 248:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 249:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 250:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 251:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 252:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 253:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 254:
      if (lookahead == 'T') ADVANCE(288);
      END_STATE();
    case 255:
      if (lookahead == 'T') ADVANCE(125);
      END_STATE();
    case 256:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 257:
      if (lookahead == 'T') ADVANCE(112);
      END_STATE();
    case 258:
      if (lookahead == 'T') ADVANCE(294);
      END_STATE();
    case 259:
      if (lookahead == 'U') ADVANCE(103);
      END_STATE();
    case 260:
      if (lookahead == 'U') ADVANCE(240);
      END_STATE();
    case 261:
      if (lookahead == 'U') ADVANCE(163);
      END_STATE();
    case 262:
      if (lookahead == 'U') ADVANCE(140);
      END_STATE();
    case 263:
      if (lookahead == 'U') ADVANCE(15);
      END_STATE();
    case 264:
      if (lookahead == 'U') ADVANCE(234);
      END_STATE();
    case 265:
      if (lookahead == 'U') ADVANCE(225);
      END_STATE();
    case 266:
      if (lookahead == 'U') ADVANCE(239);
      END_STATE();
    case 267:
      if (lookahead == 'U') ADVANCE(90);
      END_STATE();
    case 268:
      if (lookahead == 'U') ADVANCE(248);
      END_STATE();
    case 269:
      if (lookahead == 'U') ADVANCE(252);
      END_STATE();
    case 270:
      if (lookahead == 'V') ADVANCE(60);
      END_STATE();
    case 271:
      if (lookahead == 'V') ADVANCE(84);
      END_STATE();
    case 272:
      if (lookahead == 'W') ADVANCE(308);
      END_STATE();
    case 273:
      if (lookahead == 'X') ADVANCE(279);
      END_STATE();
    case 274:
      if (lookahead == 'X') ADVANCE(88);
      END_STATE();
    case 275:
      if (lookahead == 'X') ADVANCE(93);
      END_STATE();
    case 276:
      if (lookahead == 'Y') ADVANCE(576);
      END_STATE();
    case 277:
      if (lookahead == 'Y') ADVANCE(568);
      END_STATE();
    case 278:
      if (lookahead == 'Y') ADVANCE(231);
      END_STATE();
    case 279:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 280:
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 281:
      if (lookahead == '_') ADVANCE(101);
      END_STATE();
    case 282:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 283:
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 284:
      if (lookahead == '_') ADVANCE(214);
      END_STATE();
    case 285:
      if (lookahead == '_') ADVANCE(261);
      END_STATE();
    case 286:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 287:
      if (lookahead == '_') ADVANCE(142);
      END_STATE();
    case 288:
      if (lookahead == '_') ADVANCE(265);
      END_STATE();
    case 289:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 290:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 291:
      if (lookahead == '_') ADVANCE(133);
      END_STATE();
    case 292:
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 293:
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 294:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 295:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 299:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      END_STATE();
    case 300:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 302:
      if (eof) ADVANCE(303);
      ADVANCE_MAP(
        ';', 306,
        'A', 197,
        'C', 26,
        'D', 27,
        'N', 29,
        'S', 278,
        'V', 19,
        'W', 20,
        '|', 327,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DB);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_WORKFLOW);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_NBA);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_VALIDATION);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_CALLOUT);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_CALLOUT);
      if (lookahead == '_') ADVANCE(215);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_APEX_CODE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_APEX_PROFILING);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_VISUALFORCE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      if (lookahead == '_') ADVANCE(156);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_WAVE);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_WARN);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_FINE);
      if (lookahead == 'R') ADVANCE(325);
      if (lookahead == 'S') ADVANCE(233);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_FINER);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_FINEST);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'A') ADVANCE(422);
      if (lookahead == 'O') ADVANCE(356);
      if (lookahead == 'U') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'A') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'A') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'A') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'A') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'A') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'A') ADVANCE(479);
      if (lookahead == 'S') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'A') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'A') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'A') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'A') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'A') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'B') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'B') ADVANCE(372);
      if (lookahead == 'E') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'B') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      ADVANCE_MAP(
        'C', 328,
        'E', 519,
        'H', 368,
        'M', 359,
        'S', 451,
        'U', 478,
        'V', 329,
        'X', 355,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(542);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'C') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'C') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'C') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'C') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'C') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'D') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'D') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'D') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'D') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'D') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'D') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'D') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'D') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'D') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'E') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'F') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'F') ADVANCE(418);
      if (lookahead == 'S') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'F') ADVANCE(420);
      if (lookahead == 'S') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'G') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'G') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'G') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'G') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'H') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'H') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'H') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'H') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'I') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'L') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'L') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'L') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'L') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'L') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'L') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'L') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'L') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'M') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'M') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'M') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'M') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'M') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'M') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(493);
      if (lookahead == 'X') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(496);
      if (lookahead == 'X') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'N') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'O') ADVANCE(465);
      if (lookahead == 'T') ADVANCE(332);
      if (lookahead == 'Y') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'O') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'O') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'O') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'O') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'O') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'O') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'O') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'O') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'O') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'P') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'P') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'P') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'Q') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'Q') ADVANCE(515);
      if (lookahead == 'S') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'R') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'R') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'R') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'R') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'R') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'R') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'R') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'S') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'S') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'S') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'S') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'S') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'S') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'S') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'S') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'S') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'S') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'S') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'T') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'U') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'U') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'U') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'U') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'U') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'U') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'U') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'U') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'V') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'X') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'X') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'X') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'Y') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == 'Y') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '_') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(542);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_CALLOUT_RESPONSE);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_CALLOUT_RESPONSE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_XDS_RESPONSE);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_XDS_RESPONSE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_CALLOUT_REQUEST);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_CALLOUT_REQUEST);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_USER_INFO);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_USER_INFO);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_EXECUTION_STARTED);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_EXECUTION_STARTED);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_CODE_UNIT_STARTED);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_CODE_UNIT_STARTED);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_HEAP_ALLOCATE);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_HEAP_ALLOCATE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_VARIABLE_SCOPE_BEGIN);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_VARIABLE_SCOPE_BEGIN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_VARIABLE_ASSIGNMENT);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_VARIABLE_ASSIGNMENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_STATEMENT_EXECUTE);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_STATEMENT_EXECUTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_SYSTEM_METHOD_ENTRY);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_SYSTEM_METHOD_ENTRY);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_SYSTEM_METHOD_EXIT);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_SYSTEM_METHOD_EXIT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_SOQL_EXECUTE_BEGIN);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_SOQL_EXECUTE_BEGIN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_SOQL_EXECUTE_END);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_SOQL_EXECUTE_END);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_METHOD_ENTRY);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_METHOD_ENTRY);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_METHOD_EXIT);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_METHOD_EXIT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_CODE_UNIT_FINISHED);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_CODE_UNIT_FINISHED);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_EXECUTION_FINISHED);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_EXECUTION_FINISHED);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_CUMULATIVE_LIMIT_USAGE);
      if (lookahead == '_') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_CUMULATIVE_LIMIT_USAGE);
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_CUMULATIVE_LIMIT_USAGE_END);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_CUMULATIVE_LIMIT_USAGE_END);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 302},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 302},
  [4] = {.lex_state = 302},
  [5] = {.lex_state = 302},
  [6] = {.lex_state = 302},
  [7] = {.lex_state = 302},
  [8] = {.lex_state = 302},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 302},
  [11] = {.lex_state = 302},
  [12] = {.lex_state = 302},
  [13] = {.lex_state = 302},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 302},
  [16] = {.lex_state = 302},
  [17] = {.lex_state = 302},
  [18] = {.lex_state = 302},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 295},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DB] = ACTIONS(1),
    [anon_sym_WORKFLOW] = ACTIONS(1),
    [anon_sym_NBA] = ACTIONS(1),
    [anon_sym_VALIDATION] = ACTIONS(1),
    [anon_sym_CALLOUT] = ACTIONS(1),
    [anon_sym_APEX_CODE] = ACTIONS(1),
    [anon_sym_APEX_PROFILING] = ACTIONS(1),
    [anon_sym_VISUALFORCE] = ACTIONS(1),
    [anon_sym_SYSTEM] = ACTIONS(1),
    [anon_sym_WAVE] = ACTIONS(1),
    [anon_sym_NONE] = ACTIONS(1),
    [anon_sym_ERROR] = ACTIONS(1),
    [anon_sym_WARN] = ACTIONS(1),
    [anon_sym_INFO] = ACTIONS(1),
    [anon_sym_DEBUG] = ACTIONS(1),
    [anon_sym_FINE] = ACTIONS(1),
    [anon_sym_FINER] = ACTIONS(1),
    [anon_sym_FINEST] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_CALLOUT_RESPONSE] = ACTIONS(1),
    [anon_sym_XDS_RESPONSE] = ACTIONS(1),
    [anon_sym_CALLOUT_REQUEST] = ACTIONS(1),
    [anon_sym_USER_INFO] = ACTIONS(1),
    [anon_sym_EXECUTION_STARTED] = ACTIONS(1),
    [anon_sym_CODE_UNIT_STARTED] = ACTIONS(1),
    [anon_sym_HEAP_ALLOCATE] = ACTIONS(1),
    [anon_sym_VARIABLE_SCOPE_BEGIN] = ACTIONS(1),
    [anon_sym_VARIABLE_ASSIGNMENT] = ACTIONS(1),
    [anon_sym_STATEMENT_EXECUTE] = ACTIONS(1),
    [anon_sym_SYSTEM_METHOD_ENTRY] = ACTIONS(1),
    [anon_sym_SYSTEM_METHOD_EXIT] = ACTIONS(1),
    [anon_sym_SOQL_EXECUTE_BEGIN] = ACTIONS(1),
    [anon_sym_SOQL_EXECUTE_END] = ACTIONS(1),
    [anon_sym_METHOD_ENTRY] = ACTIONS(1),
    [anon_sym_METHOD_EXIT] = ACTIONS(1),
    [anon_sym_CODE_UNIT_FINISHED] = ACTIONS(1),
    [anon_sym_EXECUTION_FINISHED] = ACTIONS(1),
    [anon_sym_CUMULATIVE_LIMIT_USAGE] = ACTIONS(1),
    [anon_sym_CUMULATIVE_LIMIT_USAGE_END] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_log_header] = STATE(10),
    [sym_version] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(13), 1,
      sym_event_identifier,
    ACTIONS(5), 21,
      aux_sym_event_details_token1,
      anon_sym_CALLOUT_RESPONSE,
      anon_sym_XDS_RESPONSE,
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
      anon_sym_CUMULATIVE_LIMIT_USAGE,
      anon_sym_CUMULATIVE_LIMIT_USAGE_END,
  [27] = 4,
    STATE(4), 1,
      aux_sym_log_level_settings_repeat1,
    STATE(20), 1,
      sym_component,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      sym_time,
    ACTIONS(9), 10,
      anon_sym_DB,
      anon_sym_WORKFLOW,
      anon_sym_NBA,
      anon_sym_VALIDATION,
      anon_sym_CALLOUT,
      anon_sym_APEX_CODE,
      anon_sym_APEX_PROFILING,
      anon_sym_VISUALFORCE,
      anon_sym_SYSTEM,
      anon_sym_WAVE,
  [50] = 4,
    STATE(4), 1,
      aux_sym_log_level_settings_repeat1,
    STATE(20), 1,
      sym_component,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      sym_time,
    ACTIONS(13), 10,
      anon_sym_DB,
      anon_sym_WORKFLOW,
      anon_sym_NBA,
      anon_sym_VALIDATION,
      anon_sym_CALLOUT,
      anon_sym_APEX_CODE,
      anon_sym_APEX_PROFILING,
      anon_sym_VISUALFORCE,
      anon_sym_SYSTEM,
      anon_sym_WAVE,
  [73] = 4,
    STATE(3), 1,
      aux_sym_log_level_settings_repeat1,
    STATE(18), 1,
      sym_log_level_settings,
    STATE(20), 1,
      sym_component,
    ACTIONS(9), 10,
      anon_sym_DB,
      anon_sym_WORKFLOW,
      anon_sym_NBA,
      anon_sym_VALIDATION,
      anon_sym_CALLOUT,
      anon_sym_APEX_CODE,
      anon_sym_APEX_PROFILING,
      anon_sym_VISUALFORCE,
      anon_sym_SYSTEM,
      anon_sym_WAVE,
  [95] = 1,
    ACTIONS(16), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DB,
      anon_sym_WORKFLOW,
      anon_sym_NBA,
      anon_sym_VALIDATION,
      anon_sym_CALLOUT,
      anon_sym_APEX_CODE,
      anon_sym_APEX_PROFILING,
      anon_sym_VISUALFORCE,
      anon_sym_SYSTEM,
      anon_sym_WAVE,
      sym_time,
  [111] = 2,
    ACTIONS(20), 1,
      anon_sym_SEMI,
    ACTIONS(18), 12,
      ts_builtin_sym_end,
      anon_sym_DB,
      anon_sym_WORKFLOW,
      anon_sym_NBA,
      anon_sym_VALIDATION,
      anon_sym_CALLOUT,
      anon_sym_APEX_CODE,
      anon_sym_APEX_PROFILING,
      anon_sym_VISUALFORCE,
      anon_sym_SYSTEM,
      anon_sym_WAVE,
      sym_time,
  [129] = 1,
    ACTIONS(22), 12,
      ts_builtin_sym_end,
      anon_sym_DB,
      anon_sym_WORKFLOW,
      anon_sym_NBA,
      anon_sym_VALIDATION,
      anon_sym_CALLOUT,
      anon_sym_APEX_CODE,
      anon_sym_APEX_PROFILING,
      anon_sym_VISUALFORCE,
      anon_sym_SYSTEM,
      anon_sym_WAVE,
      sym_time,
  [144] = 3,
    ACTIONS(26), 1,
      anon_sym_FINE,
    STATE(7), 1,
      sym_log_level,
    ACTIONS(24), 7,
      anon_sym_NONE,
      anon_sym_ERROR,
      anon_sym_WARN,
      anon_sym_INFO,
      anon_sym_DEBUG,
      anon_sym_FINER,
      anon_sym_FINEST,
  [160] = 4,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      sym_time,
    STATE(26), 1,
      sym_timestamp,
    STATE(11), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [174] = 4,
    ACTIONS(30), 1,
      sym_time,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_timestamp,
    STATE(12), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [188] = 4,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      sym_time,
    STATE(26), 1,
      sym_timestamp,
    STATE(12), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [202] = 2,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_time,
  [210] = 3,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_duration,
  [220] = 1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_time,
  [226] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_time,
  [231] = 1,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_time,
  [236] = 1,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_time,
  [241] = 2,
    ACTIONS(55), 1,
      aux_sym_event_details_token1,
    STATE(16), 1,
      sym_event_details,
  [248] = 1,
    ACTIONS(57), 1,
      anon_sym_COMMA,
  [252] = 1,
    ACTIONS(59), 1,
      anon_sym_PIPE,
  [256] = 1,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
  [260] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [264] = 1,
    ACTIONS(65), 1,
      anon_sym_PIPE,
  [268] = 1,
    ACTIONS(67), 1,
      sym_number,
  [272] = 1,
    ACTIONS(69), 1,
      anon_sym_PIPE,
  [276] = 1,
    ACTIONS(71), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 144,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 202,
  [SMALL_STATE(14)] = 210,
  [SMALL_STATE(15)] = 220,
  [SMALL_STATE(16)] = 226,
  [SMALL_STATE(17)] = 231,
  [SMALL_STATE(18)] = 236,
  [SMALL_STATE(19)] = 241,
  [SMALL_STATE(20)] = 248,
  [SMALL_STATE(21)] = 252,
  [SMALL_STATE(22)] = 256,
  [SMALL_STATE(23)] = 260,
  [SMALL_STATE(24)] = 264,
  [SMALL_STATE(25)] = 268,
  [SMALL_STATE(26)] = 272,
  [SMALL_STATE(27)] = 276,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level_settings, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 3, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 4, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_identifier, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_details, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_header, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
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
