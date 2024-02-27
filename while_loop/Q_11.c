#include <stdio.h>
main()
{
    int n, rem, rev = 0;
    printf("Enter any number:");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("%d\n", rev);
}