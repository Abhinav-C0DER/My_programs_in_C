#include <math.h>
#include <stdio.h>
int main() {
	float l1, l2, g1, g2, dis;
	printf("Enter the latitude of the 1st point(in degree): ");
	scanf("%f", &l1);
	printf("Enter the longitude of the 1st point(in degree): ");
	scanf("%f", &g1);
	printf("Enter the latitude of the 2nd point(in degree): ");
	scanf("%f", &l2);
	printf("Enter the longitude of the 2nd point(in degree): ");
	scanf("%f", &g2);
	dis = 3963 * acos((sin(l1) * sin(l2)) + (cos(l1) * cos(l2) * cos(g2 - g1)));
	printf("The distance between the two points is: %f nautical miles\n", dis);
	return 0;
}
