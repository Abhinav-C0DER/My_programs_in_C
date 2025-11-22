#include <stdio.h>
#include <windows.h>
int main()
{
    int num, i;
    long long fact = 1;
    LARGE_INTEGER frequency;
    LARGE_INTEGER start;
    LARGE_INTEGER end;
    double time_taken;
    
     QueryPerformanceFrequency(&frequency);

    printf("Enter a number(to find factorial): ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("Error: Factorial of a negative number is not defined.\n");
        return 1;
    }

    QueryPerformanceCounter(&start);
    
    for (i=1; i<=num; i++)
    {
        fact *= i;
    }

    QueryPerformanceCounter(&end);

    time_taken = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;

    printf("Factorial of %d is %lld\n", num, fact);
    printf("Time taken to compute factorial: %0.9f seconds\n", time_taken);

    return 0;
}