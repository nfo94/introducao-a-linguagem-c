/********************************
*	Nat�lia Ferreira Oliveira   *
* 	                            *
*   Study of C functions 		*
********************************/

#include <stdio.h>
#include <stdlib.h>

#define Q '#'

void parede(int altura){    //parede variando em fun��o da altura
    int i;
    for (i = 0; i < altura; ++i){   //vai printar na tela a depender do que for dado em casa
        printf("%c", Q);            //come�a com 0 e vai somando um, enquanto isso printa
    }
    printf("\n");
}

void casa(int altura_casa){     //casa variando em fun��o da altura
    parede(altura_casa - 2);    //a fun��o parede ser� chamada 6 vezes para casa fun��o casa chamada no main
    parede(altura_casa - 2);
    parede(altura_casa);
    parede(altura_casa);
    parede(altura_casa - 2);
    parede(altura_casa - 2);
    printf("\n");
}

int main() {
    casa(6);
    casa(15);
    casa(3);
    casa(20);

	return 0;
}
