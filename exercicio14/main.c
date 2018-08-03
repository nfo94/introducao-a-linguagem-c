#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;
    printf("Type your age:\n");
    scanf("%d", &idade);
        if (idade >= 18){
            printf("You're over age.\n");
        }
        else {
            printf("You're under age.\n");
        }

    return 0;
}
