global _ft_strcmp

section   .text
_ft_strcmp:
    xor rax, rbx
    cmp rdi, 0x0
    je return
    cmp rsi, 0x0
    je return
    xor rcx, rcx


compare:
    movzx rax, byte [rdi + rcx]
    movzx rbx, byte [rsi + rcx]

    cmp rax, rbx
    jne return
    cmp byte [rdi + rcx], 0
    je return
    inc rcx
    jmp compare

return:
    sub rax, rbx
    ret