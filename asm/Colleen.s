;im useless
default rel
global  main
global  start
extern  printf
section .text
start:
  call  main
  ret
main:
  push  rbp
  mov   rbp, rsp ;second useless comment
  lea   rdi, [rel format]
  mov   rsi, 10
  mov   rdx, 59
  mov   rcx, 34
  lea   r8, [rel format]
  xor   eax, eax
  call  printf WRT ..plt
  mov   rsp, rbp
  leave
  ret
section .data
format:
  db "%2$cim useless%1$cdefault rel%1$cglobal  main%1$cglobal  start%1$cextern  printf%1$csection .text%1$cstart:%1$c  call  main%1$c  ret%1$cmain:%1$c  push  rbp%1$c  mov   rbp, rsp %2$csecond useless comment%1$c  lea   rdi, [rel format]%1$c  mov   rsi, 10%1$c  mov   rdx, 59%1$c  mov   rcx, 34%1$c  lea   r8, [rel format]%1$c  xor   eax, eax%1$c  call  printf WRT ..plt%1$c  mov   rsp, rbp%1$c  leave%1$c  ret%1$csection .data%1$cformat:%1$c  db %3$c%4$s%3$c, 0 %2$c Newline + 0 at the end of the data byte%1$c", 0 ; Newline + 0 at the end of the data byte
