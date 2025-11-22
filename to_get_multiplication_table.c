#include <stdio.h>
int main(void){

    int num, i, result;

    printf("ENTER A NUMBER(for multiplication table): ");
    scanf("%d", &num);

    for (i=1; i<=10; i++){
        result = num * i;
        printf("%d X %d = %d\n", num, i, result);
    }
    return 0;
}