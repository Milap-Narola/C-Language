/*
Q.1 Write a Program to find the length of a 1D array.
Enter array size: 5
Enter array elements:
a[0] = 3
a[1] = 7
a[2] = 1
a[3] = 8
a[4] = 6*/
#include <stdio.h>
int main()
{
    int size, i, j;
    printf("Enter Array Size:");
    scanf("%d", &size);
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter Value [%d]:", i );
        scanf("%d", &array[i]);
    }
    printf("\n\n");
    for (i = 0; i < size; i++)
        printf("Value [%d] = %d\n", i, array[i]);
}