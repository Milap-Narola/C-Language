/*
Q.2 Write a Program to find the average of a 1D array.
Enter array size: 5
Enter array elements:
a[0] = 12
a[1] = 42
a[2] = 18
a[3] = 50
a[4] = 26
*/
#include <stdio.h>
int main()
{
    int n, i, j, sum = 0;
    printf("Enter Array Size:\n");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Value [%d]:", i);
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum += array[i];
        
    }
    printf("Avarage is = [%d]\n", sum/n,sum);
}