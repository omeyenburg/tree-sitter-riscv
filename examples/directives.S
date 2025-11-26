# Numeric directives
.word 0x42, 0xFF, 123
.half 0, 1, 2,
      3, 4, 5,
      6, 7, 8
.float .42f
.double 1.0e-10

# Directives with expressions
.byte 42 % 2
.word label + 4

# String directives
.ascii "foo"
.asciiz "bar"

# Other examples
.text
.section .data, "aw", @progbits
.type symbol, @function
.globl main
.extern external
.set noat
.equ CONST, 42
.file "test.s"
