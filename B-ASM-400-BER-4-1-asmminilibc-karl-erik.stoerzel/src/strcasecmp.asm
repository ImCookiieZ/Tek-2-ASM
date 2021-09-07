[BITS 64]

global mystrcasecmp
section .text

mystrcasecmp:
    push rbp
    mov rbp, rsp

    xor rdx, rdx
    xor rax, rax

loop:
    mov r8b, BYTE[rdi + rdx]
    mov r9b, BYTE[rsi + rdx]

    cmp r8b, 0x0
    jz end
    cmp r9b, 0x0
    jz end

    cmp r8b, 0x40
    jl cmpsecond
    cmp r8b, 0x5b
    jg cmpsecond
    add r8b, 0x20

cmpsecond:
    cmp r9b, 0x40
    jl cmpboth
    cmp r9b, 0x5b
    jg cmpboth
    add r9b, 0x20

cmpboth:
    inc rdx
    cmp r8b, r9b
    jz loop

end:
    sub r8b, r9b
    movsx rax, r8b
    mov rsp, rbp
    pop rbp
    ret