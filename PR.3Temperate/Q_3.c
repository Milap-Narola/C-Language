#include <stdio.h>
int main()
{
    int a, sum = 0,first, last;
    printf("Enter Any Number\t");
    scanf("%d", &a);
    last = 1 % 10;
    while (first >= 10)
    {

        first = first / 10;
        sum = first + last;
    }
    printf("sum of a first and last =%d:\t", sum);

}