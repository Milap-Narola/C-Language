//Q.5 a Program to print leap years between two given numbers using a while loop.
#include <stdio.h>
int main()
{
    int n, a,sum=0;
    printf("Enter The First year:");
    scanf("%d", &n);
    printf("Enter The last year:");
    scanf("%d", &a);

    while (n <= a)
    {
      
            printf("%d\n", n);
        n+=4;
    }
}
