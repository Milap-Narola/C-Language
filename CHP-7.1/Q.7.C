#include<stdio.h>
#define p printf
 int main()
{    
    int i,j;
     for(i=65; i<=69; i++)
     {
        for(j=i; j>=65; j--)
        {
            p("%c ",j);
        }

            p("\n");
     }

    return 0;
}