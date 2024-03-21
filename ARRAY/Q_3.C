#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter Row Size:");
    scanf("%d", &r);

    printf("Enter Column Size:");
    scanf("%d", &c);

    int a[r][c], sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter Array Elements[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)

        for (int j = 0; j < c; j++)
            sum = sum + a[i][j];

    printf("%d ", sum);
}