[BITS 64]

global mystrncmp
section .text

mystrncmp:
    push rbp
    mov rbp, rsp

    xor ecx, ecx
    
loop:
    cmp rcx, rdx
    jz endzero
    mov r8b, BYTE[rdi + rcx]

    cmp BYTE[rsi + rcx], 0x0
    jz endcalc
    cmp BYTE[rdi + rcx], 0x0
    jz endcalc
    cmp BYTE[rsi + rcx], r8b
    jnz endcalc

    inc ecx
    jmp loop
    
endcalc:
    sub r8b, BYTE[rsi + rcx]
    movsx rax, r8b
    jmp ende

endzero:
    xor rax, rax
ende:
    mov rsp, rbp
    pop rbp
    ret