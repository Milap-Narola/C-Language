/*Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
For example,
Input:
Enter array's size: 2
Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4
Output:
Cubes of all elements:
27  8
125 64 */
#include <stdio.h>

void cubesOfArray(int *arr, int size)
{
    printf("Cubes of all elements:\n");
    for (int i = 0; i < size * size; i++)
        printf("%-4d%s", arr[i] * arr[i] * arr[i], (i + 1) % size ? "" : "\n");
}

int main()
{
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);

    int array[size * size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size * size; i++)
    {
        printf("a[%d][%d] = ", i / size, i % size);
        scanf("%d", &array[i]);
    }
    

    cubesOfArray(array, size);
    return 0;
}
