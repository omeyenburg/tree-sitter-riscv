/**
 * @file A syntax parser for the MIPS Instruction Set Architecture.
 * @author Oskar Meyenburg <oskar.meyenburg@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'mips',

  // The default ignores whitespace.
  // Overwrite the extras default to manage
  // whitespace and new lines explicitly.
  extras: $ => [
    / |\t/,
  ],

  rules: {
    program: $ => seq(
      repeat($._statement),
      optional(choice(
        $.directive,
        $.macro,
        $.instruction,
        $._label
      )),
      optional($.comment)
    ),

    // Statement
    _statement: $ => prec(1, choice(
      ';',
      '\n',
      seq(
        choice(
          $.directive,
          $.macro,
          $.instruction,
        ),
        choice(';', seq(optional($.comment), '\n'))
      ),
      $._label,
      seq($.comment, '\n')
    )),

    // Line comment starts with a hash symbol
    // Optionally prefixed with whitespace
    comment: $ => /#.*/,

    // A directive consists of a name beginning with a dot,
    // optionally followed by more arguments
    directive: $ => seq(field('mnemonic', $.mnemonic), optional( seq(
      /[ \t]+/,
      optional(field('attributes', $.attributes)) // Allow trailing space without attributes
    ))),

    // Cannot be token, because this would break punctiuation queries
    _attrsep: $ => choice(',', '(', ')'),
    mnemonic: $ => /[.][a-z_]+/,
    attributes: $ => seq($._attribute, repeat(choice(
      seq(' ', optional($._attrsep), $._attribute),
      seq('\t', optional($._attrsep), $._attribute),
      seq($._attrsep, $._attribute),
      $._attrsep,
      ' ', // Allow trailing space after attributes
      '\t'
    ))),

    _attribute: $ => choice(
      $._number,
      $.string,
      $.attribute
    ),

    // Decreased priority in favor of number and string
    attribute: $ => token(prec(-1, /[^\s,)(]+/)),

    // Macros
    macro: $ => /[a-zA-Z_]+\([^#]*\)/,

    // Labels
    _label: $ => seq(
      $.label,
      repeat(choice(' ', '\t')) // Allow trailing space
    ),
    label: $ => /[a-zA-Z_][a-zA-Z0-9_]*:/,

    // Instructions
    instruction: $ => choice(
      field("opcode", $.opcode),
      seq(
        field('opcode', $.opcode),
        /,| |\t/,
        optional(field('operands', $.operands)) // Allow trailing space without operands
      )
    ),

    opcode: $ => /[a-z][a-z0-9.]*/,

    operands: $ => seq(
      $._operand,
      repeat(choice(
        seq(' ', optional(','), $._operand),
        seq('\t',optional(','), $._operand),
        seq(',', $._operand)
      )),
      optional(choice(' ', '\t')) // Allow trailing space with operands
    ),

    _operand: $ => choice(
      $.register,
      $.macro_variable,
      $._number,
      $.address
    ),

    // Match any number
    _number: $ => choice($.char, $.octal, $.decimal, $.hexadecimal, $.float),

    // To mark negative offset
    negative: $ => $._number,

    // Match any address
    // Examples: main, main($s4), value+4($s1), value-1, ($v1), -0x10($a0)
    address: $ => choice(
      seq(
        field('label', $.identifier),
        optional(choice(
          seq('+', field('offset', $._number)),
          field('offset', $._number)
        ))
      ),
      seq(
        optional(choice(
          field('label', $.identifier),
          seq(
            optional(seq(field('label', $.identifier), '+')),
            field('offset', $._number)
          ),
          seq(
            field('label', $.identifier),
            field('offset', $._number)
          )
        )),
        '(',
        field('base', choice($.register, $.macro_variable)),
        ')'
      )
    ),

    // Primitives
    _char: $ => /'[^']'/,
    _string: $ => /"[^"]*"/,
    _octal: $ => /-?0[0-7]*/,
    _decimal: $ => /-?\d+/, // Would match octal and decimal
    _hexadecimal: $ => /-?0[xX][0-9a-fA-F]+/,
    _float: $ => token(choice( // Would match decimal and float
      seq(
        choice(/-?\d+\.?\d*/, /-?\d*\.\d+/),
        optional(/[eE]-?\d+/)
      ),
      /-?\d+[eE]-?\d+/
    )),
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    _register: $ => token(seq('$', choice(
      // General purpose names
      'zero', 'at', 'gp', 'sp', 'fp', 'ra',
      /[vk][01]/, /[ac][0-3]/, /t[0-9]/, /s[0-8]/,

      // Numeric GPRs & Floating-point
      /f?([12]?[0-9]|3[0-1])/,
    ))),

    char: $ => $._char,
    string: $ => $._string,
    octal: $ => $._octal,
    decimal: $ => $._decimal,
    hexadecimal: $ => $._hexadecimal,
    float: $ => $._float,
    register: $ => $._register,

    // Match any macro variable
    // The starting symbol depends on the assembler in use
    // Examples: %value \\value
    macro_variable: $ => /[%$][0-9a-zA-Z_:$%\\]+/,
  }
})
