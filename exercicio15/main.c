#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary;
    scanf("%f", &salary);

    if (salary <= 1000){
        salary = salary * 1.15;
    }
        else
            if (salary <= 2000){
            salary = salary * 1.10;
        }
            else
            salary = salary * 1.10;

    printf("New salary is %f\n", salary);
    return 0;
}
