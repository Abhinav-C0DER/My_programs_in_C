#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4, d5, sum;

    printf("Enter your 5 digit number(integer only): ");
    scanf("%d", &num);

    d5 = num / 10000;
    d4 = (num % 10000) / 1000;
    d3 = (num % 1000) / 100;
    d2 = (num % 100) / 10;
    d1 = num % 10; 

    sum = d1 + d2 + d3 + d4 + d5;

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}