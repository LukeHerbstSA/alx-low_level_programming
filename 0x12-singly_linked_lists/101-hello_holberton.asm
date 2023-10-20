section .text
	global _start

_start:
	mov edx, len
	mov ecx, holberton
	mov ebx, 1
	mov eax, 4
	int 0x80

	mov eax, 0
	int 0x80
; Damn why name storages funky names like edx, ecx etc?
; why not just give user friendly names like edx = int reg?
; or exc = char reg?
section .data
	holberton db "Hello, Holberton",10 ; 10 = ascii for \n
	len equ $ -holberton
