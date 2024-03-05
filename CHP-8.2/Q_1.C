/*
Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
Enter array A's size: 5
Enter array A's elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2
Enter array B's size: 3
Enter array B's elements:
b[0] = 1
b[1] = 3
b[2] = 6
Output:
Array C is: 7, 4, 9, 5, 2, 1, 3, 6*/
#include <stdio.h>

int main()
{

    int size1, size2, size3;
    printf("Enter Array A Size :\n");
    scanf("%d", &size1);

    printf("\n\n --:Array of 01:-- \n");

    int a[size1], b[size2], marge[size3];
    for (int i = 0; i < size1; i++)
    {
        printf("Enter a[%d]:", i);
        scanf("\n\n%d", &a[i]);
    }
    printf("Enter Array B Size :");
    scanf("%d", &size2);

    printf("\n\n --:Array of 02:-- \n");

    for (int i = 0; i < size2; i++)
    {
        printf("Enter a[%d]:", i);
        scanf("%d", &b[i]);
    }
    printf("\n\n --:Marge Of Array:--\n");
    size3 = size1 + size2;
    marge[size1 + size2];
    for (int i = 0; i < size3; i++)
    {
        printf("Marge is :[%d]", marge[i]);
    }
}