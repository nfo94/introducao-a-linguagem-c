/*****************
*Nat�lia Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

#define MAX 500

int main()
{
    char frase[MAX + 1];
    int i = 0, contador = 0; //esse uma vari�vel para representar os caracteres
    fgets(frase, MAX + 1, stdin);

    while (frase[i] != '\0') //n�o � \0? segue o fluxo
    {
        if (frase[i] != '\n') //n�o � \n? conta 1
        {
            ++contador;
        }
        ++i; //segue para o pr�ximo caractere
    }
    printf("%d", contador);

/*obs: o '\0' e '\n' precisam estar especificados nessas aspas*/
    return 0;
}
