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

    // Operands can be on multiple lines
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

    // Catch-all directive
    _control_directive: $ => seq(
      field('mnemonic', $.control_mnemonic),
      optional(choice(seq(
        optional($._whitespace),
        choice($.block_comment, $._whitespace),
        field('operands', $.control_operands),
        optional($._control_operand_separator),
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
      repeat1(choice(' ', '\t')),
      seq(optional(repeat(choice(' ', '\t'))), ','),
      $.block_comment,
    ),

    // Specific symbol for .section directive
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
      $.local_label_reference,
      $.symbol,
      $.local_numeric_label_reference,
      $.char,
      $.octal,
      $.binary,
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
          /[abfnrtv\\'"?]/, // standard single-char escapes
          /[0-7]{1,3}/, // octal
          /x[0-9a-fA-F]{2}/, // hex
          /u[0-9a-fA-F]{4}/, // Unicode 16-bit
          /U[0-9a-fA-F]{8}/, // Unicode 32-bit
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
        // MIPS
        'zero', 'at', 'gp', 'sp', 'fp', 'ra',
        /[vV][0-1]/, // v0–v1
        /[kK][0-1]/, // k0–k1
        /[cC][0-3]/, // c0–c3

        // RISC-V
        'tp',
        /f[ts](?:[0-9]|1[01])/, // ft0–ft11 and fs0–fs11
        /fa[0-7]/, // fa0–fa7

        // Both
        /[aA][0-7]/, // a0–a7, MIPS32 only has ..a3
        /[sS](?:[0-9]|1[01])/, // s0–s11,  MIPS only has ..s8
        /[tT][0-9]/, // t0-t9, RISC-V only has ..t6
        /[frxFRX]?(?:[0-9]|[12][0-9]|30|31)/,
      ),
    )),

    // Macro variables can start with percent, dollar and backslash.
    macro_variable: $ => token(/[%$\\][0-9a-zA-Z_:$%\\]+/),
    macro_parameter: $ => token(/[%$\\]?[0-9a-zA-Z_:$%\\]+/),
    macro_name: $ => token(/[a-zA-Z_][a-zA-Z0-9_$]*/),

    _label: $ => seq(choice($.global_label, $.local_label, $.global_numeric_label, $.local_numeric_label), /[ \t]*/),

    // Example: `.L122:`, `.Loop_1`
    local_label: $ => token(prec(3, /\.L[a-zA-Z0-9_$]*:/)),
    local_label_reference: $ => prec(1, /\.L[a-zA-Z0-9_$]*/),

    // Example: `main:`
    global_label: $ => token(prec(2, /[a-zA-Z_.][a-zA-Z0-9_.$]*:/)),
    symbol: $ => prec(-1, /[a-zA-Z_.][a-zA-Z0-9_.$]*/),

    // Example: `123:`
    // Referenced by number literal
    global_numeric_label: $ => token(prec(2, /[1-9][0-9]+:/)),

    // Example: `1:`
    local_numeric_label: $ => token(prec(3, /[0-9]:/)),
    local_numeric_label_reference: $ => token(/[0-9][fb]/),

    // Examples: `main($s4)`, `value+4($s1)`, `($v1)`, `-0x10($a0)`
    // Cannot match expression-like addresses: main, main+2
    //  NOTE: This also matches macro calls in instructions.
    //        Example: `for($t0, 1, 5)`
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
