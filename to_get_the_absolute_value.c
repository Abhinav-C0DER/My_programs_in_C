#include <stdio.h>
int main()
{
    float a, b;

    printf("Enter the number: ");
    scanf("%f", &a);
    if (a>0)
    printf("The absolute value of %f is %f\n", a, a);
    else
    {
        b = -a;
        printf("The absolute value of %f is %f\n", a, b);
    }
    return 0;
}