#include <stdio.h>
int main()
{
    float length, width, len_A1, wid_A1, len_A2, wid_A2, len_A3, wid_A3, len_A4, wid_A4, len_A5, wid_A5, len_A6, wid_A6, len_A7, wid_A7, len_A8, wid_A8;
    printf("The standered size for an A0 sheet is 1189mm x 841mm\n");
    printf("This is a program to select the size of paper of your choice system\n");
    printf("The choice you select will be A0 of your system\n");
    printf("Enter the length of paper (in mm): ");
    scanf("%f", &length);
    printf("Enter the width of paper (in mm): ");
    scanf("%f", &width);
    len_A1 = width;
    wid_A1 = length / 2;
    len_A2 = wid_A1;
    wid_A2 = len_A1 / 2;
    len_A3 = wid_A2;
    wid_A3 = len_A2 / 2;
    len_A4 = wid_A3;
    wid_A4 = len_A3 / 2;
    len_A5 = wid_A4;
    wid_A5 = len_A4 / 2;
    len_A6 = wid_A5;
    wid_A6 = len_A5 / 2;
    len_A7 = wid_A6;
    wid_A7 = len_A6 / 2;
    len_A8 = wid_A7;
    wid_A8 = len_A7 / 2;
    printf("The size of A1 paper is: %f mm x %f mm\n", len_A1, wid_A1);
    printf("The size of A2 paper is: %f mm x %f mm\n", len_A2, wid_A2);
    printf("The size of A3 paper is: %f mm x %f mm\n", len_A3, wid_A3);
    printf("The size of A4 paper is: %f mm x %f mm\n", len_A4, wid_A4);
    printf("The size of A5 paper is: %f mm x %f mm\n", len_A5, wid_A5);
    printf("The size of A6 paper is: %f mm x %f mm\n", len_A6, wid_A6);
    printf("The size of A7 paper is: %f mm x %f mm\n", len_A7, wid_A7);
    printf("The size of A8 paper is: %f mm x %f mm\n", len_A8, wid_A8);
    return 0;
}