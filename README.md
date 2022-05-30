# Dr Quine

## PDF [here](https://linx.zapashcanon.fr/cofavvtd.pdf)

The French summary of the project reads as follows:
>Un quine est un programme informatique (une sorte de métaprogramme) dont la sortie et le code source sont identiques. À titre de défi ou d’amusement, certains programmeurs essaient d’écrire le plus court quine dans un langage de programmation donné. L’opération qui consiste à ouvrir le fichier source et à l’afficher est considérée comme une tricherie. Plus généralement, un programme qui utilise une quelconque entrée de données ne peut être considéré comme un quine valide. Une solution triviale est un programme dont le code source est vide. En effet, l’exécution d’un tel programme ne produit pour la plupart des langages aucune sortie, c’est-à-dire le code source du programme.
>
> Ce projet vous invite à vous confronter au principe d’auto-reproduction et des problématiques qui en découlent. Il s’agit d’une parfaite introduction aux projets plus complexes, notamment les projets malware

## Guidelines

Make three specific [Quine](https://en.wikipedia.org/wiki/Quine_(computing)) programs as defined in the subject, in three different languages:
1. C
2. ASM
3. Whichever language, I chose OCaml

Here are the rules for each of the three programs:

### Colleen
- Executable must be named Colleen
- Execution of program must print the exact code used in that program
- Source code must have the following:
  1. a `main` function
  2. two different comments
  3. one of the comments must be inside the `main` function
  4. one of the comments must be outside all functions used
  5. one additionnal function called from the `main`.

Example of output:
```shell-session
$> clang -Wall -Wextra -Werror -o Colleen Colleen.c; ./Colleen > tmp_Colleen ; diff tmp_Colleen Colleen.c
$> 
```

### Grace
- Executable must be named Grace 
- Execution of the program must do the following:
  1. Create a **new** source file called `Grace_kid.c` and must contain the exact code used in that program.
  2. None of the following:
      1. a declared main
      2. a maximum of 3 defines
      3. a comment
- the program will be launched from a call to a MACRO.

### Sully 
- Executable must be named Sully 
- Execution of the program must do the following:
  1. Create a **new** source file called `Sully_X.c`. The X being an integer located in the original source code. The **new** source code is then compiled and executed.
  2. The program stops only when the `X` value reaches `0`, then the resulting source code is compiled but **NOT** executed.
  3. The `X` value is decremented everytime a fresh source code `Sully_X.c` is compiled **AND** executed.
  4. No other constraint beside the `X` value being initiated at 5 in the first cycle of the replication.

## Nota Bene

A valid comment is:
```C
/*
This program will print its own source when run.
*/
```

A valid macro-bound main is:
```shell-session
$> nl macro.c
#include
#define FT(x)int main(){ /* code */ }
[..]
FT(xxxxxxxx)
```
