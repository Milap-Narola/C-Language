//Q.2  a Program to print 10 to 1 using for loop.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=10;
    do
    {
    printf("%d\n",n--);
    } while (n>=0);
    

    return 0;
}