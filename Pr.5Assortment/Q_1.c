/*
Q.1 Write a Program to find all the negative elements from a given 1D array.
For example,Input:
Enter the array's size: 5
Enter array's elements:
a[0] = 2
a[1] = -4
a[2] = 1
a[3] = -3
a[4] = -5
Output:
Negative elements from an Array: -4, -3, -5*/
#include <stdio.h>
int main()
{
    int size;
    printf("Enter Array Size:");
    scanf("%d", &size);
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("\n\nEnter Array Elements:[%d]", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (0 > array[i])
            printf("\n\nNegative Elements From An Array %d\n", array[i]);
    }
}
