//Q.1minimum number from the given 3 numbers using nested if else.
#include <stdio.h>

 int main()
{
    int a, b, c;
    printf("Enter A :");
    scanf("%d", &a);
    printf("Enter B :");
    scanf("%d", &b);
    printf("Enter C :");
    scanf("%d", &c);

    if (a <b)
    {
        if (a < c)
        {
            printf("A is min");
        }
        else
        {
            printf("C is min");
        }
            }
        else
        {

            if (b < c)
        {
            printf(" B is min");
        }
        else
        {
            printf(" C is min");
        }
    }
    return 0;
}
