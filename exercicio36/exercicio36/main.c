/*****************
*Nat�lia Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

/*Fun��o para calcular a metade do menor de dois n�meros*/

float metadeDoMenor(float a, float b)
{
    if (a < b)
    {
       return a / 2;

/*n�o se esque�a que a fun��o precisa retornar alguma coisa,
seja guardando o resultado numa vari�vel ou colocando o return
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
