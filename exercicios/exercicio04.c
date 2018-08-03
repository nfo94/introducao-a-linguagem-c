#include <stdio.h>
#include <stdlib.h>

int main() {

    float altura, massa, imc;
    imc = massa / (altura * altura);
    scanf("%f%f", altura, massa);
    printf("%f", imc);

    return 0;
}
