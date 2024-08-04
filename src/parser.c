#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_version = 2,
  anon_sym_LF2 = 3,
  anon_sym_COMMA = 4,
  anon_sym_SEMI = 5,
  anon_sym_DB = 6,
  anon_sym_WORKFLOW = 7,
  anon_sym_NBA = 8,
  anon_sym_VALIDATION = 9,
  anon_sym_CALLOUT = 10,
  anon_sym_APEX_CODE = 11,
  anon_sym_APEX_PROFILING = 12,
  anon_sym_VISUALFORCE = 13,
  anon_sym_SYSTEM = 14,
  anon_sym_WAVE = 15,
  anon_sym_NONE = 16,
  anon_sym_ERROR = 17,
  anon_sym_WARN = 18,
  anon_sym_INFO = 19,
  anon_sym_DEBUG = 20,
  anon_sym_FINE = 21,
  anon_sym_FINER = 22,
  anon_sym_FINEST = 23,
  aux_sym_anonymous_block_token1 = 24,
  anon_sym_PIPE = 25,
  anon_sym_PIPE_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_PIPE_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_EXTERNAL = 30,
  aux_sym_limit_token1 = 31,
  anon_sym_COLON = 32,
  anon_sym_outof = 33,
  sym_event_detail_value = 34,
  sym_time = 35,
  anon_sym_LPAREN = 36,
  sym_number = 37,
  sym_identifier = 38,
  sym_source_file = 39,
  sym_log_header = 40,
  sym_log_level_settings = 41,
  sym_log_level_setting = 42,
  sym_component = 43,
  sym_log_level = 44,
  sym_anonymous_block = 45,
  sym_log_entry = 46,
  sym_location = 47,
  sym_namespace = 48,
  sym_limit_usage = 49,
  sym_limit = 50,
  sym_event_details = 51,
  sym_event_detail = 52,
  sym_timestamp = 53,
  sym_duration = 54,
  sym_event_identifier = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_log_level_settings_repeat1 = 57,
  aux_sym_anonymous_block_repeat1 = 58,
  aux_sym_limit_usage_repeat1 = 59,
  aux_sym_event_details_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_version] = "version",
  [anon_sym_LF2] = "\n  ",
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
  [aux_sym_anonymous_block_token1] = "anonymous_block_token1",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_LBRACK] = "|[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE_LPAREN] = "|(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EXTERNAL] = "EXTERNAL",
  [aux_sym_limit_token1] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_outof] = "out of",
  [sym_event_detail_value] = "event_detail_value",
  [sym_time] = "time",
  [anon_sym_LPAREN] = "(",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_log_header] = "log_header",
  [sym_log_level_settings] = "log_level_settings",
  [sym_log_level_setting] = "log_level_setting",
  [sym_component] = "component",
  [sym_log_level] = "log_level",
  [sym_anonymous_block] = "anonymous_block",
  [sym_log_entry] = "log_entry",
  [sym_location] = "location",
  [sym_namespace] = "namespace",
  [sym_limit_usage] = "limit_usage",
  [sym_limit] = "limit",
  [sym_event_details] = "event_details",
  [sym_event_detail] = "event_detail",
  [sym_timestamp] = "timestamp",
  [sym_duration] = "duration",
  [sym_event_identifier] = "event_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_log_level_settings_repeat1] = "log_level_settings_repeat1",
  [aux_sym_anonymous_block_repeat1] = "anonymous_block_repeat1",
  [aux_sym_limit_usage_repeat1] = "limit_usage_repeat1",
  [aux_sym_event_details_repeat1] = "event_details_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_version] = sym_version,
  [anon_sym_LF2] = anon_sym_LF2,
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
  [aux_sym_anonymous_block_token1] = aux_sym_anonymous_block_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PIPE_LBRACK] = anon_sym_PIPE_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PIPE_LPAREN] = anon_sym_PIPE_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EXTERNAL] = anon_sym_EXTERNAL,
  [aux_sym_limit_token1] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_outof] = anon_sym_outof,
  [sym_event_detail_value] = sym_event_detail_value,
  [sym_time] = sym_time,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_log_header] = sym_log_header,
  [sym_log_level_settings] = sym_log_level_settings,
  [sym_log_level_setting] = sym_log_level_setting,
  [sym_component] = sym_component,
  [sym_log_level] = sym_log_level,
  [sym_anonymous_block] = sym_anonymous_block,
  [sym_log_entry] = sym_log_entry,
  [sym_location] = sym_location,
  [sym_namespace] = sym_namespace,
  [sym_limit_usage] = sym_limit_usage,
  [sym_limit] = sym_limit,
  [sym_event_details] = sym_event_details,
  [sym_event_detail] = sym_event_detail,
  [sym_timestamp] = sym_timestamp,
  [sym_duration] = sym_duration,
  [sym_event_identifier] = sym_event_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_log_level_settings_repeat1] = aux_sym_log_level_settings_repeat1,
  [aux_sym_anonymous_block_repeat1] = aux_sym_anonymous_block_repeat1,
  [aux_sym_limit_usage_repeat1] = aux_sym_limit_usage_repeat1,
  [aux_sym_event_details_repeat1] = aux_sym_event_details_repeat1,
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
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF2] = {
    .visible = true,
    .named = false,
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
  [aux_sym_anonymous_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXTERNAL] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_limit_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outof] = {
    .visible = true,
    .named = false,
  },
  [sym_event_detail_value] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
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
  [sym_log_level_setting] = {
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
  [sym_anonymous_block] = {
    .visible = true,
    .named = true,
  },
  [sym_log_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_location] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_usage] = {
    .visible = true,
    .named = true,
  },
  [sym_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_event_details] = {
    .visible = true,
    .named = true,
  },
  [sym_event_detail] = {
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
  [aux_sym_anonymous_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_limit_usage_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_event_details_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_available = 1,
  field_consumed = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_available] = "available",
  [field_consumed] = "consumed",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_available, 4},
    {field_consumed, 2},
    {field_name, 0},
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
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(130);
      ADVANCE_MAP(
        '(', 178,
        ')', 162,
        ',', 135,
        ':', 169,
        ';', 136,
        'A', 87,
        'C', 26,
        'D', 35,
        'E', 88,
        'F', 59,
        'I', 72,
        'N', 38,
        'S', 110,
        'V', 30,
        'W', 27,
        ']', 160,
        'o', 115,
        '|', 158,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 131,
        'A', 87,
        'C', 26,
        'D', 34,
        'N', 37,
        'S', 110,
        'V', 30,
        'W', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 132,
        ' ', 134,
        ';', 136,
        'A', 87,
        'C', 26,
        'D', 34,
        'N', 37,
        'S', 110,
        'V', 30,
        'W', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 132,
        ';', 136,
        'A', 87,
        'C', 26,
        'D', 34,
        'N', 37,
        'S', 110,
        'V', 30,
        'W', 29,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == ':') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(171);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(120);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(122);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(123);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(139);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(96);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(137);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(103);
      END_STATE();
    case 37:
      if (lookahead == 'B') ADVANCE(28);
      END_STATE();
    case 38:
      if (lookahead == 'B') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'P') ADVANCE(95);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(109);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(142);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 52:
      if (lookahead == 'F') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'F') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 'F') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'F') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'G') ADVANCE(151);
      END_STATE();
    case 57:
      if (lookahead == 'G') ADVANCE(143);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(41);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'K') ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(163);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(58);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 71:
      if (lookahead == 'M') ADVANCE(145);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(149);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(140);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(57);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(150);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 81:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 84:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(74);
      END_STATE();
    case 86:
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 87:
      if (lookahead == 'P') ADVANCE(43);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == 'X') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(82);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(148);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'V') ADVANCE(46);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 96:
      if (lookahead == 'S') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'S') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(154);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 103:
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 104:
      if (lookahead == 'U') ADVANCE(99);
      END_STATE();
    case 105:
      if (lookahead == 'U') ADVANCE(31);
      END_STATE();
    case 106:
      if (lookahead == 'V') ADVANCE(46);
      END_STATE();
    case 107:
      if (lookahead == 'W') ADVANCE(138);
      END_STATE();
    case 108:
      if (lookahead == 'X') ADVANCE(100);
      END_STATE();
    case 109:
      if (lookahead == 'X') ADVANCE(111);
      END_STATE();
    case 110:
      if (lookahead == 'Y') ADVANCE(97);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(170);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 116:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(168);
      END_STATE();
    case 117:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 125:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(171);
      END_STATE();
    case 126:
      if (eof) ADVANCE(130);
      if (lookahead == '\n') SKIP(126);
      if (lookahead == ':') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 127:
      if (eof) ADVANCE(130);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == '|') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 128:
      if (eof) ADVANCE(130);
      if (lookahead == '|') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 129:
      if (eof) ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(168);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LF2);
      if (lookahead == '\n') ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DB);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_WORKFLOW);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_NBA);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_VALIDATION);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_CALLOUT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_APEX_CODE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_APEX_PROFILING);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_VISUALFORCE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_WAVE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_WARN);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_FINE);
      if (lookahead == 'R') ADVANCE(153);
      if (lookahead == 'S') ADVANCE(98);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_FINER);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_FINEST);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_anonymous_block_token1);
      if (lookahead == ' ') ADVANCE(156);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_anonymous_block_token1);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '[') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PIPE_LBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PIPE_LPAREN);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_EXTERNAL);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_limit_token1);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_outof);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_event_detail_value);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 128},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 128},
  [12] = {.lex_state = 126},
  [13] = {.lex_state = 127},
  [14] = {.lex_state = 129},
  [15] = {.lex_state = 128},
  [16] = {.lex_state = 129},
  [17] = {.lex_state = 128},
  [18] = {.lex_state = 127},
  [19] = {.lex_state = 128},
  [20] = {.lex_state = 127},
  [21] = {.lex_state = 128},
  [22] = {.lex_state = 128},
  [23] = {.lex_state = 126},
  [24] = {.lex_state = 126},
  [25] = {.lex_state = 116},
  [26] = {.lex_state = 127},
  [27] = {.lex_state = 129},
  [28] = {.lex_state = 126},
  [29] = {.lex_state = 127},
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 117},
  [32] = {.lex_state = 128},
  [33] = {.lex_state = 128},
  [34] = {.lex_state = 117},
  [35] = {.lex_state = 128},
  [36] = {.lex_state = 127},
  [37] = {.lex_state = 127},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 127},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 127},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 50},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 50},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 50},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_PIPE_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EXTERNAL] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_outof] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym_log_header] = STATE(12),
    [sym_version] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    STATE(4), 1,
      aux_sym_log_level_settings_repeat1,
    STATE(7), 1,
      sym_log_level_setting,
    STATE(43), 1,
      sym_component,
    STATE(49), 1,
      sym_log_level_settings,
    ACTIONS(5), 10,
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
  [25] = 5,
    ACTIONS(7), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_log_level_settings_repeat1,
    STATE(7), 1,
      sym_log_level_setting,
    STATE(43), 1,
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
  [50] = 5,
    ACTIONS(12), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_log_level_settings_repeat1,
    STATE(7), 1,
      sym_log_level_setting,
    STATE(43), 1,
      sym_component,
    ACTIONS(14), 10,
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
  [75] = 1,
    ACTIONS(16), 13,
      anon_sym_LF,
      anon_sym_LF2,
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
  [91] = 2,
    ACTIONS(20), 1,
      anon_sym_SEMI,
    ACTIONS(18), 12,
      anon_sym_LF,
      anon_sym_LF2,
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
  [109] = 2,
    ACTIONS(24), 1,
      anon_sym_LF2,
    ACTIONS(22), 11,
      anon_sym_LF,
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
  [126] = 1,
    ACTIONS(26), 12,
      anon_sym_LF,
      anon_sym_LF2,
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
  [141] = 2,
    ACTIONS(7), 1,
      anon_sym_LF,
    ACTIONS(28), 10,
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
  [157] = 3,
    ACTIONS(32), 1,
      anon_sym_FINE,
    STATE(6), 1,
      sym_log_level,
    ACTIONS(30), 7,
      anon_sym_NONE,
      anon_sym_ERROR,
      anon_sym_WARN,
      anon_sym_INFO,
      anon_sym_DEBUG,
      anon_sym_FINER,
      anon_sym_FINEST,
  [173] = 6,
    ACTIONS(36), 1,
      anon_sym_PIPE,
    ACTIONS(38), 1,
      anon_sym_PIPE_LBRACK,
    ACTIONS(40), 1,
      anon_sym_PIPE_LPAREN,
    STATE(35), 1,
      sym_event_details,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      sym_time,
    STATE(18), 2,
      sym_event_detail,
      aux_sym_event_details_repeat1,
  [194] = 7,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      aux_sym_anonymous_block_token1,
    ACTIONS(46), 1,
      sym_time,
    STATE(17), 1,
      sym_anonymous_block,
    STATE(23), 1,
      aux_sym_anonymous_block_repeat1,
    STATE(37), 1,
      sym_timestamp,
    STATE(15), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [217] = 4,
    ACTIONS(50), 1,
      anon_sym_PIPE,
    STATE(33), 1,
      sym_event_details,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_time,
    STATE(18), 2,
      sym_event_detail,
      aux_sym_event_details_repeat1,
  [232] = 4,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      aux_sym_limit_token1,
    ACTIONS(56), 1,
      sym_time,
    STATE(16), 2,
      sym_limit,
      aux_sym_limit_usage_repeat1,
  [246] = 4,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      sym_time,
    STATE(37), 1,
      sym_timestamp,
    STATE(22), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [260] = 4,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      aux_sym_limit_token1,
    ACTIONS(67), 1,
      sym_time,
    STATE(16), 2,
      sym_limit,
      aux_sym_limit_usage_repeat1,
  [274] = 4,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      sym_time,
    STATE(37), 1,
      sym_timestamp,
    STATE(21), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [288] = 3,
    ACTIONS(50), 1,
      anon_sym_PIPE,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_time,
    STATE(20), 2,
      sym_event_detail,
      aux_sym_event_details_repeat1,
  [300] = 2,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE_LBRACK,
      anon_sym_PIPE_LPAREN,
      sym_time,
  [310] = 3,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_time,
    STATE(20), 2,
      sym_event_detail,
      aux_sym_event_details_repeat1,
  [322] = 4,
    ACTIONS(60), 1,
      sym_time,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_timestamp,
    STATE(22), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [336] = 4,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      sym_time,
    STATE(37), 1,
      sym_timestamp,
    STATE(22), 2,
      sym_log_entry,
      aux_sym_source_file_repeat1,
  [350] = 4,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      aux_sym_anonymous_block_token1,
    ACTIONS(91), 1,
      sym_time,
    STATE(24), 1,
      aux_sym_anonymous_block_repeat1,
  [363] = 4,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      aux_sym_anonymous_block_token1,
    ACTIONS(98), 1,
      sym_time,
    STATE(24), 1,
      aux_sym_anonymous_block_repeat1,
  [376] = 3,
    ACTIONS(100), 1,
      aux_sym_limit_token1,
    STATE(32), 1,
      sym_limit_usage,
    STATE(14), 2,
      sym_limit,
      aux_sym_limit_usage_repeat1,
  [387] = 1,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_time,
  [393] = 2,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 2,
      aux_sym_limit_token1,
      sym_time,
  [401] = 2,
    ACTIONS(110), 1,
      sym_time,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      aux_sym_anonymous_block_token1,
  [409] = 3,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_duration,
  [419] = 2,
    STATE(39), 1,
      sym_location,
    ACTIONS(116), 2,
      anon_sym_EXTERNAL,
      sym_number,
  [427] = 2,
    ACTIONS(118), 1,
      sym_identifier,
    STATE(11), 1,
      sym_event_identifier,
  [434] = 1,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym_time,
  [439] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_time,
  [444] = 2,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(41), 1,
      sym_namespace,
  [451] = 1,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym_time,
  [456] = 1,
    ACTIONS(128), 1,
      anon_sym_PIPE,
  [460] = 1,
    ACTIONS(130), 1,
      anon_sym_PIPE,
  [464] = 1,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
  [468] = 1,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
  [472] = 1,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
  [476] = 1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
  [480] = 1,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
  [484] = 1,
    ACTIONS(142), 1,
      anon_sym_COMMA,
  [488] = 1,
    ACTIONS(144), 1,
      anon_sym_PIPE,
  [492] = 1,
    ACTIONS(146), 1,
      sym_event_detail_value,
  [496] = 1,
    ACTIONS(148), 1,
      anon_sym_PIPE,
  [500] = 1,
    ACTIONS(150), 1,
      anon_sym_COLON,
  [504] = 1,
    ACTIONS(152), 1,
      sym_number,
  [508] = 1,
    ACTIONS(154), 1,
      anon_sym_LF,
  [512] = 1,
    ACTIONS(156), 1,
      sym_number,
  [516] = 1,
    ACTIONS(158), 1,
      anon_sym_COMMA,
  [520] = 1,
    ACTIONS(160), 1,
      anon_sym_outof,
  [524] = 1,
    ACTIONS(162), 1,
      sym_number,
  [528] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 173,
  [SMALL_STATE(12)] = 194,
  [SMALL_STATE(13)] = 217,
  [SMALL_STATE(14)] = 232,
  [SMALL_STATE(15)] = 246,
  [SMALL_STATE(16)] = 260,
  [SMALL_STATE(17)] = 274,
  [SMALL_STATE(18)] = 288,
  [SMALL_STATE(19)] = 300,
  [SMALL_STATE(20)] = 310,
  [SMALL_STATE(21)] = 322,
  [SMALL_STATE(22)] = 336,
  [SMALL_STATE(23)] = 350,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 376,
  [SMALL_STATE(26)] = 387,
  [SMALL_STATE(27)] = 393,
  [SMALL_STATE(28)] = 401,
  [SMALL_STATE(29)] = 409,
  [SMALL_STATE(30)] = 419,
  [SMALL_STATE(31)] = 427,
  [SMALL_STATE(32)] = 434,
  [SMALL_STATE(33)] = 439,
  [SMALL_STATE(34)] = 444,
  [SMALL_STATE(35)] = 451,
  [SMALL_STATE(36)] = 456,
  [SMALL_STATE(37)] = 460,
  [SMALL_STATE(38)] = 464,
  [SMALL_STATE(39)] = 468,
  [SMALL_STATE(40)] = 472,
  [SMALL_STATE(41)] = 476,
  [SMALL_STATE(42)] = 480,
  [SMALL_STATE(43)] = 484,
  [SMALL_STATE(44)] = 488,
  [SMALL_STATE(45)] = 492,
  [SMALL_STATE(46)] = 496,
  [SMALL_STATE(47)] = 500,
  [SMALL_STATE(48)] = 504,
  [SMALL_STATE(49)] = 508,
  [SMALL_STATE(50)] = 512,
  [SMALL_STATE(51)] = 516,
  [SMALL_STATE(52)] = 520,
  [SMALL_STATE(53)] = 524,
  [SMALL_STATE(54)] = 528,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level_settings, 1, 0, 0),
  [14] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level, 1, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level_setting, 3, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_level_settings_repeat1, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level_setting, 4, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_log_level_settings_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 6, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_usage, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit_usage, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_limit_usage_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_limit_usage_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_limit_usage_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_details, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_identifier, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_identifier, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_event_details_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_event_details_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_block, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_block, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_anonymous_block_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_anonymous_block_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_anonymous_block_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_detail, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 5, 0, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit, 5, 0, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_header, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_header, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 8, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 7, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_entry, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
