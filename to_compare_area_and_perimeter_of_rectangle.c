#include <stdio.h>
int main()
{
    float a, b, ar, pr;

    printf("Enter the length of the rectangle:");
    scanf("%f", &a);
    printf("Enter the breadth of the rectangle:");
    scanf("%f", &b);
    ar = a * b;
    pr = 2 * (a + b);
    if (ar > pr)
        printf("Area is greater than perimeter.");
    else
        printf("Perimeter is greater than area.");
    return 0;
    
}