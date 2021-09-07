[BITS 64]

global mywrite
section .text

mywrite:
    push rbp
    mov rbp, rsp

    mov eax, 0x4
    mov ebx, edi
    mov rcx, rsi
    mov edx, edx
    int 0x80

    
end:
    mov eax, edx
    mov rsp, rbp
    pop rbp
    ret