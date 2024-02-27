//Q.2the maximum number from the given 4 numbers using nested if else. 
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter A value:");
    scanf("%d",&a);
    printf("Enter B value:");
    scanf("%d",&b);
    printf("Enter C value:");
    scanf("%d",&c);
    printf("Enter D value:");
    scanf("%d",&d);
    
     if(a>b)
     {
         if(a>c)
         {
           if(a>d)
           {
             printf("A is maximum");
           }  
         } 
     }
     if(b>a)
     {
         if(b>c)
         {
            if(b>d)
            {
                printf("B is maximum");
            }
         } 
     }
     if(c>a)
     {
         if(c>b)
         {
            if(c>d)
            {
                printf("c is maximum");
            }
         }
     }
     if(d>a)
     {
         if(d>b)
         {
            if(d>c)
            {
                printf("d is maximum");
            }
         }
     }
    return 0;
}