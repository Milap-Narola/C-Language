#include <stdio.h>
int main()
{

    int a, b, c;

    printf("Enter Any Number:");
    scanf("%d",&a);
    printf("Enter Any Number:");
    scanf("%d",&b);

    c=a ,a=b,b=c;
    printf("The A is %d\n B is %d\n",a,b);
    return 0;
}
