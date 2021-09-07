[BITS 64]

global mymemset
section .text

mymemset:
    push rbp
    mov rbp, rsp

    mov rcx, 0x0

loop:
    cmp rcx, rdx
    jz end
    mov BYTE[rdi + rcx], sil
    inc rcx
    jmp loop

end:
    mov rax, rdi
    
    mov rsp, rbp
    pop rbp
    ret