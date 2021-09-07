[BITS 64]

global mymemmove
section .text

mymemmove:
    push rbp
    mov rbp, rsp

    xor rcx, rcx

loopsave:
    cmp rcx, rdx
    jz loopmove
    movsx r8, BYTE[rsi + rcx]
    push r8
    inc rcx
    jmp loopsave

loopmove:
    cmp rcx, 0x0
    jz end
    pop r8
    dec rcx
    mov BYTE[rdi + rcx], r8b
    jmp loopmove
    
end:
    mov rax, rdi
    mov rsp, rbp
    pop rbp
    ret