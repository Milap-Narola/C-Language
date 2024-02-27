#include <stdio.h>
int main()
{
    int n, a = 1, fac = 1;
    printf("Enter Any Number:");
    scanf("%d", &n);
    while (a <= n)
    {
        fac *= a;
        a++;
    }
    printf("%d\n", fac);

    return 0;
}
