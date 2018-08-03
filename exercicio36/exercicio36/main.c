/*****************
*Natália Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

/*Função para calcular a metade do menor de dois números*/

float metadeDoMenor(float a, float b)
{
    if (a < b)
    {
       return a / 2;

/*não se esqueça que a função precisa retornar alguma coisa,
seja guardando o resultado numa variável ou colocando o return
no final de cada resultado desse!*/

    }
        else
        {
            return b / 2;
        }
}

int main()
{
    float a, b, resultado;
    printf("Type two integers: \n");
    scanf("%f%f", &a, &b);
    resultado = metadeDoMenor(a , b);
    printf("%f", resultado);

    return 0;
}
