    #include <stdio.h>
    #include <stdlib.h>


    int main()
    {
        int shopping_total, shopping_surplus, taxes;
        shopping_surplus = shopping_total - 500;
        taxes = shopping_surplus * 0,5;
        printf("Type how much did you expend: %d", &shopping_total);

            if (shopping_total > 500)
            {
                printf("You'll have to pay %d in taxes", taxes);
            }
    }
