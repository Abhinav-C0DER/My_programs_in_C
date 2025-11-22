#include<stdio.h>
int main() {
   float sal; float dearness; float rent; float gsal;
    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &sal);
    dearness = 0.4*sal;
    rent = 0.2+sal;
    gsal = sal + dearness + rent;
    printf("Ramesh's gross salary is: %f\n", gsal);
    return 0;
}
