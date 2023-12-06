#include<stdio.h>
#define p printf
 int main()
{    
    int i,j;
     for(i=5; i>=1; i--)
     {
        for(j=i; j<=5; j++)
        {
            p("%d",j);
        }

            p("\n");
     }

    return 0;
}