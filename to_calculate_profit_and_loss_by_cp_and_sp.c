#include <stdio.h>
int main()
{
    float cp, sp, profit, loss;
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);
    if (sp > cp)
    {
        profit = sp - cp;
        printf("The profit is: %f\n", profit);
    
    }
    else 
    {
        loss = cp - sp;
        printf("The loss is: %f\n", loss);
    }
    return 0;
}