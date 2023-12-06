#include<stdio.h>
#define p printf
 int main()
{    
    int i,j;
     for(i=1; i<=5; i++)
     {
        for(j=i; j>=1; j--)
        {
            p("%d",j);
        }

            p("\n");
     }

    return 0;
}