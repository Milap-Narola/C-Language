#include<stdio.h>
#define p printf
 int main()
{    
    int i,j;
     for(i=5; i>=1; i--)
     {
        for(j=1; j<=i; j++)
        {
              p("%d",j%2==1);
        }

            p("\n");
     }

    return 0;
}