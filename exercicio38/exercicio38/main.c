/*****************
*Nat�lia Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[19];
    printf("Type a name: \n");
    fgets(name, 19, stdin); //o scanf deve ser utilizado para ler palavras, e n�o frases

/*  se a pessoa apertar "enter", al�m de ter o \0 no final tem \n
    o gets serve para quando tiv�rmos controle total da entrada
    de dados do usu�rio, mas se ele digitar mais do que deve
    haver� viola��o de mem�ria
*/

    puts(name);

    return 0;
}
