//Q.2 a Program to print the factorial of number N using for loop.
#include <stdio.h>
int main()
{
    int n, a, fac;
    printf("Enter any number:");
    scanf("%d", &n);
    for (a = 1, fac = 1; a <= n; a++)
    {
        fac *= a;
    }
    printf("factorial is :%d = %d\n", n,fac);
    return 0;
}