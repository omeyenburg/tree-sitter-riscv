/**
 * @file A syntax parser for the MIPS Instruction Set Architecture.
 * @author Oskar Meyenburg <oskar.meyenburg@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'mips',

  externals: $ => [
    $._operand_separator,
    $._operator_separator,
    $._line_separator,
    $._data_separator,
  ],

  extras: $ => [
    /[ \t\r]/,
    $.comment,
  ],

  conflicts: $ => [
    [$.macro_parameters],
    [$.control_operands],
    [$.integer_operands],
    [$.float_operands],
    [$._operand, $._expression_argument],
  ],

  rules: {
    program: $ => seq(
      repeat($._statement),
      optional(choice(
        $.directive,
        $.instruction,
        $._label,
      )),
      optional($.comment),
    ),

    _statement: $ => prec(1, choice(
      ';',
      '\r',
      '\n',
      choice(
        seq($.directive, choice(';', seq(optional($.comment), $._line_separator))),
        seq($.instruction, choice(';', seq(optional($.comment), optional('\r'), '\n'))),
      ),
      $._label,
      seq($.comment, '\n'),
    )),

    comment: $ => /#.*/,
    _whitespace: $ => /[ \t]+/,

    // TODO: Why is this not just _operand_separator?
    _directive_operand_separator: $ => choice(/[ \t]+/, /[ \t]*,[ \t]*/),

    directive: $ => seq(choice(
      $._macro_directive,
      $._integer_directive,
      $._float_directive,
      $._string_directive,
      $._control_directive,
    )),

    _macro_directive: $ => seq(
      field('mnemonic', $.macro_mnemonic),
      $._whitespace,
      field('name', $.symbol),
      optional(choice(
        seq(optional($._whitespace), '(', optional(field('parameters', $.macro_parameters)), optional(choice(' ', '\t')), ')'),
        seq($._whitespace, field('parameters', $.macro_parameters)),
      )),
    ),
    macro_mnemonic: $ => '.macro',
    macro_parameters: $ => seq($._macro_parameter, repeat(seq(choice(' ', '\t', seq(optional(choice(' ', '\t')), ',')), $._macro_parameter))),
    _macro_parameter: $ => choice(
      $.macro_variable,
      $.symbol,
    ),

    // Operands can be on multiple lines
    _integer_directive: $ => seq(
      field('mnemonic', $.integer_mnemonic),
      $._whitespace,
      field('operands', $.integer_operands),
      optional(repeat(choice('\n', ' ', '\t'))),
    ),
    integer_mnemonic: $ => choice('.word', '.half', '.hword', '.byte', '.dword'),
    integer_operands: $ => seq(
      $._expression,
      repeat(seq(
        choice(
          ' ',
          '\t',
          /[ \t]*,[ \t]*/,
          seq(optional(choice(' ', '\t')), optional($.comment), $._data_separator),
        ),
        $._expression,
      )),
      optional(seq($._data_separator, $.comment)),
    ),

    _float_directive: $ => seq(
      field('mnemonic', $.float_mnemonic),
      $._whitespace,
      field('operands', $.float_operands),
      repeat(choice(' ', '\t')),
    ),
    float_mnemonic: $ => choice('.float', '.double'),
    float_operands: $ => seq(
      $.float,
      repeat(seq(
        choice(
          ' ',
          '\t',
          /[ \t]*,[ \t]*/,
          seq(optional(choice(' ', '\t')), optional($.comment), $._data_separator),
        ),
        $.float,
      )),
      optional(seq($._data_separator, $.comment)),
    ),

    _string_directive: $ => seq(
      field('mnemonic', $.string_mnemonic),
      $._whitespace,
      field('string', $.string),
    ),
    string_mnemonic: $ => choice(
      '.ascii',
      '.asciiz',
      '.string',
    ),

    // Catch-all directive
    _control_directive: $ => seq(
      field('mnemonic', $.control_mnemonic),
      optional(choice(seq(
        $._whitespace,
        field('operands', $.control_operands),
        optional($._directive_operand_separator),
      ), /[ \t]+/)),
    ),
    control_mnemonic: $ => prec(-1, /\.[a-z_]+/),
    control_operands: $ => seq(
      $._control_operand,
      repeat(seq(
        $._directive_operand_separator,
        $._control_operand,
      )),
    ),
    _control_operand: $ => choice(
      $._expression,
      $.string,
    ),

    instruction: $ => seq(
      field('opcode', $.opcode),
      optional(choice(
        $.call_expression,
        seq(
          /[ \t]+/,
          optional(field('operands', choice(
            $.operands,
            $.call_expression,
          ))),
        ),
      )),
    ),
    opcode: $ => token(prec(1, /[a-zA-Z_][a-zA-Z0-9_.]*/)),
    operands: $ => seq(
      $._operand,
      repeat(seq(
        choice(',', $._operand_separator),
        $._operand,
      )),
      optional($._operand_separator),
    ),
    _operand: $ => choice(
      $.address,
      $._expression,
      $.float,
      $.string,
      $.modulo,
    ),

    call_expression: $ => seq(
      '(',
      optional(seq(
        field('arguments', $.operands)
      )),
      ')'
    ),

    // Standalone fallback, because it gets in trouble with macro_variable
    modulo: $ => token(prec(-1, '%')),

    _expression: $ => choice(
      $.binary_expression,
      $.unary_expression,
      $.parenthesized_expression,
      $.macro_variable,
      $.register,
      $.symbol,
      $.char,
      $.octal,
      $.decimal,
      $.hexadecimal,
    ),

    binary_expression: $ => choice(
      prec.left(1, seq($._left_expression, '||', $._right_expression)),
      prec.left(2, seq($._left_expression, '&&', $._right_expression)),
      prec.left(3, seq($._left_expression, '|', $._right_expression)),
      prec.left(4, seq($._left_expression, '^', $._right_expression)),
      prec.left(5, seq($._left_expression, '&', $._right_expression)),
      prec.left(6, seq($._left_expression, '==', $._right_expression)),
      prec.left(6, seq($._left_expression, '!=', $._right_expression)),
      prec.left(7, seq($._left_expression, '<', $._right_expression)),
      prec.left(7, seq($._left_expression, '>', $._right_expression)),
      prec.left(7, seq($._left_expression, '<=', $._right_expression)),
      prec.left(7, seq($._left_expression, '>=', $._right_expression)),
      prec.left(8, seq($._left_expression, '<<', $._right_expression)),
      prec.left(8, seq($._left_expression, '>>', $._right_expression)),
      prec.left(9, seq($._left_expression, '+', $._right_expression)),
      prec.left(9, seq($._left_expression, '-', $._right_expression)),
      prec.left(10, seq($._left_expression, '*', $._right_expression)),
      prec.left(10, seq($._left_expression, '/', $._right_expression)),
      prec.left(10, seq($._left_expression, '%', $._right_expression)),
      prec.left(20, seq($._left_expression, '=', $._right_expression)),
    ),
    _left_expression: $ => prec(1, seq(field('left', $._expression), optional($._operator_separator))),
    _right_expression: $ => field('right', $._expression),

    parenthesized_expression: $ => seq('(', $._expression_argument, ')'),
    unary_expression: $ => choice(
      prec.right(11, seq('-', $._expression_argument)),
      prec.right(11, seq('~', $._expression_argument)),
      prec.right(11, seq('!', $._expression_argument)),
    ),
    _expression_argument: $ => field('argument', $._expression),

    // Primitives
    char: $ => /'(?:\\.|[^'\\])'/,
    string: $ => /"(?:\\.|[^"\\])*"/,
    octal: $ => /-?0[0-7]*/,
    decimal: $ => /-?\d+/,
    hexadecimal: $ => /-?0[xX][0-9a-fA-F]+/,
    float: $ => token(choice(
      seq(
        choice(/-?\d+\.?\d*/, /-?\d*\.\d+/),
        optional(/[eE][+-]?\d+/),
      ),
      /-?\d+[eE][+-]?\d+/,
    )),

    register: $ => token(seq('$', choice(
      'zero', 'at', 'gp', 'sp', 'fp', 'ra',
      /[vk][01]/, /[ac][0-3]/, /t[0-9]/, /s[0-8]/,
      /f?([12]?[0-9]|3[0-1])/,
    ))),

    // Macro variables can start with percent, dollar and backslash
    // Lower precedence than registers, because they overlap.
    macro_variable: $ => /[%$\\][0-9a-zA-Z_:$%\\]+/,

    // Bare identifier without colon
    symbol: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // identifier with colon
    _label: $ => seq($.label, /[ \t]*/),
    label: $ => token(prec(2, /[a-zA-Z_][a-zA-Z0-9_]*:/)),

    // Match addresses
    // Examples: main($s4), value+4($s1), ($v1), -0x10($a0)
    // Cannot match expression-like addresses: main, main+2
    address: $ => prec(1, seq(
      optional(field('offset', $._expression)),
      '(', field('base', choice($.register, $.macro_variable)), ')',
    )),
  },
});
