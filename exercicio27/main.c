#include <stdio.h>
#include <stdlib.h>

/* Exerc�cio para imprimir n�meros de 20 a 50 utilizando o loop do for*/

int main() {
	int n; // n�o � necess�rio nenhuma outra vari�vel e voc� n�o precisa igualar a 20 para come�ar
			
	for(n = 20; n <= 50; n = n + 1){ // come�ando com n = 20, at� ser menor ou igual a 50, imprime o n e depois soma 1
		printf("%d\n", n); 
	}
	
	system("pause");
	return 0;
}
