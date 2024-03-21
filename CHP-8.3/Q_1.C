/*Q.1 Write a Program to find the average of a given 2D array.
For example
Enter the array's row size: 3
Enter the array's column size: 3
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
Average of an Array: 3.88*/
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Row Size :");
    scanf("%d", &r);
    printf("Enter column Size :");
    scanf("%d", &c);

    int a[r][c], i, j;
    float sum, avg, n;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
        n = r * c;

        avg = sum / n;
    }
    printf("\n");
    printf("%.2f\n", avg);
}