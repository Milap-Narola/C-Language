//Q.1 a Program to print 1 to 10 using a do-while loop.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=1;
    do
    {
    printf("%d\n",n++);
    } while (n<=10);
    

    return 0;
}