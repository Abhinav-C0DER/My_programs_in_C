#include <stdio.h>

int main() {
  float length, breadth, radius, per_rec, cir_cirm, ar_rec, ar_cir, pi;
  pi = 3.14;
  printf("Enter the length of the rectancle (in cm): ");
  scanf("%f", &length);
  printf("Enter the breadth of the rectancle (in cm): ");
  scanf("%f", &breadth);
  printf("Enter the radius of the circle (in cm): ");
  scanf("%f", &radius);
  per_rec = 2 * (length + breadth);
  printf("Perimeter of the rectangle is: %f cm\n", per_rec);
  cir_cirm = 2 * pi * radius;
  printf("Circumference of the circle is: %f cm\n", cir_cirm);
  ar_rec = length * breadth;
  printf("Area of the rectangle is: %f cm^2\n", ar_rec);
  ar_cir = pi * radius * radius;
  printf("Area of the circle is: %f cm^2\n", ar_cir);
  return 0;
}
