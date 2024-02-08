//Q.3 a Program to print even numbers from 1 to N using a do-while loop.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=1,a;
    printf("Enter Any Number :");
    scanf("%d",&a);
    do
    {
    if (n%2==0) {
    printf("%d\n",n);
    }
n++;
    } while (n<=a);
    

    return 0;
}