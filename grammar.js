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
    _statement: $ => choice($.directive, seq($.label, optional(seq(/[\s\t]+/, $._statement))), $.instruction, token(/[a-zA-Z_]+\(.*\)/)),
    //_statement: $ => choice($.directive, $.label, $.instruction),

    // A directive consists of a name beginning with a dot,
    // optionally followed by more arguments
    directive: $ => seq(/[.][a-z_]+/, optional(seq(/[\s\t]+/, choice(
      $.number,
      $.string,
      ///[^"0-9].*/
      token(/[^\n"#0-9]+/)
    )))),
    //directive: $ => /[.][a-z]+.*/,

    // A label
    //label: $ => seq($._identifier, ':'),
    _identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    label: $ => /[a-zA-Z_][a-zA-Z0-9_]*:/,

    //instruction: $ => choice(
    //  seq($.opcode, /[\s\r\n\r;]+/),
    //  seq($.opcode, /[\s\t]+/, $.operands)
    //),
    //instruction: $ => seq($.opcode, /[\s\t]+/, $.operands),
    //instruction: $ => seq($.opcode, /[\s\t]+.*/), // operands
    instruction: $ => seq($.opcode, optional($.operands)),
    //instruction: $ => seq($.opcode, /[^\n\r]*/),
    opcode: $ => /[a-z]+/,

    operands: $ => seq($._operand, repeat(seq(',', $._operand))),
    //operands: $ => /.*/,

    _operand: $ => choice(
      $.register,
      $.macro_variable,
      $.number,
      $.address,
    ),

    // Match any register
    // Examples: $7, $t1, $test, $zero
    register: $ => /[$][0-9a-z]+/,

    // Match any macro variable
    // The starting symbol depends on the assembler in use
    // Examples: %value \\value
    macro_variable: $ => /[%\\][0-9a-zA-Z_:$%\\]+/,

    // Match any immediate
    // Examples: 124, -01, 0x3A
    number: $ => choice(
      /-?\d+/, 
      /-?\d+\.\d+([eE]-?\d+)?/,
      /-?0[xX][0-9a-fA-F]+/
    ),

    // Match any address
    // Examples: main, main($s4), ($v1), -0x10($a0)
    address: $ => choice(
      $._identifier,
      seq(
        optional(choice($._identifier, $.number)),
        '(',
        $.register,
        ')'
      )
    ),

    string: $ => /"[^"]*"/,
    // maybe:
    //string: $ => /"([^"\\]|\\.)*"/,

    // Comments
    line_comment: $ => token(seq('#', /.*/)),
    block_comment: $ => token(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '*/')),
  }
});
