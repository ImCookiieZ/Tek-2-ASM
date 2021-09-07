    [BITS 64]

    global mytoupper
    section .text

mytoupper:
    push rbp
    mov rbp, rsp

    xor rcx, rcx

loop:
    cmp BYTE[rdi + rcx], 0x0
    jz end

    cmp BYTE[rdi + rcx], 0x60
    jg higher
    inc rcx
    jmp loop

higher:
    cmp BYTE[rdi + rcx], 0x7b
    jl change
    inc rcx
    jmp loop

change:
    mov r8b, BYTE[rdi + rcx]
    sub r8b, 0x20
    mov BYTE[rdi + rcx], r8b
    jmp loop

end:
    mov rax, rdi
    mov rsp, rbp
    pop rbp
    ret