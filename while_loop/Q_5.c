#include <stdio.h>
int main()
{
    int n, a = 1;
    printf("Enter Any Number:");
    scanf("%d", &n);
    while (a <= n)
    {
        n * a;
    printf("%d * %d =%d\n", n, a, n * a);
        a++;
    }

    return 0;
}
