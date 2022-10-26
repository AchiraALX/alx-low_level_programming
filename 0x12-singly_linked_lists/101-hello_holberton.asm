global_start

section .text

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, msglen
	syscall

section .data
msg:	db "Hello, Holberton\n"
msglen:	equ $ - msg
