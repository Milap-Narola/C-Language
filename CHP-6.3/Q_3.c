//Q.3 a Program to print the multiplication table of the number N using any type of loop.
#include <stdio.h>
int main()
{
    int n, a ;
    printf("Enter any number:");
    scanf("%d", &n);
    for (a = 1; a <= n; ++a)
    {
       
    printf("%d * %d = %d \n",a,n,a*n);
    }
    return 0;
}