#include<stdio.h>
int main()
{
     int a;
printf("enter any number :");
scanf("%d",&a);
 
     if(a>0)
     {
        printf("THE NUMBER IS POSITIVE\n");
     }
     else if(a<0)
     {
        printf("THE NUMBER IS NEGATIVE\n");
     }
     else
     {
        printf("THE NUMBER IS NEUTRAL\n");
     }
    return 0;
}