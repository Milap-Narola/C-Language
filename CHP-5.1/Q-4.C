#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter Must Number");
    scanf("%d",&a);

    if(a & 1 == 0)
    {
        printf("%d is even \t",a);
    }
    else
    {
        printf("%d is odd \t ",a);
    }
    return 0;
}