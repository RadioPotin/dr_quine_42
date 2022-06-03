; first only comment

%macro   main_macro 0
section   .data:
destfile: db "Grace_kid.s", 0
flags equ 0102o
mode  equ 0666o
format:   db "%2$c first only comment%1$c%1$c%%macro   main_macro 0%1$csection   .data:%1$cdestfile: db %3$cGrace_kid.s%3$c, 0%1$cflags equ 0102o%1$cmode  equ 0666o%1$cformat:   db %3$c%4$s%3$c, 0%1$c%1$csection  .text%1$cdefault  rel%1$cglobal   main%1$cextern   dprintf%1$cmain:%1$c  push   rbp%1$c  mov    rbp, rsp%1$c  mov    rax, 0x2%1$c  lea    rdi, [rel destfile]%1$c  mov    rsi, flags%1$c  mov    rdx, mode%1$c  syscall%1$c  mov    rdi, rax%1$c  lea    rsi, [rel format]%1$c  mov    rdx, 10%1$c  mov    rcx, 59%1$c  mov    r8,  34%1$c  lea    r9,  [rel format]%1$c  xor    eax, eax%1$c  call   dprintf WRT ..plt%1$C  jmp    close_file%1$c  leave%1$c  ret%1$cclose_file:%1$c  mov    rax, 0x3%1$c  syscall%1$c  leave%1$c  ret%1$c%%endmacro%1$cmain_macro%1$c", 0

section  .text
default  rel
global   main
extern   dprintf
main:
  push   rbp
  mov    rbp, rsp
  mov    rax, 0x2
  lea    rdi, [rel destfile]
  mov    rsi, flags
  mov    rdx, mode
  syscall
  mov    rdi, rax
  lea    rsi, [rel format]
  mov    rdx, 10
  mov    rcx, 59
  mov    r8,  34
  lea    r9,  [rel format]
  xor    eax, eax
  call   dprintf WRT ..plt
  jmp    close_file
  leave
  ret
close_file:
  mov    rax, 0x3
  syscall
  leave
  ret
%endmacro
main_macro
