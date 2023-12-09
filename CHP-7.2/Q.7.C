#include <stdio.h>
#define p printf
int main()
{
    int i, j,s;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            p("%d ", j);
        }
        for (s = 1; s <= i; s++)
        {
         
            p(" ");
            
        }
        for (j = i; j >= 1; j--)
        {
            p("%d", j);
        }

            p("\n");
    }

    return 0;
}


   