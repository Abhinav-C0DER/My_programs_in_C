#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s;
    printf("Enter the length of 1st side of the triangle: ");
    scanf("%f", &a);
    printf("Enter the length of 2nd side of the triangle: ");
    scanf("%f", &b);
    printf("Enter the length of 3rd side of the triangle: ");
    scanf("%f", &c);
    s = (a + b + c) / 2;
    printf("The area of traingle is:%f", sqrt(s * (s - a) * (s - b) * (s - c)));
    return 0;


}