#include <stdio.h>
int main()
{
    int i, n, rev = 0, rem;
    printf("Enter any nymber:");
    scanf("%d", &n);

    for (; n != 0; n /= 10)
    {
        rem = n % 10;
        rev = rev * 10 + rem;

    }
        printf("%d\n", rev);

    return 0;
}