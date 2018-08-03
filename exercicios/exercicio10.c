#include <stdio.h>
#include <stdlib.h>


int main (){

    int age01, age02;
    scanf("%d%d", &age01, &age02);

        if (age01 % 2 != 0 ^ age02 % 2 != 0){
            printf("Discount.\n");
        }

}
