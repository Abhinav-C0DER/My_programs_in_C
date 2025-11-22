long modular_pow(long base, long exp, long mod){
    long result = 1;
    base %= mod;
    while (exp > 0){
        if (exp % 2 == 1)
            result = (result * base) % mod;
            exp /= 2;
            base = (base * base) % mod;   
    }
    return result;
}

long legendre_symbol(long a, long p){
    long exponent = (p-1)/2;
    long result = modular_pow(a, exponent, p);
    if (result == p-1){
        return -1;
    }
    return 1;

}

#include <stdio.h>
#include <time.h>

int main(void){
    long a, p;
    int symbol;
    clock_t start_t, end_t;
    double total_t;

    printf("Enter the integer a: ");
    scanf("%ld", &a);
    printf("Enter the odd prime p: ");
    scanf("%ld", &p);

    start_t = clock();

    symbol = legendre_symbol(a, p);

    end_t = clock();

    printf("#####################################################\n");
    printf("the legendre symbol for the above is: %d\n", symbol);
    printf("#####################################################\n");
    
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", total_t);

    return 0;

}