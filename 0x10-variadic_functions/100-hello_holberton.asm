global main				;moving to _start
section .data                           ;.data starts
	msg db 10,"Hello, Holberton"	;string initialized
	l equ $-msg			;string's length
section .text				;.text starts
main:					;_start label
	mov rax, 1			;sys_write function
	mov rdi, 1			;std_out file descriptor
	mov rsi, msg			;offset of msg
	mov rdx, l			;msg's length
	syscall				;call the Kernel

	mov rax, 60			;sys_exit function
	mov rdi, 0			;successful termination
	syscall				;call The Kernel
