/********************************
*	Natália Ferreira Oliveira   *
* 	                            *
*   Study of C functions        *
********************************/

#include <stdio.h>
#include <stdlib.h>

int imprimir_varios(int quantidade){
    while (quantidade){     //enquanto quantidade for diferente de 0
        printf("I love programming\n");
        --quantidade;
    }
    printf("The value of x is: %d\n", quantidade);
}

int main(){
    int x;
    scanf("%d", &x);
    imprimir_varios(x);
    printf("The value of x is: %d\n", x);

    return 0;
}
