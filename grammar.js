module.exports = grammar({
  name: 'salesforce_debug_log',

  rules: {
    source_file: $ => seq(
      optional($.log_header),
      repeat($.log_entry)
    ),

    log_header: $ => $.log_level_settings,

    log_level_settings: $ => /.+/,

    log_entry: $ => seq(
      $.timestamp,
      '|',
      $.event_identifier,
      optional(seq('|', $.event_details))
    ),

    timestamp: $ => seq(
      $.time,
      $.duration
    ),

    time: $ => /\d{2}:\d{2}:\d{2}\.\d{3}/,

    duration: $ => seq(
      '(', $.number, ')'
    ),

    event_identifier: $ => seq(
      $.event_name,
      optional($.line_number),
      optional($.log_level)
    ),

    event_name: $ => /[A-Z_]+/,

    line_number: $ => seq(
      '[',
      choice($.number, 'EXTERNAL'),
      ']'
    ),

    log_level: $ => /[A-Z]+/,

    event_details: $ => /.+/,

    number: $ => /\d+/,
  }
});
