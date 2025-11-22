#include <stdio.h>
int main() {
	int mat, phy, chem, bio, eng, aggregate;
	float percentage;
	printf("Enter your marks in Mathematics (Out of 100): ");
	scanf("%d", &mat);
	printf("Enter your marks in Physics (Out of 100): ");
	scanf("%d", &phy);
	printf("Enter your marks in Chemistry (Out of 100): ");
	scanf("%d", &chem);
	printf("Enter your marks in Biology (Out of 100): ");
	scanf("%d", &bio);
	printf("Enter your marks in English (Out of 100): ");
	scanf("%d", &eng);
	aggregate = mat + phy + chem + bio + eng;
	percentage = (aggregate / 500.0) * 100;
	printf("Your Aggregate marks are: %d\n", aggregate);
	printf("Your Percentage is: %f %%\n", percentage);
	return 0;
}
