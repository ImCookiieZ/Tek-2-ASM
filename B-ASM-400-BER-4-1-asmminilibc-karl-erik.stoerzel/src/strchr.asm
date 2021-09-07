[BITS 64]

global mystrchr
section .text

mystrchr:
    push rbp
    mov rbp, rsp

    mov rdx, rdi
    xor rcx, rcx

loop:
    cmp BYTE [rdx + rcx] , sil
    jz find
    cmp BYTE [rdx + rcx], 0x0
    jz nofind
    inc rcx
    jmp loop

nofind:
    mov rax, 0x0
    jmp end

find:   
    add rdx, rcx
    mov rax, rdx
    jmp end

end:
    mov rsp, rbp
    pop rbp
    ret
