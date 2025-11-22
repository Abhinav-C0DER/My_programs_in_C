#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r, theta;
    printf("Enter the cartesion coordinates of x and y respectively: ");
    scanf("%f %f", &x, &y);
    r = sqrt(x * x + y * y);
    theta = atan(y / x);
    printf("The polar cordinates are: %f and %f", r, theta);
    return 0;
}