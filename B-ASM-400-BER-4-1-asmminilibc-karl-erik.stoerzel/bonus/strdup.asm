global myputstr
section .text

myputstr:
    push rbp
    mov rbp, rsp

len:
    xor rsi, rsi
    mov rdx, rdi

loop:
    cmp BYTE [rdx], 0x0
    jz endlen
    inc rsi
    inc rdx
    jmp loop

endlen:
    mov eax, 0x4
    mov ebx, 0x1
    mov rcx, rdi
    mov edx, esi
    int 0x80

end:    
    mov eax, esi
    mov rsp, rbp
    pop rbp
    ret
    