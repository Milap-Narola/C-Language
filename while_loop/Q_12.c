#include <stdio.h>
int main()
{
    int n, a = 1;
    printf("Enter any number:");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        if (a == 6)
        {
            break;
        }
            printf("%d\n", a);
    }

    return 0;
}