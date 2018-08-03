#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i;
	scanf("%d", &i);
	while (i >= 0 && i < 20){
		i = i + 1;
		printf("%d\n", i);
	}
	
	return 0;
}
