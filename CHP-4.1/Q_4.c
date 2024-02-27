// Q.4 Write a Program to find the formula's answer (x-y)^2.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,b,c;
    printf("enter any number");
    scanf("%f",&a);
    printf("enter any number");
    scanf("%f",&b);
    c = (a * a) - (b * b) - (2 * a * b);
    printf("Square = %.2f\n",c);
    return 0;
}
