;; Highlight directives
(directive) @keyword

;; Highlight labels
(label) @label

;; Highlight opcodes
(opcode) @function.builtin

;; Highlight registers
(register) @variable.builtin

;; Highlight macro variables
(macro_variable) @variable.builtin

;; Highlight numbers
(number) @number

;; Highlight numbers
;(string) @string

;; Highlight addresses
(address) @variable.builtin

; Comments
[
  (line_comment)
  (block_comment)
] @comment @spell

; Operators & Punctuation
[
  "("
  ")"
] @punctuation.bracket

[
  ","
] @punctuation.delimiter
