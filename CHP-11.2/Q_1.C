/*Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.For example,
Input:
Enter the array's size: 5
Enter array elements:
a[0] = 5
a[1] = 9
a[2] = 4
a[3] = 7
a[4] = 3
Output:
Reversed array elements:
3, 7, 4, 9, 5*/
#include <stdio.h>
int main()
{
    int size;
    printf("Enter Array Size:");
    scanf("%d", &size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter A Element[%d]= ", i);
        scanf("%d", &a[i]);
    }
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
        if (i != 0)
        {
            printf(", ");
        }
        else
        {
            printf("\n");
        }
    }
}