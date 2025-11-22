#include <stdio.h>
#include <math.h>
int main()
{
    float angle, sin, cos, tan, cosec, sec, cot;
    printf("Enter the angle in degrees: ");
    scanf("%f", &angle);
    angle = angle * (3.14159 / 180.0); // Convert degrees to radians
    sin = sinf(angle);
    cos = cosf(angle);
    tan = tanf(angle);
    cosec = 1/sin;
    sec = 1/cos;
    cot = 1/tan;
    printf("Sine: %f\n", sin);
    printf("Cosine: %f\n", cos);
    printf("Tangent: %f\n", tan);
    printf("Cosecant: %f\n", cosec);
    printf("Secant: %f\n", sec);
    printf("Cotangent: %f\n", cot);
   
    return 0;



}