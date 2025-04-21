
.arch i8086, nojumps

.code16

.globl start

.globl main_cs
.globl main_ds


######################################################################
# signature
######################################################################

_sig:
    .byte 0x55, 0xAA
    .word start
    .word 0x04
    .word 0x1000
    .word 0x03
    .word 0x00
    .word 0x00
    .word 0x00
    .asciz "Test"
    .fill 256 - (. - _sig), 1, 0xFF


######################################################################
# code
######################################################################

start:
    # the start

    cli


    # segments (tiny model; CS=DS=ES=SS)

    mov %cs,%ax
    mov %ax,%ds
    mov %ax,%es
    mov %ax,%ss
    mov $0xFFFF,%sp

    mov %ax,main_cs
    mov %ax,main_ds


    # clear BSS

    mov $bss_start,%di
    mov $bss_end,%cx
    sub %di,%cx
    xor %al,%al
    cld
    rep stosb


    # start

    call main

    hlt


######################################################################
# data
######################################################################

    .align 4

main_cs:
    .word 0x00

main_ds:
    .word 0x00

