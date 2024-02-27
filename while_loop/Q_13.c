#include <stdio.h>
int main()
{
    int n, a = 1;
    printf("Enter any number:");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        if (a % 3 == 0)
        {
            continue;
        }
            printf("%d\n", a);
    }

    return 0;
}