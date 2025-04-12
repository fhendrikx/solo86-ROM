
.arch i8086, nojumps

.code16

.text

.globl con_putc


######################################################################
# code
######################################################################

#include <arch/ports.h>

con_putc:
    mov %sp,%bx
    mov 2(%bx),%ax
    outb %al,$COM0_DATA
    ret

