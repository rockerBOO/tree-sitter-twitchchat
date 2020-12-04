module.exports = grammar({
  name: "twitchchat",

  extras: () => [/\s/],

  word: ($) => $.identifier,

  rules: {
    source: ($) => repeat($._statement),

    _statement: ($) => choice($._expression_statement),

    _expression_statement: ($) => choice($._expression, $.block_expression),

    _expression: ($) =>
      choice(
        $.unary_expression,
        // $.or_expression,
        $.binary_expression,
        $._literal,
        prec.left($.identifier)
      ),

    block_expression: ($) => seq("do", $._expression),

    unary_expression: ($) => prec.left(11, seq(choice("-"), $._expression)),

    // _operator: () => choice('+', '-', '/', '*', '%', '<', '>', '<=', '>='),

    _operator: () =>
      choice(":)", ":(", ":/", ":*", ":%", ";)", ":P", ":O", ">("),

    binary_expression: ($) =>
      prec.left(9, seq($._expression, $._operator, $._expression)),

    _literal: ($) => choice($.integer, $.boolean, $.string),

    string: () => seq('"', repeat(/[^"\\]/), token.immediate('"')),

    boolean: () => choice("true", "false"),

    integer: () => /[0-9][0-9_]*/,

    identifier: () => /[a-z_-]+/,

    _end: () => /\n/,
  },
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
