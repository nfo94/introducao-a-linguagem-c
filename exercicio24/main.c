#include <stdio.h>
#include <stdlib.h>

/*  */

int main() {
	
	int i = 1;
    
    printf("1\n");
	while(i >= 1 && i < 19)
    {
		i = i + 2;
		printf("%d\n", i);	
    }
	
	system ("pause");
	return 0;
}
