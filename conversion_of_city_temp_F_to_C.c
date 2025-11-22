#include <stdio.h>
int main()
{
   float fahrenheit, centrigrade;
    printf("Enter the temperature of your city (In Fahrenheit): ");
    scanf("%f", &fahrenheit);
    centrigrade = (fahrenheit - 32) * 5 / 9;
    printf("The temperature in Centigrade is: %f C\n", centrigrade);
    return 0;

}
