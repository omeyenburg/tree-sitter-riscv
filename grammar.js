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
  ],

  extras: $ => [
    /[ \t]/,
  ],

  rules: {
    program: $ => seq(
      repeat($._statement),
      optional(choice(
        $.directive,
        $.instruction,
        $._label
      )),
      optional($.comment)
    ),

    _statement: $ => prec(1, choice(
      ';',
      '\n',
      seq(
        choice(
          $.directive,
          $.instruction,
        ),
        choice(';', seq(optional($.comment), '\n'))
      ),
      $._label,
      seq($.comment, '\n')
    )),

    comment: $ => /#.*/,

    directive: $ => seq(
      field('mnemonic', $.mnemonic),
      optional(seq(
        /[ \t]+/,
        optional(field('attributes', $.attributes))
      ))
    ),
    mnemonic: $ => token(prec(1, /[.][a-z_]+/)),
    attributes: $ => seq(
      $._attribute,
      repeat(seq(
        choice(',', $._operand_separator),
        $._attribute
      )),
      optional($._operand_separator)
    ),
    _attribute: $ => choice(
      $._expression,
      $.string,
      $.attribute,
    ),

    attribute: $ => token(prec(-1, /[^\s,)(]+/)),

    _label: $ => seq($.label, /[ \t]*/),
    label: $ => token(prec(2, /[a-zA-Z_][a-zA-Z0-9_]*:/)),

    // instruction: $ => choice(
    //   field("opcode", $.opcode),
    //   seq(
    //     field('opcode', $.opcode),
    //     /[ \t]+/,
    //     field('operands', $.operands)
    //   )
    // ),

    // instruction: $ => seq(
    //   field('opcode', $.opcode),
    //   optional(seq(/[ \t]+/, field('operands', $.operands)))
    // ),
    // opcode: $ => token(/[a-z][a-z0-9.]*/),
    // operands: $ => seq(
    //   $._operand,
    //   repeat(seq(
    //     choice(',', $._operand_separator),
    //     $._operand
    //   )),
    //   optional($._operand_separator)
    // ),
    // _operand: $ => choice(
    //   $.register,
    //   $._expression
    // ),

    instruction: $ => seq(
      field('opcode', $.opcode),
      optional(seq(
        /[ \t]+/,
        optional(field('operands', $.operands))
      ))
    ),
    opcode: $ => token(prec(1, /[a-z][a-z0-9.]*/)),
    operands: $ => seq(
      $._operand,
      repeat(seq(
        choice(',', $._operand_separator),
        $._operand
      )),
      optional($._operand_separator)
    ),
    _operand: $ => choice(
      $.register,
      $.address,
      $._expression
    ),

    _expression: $ => choice(
      $.binary_expression,
      $.unary_expression,
      $.parenthesized_expression,
      $._primary_expression
    ),

    _primary_expression: $ => choice(
      $.macro_variable,
      $.identifier,
      $.char,
      $.octal,
      $.decimal,
      $.hexadecimal,
      $.float,
    ),

    // Standard binary expressions - no special space handling
    binary_expression: $ => choice(
      prec.left(1, seq($._expression, '||', $._expression)),
      prec.left(2, seq($._expression, '&&', $._expression)),
      prec.left(3, seq($._expression, '|', $._expression)),
      prec.left(4, seq($._expression, '^', $._expression)),
      prec.left(5, seq($._expression, '&', $._expression)),
      prec.left(6, seq($._expression, '==', $._expression)),
      prec.left(6, seq($._expression, '!=', $._expression)),
      prec.left(7, seq($._expression, '<', $._expression)),
      prec.left(7, seq($._expression, '>', $._expression)),
      prec.left(7, seq($._expression, '<=', $._expression)),
      prec.left(7, seq($._expression, '>=', $._expression)),
      prec.left(8, seq($._expression, '<<', $._expression)),
      prec.left(8, seq($._expression, '>>', $._expression)),
      prec.left(9, seq($._expression, '+', $._expression)),
      prec.left(9, seq($._expression, '-', $._expression)),
      prec.left(10, seq($._expression, '*', $._expression)),
      prec.left(10, seq($._expression, '/', $._expression)),
      prec.left(10, seq($._expression, '%', $._expression)),
    ),

    unary_expression: $ => choice(
      prec.right(11, seq('-', $._expression)),
      prec.right(11, seq('~', $._expression)),
      prec.right(11, seq('!', $._expression)),
    ),

    parenthesized_expression: $ => seq('(', $._expression, ')'),

    // Primitives
    char: $ => /'[^']'/,
    string: $ => /"[^"]*"/,
    octal: $ => /-?0[0-7]*/,
    decimal: $ => /-?\d+/,
    hexadecimal: $ => /-?0[xX][0-9a-fA-F]+/,
    float: $ => token(choice(
      seq(
        choice(/-?\d+\.?\d*/, /-?\d*\.\d+/),
        optional(/[eE]-?\d+/)
      ),
      /-?\d+[eE]-?\d+/
    )),
    register: $ => token(seq('$', choice(
      'zero', 'at', 'gp', 'sp', 'fp', 'ra',
      /[vk][01]/, /[ac][0-3]/, /t[0-9]/, /s[0-8]/,
      /f?([12]?[0-9]|3[0-1])/,
    ))),
    macro_variable: $ => /[%$\\][0-9a-zA-Z_:$%\\]+/,
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Match any address
    // Examples: main, main($s4), value+4($s1), value-1, ($v1), -0x10($a0)
    address: $ => prec(1, seq(
      optional(field("offset", $._expression)),
      '(', field('base', choice($.register, $.macro_variable)), ')'
    )),
  }
})
