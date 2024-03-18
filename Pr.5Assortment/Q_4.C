/*Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
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
Enter row number: 0
Elements of row 0: 2, 7, 1
The sum of a row 0: 10

Enter column number: 2
Elements of column 2: 1, 4, 6
The sum of column 2: 11*/
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Row And Column Size:");
    scanf("%d%d", &r, &c);

    printf("\n\n-:Array 01:--\n");

    int array[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter elements [%d] [%d]:", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    int row;
    printf("\nEnter Row Number:");
    scanf("%d", &row);

    printf("\nElements Of Row %d:", row);

    int sum = 0;
    for (int j = 0; j < c; j++)
    {
        printf("%d", array[row][j]);
        if (j < c - 1)
        {
            printf(",");
            sum += array[row][j];
        }
        printf("\n The sum of Row %d = %d", row, sum);
    }
    int col;
    printf("\nEnter Column Number:");
    scanf("%d", &col);

    printf("\n\nElements Of Column %d:", col);

    int c_sum = 0;
    for (int i = 0; i < r; i++)
    {
        printf("%d", array[i][col]);
        if (i < r - 1)
        {
            printf(", ");
            c_sum += array[i][col];
        }
        printf("\n The sum of Column %d = %d", col, c_sum);
    }
}