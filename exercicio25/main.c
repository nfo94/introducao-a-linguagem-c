#include <stdio.h>
#include <stdlib.h>

/* Exercício para descobrir números primos */

int main() {
	
	int n, divisor, achou; //número a ser digitado, os números para dividir, achou ou não achou
  	scanf("%d", &n);
  	divisor = 2; //começa pelo 2 porque qualquer número, exceto 0, é divisível por um e por ele mesmo
  	achou = 0; //se achou ou não um divisor	
  	
	while(divisor < n && !achou){ //loop do while pra fazer a verificação, levando em conta se achou ou não um divisor
  		if(n % divisor == 0){  //se o divisor é "completamente" divisível por 2...
  			achou = 1; //ou seja, "!achou"
		  }	
		   	else{ //se não achou...
		  	divisor++; //acrescenta e tenta com o próximo, para encontrar um divisor
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

/*  no caso do número 2 o fluxo vai direto para o else	
	no caso do 1, ele só é divisível por ele mesmo, 
	por isso não é considerado número primo 
*/
