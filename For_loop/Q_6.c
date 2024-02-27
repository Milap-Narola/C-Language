#include <stdio.h>
int main()
{
    int i, n;
    long fac =1;
    printf("Enter any nymber:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fac*=i;
    }
        printf("factorial is :%ld\n",fac);
    return 0;
}