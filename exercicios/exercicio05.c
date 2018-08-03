#include <stdio.h>
#include <stdlib.h>


int main() {

    int dinheiro, troco;
    scanf("%d", &dinheiro);
    troco = dinheiro % 7;
    printf("%d\n", troco);

    return (0);
}

