#include <stdio.h>
#include <stdlib.h>


int main() {
    float x, y, soma, subtracao, multiplicacao, divisao;
    scanf("%f%f", &x, &y);
    soma = x + y;
    subtracao = x - y;
    multiplicacao = x * y;
    divisao = x / y;
    printf("A soma entre os valores foi de %f.\n A subtração foi de %f.\n A multiplicação foi de %f.\n A divisão foi de %f.", soma, subtracao, multiplicacao, divisao);

    return 0;
}


