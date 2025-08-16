;; Mnemonics for directives
[
  (macro_mnemonic)
  (integer_mnemonic)
  (float_mnemonic)
  (string_mnemonic)
  (control_mnemonic)
] @keyword

(section_type) @type
(option_flag) @character.special

;; Labels & symbols
[
  (global_label)
  (local_label)
  (local_label_reference)
  (global_numeric_label)
  (local_numeric_label)
  (local_numeric_label_reference)
  (symbol)
] @label

;; Macros
(macro_name) @label
[
  (macro_variable)
  (macro_parameter)
] @parameter

;; Instructions
(opcode) @function
(register) @parameter

;; Primitives
[
  (octal)
  (decimal)
  (hexadecimal)
] @number

(float) @number.float
(char) @character
(string) @string

(ERROR) @error
(ERROR (_) @error)

[
  (line_comment)
  (block_comment)
  (preprocessor)
] @comment

;; Punctuation
[
  ","
  ";"
] @punctuation.delimiter

[
  "("
  ")"
] @punctuation.bracket

;; Operators
[
  "|"
  "||"
  "&"
  "&&"
  "^"
  "<"
  "<<"
  ">"
  ">>"
  "+"
  "-"
  "*"
  "~"
  "!"
  "=="
  "!="
  "<="
  ">="
  "%"
  "="
  (modulo_operator)
  (division_operator)
] @operator
