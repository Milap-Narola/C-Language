#include <stdio.h>
int main()
{
   int a=65,n;
    printf("Enter Any Number:");
    scanf("%d", &n);
    while (a <= n)
    {
    printf("%c\t",a);
        a++;
    }

    return 0;
}
