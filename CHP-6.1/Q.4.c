#include <stdio.h>
main()
{
    int n, a = 1;
    printf("Enter Any number");
    scanf("%d", &n);
    while (n >= a )
    {
        if(n%3==0)
        printf("%d\n", n);
        n--;
    }
}