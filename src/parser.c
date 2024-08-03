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
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
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
  aux_sym_event_details_token2 = 24,
  aux_sym_event_details_token3 = 25,
  sym_time = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_CALLOUT_RESPONSE = 29,
  anon_sym_XDS_RESPONSE = 30,
  anon_sym_CALLOUT_REQUEST = 31,
  anon_sym_USER_INFO = 32,
  anon_sym_EXECUTION_STARTED = 33,
  anon_sym_CODE_UNIT_STARTED = 34,
  anon_sym_HEAP_ALLOCATE = 35,
  anon_sym_VARIABLE_SCOPE_BEGIN = 36,
  anon_sym_VARIABLE_ASSIGNMENT = 37,
  anon_sym_STATEMENT_EXECUTE = 38,
  anon_sym_SYSTEM_METHOD_ENTRY = 39,
  anon_sym_SYSTEM_METHOD_EXIT = 40,
  anon_sym_SOQL_EXECUTE_BEGIN = 41,
  anon_sym_SOQL_EXECUTE_END = 42,
  anon_sym_METHOD_ENTRY = 43,
  anon_sym_METHOD_EXIT = 44,
  anon_sym_CODE_UNIT_FINISHED = 45,
  anon_sym_EXECUTION_FINISHED = 46,
  anon_sym_CUMULATIVE_LIMIT_USAGE = 47,
  anon_sym_CUMULATIVE_LIMIT_USAGE_END = 48,
  anon_sym_LIMIT_USAGE_FOR_NS = 49,
  sym_number = 50,
  sym_source_file = 51,
  sym_log_header = 52,
  sym_log_level_settings = 53,
  sym_component = 54,
  sym_log_level = 55,
  sym_log_entry = 56,
  sym_event_details = 57,
  sym_timestamp = 58,
  sym_duration = 59,
  sym_event_identifier = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_log_level_settings_repeat1 = 62,
  aux_sym_event_details_repeat1 = 63,
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
  [aux_sym_event_details_token2] = "event_details_token2",
  [aux_sym_event_details_token3] = "event_details_token3",
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
  [anon_sym_LIMIT_USAGE_FOR_NS] = "LIMIT_USAGE_FOR_NS",
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
  [aux_sym_event_details_repeat1] = "event_details_repeat1",
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
  [aux_sym_event_details_token2] = aux_sym_event_details_token2,
  [aux_sym_event_details_token3] = aux_sym_event_details_token3,
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
  [anon_sym_LIMIT_USAGE_FOR_NS] = anon_sym_LIMIT_USAGE_FOR_NS,
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
  [aux_sym_event_details_repeat1] = aux_sym_event_details_repeat1,
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
  [aux_sym_event_details_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_event_details_token3] = {
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
  [anon_sym_LIMIT_USAGE_FOR_NS] = {
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
  [aux_sym_event_details_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(340);
      ADVANCE_MAP(
        '(', 385,
        ')', 386,
        ',', 342,
        ';', 343,
        'A', 214,
        'C', 8,
        'D', 31,
        'E', 221,
        'F', 121,
        'H', 57,
        'I', 170,
        'L', 122,
        'M', 58,
        'N', 33,
        'S', 193,
        'U', 242,
        'V', 9,
        'W', 10,
        'X', 51,
        '|', 364,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(365);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(332);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(333);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(334);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(144);
      if (lookahead == 'O') ADVANCE(52);
      if (lookahead == 'U') ADVANCE(161);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(241);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(227);
      if (lookahead == 'O') ADVANCE(223);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(346);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(215);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(268);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(112);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(153);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(243);
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(235);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(146);
      if (lookahead == 'I') ADVANCE(241);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(229);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(297);
      if (lookahead == 'O') ADVANCE(223);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(263);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(271);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(155);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(278);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(236);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(158);
      if (lookahead == 'O') ADVANCE(52);
      if (lookahead == 'U') ADVANCE(161);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(159);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(344);
      END_STATE();
    case 31:
      if (lookahead == 'B') ADVANCE(344);
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(179);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(284);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(152);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(80);
      if (lookahead == 'E') ADVANCE(176);
      END_STATE();
    case 37:
      if (lookahead == 'B') ADVANCE(97);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(287);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(208);
      if (lookahead == 'P') ADVANCE(231);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(294);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(207);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'C') ADVANCE(295);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(400);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(392);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(391);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(403);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(404);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(406);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(237);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(320);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(323);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(254);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(300);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(361);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(356);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(355);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(350);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(220);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(352);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(388);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(393);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(387);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(396);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(405);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(302);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(230);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(314);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(190);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(240);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(163);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(308);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(49);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(317);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(326);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(310);
      END_STATE();
    case 91:
      if (lookahead == 'E') ADVANCE(311);
      END_STATE();
    case 92:
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(182);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(246);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 98:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 99:
      if (lookahead == 'E') ADVANCE(303);
      END_STATE();
    case 100:
      if (lookahead == 'E') ADVANCE(282);
      END_STATE();
    case 101:
      if (lookahead == 'F') ADVANCE(195);
      END_STATE();
    case 102:
      if (lookahead == 'F') ADVANCE(127);
      END_STATE();
    case 103:
      if (lookahead == 'F') ADVANCE(197);
      END_STATE();
    case 104:
      if (lookahead == 'F') ADVANCE(204);
      END_STATE();
    case 105:
      if (lookahead == 'F') ADVANCE(150);
      END_STATE();
    case 106:
      if (lookahead == 'F') ADVANCE(209);
      END_STATE();
    case 107:
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'S') ADVANCE(267);
      END_STATE();
    case 108:
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead == 'S') ADVANCE(280);
      END_STATE();
    case 109:
      if (lookahead == 'G') ADVANCE(360);
      END_STATE();
    case 110:
      if (lookahead == 'G') ADVANCE(351);
      END_STATE();
    case 111:
      if (lookahead == 'G') ADVANCE(186);
      END_STATE();
    case 112:
      if (lookahead == 'G') ADVANCE(89);
      END_STATE();
    case 113:
      if (lookahead == 'G') ADVANCE(72);
      END_STATE();
    case 114:
      if (lookahead == 'G') ADVANCE(135);
      END_STATE();
    case 115:
      if (lookahead == 'G') ADVANCE(136);
      END_STATE();
    case 116:
      if (lookahead == 'H') ADVANCE(200);
      END_STATE();
    case 117:
      if (lookahead == 'H') ADVANCE(86);
      END_STATE();
    case 118:
      if (lookahead == 'H') ADVANCE(87);
      END_STATE();
    case 119:
      if (lookahead == 'H') ADVANCE(212);
      END_STATE();
    case 120:
      if (lookahead == 'I') ADVANCE(298);
      END_STATE();
    case 121:
      if (lookahead == 'I') ADVANCE(177);
      END_STATE();
    case 122:
      if (lookahead == 'I') ADVANCE(164);
      END_STATE();
    case 123:
      if (lookahead == 'I') ADVANCE(55);
      END_STATE();
    case 124:
      if (lookahead == 'I') ADVANCE(277);
      END_STATE();
    case 125:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 126:
      if (lookahead == 'I') ADVANCE(111);
      END_STATE();
    case 127:
      if (lookahead == 'I') ADVANCE(154);
      END_STATE();
    case 128:
      if (lookahead == 'I') ADVANCE(257);
      END_STATE();
    case 129:
      if (lookahead == 'I') ADVANCE(203);
      END_STATE();
    case 130:
      if (lookahead == 'I') ADVANCE(175);
      END_STATE();
    case 131:
      if (lookahead == 'I') ADVANCE(239);
      END_STATE();
    case 132:
      if (lookahead == 'I') ADVANCE(180);
      END_STATE();
    case 133:
      if (lookahead == 'I') ADVANCE(205);
      END_STATE();
    case 134:
      if (lookahead == 'I') ADVANCE(259);
      END_STATE();
    case 135:
      if (lookahead == 'I') ADVANCE(173);
      END_STATE();
    case 136:
      if (lookahead == 'I') ADVANCE(174);
      END_STATE();
    case 137:
      if (lookahead == 'I') ADVANCE(265);
      END_STATE();
    case 138:
      if (lookahead == 'I') ADVANCE(250);
      END_STATE();
    case 139:
      if (lookahead == 'I') ADVANCE(187);
      END_STATE();
    case 140:
      if (lookahead == 'I') ADVANCE(189);
      END_STATE();
    case 141:
      if (lookahead == 'I') ADVANCE(281);
      END_STATE();
    case 142:
      if (lookahead == 'I') ADVANCE(169);
      END_STATE();
    case 143:
      if (lookahead == 'K') ADVANCE(105);
      END_STATE();
    case 144:
      if (lookahead == 'L') ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'L') ADVANCE(202);
      END_STATE();
    case 146:
      if (lookahead == 'L') ADVANCE(123);
      END_STATE();
    case 147:
      if (lookahead == 'L') ADVANCE(123);
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 148:
      if (lookahead == 'L') ADVANCE(318);
      END_STATE();
    case 149:
      if (lookahead == 'L') ADVANCE(23);
      END_STATE();
    case 150:
      if (lookahead == 'L') ADVANCE(196);
      END_STATE();
    case 151:
      if (lookahead == 'L') ADVANCE(198);
      END_STATE();
    case 152:
      if (lookahead == 'L') ADVANCE(85);
      END_STATE();
    case 153:
      if (lookahead == 'L') ADVANCE(104);
      END_STATE();
    case 154:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 155:
      if (lookahead == 'L') ADVANCE(151);
      END_STATE();
    case 156:
      if (lookahead == 'L') ADVANCE(210);
      END_STATE();
    case 157:
      if (lookahead == 'L') ADVANCE(211);
      END_STATE();
    case 158:
      if (lookahead == 'L') ADVANCE(156);
      END_STATE();
    case 159:
      if (lookahead == 'L') ADVANCE(157);
      END_STATE();
    case 160:
      if (lookahead == 'L') ADVANCE(142);
      END_STATE();
    case 161:
      if (lookahead == 'M') ADVANCE(286);
      END_STATE();
    case 162:
      if (lookahead == 'M') ADVANCE(354);
      END_STATE();
    case 163:
      if (lookahead == 'M') ADVANCE(353);
      END_STATE();
    case 164:
      if (lookahead == 'M') ADVANCE(124);
      END_STATE();
    case 165:
      if (lookahead == 'M') ADVANCE(78);
      END_STATE();
    case 166:
      if (lookahead == 'M') ADVANCE(312);
      END_STATE();
    case 167:
      if (lookahead == 'M') ADVANCE(92);
      END_STATE();
    case 168:
      if (lookahead == 'M') ADVANCE(100);
      END_STATE();
    case 169:
      if (lookahead == 'M') ADVANCE(141);
      END_STATE();
    case 170:
      if (lookahead == 'N') ADVANCE(101);
      END_STATE();
    case 171:
      if (lookahead == 'N') ADVANCE(358);
      END_STATE();
    case 172:
      if (lookahead == 'N') ADVANCE(347);
      END_STATE();
    case 173:
      if (lookahead == 'N') ADVANCE(399);
      END_STATE();
    case 174:
      if (lookahead == 'N') ADVANCE(394);
      END_STATE();
    case 175:
      if (lookahead == 'N') ADVANCE(110);
      END_STATE();
    case 176:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 177:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 178:
      if (lookahead == 'N') ADVANCE(264);
      if (lookahead == 'X') ADVANCE(128);
      END_STATE();
    case 179:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 180:
      if (lookahead == 'N') ADVANCE(131);
      END_STATE();
    case 181:
      if (lookahead == 'N') ADVANCE(238);
      END_STATE();
    case 182:
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 183:
      if (lookahead == 'N') ADVANCE(266);
      if (lookahead == 'X') ADVANCE(134);
      END_STATE();
    case 184:
      if (lookahead == 'N') ADVANCE(260);
      END_STATE();
    case 185:
      if (lookahead == 'N') ADVANCE(247);
      END_STATE();
    case 186:
      if (lookahead == 'N') ADVANCE(167);
      END_STATE();
    case 187:
      if (lookahead == 'N') ADVANCE(138);
      END_STATE();
    case 188:
      if (lookahead == 'N') ADVANCE(248);
      END_STATE();
    case 189:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 190:
      if (lookahead == 'N') ADVANCE(283);
      END_STATE();
    case 191:
      if (lookahead == 'N') ADVANCE(137);
      END_STATE();
    case 192:
      if (lookahead == 'N') ADVANCE(324);
      END_STATE();
    case 193:
      if (lookahead == 'O') ADVANCE(219);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == 'Y') ADVANCE(249);
      END_STATE();
    case 194:
      if (lookahead == 'O') ADVANCE(219);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == 'Y') ADVANCE(252);
      END_STATE();
    case 195:
      if (lookahead == 'O') ADVANCE(359);
      END_STATE();
    case 196:
      if (lookahead == 'O') ADVANCE(299);
      END_STATE();
    case 197:
      if (lookahead == 'O') ADVANCE(390);
      END_STATE();
    case 198:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 199:
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 200:
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 201:
      if (lookahead == 'O') ADVANCE(224);
      END_STATE();
    case 202:
      if (lookahead == 'O') ADVANCE(290);
      END_STATE();
    case 203:
      if (lookahead == 'O') ADVANCE(192);
      END_STATE();
    case 204:
      if (lookahead == 'O') ADVANCE(228);
      END_STATE();
    case 205:
      if (lookahead == 'O') ADVANCE(172);
      END_STATE();
    case 206:
      if (lookahead == 'O') ADVANCE(185);
      END_STATE();
    case 207:
      if (lookahead == 'O') ADVANCE(217);
      END_STATE();
    case 208:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 209:
      if (lookahead == 'O') ADVANCE(233);
      END_STATE();
    case 210:
      if (lookahead == 'O') ADVANCE(291);
      END_STATE();
    case 211:
      if (lookahead == 'O') ADVANCE(292);
      END_STATE();
    case 212:
      if (lookahead == 'O') ADVANCE(56);
      END_STATE();
    case 213:
      if (lookahead == 'O') ADVANCE(188);
      END_STATE();
    case 214:
      if (lookahead == 'P') ADVANCE(59);
      END_STATE();
    case 215:
      if (lookahead == 'P') ADVANCE(315);
      END_STATE();
    case 216:
      if (lookahead == 'P') ADVANCE(206);
      END_STATE();
    case 217:
      if (lookahead == 'P') ADVANCE(91);
      END_STATE();
    case 218:
      if (lookahead == 'P') ADVANCE(213);
      END_STATE();
    case 219:
      if (lookahead == 'Q') ADVANCE(148);
      END_STATE();
    case 220:
      if (lookahead == 'Q') ADVANCE(293);
      if (lookahead == 'S') ADVANCE(218);
      END_STATE();
    case 221:
      if (lookahead == 'R') ADVANCE(222);
      if (lookahead == 'X') ADVANCE(60);
      END_STATE();
    case 222:
      if (lookahead == 'R') ADVANCE(201);
      END_STATE();
    case 223:
      if (lookahead == 'R') ADVANCE(143);
      END_STATE();
    case 224:
      if (lookahead == 'R') ADVANCE(357);
      END_STATE();
    case 225:
      if (lookahead == 'R') ADVANCE(304);
      END_STATE();
    case 226:
      if (lookahead == 'R') ADVANCE(305);
      END_STATE();
    case 227:
      if (lookahead == 'R') ADVANCE(171);
      if (lookahead == 'V') ADVANCE(63);
      END_STATE();
    case 228:
      if (lookahead == 'R') ADVANCE(42);
      END_STATE();
    case 229:
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 230:
      if (lookahead == 'R') ADVANCE(321);
      END_STATE();
    case 231:
      if (lookahead == 'R') ADVANCE(199);
      END_STATE();
    case 232:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 233:
      if (lookahead == 'R') ADVANCE(319);
      END_STATE();
    case 234:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 235:
      if (lookahead == 'R') ADVANCE(272);
      END_STATE();
    case 236:
      if (lookahead == 'R') ADVANCE(273);
      END_STATE();
    case 237:
      if (lookahead == 'S') ADVANCE(313);
      END_STATE();
    case 238:
      if (lookahead == 'S') ADVANCE(407);
      END_STATE();
    case 239:
      if (lookahead == 'S') ADVANCE(117);
      END_STATE();
    case 240:
      if (lookahead == 'S') ADVANCE(216);
      END_STATE();
    case 241:
      if (lookahead == 'S') ADVANCE(288);
      END_STATE();
    case 242:
      if (lookahead == 'S') ADVANCE(75);
      END_STATE();
    case 243:
      if (lookahead == 'S') ADVANCE(245);
      END_STATE();
    case 244:
      if (lookahead == 'S') ADVANCE(15);
      END_STATE();
    case 245:
      if (lookahead == 'S') ADVANCE(126);
      END_STATE();
    case 246:
      if (lookahead == 'S') ADVANCE(258);
      END_STATE();
    case 247:
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 248:
      if (lookahead == 'S') ADVANCE(70);
      END_STATE();
    case 249:
      if (lookahead == 'S') ADVANCE(269);
      END_STATE();
    case 250:
      if (lookahead == 'S') ADVANCE(118);
      END_STATE();
    case 251:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 252:
      if (lookahead == 'S') ADVANCE(275);
      END_STATE();
    case 253:
      if (lookahead == 'S') ADVANCE(276);
      END_STATE();
    case 254:
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 255:
      if (lookahead == 'T') ADVANCE(363);
      END_STATE();
    case 256:
      if (lookahead == 'T') ADVANCE(349);
      END_STATE();
    case 257:
      if (lookahead == 'T') ADVANCE(402);
      END_STATE();
    case 258:
      if (lookahead == 'T') ADVANCE(389);
      END_STATE();
    case 259:
      if (lookahead == 'T') ADVANCE(398);
      END_STATE();
    case 260:
      if (lookahead == 'T') ADVANCE(395);
      END_STATE();
    case 261:
      if (lookahead == 'T') ADVANCE(348);
      END_STATE();
    case 262:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 263:
      if (lookahead == 'T') ADVANCE(120);
      END_STATE();
    case 264:
      if (lookahead == 'T') ADVANCE(225);
      END_STATE();
    case 265:
      if (lookahead == 'T') ADVANCE(309);
      END_STATE();
    case 266:
      if (lookahead == 'T') ADVANCE(226);
      END_STATE();
    case 267:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 268:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 269:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 270:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 271:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 272:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 273:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 274:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 275:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 276:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 277:
      if (lookahead == 'T') ADVANCE(316);
      END_STATE();
    case 278:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 279:
      if (lookahead == 'T') ADVANCE(322);
      END_STATE();
    case 280:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 281:
      if (lookahead == 'T') ADVANCE(325);
      END_STATE();
    case 282:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 283:
      if (lookahead == 'T') ADVANCE(327);
      END_STATE();
    case 284:
      if (lookahead == 'U') ADVANCE(109);
      END_STATE();
    case 285:
      if (lookahead == 'U') ADVANCE(191);
      END_STATE();
    case 286:
      if (lookahead == 'U') ADVANCE(149);
      END_STATE();
    case 287:
      if (lookahead == 'U') ADVANCE(262);
      END_STATE();
    case 288:
      if (lookahead == 'U') ADVANCE(16);
      END_STATE();
    case 289:
      if (lookahead == 'U') ADVANCE(244);
      END_STATE();
    case 290:
      if (lookahead == 'U') ADVANCE(256);
      END_STATE();
    case 291:
      if (lookahead == 'U') ADVANCE(279);
      END_STATE();
    case 292:
      if (lookahead == 'U') ADVANCE(261);
      END_STATE();
    case 293:
      if (lookahead == 'U') ADVANCE(96);
      END_STATE();
    case 294:
      if (lookahead == 'U') ADVANCE(270);
      END_STATE();
    case 295:
      if (lookahead == 'U') ADVANCE(274);
      END_STATE();
    case 296:
      if (lookahead == 'U') ADVANCE(251);
      END_STATE();
    case 297:
      if (lookahead == 'V') ADVANCE(63);
      END_STATE();
    case 298:
      if (lookahead == 'V') ADVANCE(88);
      END_STATE();
    case 299:
      if (lookahead == 'W') ADVANCE(345);
      END_STATE();
    case 300:
      if (lookahead == 'X') ADVANCE(307);
      END_STATE();
    case 301:
      if (lookahead == 'X') ADVANCE(60);
      END_STATE();
    case 302:
      if (lookahead == 'X') ADVANCE(94);
      END_STATE();
    case 303:
      if (lookahead == 'X') ADVANCE(98);
      END_STATE();
    case 304:
      if (lookahead == 'Y') ADVANCE(401);
      END_STATE();
    case 305:
      if (lookahead == 'Y') ADVANCE(397);
      END_STATE();
    case 306:
      if (lookahead == 'Y') ADVANCE(253);
      END_STATE();
    case 307:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 308:
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 309:
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 310:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 311:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 312:
      if (lookahead == '_') ADVANCE(168);
      END_STATE();
    case 313:
      if (lookahead == '_') ADVANCE(232);
      END_STATE();
    case 314:
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 315:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 316:
      if (lookahead == '_') ADVANCE(289);
      END_STATE();
    case 317:
      if (lookahead == '_') ADVANCE(160);
      END_STATE();
    case 318:
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 319:
      if (lookahead == '_') ADVANCE(181);
      END_STATE();
    case 320:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 321:
      if (lookahead == '_') ADVANCE(140);
      END_STATE();
    case 322:
      if (lookahead == '_') ADVANCE(234);
      END_STATE();
    case 323:
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 324:
      if (lookahead == '_') ADVANCE(108);
      END_STATE();
    case 325:
      if (lookahead == '_') ADVANCE(296);
      END_STATE();
    case 326:
      if (lookahead == '_') ADVANCE(106);
      END_STATE();
    case 327:
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 328:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 329:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 330:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 331:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 332:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      END_STATE();
    case 333:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 334:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 335:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 336:
      if (eof) ADVANCE(340);
      if (lookahead == '\n') ADVANCE(367);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 337:
      if (eof) ADVANCE(340);
      if (lookahead == '\n') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 338:
      if (eof) ADVANCE(340);
      ADVANCE_MAP(
        ';', 343,
        'A', 214,
        'C', 29,
        'D', 30,
        'N', 32,
        'S', 306,
        'V', 19,
        'W', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 339:
      if (eof) ADVANCE(340);
      ADVANCE_MAP(
        'C', 28,
        'E', 301,
        'H', 57,
        'L', 122,
        'M', 58,
        'S', 194,
        'U', 242,
        'V', 20,
        'X', 51,
        '|', 364,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_DB);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_WORKFLOW);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_NBA);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_VALIDATION);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_CALLOUT);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_CALLOUT);
      if (lookahead == '_') ADVANCE(234);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_APEX_CODE);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_APEX_PROFILING);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_VISUALFORCE);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      if (lookahead == '_') ADVANCE(168);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_WAVE);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_WARN);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_FINE);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'S') ADVANCE(255);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_FINER);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_FINEST);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_event_details_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_event_details_token2);
      if (lookahead == '\n') ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_event_details_token2);
      if (lookahead == '\n') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_event_details_token3);
      if (lookahead == '\n') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_event_details_token3);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_event_details_token3);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_event_details_token3);
      if (lookahead == ':') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_event_details_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_event_details_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_event_details_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_event_details_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_event_details_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_event_details_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_event_details_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_event_details_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_event_details_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_CALLOUT_RESPONSE);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_XDS_RESPONSE);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_CALLOUT_REQUEST);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_USER_INFO);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_EXECUTION_STARTED);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_CODE_UNIT_STARTED);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_HEAP_ALLOCATE);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_VARIABLE_SCOPE_BEGIN);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_VARIABLE_ASSIGNMENT);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_STATEMENT_EXECUTE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_SYSTEM_METHOD_ENTRY);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_SYSTEM_METHOD_EXIT);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_SOQL_EXECUTE_BEGIN);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_SOQL_EXECUTE_END);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_METHOD_ENTRY);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_METHOD_EXIT);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_CODE_UNIT_FINISHED);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_EXECUTION_FINISHED);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_CUMULATIVE_LIMIT_USAGE);
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_CUMULATIVE_LIMIT_USAGE_END);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LIMIT_USAGE_FOR_NS);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 339},
  [2] = {.lex_state = 339},
  [3] = {.lex_state = 338},
  [4] = {.lex_state = 338},
  [5] = {.lex_state = 338},
  [6] = {.lex_state = 338},
  [7] = {.lex_state = 338},
  [8] = {.lex_state = 338},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 339},
  [11] = {.lex_state = 339},
  [12] = {.lex_state = 339},
  [13] = {.lex_state = 336},
  [14] = {.lex_state = 336},
  [15] = {.lex_state = 337},
  [16] = {.lex_state = 336},
  [17] = {.lex_state = 339},
  [18] = {.lex_state = 339},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 336},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 339},
  [23] = {.lex_state = 339},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 328},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
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
    [anon_sym_LIMIT_USAGE_FOR_NS] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym_log_header] = STATE(10),
    [sym_version] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      anon_sym_CUMULATIVE_LIMIT_USAGE,
    STATE(17), 1,
      sym_event_identifier,
    ACTIONS(5), 20,
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
      anon_sym_CUMULATIVE_LIMIT_USAGE_END,
      anon_sym_LIMIT_USAGE_FOR_NS,
  [29] = 4,
    STATE(4), 1,
      aux_sym_log_level_settings_repeat1,
    STATE(31), 1,
      sym_component,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym_time,
    ACTIONS(11), 10,
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
  [52] = 4,
    STATE(4), 1,
      aux_sym_log_level_settings_repeat1,
    STATE(31), 1,
      sym_component,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym_time,
    ACTIONS(15), 10,
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
  [75] = 2,
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
  [93] = 1,
    ACTIONS(22), 13,
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
  [109] = 4,
    STATE(3), 1,
      aux_sym_log_level_settings_repeat1,
    STATE(23), 1,
      sym_log_level_settings,
    STATE(31), 1,
      sym_component,
    ACTIONS(11), 10,
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
  [131] = 1,
    ACTIONS(24), 12,
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
  [146] = 3,
    ACTIONS(28), 1,
      anon_sym_FINE,
    STATE(5), 1,
      sym_log_level,
    ACTIONS(26), 7,
      anon_sym_NONE,
      anon_sym_ERROR,
      anon_sym_WARN,
      anon_sym_INFO,
      anon_sym_DEBUG,
      anon_sym_FINER,
      anon_sym_FINEST,
  [162] = 4,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym_time,
    STATE(30), 1,
      sym_timestamp,
    STATE(11), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [176] = 4,
    ACTIONS(32), 1,
      sym_time,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_timestamp,
    STATE(12), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [190] = 4,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_time,
    STATE(30), 1,
      sym_timestamp,
    STATE(12), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [204] = 4,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      aux_sym_event_details_token2,
    ACTIONS(46), 1,
      sym_time,
    STATE(13), 1,
      aux_sym_event_details_repeat1,
  [217] = 4,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      aux_sym_event_details_token2,
    ACTIONS(52), 1,
      sym_time,
    STATE(13), 1,
      aux_sym_event_details_repeat1,
  [230] = 3,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      aux_sym_event_details_token3,
    ACTIONS(56), 2,
      aux_sym_event_details_token2,
      sym_time,
  [241] = 4,
    ACTIONS(50), 1,
      aux_sym_event_details_token2,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      sym_time,
    STATE(14), 1,
      aux_sym_event_details_repeat1,
  [254] = 2,
    ACTIONS(66), 1,
      anon_sym_PIPE,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym_time,
  [262] = 1,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_time,
  [268] = 3,
    ACTIONS(70), 1,
      anon_sym_PIPE,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_duration,
  [278] = 2,
    ACTIONS(46), 1,
      sym_time,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      aux_sym_event_details_token2,
  [286] = 2,
    ACTIONS(74), 1,
      aux_sym_event_details_token1,
    STATE(22), 1,
      sym_event_details,
  [293] = 1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_time,
  [298] = 1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_time,
  [303] = 1,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
  [307] = 1,
    ACTIONS(82), 1,
      anon_sym_COMMA,
  [311] = 1,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
  [315] = 1,
    ACTIONS(86), 1,
      anon_sym_PIPE,
  [319] = 1,
    ACTIONS(88), 1,
      sym_number,
  [323] = 1,
    ACTIONS(90), 1,
      anon_sym_PIPE,
  [327] = 1,
    ACTIONS(92), 1,
      anon_sym_PIPE,
  [331] = 1,
    ACTIONS(94), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 93,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 131,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 176,
  [SMALL_STATE(12)] = 190,
  [SMALL_STATE(13)] = 204,
  [SMALL_STATE(14)] = 217,
  [SMALL_STATE(15)] = 230,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 254,
  [SMALL_STATE(18)] = 262,
  [SMALL_STATE(19)] = 268,
  [SMALL_STATE(20)] = 278,
  [SMALL_STATE(21)] = 286,
  [SMALL_STATE(22)] = 293,
  [SMALL_STATE(23)] = 298,
  [SMALL_STATE(24)] = 303,
  [SMALL_STATE(25)] = 307,
  [SMALL_STATE(26)] = 311,
  [SMALL_STATE(27)] = 315,
  [SMALL_STATE(28)] = 319,
  [SMALL_STATE(29)] = 323,
  [SMALL_STATE(30)] = 327,
  [SMALL_STATE(31)] = 331,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level_settings, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 3, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 4, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_details_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_details_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_event_details_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_details, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_details, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_details_repeat1, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_event_details_repeat1, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_details, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_details, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_identifier, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 5, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_header, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
