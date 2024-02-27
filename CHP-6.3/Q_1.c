//Q.1 a Program to print the sum of all numbers from 1 to N using for loop.
#include <stdio.h>
int main()
{
    int n, a, sum;
    printf("Enter any number:");
    scanf("%d", &n);
    for (a = 1, sum = 0; a <= n; a++)
    {
        sum += a;
    }
    printf("%d\n", sum);
    return 0;
}