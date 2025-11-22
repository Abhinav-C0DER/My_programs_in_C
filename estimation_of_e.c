#include <stdio.h>

int main(void) {
    long long fact = 1;
    double sum = 0.0;
    int n;

    for (n = 1; n < 8; n++) {
        fact *= n; 
        sum += (double)n / fact;
    }

    printf("The result of the series is: %f\n", sum);
    return 0;
}