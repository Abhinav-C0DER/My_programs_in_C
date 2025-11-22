#include <stdio.h>

int main() {
    int i, num;
    int primeCount = 0; 

    for (num = 1; num <= 1000; num++) {
        int isPrime = 1;

        if (num <= 1) {
            isPrime = 0;
        } else {

            for (i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime == 1) {
            primeCount++;
        }
    }

    printf("The total number of prime numbers between 1 and 1000 is: %d\n", primeCount);

    return 0;
}