//Q.2 Write a Program to check whether a number is even or odd using the ternary operator.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter Any Number");
    scanf("%d",&a);

(a%2==0)?printf("%d is Even",a) 
        :printf("%d is Odd",a);
}