    [BITS 64]

    global mytolowerchar
    section .text

mytolowerchar:
    push rbp
    mov rbp, rsp

    cmp edi, 0x40
    jg higher
    jmp end

higher:
    cmp edi, 0x5b
    jl change
    jmp end

change:
    add edi, 0x20
    jmp end

end:
    mov eax, edi
    mov rsp, rbp
    pop rbp
    ret