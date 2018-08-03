/*******************
* Natália Oliveira *
********************/

#include <stdio.h>
#include <stdlib.h>

void imprimir_numero(int tamanho) //função para imprimir o número a mesma quantidade de vezes dele mesmo, ex: 1, 22, 333, etc
{
    int i;
    for(i = 0; i < tamanho; i++) //a começar de zero, enquanto a repetição não for igual a ele mesmo, continua a imprimi-lo
    {
        printf("%d", tamanho);
    }
    printf("\n");
}

int main()
{
    int total_linhas, i; //total de linhas a serem imprimidas e i vezes que serão impressas
    printf("Type a integer number:\n");
    scanf("%d", &total_linhas);
    printf("\n");
    for (i = 0; i < total_linhas; i++) //começando por zero, enquanto o i for menor que o total de linhas, continua chamando a função
    {
        imprimir_numero(i + 1); //vai somando a cada vez que terminar de imprimir os número da função, ex: 0 + 1, 1 + 1, etc
    }

    return 0;
}

/* é preciso declarar o i sempre que ele for usado como contagem de qualquer coisa
   o i++ da 24 linha acrescenta na contagem do próprio for
*/
