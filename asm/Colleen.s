bits 64
_start:
   mov di,42        ; only the low byte of the exit code is kept,
                    ; so we can use di instead of the full edi/rdi
   xor eax,eax
   mov al,60        ; shorter than mov eax,60
   syscall
