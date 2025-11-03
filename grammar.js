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
    $._division_operator,
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
    [$.float_operands],
    [$.instruction],
    [$.integer_operands],
    [$.macro_parameters],
    [$.operands],
    [$._expression, $._primary_expression],
    [$._operand, $.parenthesized_expression],
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
      $.preprocessor,
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
    ),
    _whitespace: $ => /[ \t]+/,

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
      field('name', $.macro_name),
      optional(choice(
        seq(optional($._whitespace), '(', optional($.block_comment), optional(field('parameters', $.macro_parameters)), optional(choice(' ', '\t', $.block_comment)), ')'),
        seq($._whitespace, field('parameters', $.macro_parameters)),
      )),
    ),
    macro_mnemonic: $ => '.macro',
    macro_parameters: $ => seq(
      $.macro_parameter,
      repeat(seq(
        choice(
          ' ',
          '\t',
          $.block_comment,
          seq(optional(choice(' ', '\t', $.block_comment)), ',', optional($.block_comment)),
        ),
        $.macro_parameter,
      )),
    ),

    _integer_directive: $ => seq(
      field('mnemonic', $.integer_mnemonic),
      optional($._whitespace),
      choice($.block_comment, $._whitespace),
      field('operands', $.integer_operands),
      optional(repeat(choice('\r', '\n', ' ', '\t'))),
    ),
    integer_mnemonic: $ => choice(
      '.byte',
      '.2byte', '.short', '.half', '.hword',
      '.4byte', '.word', '.int',
      '.8byte', '.dword', '.long', '.quad',
      '.comm', '.lcomm',
      '.align', '.balign', '.p2align',
      '.sleb128', '.uleb128',
      '.dtprelword', '.dtpreldword',
      '.skip', '.space',
    ),
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
      '.asciz',
      '.ascii',
      '.asciiz',
      '.string',
      '.stringz',
    ),
    _string_operand: $ => choice($.string, $.macro_variable, $.address),

    _control_directive: $ => seq(
      field('mnemonic', $.control_mnemonic),
      optional(choice(seq(
        optional($._whitespace),
        choice($.block_comment, $._whitespace),
        field('operands', $.control_operands),
      ), /[ \t]+/)),
    ),
    control_mnemonic: $ => prec(-1, /\.[a-z0-9_]+/),
    control_operands: $ => seq(
      $._control_operand,
      repeat(seq(
        $._control_operand_separator,
        $._control_operand,
      )),
    ),
    _control_operand: $ => choice(
      $._expression,
      $.string,
      $.section_type,
      $.option_flag,
    ),
    _control_operand_separator: $ => choice(
      $._operand_separator,
      /[ \t]*,[ \t]*/,
      $._data_separator,
    ),

    section_type: $ => prec(-5, /@[a-z]+/),
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
      field('operand', $._operand),
      repeat(seq(
        choice(',', $._operand_separator, $.block_comment),
        field('operand', $._operand),
      )),
      optional($._operand_separator),
    ),
    _operand: $ => choice(
      $._expression,
      $.float,
      $.string,
    ),

    _call_expression: $ => prec(20, seq('(', optional($.block_comment), optional(field('operands', $.operands)), optional($.block_comment), ')')),

    _expression: $ => choice(
      $._wrapped_logical_or_expression,
      $.relocation_expression,
      $.address,
      $.macro_variable,
      $.register,
      $.local_label_reference,
      $.symbol,
      $.local_numeric_label_reference,
      $.char,
      $.octal,
      $.binary,
      $.decimal,
      $.hexadecimal,
      $.parenthesized_expression,
      $.unary_expression,
    ),

    // Precedence ladder.
    _logical_or_expression: $ => prec(1, seq(
      field('left', $._wrapped_logical_or_expression),
      // optional($._whitespace),
      field('operator', $.logical_or_operator),
      field('right', $._wrapped_logical_and_expression),
    )),
    _wrapped_logical_or_expression: $ => choice(
      alias($._logical_or_expression, $.binary_expression),
      $._wrapped_logical_and_expression,
    ),

    _logical_and_expression: $ => prec(2, seq(
      field('left', $._wrapped_logical_and_expression),
      // optional($._whitespace),
      field('operator', $.logical_and_operator),
      field('right', $._wrapped_bitwise_or_expression),
    )),
    _wrapped_logical_and_expression: $ => choice(
      alias($._logical_and_expression, $.binary_expression),
      $._wrapped_bitwise_or_expression,
    ),

    _bitwise_or_expression: $ => prec(3, seq(
      field('left', $._wrapped_bitwise_or_expression),
      // optional($._whitespace),
      field('operator', $.bitwise_or_operator),
      field('right', $._wrapped_bitwise_xor_expression),
    )),
    _wrapped_bitwise_or_expression: $ => choice(
      alias($._bitwise_or_expression, $.binary_expression),
      $._wrapped_bitwise_xor_expression,
    ),

    _bitwise_xor_expression: $ => prec(4, seq(
      field('left', $._wrapped_bitwise_xor_expression),
      // optional($._whitespace),
      field('operator', $.bitwise_xor_operator),
      field('right', $._wrapped_bitwise_and_expression),
    )),
    _wrapped_bitwise_xor_expression: $ => choice(
      alias($._bitwise_xor_expression, $.binary_expression),
      $._wrapped_bitwise_and_expression,
    ),

    _bitwise_and_expression: $ => prec(5, seq(
      field('left', $._wrapped_bitwise_and_expression),
      // optional($._whitespace),
      field('operator', $.bitwise_and_operator),
      field('right', $._wrapped_equality_expression),
    )),
    _wrapped_bitwise_and_expression: $ => choice(
      alias($._bitwise_and_expression, $.binary_expression),
      $._wrapped_equality_expression,
    ),

    _equality_expression: $ => prec(6, seq(
      field('left', $._wrapped_equality_expression),
      // optional($._whitespace),
      field('operator', $.equality_operator),
      field('right', $._wrapped_relational_expression),
    )),
    _wrapped_equality_expression: $ => choice(
      alias($._equality_expression, $.binary_expression),
      $._wrapped_relational_expression,
    ),

    _relational_expression: $ => prec(7, seq(
      field('left', $._wrapped_relational_expression),
      // optional($._whitespace),
      field('operator', $.relational_operator),
      field('right', $._wrapped_shift_expression),
    )),
    _wrapped_relational_expression: $ => choice(
      alias($._relational_expression, $.binary_expression),
      $._wrapped_shift_expression,
    ),

    _shift_expression: $ => prec(8, seq(
      field('left', $._wrapped_shift_expression),
      // optional($._whitespace),
      field('operator', $.shift_operator),
      field('right', $._wrapped_additive_expression),
    )),
    _wrapped_shift_expression: $ => choice(
      alias($._shift_expression, $.binary_expression),
      $._wrapped_additive_expression,
    ),

    _additive_expression: $ => prec(9, seq(
      field('left', $._wrapped_additive_expression),
      // optional($._whitespace),
      field('operator', $.additive_operator),
      field('right', $._wrapped_multiplicative_expression),
    )),
    _wrapped_additive_expression: $ => choice(
      alias($._additive_expression, $.binary_expression),
      $._wrapped_multiplicative_expression,
    ),

    _multiplicative_expression: $ => prec(11, seq(
      field('left', $._wrapped_multiplicative_expression),
      // optional($._whitespace),
      field('operator', $.multiplicative_operator),
      field('right', $._wrapped_assignment_expression),
    )),
    _wrapped_multiplicative_expression: $ => choice(
      alias($._multiplicative_expression, $.binary_expression),
      $._wrapped_assignment_expression,
    ),

    _assignment_expression: $ => prec(13, seq(
      field('left', $._wrapped_assignment_expression),
      // optional($._whitespace),
      field('operator', $.assignment_operator),
      field('right', $._primary_expression),
    )),
    _wrapped_assignment_expression: $ => choice(
      alias($._assignment_expression, $.binary_expression),
      $._primary_expression,
    ),

    // The bottom layer: primitives and parens
    _primary_expression: $ => choice(
      $.relocation_expression,
      $.address,
      $.macro_variable,
      $.register,
      $.local_label_reference,
      $.symbol,
      $.local_numeric_label_reference,
      $.char,
      $.octal,
      $.binary,
      $.decimal,
      $.hexadecimal,
      $.parenthesized_expression,
      $.unary_expression,
    ),

    parenthesized_expression: $ => seq(
      '(',
      field('argument', $._expression),
      ')',
    ),

    // Individual operator nodes
    logical_or_operator: $ => token('||'),
    logical_and_operator: $ => token('&&'),
    bitwise_or_operator: $ => token('|'),
    bitwise_xor_operator: $ => token('^'),
    bitwise_and_operator: $ => token('&'),
    equality_operator: $ => token(choice('==', '!=')),
    relational_operator: $ => token(choice('<', '>', '<=', '>=')),
    shift_operator: $ => token(choice('<<', '>>')),
    additive_operator: $ => choice('+', '-'),
    multiplicative_operator: $ => choice(token('*'), token('%'), $._division_operator),
    assignment_operator: $ => token('='),

    unary_expression: $ => choice(
      seq(field('operator', $.unary_minus_operator), field('argument', $._expression_argument)),
      seq(field('operator', $.bitwise_not_operator), field('argument', $._expression_argument)),
      seq(field('operator', $.logical_not_operator), field('argument', $._expression_argument)),
    ),
    unary_minus_operator: $ => token('-'),
    bitwise_not_operator: $ => token('~'),
    logical_not_operator: $ => token('!'),

    relocation_expression: $ => seq(
      field('type', $.relocation_type),
      '(',
      $._expression_argument,
      ')',
    ),

    relocation_type: $ => token(choice(
      '%abs64',
      '%call16',
      '%dtprel',
      '%got',
      '%got_hi',
      '%got_lo',
      '%gprel',
      '%hi',
      '%lo',
      '%pc16',
      '%pc32',
      '%pcrel_hi',
      '%pcrel_lo',
      '%tls_got_hi',
      '%tls_got_lo',
      '%tlsgd_hi',
      '%tlsgd_lo',
      '%tprel',
      '%tprel_add',
      '%tprel_hi',
      '%tprel_lo',
    )),

    _expression_argument: $ => field('argument', $._expression),

    // Primitive data types
    octal: $ => /-?0[0-7]*/,
    binary: $ => /-?0b[01]+/,
    decimal: $ => prec(-1, /-?\d+/),
    hexadecimal: $ => /-?0[xX][0-9a-fA-F]+/,

    float: $ => token(choice(
      seq(
        choice(/-?\d+\.\d*/, /-?\d*\.\d+/),
        optional(/[eE][+-]?\d+/),
        optional(choice('f', 'd')),
      ),
      /-?\d+[eE][+-]?\d+f?/,
    )),

    _escape_sequence: $ => token(
      seq(
        '\\',
        choice(
          /[abfnrtv\\'"?]/,
          /[0-7]{1,3}/,
          /x[0-9a-fA-F]{2}/,
          /u[0-9a-fA-F]{4}/,
          /U[0-9a-fA-F]{8}/,
        ),
      ),
    ),

    char: $ => seq('\'', choice($._escape_sequence, /[^'\\]/), '\''),

    string: $ => seq(
      '"',
      repeat(choice($._escape_sequence, /[^"\\]/)),
      '"',
    ),

    register: $ => token(seq(
      optional('$'),
      choice(
        'zero', 'at', 'gp', 'sp', 'fp', 'ra',
        /[vV][0-1]/,
        /[kK][0-1]/,
        /[cC][0-3]/,
        'tp',
        /f[ts](?:[0-9]|1[01])/,
        /fa[0-7]/,
        /[aA][0-7]/,
        /[sS](?:[0-9]|1[01])/,
        /[tT][0-9]/,
        /[frxFRX]?(?:[0-9]|[12][0-9]|30|31)/,
      ),
    )),

    macro_variable: $ => token(choice(
      seq('%', /[0-9a-zA-Z_:$\\]+/),
      seq('\\', /[0-9a-zA-Z_:%$\\]+/),
      seq('$', /[0-9a-zA-Z_:%$\\]+/),
    )),
    macro_parameter: $ => token(/[%$\\]?[0-9a-zA-Z_:$%\\]+/),
    macro_name: $ => token(/[a-zA-Z_][a-zA-Z0-9_$]*/),

    _label: $ => seq(choice($.global_label, $.local_label, $.global_numeric_label, $.local_numeric_label), /[ \t]*/),

    local_label: $ => token(prec(3, /\.L[a-zA-Z0-9_$]*:/)),
    local_label_reference: $ => prec(1, /\.L[a-zA-Z0-9_$]*/),

    global_label: $ => token(prec(2, /[a-zA-Z_.][a-zA-Z0-9_.$]*:/)),
    symbol: $ => prec(-1, /[a-zA-Z_.][a-zA-Z0-9_.$]*/),

    global_numeric_label: $ => token(prec(2, /[1-9][0-9]+:/)),

    local_numeric_label: $ => token(prec(3, /[0-9]:/)),
    local_numeric_label_reference: $ => token(/[0-9][fb]/),

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
