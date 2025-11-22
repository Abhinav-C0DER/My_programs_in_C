float pow(float base, int exp){
    float result = 1;
    for (int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}
#include <stdio.h>
int main(void){
    float p, r, n, q;
    char ch;
    do{
    printf("Enter the values of p: ");
    scanf("%f", &p);
    printf("Enter the values of r: ");
    scanf("%f", &r);
    printf("Enter the values of n: ");
    scanf("%f", &n);
    printf("Enter the values of q: ");
    scanf("%f", &q);
    float A = p * pow((1 + r / q), n * q); 
    printf("The amount A is: %.2f\n", A);
    printf("Do you want to continue? (y/n): ");
    scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
    
    return 0;
}