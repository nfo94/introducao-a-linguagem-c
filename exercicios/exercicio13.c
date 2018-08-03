    #include <stdio.h>
    #include <stdlib.h>


    int main()
    {
        float shopping_total, shopping_surplus, taxes;
        shopping_surplus = shopping_total - 500;
        taxes = shopping_surplus * 0,5;
        scanf("%f", shopping_total);

        if (shopping_total > 500)
        {
            printf("You'll have to pay %f in taxes", taxes);
        }
    return 0;
    }
