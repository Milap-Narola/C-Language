/*Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
For example,
Input:
Enter the array's size: 5
Enter array's elements:
a[0] = 2
a[1] = 4
a[2] = 1
a[3] = 3
a[4] = 7
Output: Square of each element: 4, 16, 1, 9, 49*/
#include <stdio.h>
int main()
{
    int size;

    printf("Enter Array Size:");
    scanf("%d", &size);

    int a[size];
    int ptr;

    for (int i = 0; i < size; i++)
    {
        printf("Enter A Elemets[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        ptr = a[i] * a[i];
        printf("%d\t", ptr);
    }
}