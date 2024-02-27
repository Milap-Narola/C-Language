#include <stdio.h>
int main()
{
    int  i,n;
    printf("Enter any nymber:");
    scanf("%d",&n);
    for (i=100; i >=n; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}