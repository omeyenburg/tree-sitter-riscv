/**
 * @file A syntax parser for the MIPS Instruction Set Architecture.
 * @author Oskar Meyenburg <oskar.meyenburg@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "mips",
  extras: $ => [
      /\s|\t/,
      $.line_comment,
      $.block_comment,
  ],

  rules: {
    source_file: $ => optional(seq(
      $._statement,
      repeat(seq(
        choice('\n', ';'),
        optional($._statement),
      ))
    )),

    // Each statement can be a directive, label, instruction
    _statement: $ => choice(
      $.directive,
      seq($.label, optional($._statement)),
      $.instruction,
      $.macro
    ),
    //_statement: $ => choice($.directive, $.label, $.instruction),

    // A directive consists of a name beginning with a dot,
    // optionally followed by more arguments
    directive: $ => seq($.meta, optional(seq(/[\s\t]+/, $.attributes))),
    //directive: $ => /[.][a-z]+.*/,
    meta: $ => /[.][a-z_]+/,
    attributes: $ => choice(
      $._number,
      $.string,
      /[^\n"#0-9]+/
    ),

    // Macros
    macro: $ => token(/[a-zA-Z_]+\(.*\)/),

    // Labels
    _identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    label: $ => /[a-zA-Z_][a-zA-Z0-9_]*:/,

    // Instructions
    instruction: $ => seq($.opcode, optional($.operands)),
    opcode: $ => /[a-z][a-z.]*/,
    operands: $ => seq($._operand, repeat(seq(',', $._operand))),

    _operand: $ => choice(
      $.register,
      $.macro_variable,
      $._number,
      $.address,
    ),

    // Match any register
    // Examples: $7, $t1, $test, $zero

    // Match any macro variable
    // The starting symbol depends on the assembler in use
    // Examples: %value \\value
    macro_variable: $ => /[%\\][0-9a-zA-Z_:$%\\]+/,

    // Match any number
    _number: $ => choice($.char, $.octal, $.decimal, $.hexadecimal, $.float),

    // Match any address
    // Examples: main, main($s4), ($v1), -0x10($a0)
    address: $ => choice(
      $._identifier,
      seq(
        optional(choice($._identifier, $._char, $._octal, $._decimal, $._hexadecimal)),
        '(',
        $._register,
        ')'
      )
    ),

    // Primitives
    _char: $ => /'[^']'/,
    _string: $ => /"[^"]*"/,
    _octal: $ => /-?0[0-7]*/,
    _decimal: $ => /-?\d+/, // Would match octal and decimal
    _hexadecimal: $ => /-?0[xX][0-9a-fA-F]+/,
    //float: $ => /-?\d+(\.\d+)?([eE]-?\d+)?/, // Would match decimal and float
    _float: $ => choice(
      seq(
        choice(/-?\d+\.?\d*/, /-?\d*\.\d+/),
        optional(/[eE]-?\d+/)
      ),
      /-?\d+[eE]-?\d+/
    ),
    _register: $ => /[$][0-9a-z]+/,

    char: $ => $._char,
    string: $ => $._string,
    octal: $ => $._octal,
    decimal: $ => $._decimal,
    hexadecimal: $ => $._hexadecimal,
    float: $ => $._float,
    register: $ => $._register,

    // Comments
    line_comment: $ => token(seq('#', /.*/)),
    block_comment: $ => token(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '*/')),
  }
});
