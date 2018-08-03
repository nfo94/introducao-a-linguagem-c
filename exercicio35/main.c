/*******************
* Nat�lia Oliveira *
********************/

#include <stdio.h>
#include <stdlib.h>

void imprimir_numero(int tamanho) //fun��o para imprimir o n�mero a mesma quantidade de vezes dele mesmo, ex: 1, 22, 333, etc
{
    int i;
    for(i = 0; i < tamanho; i++) //a come�ar de zero, enquanto a repeti��o n�o for igual a ele mesmo, continua a imprimi-lo
    {
        printf("%d", tamanho);
    }
    printf("\n");
}

int main()
{
    int total_linhas, i; //total de linhas a serem imprimidas e i vezes que ser�o impressas
    printf("Type a integer number:\n");
    scanf("%d", &total_linhas);
    printf("\n");
    for (i = 0; i < total_linhas; i++) //come�ando por zero, enquanto o i for menor que o total de linhas, continua chamando a fun��o
    {
        imprimir_numero(i + 1); //vai somando a cada vez que terminar de imprimir os n�mero da fun��o, ex: 0 + 1, 1 + 1, etc
    }

    return 0;
}

/* � preciso declarar o i sempre que ele for usado como contagem de qualquer coisa
   o i++ da 24 linha acrescenta na contagem do pr�prio for
*/
