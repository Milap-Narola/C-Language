// Q.1 Write a Program to perform all arithmetic operators such as +, -, *, / and %
#include <stdio.h>

main()
{
    int a = 12, b = 6 ,c;
    printf("a is %d and b is %d\n",a,b);
    c=a+b;
    printf("a + b = %d \n",c);
    c=a-b;
    printf("a - b = %d \n",c);
    c=a*b;
    printf("a * b = %d \n",c);
    c=a/b;
    printf("a / b = %d \n",c);
    c=a%b;
    printf("when a divided by b = %d \n",c);

    return 0;
}
