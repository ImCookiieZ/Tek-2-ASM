[BITS 64]

global mystrlen
section .text

mystrlen:
    push rbp
    mov rbp, rsp

    mov rsi, 0x0
    mov rdx, rdi

loop:
    cmp BYTE [rdx], 0x0
    jz end
    inc rsi
    inc rdx
    jmp loop

end:
    mov rax, rsi

    mov rsp, rbp
    pop rbp
    ret