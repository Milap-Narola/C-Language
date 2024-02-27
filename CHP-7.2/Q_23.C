/*
A B C D E
  B C D E
    C D E
      D E
        E*/
#include <stdio.h>
int main()
{
    int i, j, s;
    for (i = 65; i <= 69; i++)
    {
        for (s = 65; s < i; s++)
        {
            printf("  ");
        }
        for (j = i; j <= 69; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}