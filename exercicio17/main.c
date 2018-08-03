#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary;
    scanf("%f", salary);

    if (salary <= 2000){
        salary = salary * 1.20;
    }
        else
            if (salary <= 2100){
            salary = salary * 1.18;
        }
            else
                if (salary <= 5000){
                salary = salary * 1.15;
            }
                else
                    if (salary <= 8000){
                    salary = salary * 1.12;
                }
                    else {
                        salary = salary * 1.10;
                    }
    printf("Your new salary is %f", salary);
    return 0;
}
