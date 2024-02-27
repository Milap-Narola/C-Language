#include <stdio.h>
int main()
{
    int i, n, count = 0;
    printf("Enter first Year:");
    scanf("%d", &i);
    printf("Enter last Year:");
    scanf("%d", &n);
    for (; i <= n; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {

            printf("%d\n", i);
            count++;
        }
    }
    printf("Total Leep Year is %d:\n", count);
    return 0;
}