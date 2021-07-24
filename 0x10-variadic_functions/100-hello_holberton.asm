global main
section .data
	msg db 10,"Hello, Holberton"
	l equ $-msg
section .text
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, l
	syscall
	mov rax, 60
	mov rdi, 0
	syscall
