/*****************
*Natália Oliveira*
*Funções em  C   *
******************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float celsius_farenheit (float celsius){ //função para converter celsius em farenheit
    return 1.8 * celsius + 32; //vai retornar o valor em farenheit realizando essa conta
}

int main(){
    float c, f;
    printf("Type a temperature to convert to farenheit:\n");
    scanf("%f", &c);
    f = celsius_farenheit(c); //processamento dos dados é depois!
    printf("This temperature is %f farenheit.\n", f);

    return 0;
}
