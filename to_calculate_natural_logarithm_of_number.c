#include <stdio.h>
double mod_pow(double base, double exp){
    double result = 1.0;
    for (double i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}
int main(void){
    double x;
    double result = 0.0;
    printf("Enter the value of x (to calculate ln(x)): ");
    scanf("%lf", &x);
    for (int i=1; i<=10000; i++){
        result += mod_pow((x - 1) / x, i) / i;
    }
    printf("The value of ln(%lf) is approximately: %lf\n", x, result);
    return 0;
}