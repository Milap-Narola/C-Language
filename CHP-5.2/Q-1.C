#include<stdio.h>
int main()
{
     int a,b,c;
     printf("enter a value :");
     scanf("%d",&a);
     printf("enter a value :");
     scanf("%d",&b);
     printf("enter a value :");
     scanf("%d",&c);
     if(a>b)
     {   if(a>c)
         {
            printf("a is maximum");
         }
     }
     if(b>a)
     {
          if(b>c)
          {
            printf("b is maximum");
          }
     }
     if(c>a)
     {
          if(c>b)
          {
            printf("c is maximum");
          }

     }
    
    return 0;
}