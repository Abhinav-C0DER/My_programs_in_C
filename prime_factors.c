#include <stdio.h>
int a, i;

void getprime(int);
void getprime(int a) {
	if (a < 1)
		printf("try some other number!");
	else

		while (a % 2 == 0) {
			printf("%d ", 2);
			a = a / 2;
		}
	for (i = 3; i * i <= a; i = i + 2) {
		while (a % i == 0) {
			printf("%d ", i);
			a = a / i;
		}
	}
	if (a > 2)
		printf("%d ", a);
}

int main(void) {
	int num;

	printf("Enter a number for factorization: ");
	scanf("%d", &num);
	printf("the prime factors are: ");
	getprime(num);
	printf("\n");
	return 0;
}
