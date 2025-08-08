;; Directives
(mnemonic) @keyword
(attribute) @operator

;; Labels
[
  (label)
  (identifier)
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
(comment) @comment

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
  "/"
  "~"
  "!"
  "=="
  "!="
  "<="
  ">="
  "%"
  (modulo)
] @operator
