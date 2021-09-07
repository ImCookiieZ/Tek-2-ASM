[BITS 64]

global mystrcmp
section .text

mystrcmp:
    push rbp
    mov rbp, rsp

    xor rdx, rdx

loop:
    mov cl, BYTE[rdi + rdx]
    cmp BYTE[rdi + rdx], 0x0
    jz end
    cmp BYTE[rsi + rdx], 0x0
    jz end
    cmp cl, BYTE[rsi + rdx]
    jnz end
    inc rdx
    jmp loop

end:
    sub cl, BYTE[rsi + rdx]
    movsx rax, cl
    mov rsp, rbp
    pop rbp
    ret