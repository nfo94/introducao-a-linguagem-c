#include <stdio.h>
#include <stdlib.h>

/* Exercícior com for para imprimir todos os números pares entre 20 e 50 */

int main() {
	int n;
	
	for(n = 20; n <= 50; n = n + 2){
		printf("%d\n", n);
	}
	
	system("pause");
	return 0;
}
