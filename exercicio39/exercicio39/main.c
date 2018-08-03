/*****************
*Natália Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

#define MAX 500

int main()
{
    char frase[MAX + 1];
    int i = 0, contador = 0; //esse uma variável para representar os caracteres
    fgets(frase, MAX + 1, stdin);

    while (frase[i] != '\0') //não é \0? segue o fluxo
    {
        if (frase[i] != '\n') //não é \n? conta 1
        {
            ++contador;
        }
        ++i; //segue para o próximo caractere
    }
    printf("%d", contador);

/*obs: o '\0' e '\n' precisam estar especificados nessas aspas*/
    return 0;
}
