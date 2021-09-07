[BITS 64]

global mystrstr
section .text

mystrstr:
    push rbp
    push rbx
    mov rbp, rsp

    mov rdx, rdi                ;first char pointer in first arg
    xor rcx, rcx                ;first complete char pointer
    xor r8, r8                  ;counter for first arg
    xor r9, r9                  ;counter for second arg
    xor rbx, rbx                ;tmp for compare

loop:
    cmp BYTE[rsi + r9], 0x0     ;found complete
    jz setrcx                  ;
    cmp BYTE[rdi + r8], 0x0     ;end of arg one
    jz end

    mov bl, BYTE[rdi + r8]
    cmp bl, BYTE[rsi + r9]
    jnz resetrdx
    cmp rdx, 0x0
    jz setrdx
    inc r9
    jmp increment

setrdx:
    mov rdx, rdi
    add rdx, r8                     
    inc r9
    jmp increment
    
resetrdx:
    xor r9, r9
    xor rdx, rdx
    jmp increment

increment:
    inc r8
    jmp loop
    
setrcx:
    mov rcx, rdx
    
end:
    mov rax, rcx
    mov rsp, rbp
    pop rbx
    pop rbp
    ret