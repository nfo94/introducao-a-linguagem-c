#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float a, b, c, x1, x2, delta;
	scanf("%f%f%f", &a, &b, &c);

	if (a == 0){
		printf("Não é uma equação de segundo grau\n");
	}
		else {
			delta = pow(b,2) - (4 * a * c);
				}
		if (delta < 0){
			printf("Não existe raiz real\n");	
		}
			else {
				x1 = (-b + sqrt(delta)) / (2 * a);
				x2 = (-b - sqrt(delta)) / (2 * a);
				printf("As raízes são %f e %f\n", x1, x2);
			}
		
    return 0;
}
