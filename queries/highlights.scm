;; Directives
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

;; Instructions
(opcode) @function
(register) @parameter
(relocation_type) @type

;; Macros
(macro_name) @label
[
  (macro_variable)
  (macro_parameter)
] @parameter

;; Primitives
[
  (octal)
  (binary)
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

[
  ","
  ";"
] @punctuation.delimiter

[
  "("
  ")"
] @punctuation.bracket

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
