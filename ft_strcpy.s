global _ft_strcpy

section   .text
_ft_strcpy:
    mov rax, rdi
    cmp rdi, 0x0
    je return
    cmp rsi, 0x0
    je return
    xor rcx, rcx

copy_str:
    mov dil, byte [rsi + rcx]
    mov byte [rax + rcx], dil
    cmp byte [rsi + rcx], 0
    je return
    inc rcx
    jmp copy_str


return:
    ret