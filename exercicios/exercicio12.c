    #include <stdio.h>
    #include <stdlib.h>


    int main(){
        int hours;
        scanf("%d", hours);
        if (hours >= 5 && hours <= 18){
            printf("It's already dark");
        }
        else {
            printf("It's not dark yet");
        }
    }
