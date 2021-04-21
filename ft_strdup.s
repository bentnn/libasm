global _ft_strdup

section   .text
    extern _ft_strlen
    extern _ft_strcpy
    extern _malloc
_ft_strdup:
    xor rax, rax
    cmp rdi, 0x0
    je return

    call _ft_strlen
    inc rax
    push rdi
    mov rdi, rax
    call _malloc
    pop rsi
    cmp rax, 0x0
    je return

    mov rdi, rax
    call _ft_strcpy

return:
    ret