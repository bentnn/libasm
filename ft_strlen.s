global _ft_strlen

section   .text
_ft_strlen:
    xor rax, rax
    cmp rdi, 0
    je return

counter:
    cmp byte [rdi + rax], 0
    je return
    inc rax
    jmp counter

return:
    ret