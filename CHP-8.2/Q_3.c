/*Q.3 Write a Program to find square of each element from the given array.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2
Output:
The squares are: 49, 16, 81, 25, 4*/
#include <stdio.h>
int main()
{
    int n;

    printf("Enter Array Size :");
    scanf("%d", &n);

    printf("Enter Array Elements \n");

    int i, a[n];

    for (i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("\n");

    printf("The Square are : \n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i] * a[i]);
    }
}