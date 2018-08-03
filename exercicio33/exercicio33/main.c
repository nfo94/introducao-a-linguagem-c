#include <stdio.h>
#include <stdlib.h>


int highest_of2(int a, int b){ //para calcular o maior número entre dois inteiros fornecidos pelo usuário
    if (a > b){
        return a;
    }
        else {
            return b;
        }
}

int highest_of3(int a, int b, int c){
    return highest_of2(highest_of2(a, b), c);
}

int main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    //aqui embaixo vamos chamar a segunda função, que por sua vez chama a primeira
    printf("The highest number between %d, %d and %d is %d.\n", x, y, z, highest_of3(x, y, z));

    return 0;
}
