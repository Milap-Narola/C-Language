#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter any nymber:");
    scanf("%d", &n);
    for (i = 65; i <= n; i++)
    {
        printf("%c\t", i);
    }
    return 0;
}