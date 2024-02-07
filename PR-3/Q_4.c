#include <stdio.h>
main()
{
    int n, rem, mul = 1, sum = 0;
    printf("Enter Any Number");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        mul = mul * rem;
        sum = sum + rem;
        n = n / 10;
    }
    if (mul == sum)
    {
        printf("It's Magic number");
    }
    else
    {
        printf("Is Not Magic Number");
    }
    return 0;
}