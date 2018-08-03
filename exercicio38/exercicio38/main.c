/*****************
*Natália Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[19];
    printf("Type a name: \n");
    fgets(name, 19, stdin); //o scanf deve ser utilizado para ler palavras, e não frases

/*  se a pessoa apertar "enter", além de ter o \0 no final tem \n
    o gets serve para quando tivérmos controle total da entrada
    de dados do usuário, mas se ele digitar mais do que deve
    haverá violação de memória
*/

    puts(name);

    return 0;
}
