#include <stdio.h>
#include <stdlib.h>

/* */

int main() 
{
	
	int i;
	scanf("%d", &i);
	while(i < 20)
	{
		if(i % 2 == 0)
		{
			i = i + 1;
			printf("%d\n", i);
		}
		else
		{
			i = i + 1;	
		}
	}
	if(i % 2 != 0)
	{
		i = i + 1;
	}
		
	return 0;
}
