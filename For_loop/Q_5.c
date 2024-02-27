#include <stdio.h>
int main()
{
    int  i,n,sum=0;
    printf("Enter any nymber:");
    scanf("%d",&n);
    for (i=1; i <=n; i++)
    {
    sum+=i;
    }
        printf("%d\n", sum);
    return 0;
}