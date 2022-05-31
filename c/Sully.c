#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
int exec_nb = 5;
if (exec_nb < 0){return 0;}
static char dest_sourcefile[10];
static char dest_executable[10];
char *quine= "#include <stdio.h>%c#include <string.h>%c#include <stdlib.h>%cint main(void){%cint exec_nb = %d;%cif (exec_nb < 0){return 0;}%cstatic char dest_sourcefile[10];%cstatic char dest_executable[10];%cchar *quine=%c%s%c;%cstrcpy(dest_sourcefile, %cSully_%c);%cstrcpy(dest_executable, %cSully_%c);%cdest_executable[6] = exec_nb + 48;%cdest_executable[8] = '%c%c';%cdest_sourcefile[6] = exec_nb + 48;%cstrcat(dest_sourcefile, %c.c%c);%cdest_sourcefile[9] = '%c%c';%cvoid* fd = fopen(dest_sourcefile, %cw%c);%cfprintf(fd, quine, 10, 10, 10, 10, (exec_nb - 1), 10, 10, 10, 10, 34, quine, 34, 10, 34, 34, 10, 34, 34, 10, 10, 92, 48, 10, 10, 34, 34, 10, 92, 48, 10, 34, 34, 10, 10, 10, 10, 34, 37, 37, 37, 34, 10, 10, 34, 37, 37, 34, 10, 10, 10);%cfclose(fd);%cstatic char cmdline[128];%csprintf(cmdline, %cgcc -o %cs %cs && ./%cs%c, dest_executable, dest_sourcefile, dest_executable);%cstatic char compile[128];%csprintf(compile, %cgcc -o %cs %cs%c, dest_executable, dest_sourcefile);%cif (exec_nb != 0){system(cmdline);}else{system(compile);}%c}%c";
strcpy(dest_sourcefile, "Sully_");
strcpy(dest_executable, "Sully_");
dest_executable[6] = exec_nb + 48;
dest_executable[8] = '\0';
dest_sourcefile[6] = exec_nb + 48;
strcat(dest_sourcefile, ".c");
dest_sourcefile[9] = '\0';
void* fd = fopen(dest_sourcefile, "w");
fprintf(fd, quine, 10, 10, 10, 10, (exec_nb - 1), 10, 10, 10, 10, 34, quine, 34, 10, 34, 34, 10, 34, 34, 10, 10, 92, 48, 10, 10, 34, 34, 10, 92, 48, 10, 34, 34, 10, 10, 10, 10, 34, 37, 37, 37, 34, 10, 10, 34, 37, 37, 34, 10, 10, 10);
fclose(fd);
static char cmdline[128];
sprintf(cmdline, "gcc -o %s %s && ./%s", dest_executable, dest_sourcefile, dest_executable);
static char compile[128];
sprintf(compile, "gcc -o %s %s", dest_executable, dest_sourcefile);
if (exec_nb != 0){system(cmdline);}else{system(compile);}
}
