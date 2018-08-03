/*****************
*Natália Oliveira*
******************/

#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int a, fat;
    printf("Type a number to calculate it's factorial: \n");
    scanf("%d", &a);
    fat = factorial(a);
    printf("The factorial of %d is %d.\n\n", a, fat);

    return 0;
}
