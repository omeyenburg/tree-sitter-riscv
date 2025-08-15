#include <foo.s>

/*
 * C style block comment
 */

.text
.macro LOAD reg, val
    li \reg, \val
.end_macro

main: # comment
    LOAD $t0, 0x42
    la $a0, msg
    l.s $f0, pi
    jal func / 12

func:   jr $ra

.data
main:   .asciiz "Hello World!"
pi:     .float  3.14f
