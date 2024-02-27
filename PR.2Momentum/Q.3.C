#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter Any Number :");
    scanf("%d", &a);
    printf("Enter Any Number :");
    scanf("%d", &b);
    printf("Enter Any Number :");
    scanf("%d", &c);
    printf("Enter Any Number :");
    scanf("%d", &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A is max");
            }
            else
            {
                printf("D is max");
            }
        }

        else
        {
            if (c > d)
            {
                printf("C is max");
            }
            else
            {
                printf("D is max");
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("B is max");
            }
            else
            {
                printf("D is max");
            }
        }
    
    else
    {
        if (c > d)
        {
            printf("C is max");
        }
        else
        {
            printf("D is max");
        }
    }
    }
}