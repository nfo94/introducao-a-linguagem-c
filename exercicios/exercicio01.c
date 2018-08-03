#include <stdio.h>
#include <stdlib.h>


int main()

{
    float x, y, w, plus, subtract;
    scanf("%f%f", &x, &y);
    plus = x + y;
    printf("O resultado da soma foi de %f. Agora digite outro valor:\n", plus);
    scanf("%f", &w);
    subtract = plus - w;
    printf("O resultado da subtracao foi de %f\n", subtract);
    return 0;
}

