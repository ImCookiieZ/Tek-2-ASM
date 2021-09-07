[BITS 64]

global mymemcpy
section .text

mymemcpy:
    push rbp
    mov rbp, rsp

    mov rcx, 0x0

loop:
    cmp rcx, rdx
    jz end
    mov r8b , BYTE[rsi + rcx]
    mov BYTE[rdi + rcx], r8b
    inc rcx
    jmp loop
    
end:
    mov rax, rdi

    mov rsp, rbp
    pop rbp
    ret