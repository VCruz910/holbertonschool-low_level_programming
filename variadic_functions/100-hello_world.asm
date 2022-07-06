section .data
msg db "Hello, World",0xa
len equ $ - msg

section .text
global main

main:
mov eax, 4
mov ebx, 1
mov ecx, msg
mov edx, len
int 0x80
syscall

mov rax, 60
mov rdi, 0
syscall
