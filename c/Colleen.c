#include <stdio.h>
/*
Can I get uuuuuuuuuuh
*/
void f(void){}
int main(){
char *format="#include <stdio.h>%c/*%cCan I get uuuuuuuuuuh%c*/%cvoid f(void){}%cint main(){%cchar *format=%c%s%c;%cprintf(format,10,10,10,10,10,10,34,format,34,10,10,10,10,10,10,10);%c/*%csup%c*/%cf();%c}%c";
printf(format,10,10,10,10,10,10,34,format,34,10,10,10,10,10,10,10);
/*
sup
*/
f();
}
