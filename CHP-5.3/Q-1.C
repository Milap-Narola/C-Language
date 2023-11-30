#include<stdio.h>
int main()
{     int a,b,c;
      printf("Enter A value :");
      scanf("%d",&a);
      printf("Enter B value :");
      scanf("%d",&b);
      printf("Enter C value :");
      scanf("%d",&c);

    if(a<b)
    {
        if(a<c)
        {
            printf("A is minimum");
        }
    }
    if(b<a)
    {
        if(b<c)
        {
            printf("B is minimum");
        }
    }    
    if(c<a)
    {
        if(c<b)
        {
            printf("C is mimimum");
        }
    }
    return 0;
}