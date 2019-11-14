global _start

section .data
message: db 'hello, world!', 10

section .text
_start:
    mov rax, 1          ;sdsaadass
    mov rdi, 1          ;dsadas
    mov rsi, message    ;asdasd
    mov rdx, 14         ;sadsa
    syscall             ;dasdas
