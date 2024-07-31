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

    component: $ => /[A-Z_]+/,

    log_level: $ => /[A-Z]+/,

    log_entry: $ => seq(
      $.timestamp,
      '|',
      $.event_identifier,
      optional(seq('|', $.event_details))
    ),

    timestamp: $ => seq(
      $.time,
      optional($.duration)
    ),

    //time: $ => /\d{2}:\d{2}:\d{2}\.\d{1,3}(?=\s)/,
    time: $ => /\d{2}:\d{2}:\d{2}\.\d{1,3}/,

    duration: $ => seq(
      /\s+/,  // Match one or more spaces
      '(',
      $.number,
      ')'
    ),

    event_identifier: $ => choice(
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
      'CUMULATIVE_LIMIT_USAGE_END'
    ),

    event_details: $ => /.+/,

    code_location: $ => seq(
      '[',
      choice($.number, 'EXTERNAL'),
      ']'
    ),

    number: $ => /\d+/,

    string: $ => /[^|]+/,
  }
});
