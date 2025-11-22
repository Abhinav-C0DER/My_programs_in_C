#include <stdio.h>
int main(void){
    int num, pos_count=0, neg_count=0, zer_count=0;
    char another, y, n;


    do{
        printf("Enter an integer(+ve, -ve or 0): ");
        scanf("%d", &num);

        if (num > 0 )
        pos_count++;

        if (num < 0 )
        neg_count++;

        if (num == 0)
        zer_count++;

        printf("Do yo want to another number? (y / n ):");
        scanf(" %c", &another);

    }while (another == 'y');

    printf("You entered %d positive numbers.\n", pos_count);
    printf("You entered %d negative numbers.\n", neg_count);
    printf("You entered %d zeroes.\n", zer_count);

    return 0;
}