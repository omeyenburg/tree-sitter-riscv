;; Highlight directives
(meta) @keyword
(attributes) @property.builtin

;; Highlight labels
(label) @label

;; Highlight opcodes
(opcode) @function.builtin

;; Highlight registers
(register) @variable.builtin

;; Highlight macros
(macro) @property.builtin
(macro_variable) @property.builtin

;; Highlight addresses
(address) @variable.parameter

;; Highlight primitives
(char) @number
(float) @number
(octal) @number
(decimal) @number
(hexadecimal) @number
(string) @string

;; Highlight errors
(ERROR) @lsp.type.unresolvedReference

;; Highlight comments
[
  (line_comment)
  (block_comment)
] @comment @spell

;; Highlight punctuation
[
  ","
  ";"
] @punctuation.delimiter
