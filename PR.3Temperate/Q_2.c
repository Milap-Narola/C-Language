#include <stdio.h>
int main()
{
    int a, digit = 0;
    printf("Enter Any Number");
    scanf("%d", &a);
    while (a != 0)
    {
        a = a / 10;
        digit++;
    }
        printf("%d", digit);
}