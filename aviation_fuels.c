#include <stdio.h>
int main(void){
	int inp;
	float hc, par, cpar, aro, ad, hc2, ad1;
	printf("---Press 1 for jet fuel, press 2 for aviation gasoline: ");
	scanf("%d", &inp);
	switch (inp) {
		case 1:
			printf("---You have selected jet fuel.\n");
			printf("Enter the percentage for hydrocarbon: ");
			scanf("%f", &hc);
			printf("Enter the percentage paraffins: ");
			scanf("%f", &par);
			printf("Enter the percentage of cycloparaffins: ");
			scanf("%f", &cpar);
			printf("Enter the percentage of aromatics: ");
			scanf("%f", &aro);
			printf("Enter the percentage of additives: ");
			scanf("%f", &ad);
			if (99<=hc && hc<100 && par>=60 && par<=70 && cpar<=25 && cpar>= 15 && aro>=13 && aro<=25 && ad<1)
				printf("The information composition provided is good for the jet fuel type A or A-1.\n");
			else 
				printf("The composition is not suitable to be considered as jet fuel A or A-1.\n");
			break;

		case 2:
			printf("---You have selected aviation gasoline.\n");
			printf("Enter the percentage of hydrocarbon: ");
			scanf("%f", &hc2);
			printf("Enter the percentage of additives: ");
			scanf("%f", &ad1);
			if (hc2<=99 && hc2<100 && ad1<1)
				printf("The composition entered is good for the aviation gasoline.\n");
			else
				printf("The compositon is not suitable to be considered as aviation gasoline.\n");
			break;

		default:
			printf("---You did not select any of the fuel type above, the program is terminated.\n");
	}
	return 0;
}
