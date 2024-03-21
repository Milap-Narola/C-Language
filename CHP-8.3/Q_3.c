/*
Q.3 Write a Program to find the sum of diagonal elements from a given 2D array.
For example,
Input:
Enter the array's row & column size: 3
Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6
Output:
The sum of diagonal elements of an Array: 13*/
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Row & Column: ");
    scanf("%d %d", &r, &c);

    int a[r][c] ,sum=0;

    printf("\n\n-:Array Of 01:-\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter A Elements [%d] [%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n-:Array Of Sum:-\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                printf("%d ", a[i][j]);
            sum += a[i][j];
            }
            else
            {
                printf("- ");
            }
        }
            printf("\n");
    }
    printf("\n\nThe sum of boundary elements array : %d", sum);
}
