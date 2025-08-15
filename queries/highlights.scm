;; Mnemonics for directives
[
  (macro_mnemonic)
  (integer_mnemonic)
  (float_mnemonic)
  (string_mnemonic)
  (control_mnemonic)
] @keyword

(preprocessor) @keyword

;; Labels & symbols
[
  (local_label)
  (global_label)
  (local_numeric_label)
  (global_numeric_label)
  (symbol)
] @label

;; Macro variables
(macro_variable) @label

;; Instructions
(opcode) @function
(register) @parameter

;; Primitives
[
  (char)
  (float)
  (octal)
  (decimal)
  (hexadecimal)
] @number

;; String
(string) @string

;; Errors
(ERROR) @error
(ERROR (_) @error)

;; Comments
[
  (line_comment)
  (block_comment)
] @comment

;; Punctuation
[
  ","
  ";"
  "("
  ")"
] @punctuation.delimiter

;; Operator
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
