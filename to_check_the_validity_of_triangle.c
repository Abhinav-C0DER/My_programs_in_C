#include <stdio.h>
int main()
{
    float a, b, c;

    printf("Enter the first angle:");
    scanf("%f", &a);
    printf("Enter the second angle: ");
    scanf("%f", &b);
    printf("Enter the third angle: ");
    scanf("%f", &c);
    if (a + b + c == 180)
    printf("The triangle is valid.");
    else    
    printf("The triangle is invalid.");
    return 0;

}
    
