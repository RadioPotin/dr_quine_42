#include <stdio.h>
#define DESTINATION "Grace_kid.c"
#define QUINE "#include <stdio.h>%c#define DESTINATION %cGrace_kid.c%c%c#define QUINE %c%s%c%c#define FT(readmode)int main(void){FILE *f = fopen(DESTINATION, readmode);fprintf(f, QUINE, 10, 34, 34, 10, 34, QUINE, 34, 10, 10, 34, 119, 34, 10, 10, 10, 10);fclose(f);}%cFT(%c%c%c)%c/*%cthis is quite tedious%c*/%c"
#define FT(readmode)int main(void){FILE *f = fopen(DESTINATION, readmode);fprintf(f, QUINE, 10, 34, 34, 10, 34, QUINE, 34, 10, 10, 34, 119, 34, 10, 10, 10, 10);fclose(f);}
FT("w")
/*
this is quite tedious
*/
