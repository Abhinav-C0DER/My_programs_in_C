#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 5, d = 10, e = 50, f = 100, n;
    int count_a, count_b, count_c, count_d, count_e, count_f;
  
    printf("Enter the amount in INR: ");
    scanf("%d", &n);
    count_f = n / f;
    n = n % f;
    count_e = n / e;
    n = n % e;
    count_d = n / d;
    n = n % d;
    count_c = n / c;
    n = n % c;
    count_b = n / b;
    n = n % b;
    count_a = n / a;
    n = n % a;
    printf("The minimum number of notes required are:\n");
    printf("100 INR notes: %d\n", count_f);
    printf("50 INR notes: %d\n", count_e);
    printf("10 INR notes: %d\n", count_d);
    printf("5 INR notes: %d\n", count_c);
    printf("2 INR notes: %d\n", count_b);
    printf("1 INR notes: %d\n", count_a);
    return 0;




}