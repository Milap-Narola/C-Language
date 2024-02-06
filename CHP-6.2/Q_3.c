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