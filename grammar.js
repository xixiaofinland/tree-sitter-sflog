module.exports = grammar({
  name: 'sflog',
  rules: {
    source_file: $ => seq(
      $.log_header,
      repeat($.log_entry)
    ),

    log_header: $ => seq(
      $.version,
      $.log_level_settings
    ),

    version: $ => /\d+\.\d+/,

    log_level_settings: $ => repeat1(
      seq(
        $.component,
        ',',
        $.log_level,
        optional(';')
      )
    ),

    //component: $ => /[A-Z_]+/,
    component: $ => choice(
      'DB',
      'WORKFLOW',
      'NBA',
      'VALIDATION',
      'CALLOUT',
      'APEX_CODE',
      'APEX_PROFILING',
      'VISUALFORCE',
      'SYSTEM',
      'WAVE'
    ),

    log_level: $ => choice(
      'NONE',
      'ERROR',
      'WARN',
      'INFO',
      'DEBUG',
      'FINE',
      'FINER',
      'FINEST'
    ),

    log_entry: $ => seq(
      $.timestamp,
      '|',
      $.event_identifier,
      optional(seq('|', $.event_details))
    ),

    event_details: $ => choice(
      /[^\n]+/,
      seq(
        /[^\n]+/,
        repeat1(
          choice(
            seq(/\n/, /[^\d\n][^\n]*/),  // Non-empty line not starting with a digit
            /\n/  // Empty line
          )
        )
      )
    ),
    //event_details: $ => choice(
    //  /.+/,
    //  seq(
    //    /.*/,  // This allows for empty event details
    //    repeat(
    //      seq(
    //        /\n/,
    //        /[^0-9].*/  // Any line that doesn't start with a digit
    //      )
    //    )
    //  )
    //),

    timestamp: $ => seq(
      $.time,
      optional($.duration)
    ),

    time: $ => /\d{2}:\d{2}:\d{2}\.\d{1,3}/,

    duration: $ => seq(
      '(',
      $.number,
      ')'
    ),

    event_identifier: $ => choice(
      'CALLOUT_RESPONSE',
      'XDS_RESPONSE',
      'CALLOUT_REQUEST',
      'USER_INFO',
      'EXECUTION_STARTED',
      'CODE_UNIT_STARTED',
      'HEAP_ALLOCATE',
      'VARIABLE_SCOPE_BEGIN',
      'VARIABLE_ASSIGNMENT',
      'STATEMENT_EXECUTE',
      'SYSTEM_METHOD_ENTRY',
      'SYSTEM_METHOD_EXIT',
      'SOQL_EXECUTE_BEGIN',
      'SOQL_EXECUTE_END',
      'METHOD_ENTRY',
      'METHOD_EXIT',
      'CODE_UNIT_FINISHED',
      'EXECUTION_FINISHED',
      'CUMULATIVE_LIMIT_USAGE',
      'CUMULATIVE_LIMIT_USAGE_END',
      'LIMIT_USAGE_FOR_NS',
      ///[^|]+/
      ///.+/
    ),

    number: $ => /\d+/,

  }
});
