//Q.4 a Program to print odd numbers from N to 1 using a while loop.
#include <stdio.h>
 int main()
{
    int n, a = 1;
    printf("Enter Any number");
    scanf("%d", &n);
    while (n >= a )
    {
        if(n%2==1)
        printf("%d\n", n);
        n--;
    }
}