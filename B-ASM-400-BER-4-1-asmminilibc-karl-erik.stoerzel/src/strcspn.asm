[BITS 64]

global mystrcspn
section .text

mystrcspn:
    push rbp
    mov rbp, rsp

    xor r9, r9
    xor r8, r8                   ;counter of bytes

smallloop:
    cmp BYTE[rdi + r8], 0x0
    jz setrax
    cmp BYTE[rsi + r9], 0x0
    jz bigloop
    mov cl, BYTE[rdi  + r8]
    cmp BYTE[rsi + r9], cl
    jz setrax
    inc r9
    jmp smallloop

bigloop:
    xor r9, r9
    inc r8
    jmp smallloop

setrax:
    mov rax, r8

end:
    mov rsp, rbp
    pop rbp
    ret