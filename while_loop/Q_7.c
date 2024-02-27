#include <stdio.h>
int main()
{
    int n, a = 1;
    printf("Enter Any Number:");
    scanf("%d", &n);
    while (a <= n)
    {
         if(a%2==1)
    printf("%d\n",a);
        a++;
    }

    return 0;
}
