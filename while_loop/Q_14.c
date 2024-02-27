#include <stdio.h>
int main()
{
    int n, a = 1;
    printf("Enter any number:");
    scanf("%d", &n);
    start:
   printf("%d\n",a);
   a++;
   if (a<=n)
   {
goto start;
   }
    return 0;
}