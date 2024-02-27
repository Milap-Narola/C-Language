// Q.4 Write C Program to Swap two variables without using a third variable and without using + and - symbol.

#include <stdio.h>
int main()
{

    int a , b;

    printf("Enter Any Number:");
    scanf("%d",&a);
    printf("Enter Any Number:");
    scanf("%d",&b);

    a = a * b;
    b = b / a;
    a = a / b;
    printf("The A = %d\n B = %d\n",a,b);
    return 0;
}
