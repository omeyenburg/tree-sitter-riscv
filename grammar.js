/**
 * @file A syntax parser for the MIPS Instruction Set Architecture.
 * @author Oskar Meyenburg <oskar.meyenburg@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/**
 * Valid (C-like) preprocessor directives.
 */
// const get_preprocessor_directives = () => choice('include', 'define', 'undef', 'if', 'ifdef', 'ifndef', 'else', 'elif', 'endif', 'error', 'warning', 'pragma', 'line');

module.exports = grammar({
  name: 'mips',

  externals: $ => [
    $._operand_separator,
    $._operator_space,
    $._line_separator,
    $._data_separator,
  ],

  extras: $ => [
    // /[ \t\r\n]/,
    /\s|\\\r?\n/,
    $.block_comment,
    $._operator_space,
  ],

  inline: $ => [
    $._whitespace,
    $._expression,
    $._expression_argument,
  ],

  conflicts: $ => [
    [$.numeric_operands],
    [$.macro_parameters],
    [$._operand, $.parenthesized_expression],
  ],

  rules: {
    program: $ => seq(
      // optional(choice($.preprocessor, alias($._wrong_preprocessor, $.line_comment))),
      repeat($._statement),
      optional(seq(
        choice(
          $.directive,
          $.instruction,
          $._label,
        ),
        // Preprocessor after last statement should be parsed as line comment
        // optional(alias(choice($.preprocessor, $._wrong_preprocessor), $.line_comment)),
      )),
      optional($._comment),
    ),

    _statement: $ => prec(1, choice(
      ';',
      '\r',
      '\n',
      choice(
        seq($.directive, choice(
          ';',
          seq(optional($.line_comment), $._line_separator),
          // seq(optional(alias($.preprocessor, $.line_comment)), $._line_separator), // Parse preprocessor at line end as comment
          // seq(optional(alias($._wrong_preprocessor, $.line_comment)), $._line_separator),
          // seq($.block_comment, optional($._line_separator)),
        )),
        seq($.instruction, choice(
          ';',
          seq(optional($.line_comment), optional('\r'), '\n'),
          // seq(optional(alias($.preprocessor, $.line_comment)), optional('\r'), '\n'),
          // seq(optional(alias($._wrong_preprocessor, $.line_comment)), optional('\r'), '\n'),
          // seq($.block_comment, optional('\r'), optional('\n')),
        )),
      ),
      // seq($.preprocessor, /\r?\n/),
      // seq($.preprocessor2, /\r?\n/),
      // seq(alias($._wrong_preprocessor, $.line_comment), /\r?\n/),
      seq($.line_comment, /\r?\n/),
      // $.block_comment,

      // prec(100, seq(
      //   $._label,
      //   alias(choice($.preprocessor, $._wrong_preprocessor), $.line_comment),
      // )),

      $._label,
    )),

    _whitespace: $ => /[ \t]+/,

    // Comments
    _comment: $ => choice(
      $.line_comment,
      // $.block_comment,
    ),

    line_comment: $ => token(seq(
      choice('#', '//'),
      repeat(choice(
        /[^\\\n]/,
        seq('\\', /\r?\n/),
        seq('\\', /./),
      )),
    )),

    block_comment: $ => token(seq(
      '/*',
      repeat(choice(
        /[^*]/, // Any character except *
        seq('*', /[^/]/), // * followed by anything except /
      )),
      optional('*'),
      '*/',
    )),

    // // Preprocessor with backslash continuation.
    // // Must be followed by whitespace, newline, or backslash.
    // preprocessor: $ => token(prec(1, seq(
    //   '#',
    //   optional(/[ \t]+/), // Optional whitespace after #
    //   get_preprocessor_directives(),
    //   optional(choice(
    //     seq(
    //       /[ \t]+/, // Whitespace after directive name
    //       repeat(choice(
    //         /[^\\\n]/,
    //         seq('\\', /\r?\n/),
    //       )),
    //     ),
    //     seq('\\', /\r?\n/), // Or line continuation immediately
    //   )),
    // ))),

    // preprocessor2: $ => token(prec(1, seq(
    //   '#',
    //   optional(/[ \t]+/), // Optional whitespace after #
    //   get_preprocessor_directives(),
    //   // /[\r\n]/,
    // ))),

    // // Wrong preprocessor: directive followed by non-whitespace symbol.
    // // This should be aliased as line_comment.
    // _wrong_preprocessor: $ => token(prec(1, seq(
    //   '#',
    //   optional(/[ \t]+/), // Optional whitespace after #
    //   get_preprocessor_directives(),
    //   choice(
    //     seq(
    //       /[^ \\\t\n]/, // Missing whitespace after directive name
    //       repeat(choice(
    //         /[^\\\n]/,
    //         seq('\\', /\r?\n/),
    //       )),
    //     ),
    //     seq('\\', /\r?\n/),
    //   ),
    // ))),

    directive: $ => seq(choice(
      $._macro_directive,
      $._numeric_directive,
      $._string_directive,
      $._control_directive,
    )),

    _macro_directive: $ => seq(
      field('mnemonic', $.macro_mnemonic),
      $._whitespace,
      // optional($._whitespace),
      // choice($.block_comment, $._whitespace),
      field('name', $.macro_name),
      optional(choice(
        seq(optional($._whitespace), '(', optional(field('parameters', $.macro_parameters)), optional(choice(' ', '\t')), ')'),
        // seq(optional($._whitespace), '(', optional($.block_comment), optional(field('parameters', $.macro_parameters)), optional(choice(' ', '\t', $.block_comment)), ')'),
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
          // $.block_comment,
          // seq(optional(choice(' ', '\t', $.block_comment)), ',', optional($.block_comment)),
          seq(optional(choice(' ', '\t')), ','),
        ),
        $.macro_parameter,
      )),
    ),

    _numeric_directive: $ => seq(
      field('mnemonic', $.numeric_mnemonic),
      $._whitespace,
      // optional($._whitespace),
      // choice($.block_comment, $._whitespace),
      field('operands', $.numeric_operands),
      optional(repeat(choice('\r', '\n', ' ', '\t'))),
    ),
    numeric_mnemonic: $ => choice(
      '.byte',
      '.2byte', '.short', '.half', '.hword',
      '.4byte', '.word', '.int',
      '.8byte', '.dword', '.long', '.quad',
      '.comm', '.lcomm',
      '.align', '.balign', '.p2align',
      '.sleb128', '.uleb128',
      '.dtprelword', '.dtpreldword',
      '.skip', '.space',
      // Floats
      '.float', '.double', '.single',
    ),
    numeric_operands: $ => choice(
      seq(
        $._expression,
        repeat(seq(
          choice(
            $._operand_separator,
            seq(optional(choice(' ', '\t')), optional($._comment), ','),
            // seq(optional(choice(' ', '\t')), optional($._comment), choice($._data_separator, $.block_comment)),
            seq(optional(choice(' ', '\t')), optional($._comment), $._data_separator),
          ),
          $._expression,
        )),
        optional(repeat($._data_separator)),
      ),
      $._expression,
    ),

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
        $._whitespace,
        // optional($._whitespace),
        // choice($.block_comment, $._whitespace),
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

    // Instruction consists of an opcode and optionally a list of operands.
    instruction: $ => seq(
      field('opcode', $.opcode),
      optional(choice(
        $._call_expression,
        seq(
          $._whitespace,
          // optional($._whitespace),
          // choice($.block_comment, $._whitespace),
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
        // choice(seq(optional($.block_comment), ','), $._operand_separator),
        choice(',', $._operand_separator),
        field('operand', $._operand),
      )),
      optional($._operand_separator),
    ),
    _operand: $ => choice(
      $._expression,
      $.string,
    ),

    // Support macro-style calling.
    // Examples: `exit(0)`, `for($t0, 0, 3)`
    // _call_expression: $ => prec(20, seq('(', optional($.block_comment), optional(field('operands', $.operands)), optional($.block_comment), ')')),
    _call_expression: $ => prec(20, seq('(', optional(field('operands', $.operands)), ')')),

    // Matches primitives, registers, macro variables and compound expressions.
    //
    // Nested expression evaluation order.
    // Operands of higher precedence binary expressions cannot be
    // expressions of lower precedence.
    // Primitives, addresses and single argument expression types
    // are at the bottom of the chain.
    //
    // Examples: `1`, `%var + 3`, `(label + 7)`
    _expression: $ => $._wrapped_assignment_expression,

    _assignment_expression: $ => prec(13, seq(
      field('left', $._wrapped_assignment_expression),
      field('operator', $.assignment_operator),
      field('right', $._wrapped_logical_or_expression),
    )),
    assignment_operator: $ => token('='),
    _wrapped_assignment_expression: $ => choice(
      alias($._assignment_expression, $.binary_expression),
      $._wrapped_logical_or_expression,
    ),

    _logical_or_expression: $ => prec(1, seq(
      field('left', $._wrapped_logical_or_expression),
      field('operator', $.logical_or_operator),
      field('right', $._wrapped_logical_and_expression),
    )),
    logical_or_operator: $ => token('||'),
    _wrapped_logical_or_expression: $ => choice(
      alias($._logical_or_expression, $.binary_expression),
      $._wrapped_logical_and_expression,
    ),

    _logical_and_expression: $ => prec(2, seq(
      field('left', $._wrapped_logical_and_expression),
      field('operator', $.logical_and_operator),
      field('right', $._wrapped_bitwise_or_expression),
    )),
    logical_and_operator: $ => token('&&'),
    _wrapped_logical_and_expression: $ => choice(
      alias($._logical_and_expression, $.binary_expression),
      $._wrapped_bitwise_or_expression,
    ),

    _bitwise_or_expression: $ => prec(3, seq(
      field('left', $._wrapped_bitwise_or_expression),
      field('operator', $.bitwise_or_operator),
      field('right', $._wrapped_bitwise_xor_expression),
    )),
    bitwise_or_operator: $ => token('|'),
    _wrapped_bitwise_or_expression: $ => choice(
      alias($._bitwise_or_expression, $.binary_expression),
      $._wrapped_bitwise_xor_expression,
    ),

    _bitwise_xor_expression: $ => prec(4, seq(
      field('left', $._wrapped_bitwise_xor_expression),
      field('operator', $.bitwise_xor_operator),
      field('right', $._wrapped_bitwise_and_expression),
    )),
    bitwise_xor_operator: $ => token('^'),
    _wrapped_bitwise_xor_expression: $ => choice(
      alias($._bitwise_xor_expression, $.binary_expression),
      $._wrapped_bitwise_and_expression,
    ),

    _bitwise_and_expression: $ => prec(5, seq(
      field('left', $._wrapped_bitwise_and_expression),
      field('operator', $.bitwise_and_operator),
      field('right', $._wrapped_equality_expression),
    )),
    bitwise_and_operator: $ => token('&'),
    _wrapped_bitwise_and_expression: $ => choice(
      alias($._bitwise_and_expression, $.binary_expression),
      $._wrapped_equality_expression,
    ),

    _equality_expression: $ => prec(6, seq(
      field('left', $._wrapped_equality_expression),
      field('operator', $.equality_operator),
      field('right', $._wrapped_relational_expression),
    )),
    equality_operator: $ => token(choice('==', '!=')),
    _wrapped_equality_expression: $ => choice(
      alias($._equality_expression, $.binary_expression),
      $._wrapped_relational_expression,
    ),

    _relational_expression: $ => prec(7, seq(
      field('left', $._wrapped_relational_expression),
      field('operator', $.relational_operator),
      field('right', $._wrapped_shift_expression),
    )),
    relational_operator: $ => token(choice('<', '>', '<=', '>=')),
    _wrapped_relational_expression: $ => choice(
      alias($._relational_expression, $.binary_expression),
      $._wrapped_shift_expression,
    ),

    _shift_expression: $ => prec(8, seq(
      field('left', $._wrapped_shift_expression),
      field('operator', $.shift_operator),
      field('right', $._wrapped_additive_expression),
    )),
    shift_operator: $ => token(choice('<<', '>>')),
    _wrapped_shift_expression: $ => choice(
      alias($._shift_expression, $.binary_expression),
      $._wrapped_additive_expression,
    ),

    _additive_expression: $ => prec(9, seq(
      field('left', $._wrapped_additive_expression),
      field('operator', $.additive_operator),
      field('right', $._wrapped_multiplicative_expression),
    )),
    additive_operator: $ => token(choice('+', '-')),
    _wrapped_additive_expression: $ => choice(
      alias($._additive_expression, $.binary_expression),
      $._wrapped_multiplicative_expression,
    ),

    _multiplicative_expression: $ => prec(11, seq(
      field('left', $._wrapped_multiplicative_expression),
      field('operator', $.multiplicative_operator),
      field('right', $._simple_expression),
    )),
    multiplicative_operator: $ => token(choice('*', '%', '/')),
    _wrapped_multiplicative_expression: $ => choice(
      alias($._multiplicative_expression, $.binary_expression),
      $._simple_expression,
    ),

    // Any non-binary expression and primitive
    _simple_expression: $ => choice(
      $.parenthesized_expression,
      $.unary_expression,
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
      $.float,
    ),

    // Parenthesized expression:
    // Contains a new expression with any binary operations.
    // Example: `(2 * 3)`
    parenthesized_expression: $ => seq('(', $._expression_argument, ')'),

    // Unary expression:
    // Supports recursive nesting.
    // Examples: `-x`, `!!1`
    unary_expression: $ => seq(
      field('operator', choice(
        $.unary_minus_operator,
        $.bitwise_not_operator,
        $.logical_not_operator,
      )),
      $._expression_argument,
    ),
    unary_minus_operator: $ => token('-'),
    bitwise_not_operator: $ => token('~'),
    logical_not_operator: $ => token('!'),

    // Relocation expression:
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

    char: $ => seq('\'', choice($._escape_sequence, /[^'\\]/), '\''),
    string: $ => seq(
      '"',
      repeat(choice($._escape_sequence, /[^"\\]/)),
      '"',
    ),
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
    macro_variable: $ => token(choice(
      seq('%', /[0-9a-zA-Z_:$\\]+/),
      seq('\\', /[0-9a-zA-Z_:%$\\]+/),
      seq('$', /[0-9a-zA-Z_:%$\\]+/),
    )),
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
    //        Example: `foo bar($t0, 1, 5)`
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
