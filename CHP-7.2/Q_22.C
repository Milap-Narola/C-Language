/*
A B C D E
  A B C D
    A B C
      A B
        A*/
#include <stdio.h>
int main()
{
    int i, j, s;
    for (i = 69; i >= 65; i--)
    {
        for (s = 69; s > i; s--)
        {
            printf("  ");
        }
        for (j = 65; j <= i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}