#include <stdio.h>
#include <stdlib.h>

/* Exercicio para achar numero primo e, se ele não for primo, imprimir o primeiro divisor encontrado*/

int main(int argc, char *argv[]) {
	int n, divisor, achou;
	divisor = 2;
	achou = 0;
	scanf("%d", &n);
	
	while(divisor <= n/2 && !achou){
		if(n % divisor == 0){
			achou = 1;
		}
		else{
			divisor++;
		}
	}
	if(achou){
		printf("\nNao e primo e o primeiro divisor foi %d.\n", divisor);
	}
	else{
		printf("\nE primo.\n");
	}
	
	system("pause");
	return 0;
}
