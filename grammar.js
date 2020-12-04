
module.exports = grammar({
  name: "twitchchat",

  extras: () => [/\s/],

  word: ($) => $.identifier,

  rules: {
    source: ($) => repeat($._statement),

    _statement: ($) => choice($._expression_statement),

    _expression_statement: ($) =>
      choice(
        seq($._expression),
      ),

    _expression: ($) =>
      choice(
				$.unary_expression,
				// $.or_expression,
				$.binary_expression,
        $._literal,
				prec.left($.identifier)
      ),

		unary_expression: $ => prec.left(11, seq(choice('-'), $._expression)),

		_operator: () => choice('+', '-', '/', '*', '%', '<', '>', '<=', '>='),

		binary_expression: $ => prec.left(9, seq($._expression, $._operator, $._expression)),

		_literal: $ => choice($.integer, $.boolean),

		boolean: () => choice('true', 'false'),

		integer: () => /[0-9][0-9_]*/,

		identifier: () => /\w+/,

    _end: () => /\n/,
  },
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
