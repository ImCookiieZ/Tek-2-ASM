[BITS 64]

global mystrpbrk
section .text

mystrpbrk:
    push rbp
    mov rbp, rsp

    xor rcx, rcx
    xor rax, rax

    xor r9, r9                  ;counter for string of check chars
    xor r8, r8                  ;counter for string to check in

smallloop:
    cmp BYTE[rdi + r8], 0x0
    jz end
    cmp BYTE[rsi + r9], 0x0
    jz bigloop
    mov cl, BYTE[rdi + r8]
    cmp BYTE[rsi + r9], cl
    jz setrax
    inc r9
    jmp smallloop

bigloop:
    xor r9, r9
    inc r8
    jmp smallloop

setrax:
    mov rax, rdi
    add rax, r8
    
end:
    mov rsp, rbp
    pop rbp
    ret