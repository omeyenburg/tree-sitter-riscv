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
    $.line_comment,
    $.block_comment,
    $.preprocessor,
    $.division_operator,
  ],

  extras: $ => [
    /[ \t\r]/,
    $.block_comment,
  ],

  inline: $ => [
    $._whitespace,
    $._expression_argument,
  ],

  conflicts: $ => [
    [$._control_directive],
    [$._statement],
    [$.control_operands],
    [$.float_operands],
    [$.instruction],
    [$.integer_operands],
    [$.macro_parameters],
    [$.operands],
  ],

  rules: {
    program: $ => seq(
      repeat($._statement),
      optional(choice(
        $.directive,
        $.instruction,
        $._label,
      )),
      optional($._comment),
    ),

    _statement: $ => prec(1, choice(
      ';',
      '\r',
      '\n',
      $.block_comment,
      choice(
        seq($.directive, choice(
          ';',
          seq(optional($.line_comment), $._line_separator),
          seq($.block_comment, optional($._line_separator)),
        )),
        seq($.instruction, choice(
          ';',
          seq(optional($.line_comment), optional('\r'), '\n'),
          seq($.block_comment, optional('\r'), optional('\n')),
        )),
      ),
      $._label,
      seq($._comment, optional('\r'), '\n'),
    )),

    _comment: $ => choice(
      $.line_comment,
      $.block_comment,
      $.preprocessor,
    ),
    _whitespace: $ => /[ \t]+/,

    // TODO: Why is this not just _operand_separator?
    _directive_operand_separator: $ => choice(/[ \t]+/, /[ \t]*,[ \t]*/, $.block_comment),

    directive: $ => seq(choice(
      $._macro_directive,
      $._integer_directive,
      $._float_directive,
      $._string_directive,
      $._control_directive,
    )),

    _macro_directive: $ => seq(
      field('mnemonic', $.macro_mnemonic),
      optional($._whitespace),
      choice($.block_comment, $._whitespace),
      field('name', $.symbol),
      optional(choice(
        seq(optional($._whitespace), '(', optional($.block_comment), optional(field('parameters', $.macro_parameters)), optional(choice(' ', '\t', $.block_comment)), ')'),
        seq($._whitespace, field('parameters', $.macro_parameters)),
      )),
    ),
    macro_mnemonic: $ => '.macro',
    macro_parameters: $ => seq(
      $._macro_parameter,
      repeat(seq(
        choice(
          ' ',
          '\t',
          $.block_comment,
          seq(optional(choice(' ', '\t', $.block_comment)), ',', optional($.block_comment)),
        ),
        $._macro_parameter,
      ),
      )),
    _macro_parameter: $ => choice(
      $.macro_variable,
      $.symbol,
    ),

    // Operands can be on multiple lines
    _integer_directive: $ => seq(
      field('mnemonic', $.integer_mnemonic),
      optional($._whitespace),
      choice($.block_comment, $._whitespace),
      field('operands', $.integer_operands),
      optional(repeat(choice('\r', '\n', ' ', '\t'))),
    ),
    integer_mnemonic: $ => choice('.word', '.half', '.hword', '.byte', '.dword', '.2byte', '.4byte', '.8byte', '.align', 'skip'),
    integer_operands: $ => seq(
      $._expression,
      repeat(seq(
        choice(
          ' ',
          '\t',
          /[ \t]*,[ \t]*/,
          seq(optional(choice(' ', '\t')), optional($._comment), choice($._data_separator, $.block_comment)),
        ),
        $._expression,
      )),
      optional(repeat($._data_separator)),
    ),

    _float_directive: $ => seq(
      field('mnemonic', $.float_mnemonic),
      $._whitespace,
      field('operands', $.float_operands),
      optional(repeat(choice('\r', '\n', ' ', '\t'))),
    ),
    float_mnemonic: $ => choice('.float', '.double', '.single'),
    float_operands: $ => seq(
      $._float_operand,
      repeat(seq(
        choice(
          ' ',
          '\t',
          /[ \t]*,[ \t]*/,
          seq(optional(choice(' ', '\t')), optional($._comment), $._data_separator),
        ),
        $._float_operand,
      )),
      optional(repeat($._data_separator)),
    ),
    _float_operand: $ => choice($.float, $.macro_variable, $.address),

    _string_directive: $ => seq(
      field('mnemonic', $.string_mnemonic),
      $._whitespace,
      field('string', $._string_operand),
      /[ \t]*/,
    ),
    string_mnemonic: $ => choice(
      '.ascii',
      '.asciiz',
      '.string',
      '.byte_string',
    ),
    _string_operand: $ => choice($.string, $.macro_variable, $.address),

    // Catch-all directive
    _control_directive: $ => seq(
      field('mnemonic', $.control_mnemonic),
      optional(choice(seq(
        optional($._whitespace),
        choice($.block_comment, $._whitespace),
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
      $.section_symbol,
      $.section_type,
      $.option_flag,
    ),

    // Specific symbols for .section directive
    section_symbol: $ => prec(-5, /\.[a-z]+/),
    section_type: $ => prec(-5, /@[a-z]+/),

    // Specific symbol for .option directive
    option_flag: $ => prec(-5, /\+[a-z]/),

    instruction: $ => seq(
      field('opcode', $.opcode),
      optional(choice(
        $._call_expression,
        seq(
          optional($._whitespace),
          choice($.block_comment, $._whitespace),
          optional(choice(
            field('operands', $.operands),
            $._call_expression,
          )),
        ),
      )),
    ),
    opcode: $ => token(prec(1, /%?[a-zA-Z_][a-zA-Z0-9_.]*/)),
    operands: $ => seq(
      $._operand,
      repeat(seq(
        choice(',', $._operand_separator, $.block_comment),
        $._operand,
      )),
      optional($._operand_separator),
    ),
    _operand: $ => choice(
      $._expression,
      $.float,
      $.string,
      $.modulo_operator,
    ),

    // Support macro-style calling.
    // Examples: `exit(0)`, `for($t0, 0, 3)`
    _call_expression: $ => prec(20, seq('(', optional($.block_comment), optional(field('operands', $.operands)), optional($.block_comment), ')')),

    // Standalone fallback, because it gets in trouble with macro_variable.
    // Used as operand in instruction.
    // Example: `2 % 5` but not `2%5` or `2% 5`
    modulo_operator: $ => token(prec(-1, '%')),

    // Matches primitives, registers, macro variables and compound expressions.
    // Does not match floats, floats are not accepted in expressions, but only
    // as standalone operands or in directives.
    // Examples: `1`, `%var + 3`, `(label + 7)`
    _expression: $ => choice(
      prec(1, $.relocation_expression),
      $.address,
      $.binary_expression,
      $.unary_expression,
      $.parenthesized_expression,
      $.macro_variable,
      $.register,
      $.symbol,
      $.local_label_reference,
      $.local_numeric_label_reference,
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
      prec.left(10, seq($._left_expression, $.division_operator, $._right_expression)),
      prec.left(10, seq($._left_expression, '%', $._right_expression)),
      prec.left(20, seq($._left_expression, '=', $._right_expression)),
    ),
    _left_expression: $ => prec(1, seq(field('left', $._expression), optional($._operator_separator))),
    _right_expression: $ => field('right', $._expression),

    parenthesized_expression: $ => prec(19, seq(
      '(',
      choice(
        $._expression_argument,
        field('operands', $.operands),
      ),
      ')',
    )),

    unary_expression: $ => choice(
      prec.right(11, seq('-', $._expression_argument)),
      prec.right(11, seq('~', $._expression_argument)),
      prec.right(11, seq('!', $._expression_argument)),
    ),

    // Examples: `%hi(foo)`, `%lo(123)`
    relocation_expression: $ => seq(
      field('operator', /%hi|%lo|%hig|%glo|%pcrel_hi|%pcrel_lo/),
      '(',
      $._expression_argument,
      ')',
    ),

    _expression_argument: $ => field('argument', $._expression),

    // Primitive data types.
    char: $ => /'(?:\\.|[^'\\])'/,
    string: $ => /"(?:\\.|[^"\\])*"/,
    octal: $ => /-?0[0-7]*/,
    decimal: $ => /-?\d+/,
    hexadecimal: $ => /-?0[xX][0-9a-fA-F]+/,

    float: $ => token(choice(
      seq(
        choice(/-?\d+\.\d*/, /-?\d*\.\d+/),
        optional(/[eE][+-]?\d+/),
        optional('f'),
      ),
      /-?\d+[eE][+-]?\d+f?/,
    )),

    register: $ => token(seq(optional('$'), choice(
      'zero', 'at', 'gp', 'sp', 'fp', 'ra',
      /[vk][01]/, /[ac][0-3]/, /t[0-9]/, /s[0-8]/,
      /[frx]?([12]?[0-9]|3[0-1])/,
    ))),

    // Macro variables can start with percent, dollar and backslash.
    // Lower precedence than registers, because they overlap.
    macro_variable: $ => /[%$\\][0-9a-zA-Z_:$%\\]+/,

    // Symbol includes label references
    symbol: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    _label: $ => seq(choice($.global_label, $.local_label, $.global_numeric_label, $.local_numeric_label), /[ \t]*/),

    // Example: `main:`
    global_label: $ => token(prec(2, /[a-zA-Z_][a-zA-Z0-9_]*:/)),

    // Example: `.L123:`
    local_label: $ => token(/\.L[0-9]+:/),
    local_label_reference: $ => /\.L[0-9]+/,

    // Example: `123:`
    global_numeric_label: $ => token(prec(2, /[1-9][0-9]+:/)),

    // Example: `1:`
    local_numeric_label: $ => token(prec(3, /[0-9]:/)),
    local_numeric_label_reference: $ => /[0-9][fb]/,

    // Examples: `main($s4)`, `value+4($s1)`, `($v1)`, `-0x10($a0)`
    // Cannot match expression-like addresses: main, main+2
    address: $ => prec(1, seq(
      optional(field('offset', $._expression)),
      '(',
      choice(
        field('base', $.register),
        field('base', $.macro_variable),
        field('base', $.symbol),
        field('operands', $.operands),
      ),
      ')',
    )),
  },
});
