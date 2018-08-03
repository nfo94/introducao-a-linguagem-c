#include <stdio.h>
#include <stdlib.h>

/* Exerc�cio para descobrir n�meros primos */

int main() {
	
	int n, divisor, achou; //n�mero a ser digitado, os n�meros para dividir, achou ou n�o achou
  	scanf("%d", &n);
  	divisor = 2; //come�a pelo 2 porque qualquer n�mero, exceto 0, � divis�vel por um e por ele mesmo
  	achou = 0; //se achou ou n�o um divisor	
  	
	while(divisor < n && !achou){ //loop do while pra fazer a verifica��o, levando em conta se achou ou n�o um divisor
  		if(n % divisor == 0){  //se o divisor � "completamente" divis�vel por 2...
  			achou = 1; //ou seja, "!achou"
		  }	
		   	else{ //se n�o achou...
		  	divisor++; //acrescenta e tenta com o pr�ximo, para encontrar um divisor
		  }
	  }
	if(achou){ 
		printf("N\n");
	}
	else{
		printf("S\n"); 
	}
	
	system("pause");
	return 0;
}

/*  no caso do n�mero 2 o fluxo vai direto para o else	
	no caso do 1, ele s� � divis�vel por ele mesmo, 
	por isso n�o � considerado n�mero primo 
*/
