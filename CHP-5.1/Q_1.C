//Q.1 a Program to find the minimum number from the given 2 numbers using if else.
#include<stdio.h>

 int main()
{
   int a,b;
   printf("Enter a value :");
   scanf("%d",&a);
   printf("Enter b value :");
   scanf("%d",&b);
   

    if (a > b)
    {
        printf("b is minimum");
    }
    else
    {
        printf("a is minimum");
    }
    return 0;
}