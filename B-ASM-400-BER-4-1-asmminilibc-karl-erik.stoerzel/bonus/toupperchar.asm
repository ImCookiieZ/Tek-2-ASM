    [BITS 64]

    global mytoupperchar
    section .text

mytoupperchar:
    push rbp
    mov rbp, rsp

    cmp edi, 0x60
    jg higher
    jmp end

higher:
    cmp edi, 0x7b
    jl change
    jmp end

change:
    sub edi, 0x20
    jmp end

end:
    mov eax, edi
    mov rsp, rbp
    pop rbp
    ret