//Q.2 a Program to find if a given number is neutral or not using a ladder if else.
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