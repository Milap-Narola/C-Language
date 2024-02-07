#include <stdio.h>
int main()
{
    int a, sum = 0, last;
    printf("Enter Any Number");
    scanf("%d", &a);
    last = a % 10;
    while (a >= 9)
    {

       a= a / 10;
        sum = a + last;
    }
        printf("%d\n", sum);
}