#include <stdio.h>
#include <stdlib.h>

/* Exercício para imprimir números de 20 a 50 utilizando o loop do for*/

int main() {
	int n; // não é necessário nenhuma outra variável e você não precisa igualar a 20 para começar
			
	for(n = 20; n <= 50; n = n + 1){ // começando com n = 20, até ser menor ou igual a 50, imprime o n e depois soma 1
		printf("%d\n", n); 
	}
	
	system("pause");
	return 0;
}
