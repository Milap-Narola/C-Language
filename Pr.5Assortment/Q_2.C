/*
Q.2 Write a Program to find the largest element from a given 2D array.
For example,Input:
Enter the array's row size: 3
Enter the array's column size: 3
Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6
Output:
The largest element is: 9*/
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Row And Column Size:");
    scanf("%d%d", &r, &c);

    printf("\n\n-:Array 01:--\n");

    int array[r][c], n = 0;

    for (int i = 0; i < r; i++)

        for (int j = 0; j < c; j++)
        {
            printf("Enter elements [%d] [%d]:", i, j);
            scanf("%d", &array[i][j]);
        }
    printf("\n");

    for (int i = 0; i < r; i++)

        for (int j = 0; j < c; j++)
        {

            if (array[i][j] > n)
                n = array[i][j];
        }

    printf("\nlarge element is :%d\n", n);
    return 0;
}
