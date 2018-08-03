#include <stdio.h>
#include <stdlib.h>


int main() {
    float a, b, c, operacao1, operacao2, operacao3, operacao4;

    scanf("%f%f%f", &a, &b, &c);
     operacao1 = (a * b)/c;
     operacao2 = (a * a) + b + (5 * c);
     operacao3 = (a * b * c) + b + ((c / 3) * 5) - 1;
     operacao4 = (a * b * c) * (a * b * c) * (a * b * c) / 2;
    printf("%f%f%f%f", operacao1, operacao2, operacao3, operacao4);

    return 0;
}

