extern printf

section .text
   global main

main:
   push rbp
   
   mov   edi, format
   xor   eax, eax
   call  printf
   mov 	 eax, 0

   pop rbp

   mov eax, 0
   ret

format: db `Hello, Holberton\n`,0
