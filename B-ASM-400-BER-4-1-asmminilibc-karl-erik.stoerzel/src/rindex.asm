[BITS 64]

global myrindex
section .text

myrindex:
    push rbp
    mov rbp, rsp

    xor rdx, rdx
    xor rcx, rcx
    

loop:
    cmp BYTE[rdi + rdx], 0x0
    jz endcmp
    cmp BYTE[rdi + rdx], sil
    jz changercx

endloop:
    inc rdx
    jmp loop

changercx:
    mov rcx, rdi
    add rcx, rdx
    jmp endloop

endcmp:
    cmp BYTE[rdi + rdx], sil
    jnz end
    mov rcx, rdi
    add rcx, rdx
    
end:
    mov rax, rcx
    mov rsp, rbp
    pop rbp
    ret