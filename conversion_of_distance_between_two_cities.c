#include <stdio.h>
int main() {
	float dis, meter, feet, inch, cm;
	printf("Enter the distance between two cities(in Km.): ");
	scanf("%f", &dis);
	meter = dis * 1000;
	feet = meter * 3.28084;
	inch = feet * 12;
	cm = meter * 100;
	printf("The distance in meters is: %f\n", meter);
	printf("The distance in feet is: %f\n", feet);
	printf("The distance in inches is: %f\n", inch);
	printf("The distance in centimeters is: %f\n", cm);
	return 0;
}
