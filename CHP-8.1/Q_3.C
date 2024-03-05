/*Q.3 Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.
Enter array size: 5
Enter array A's elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2
Enter array B's elements:
b[0] = 1
b[1] = 3
b[2] = 1
b[3] = 7
b[4] = 3
Output:
Array C is: 8, 7, 10, 12, 5
*/
#include <stdio.h>
int main()
{
    int size;
    printf("Enter Array Size :");
     scanf("%d", &size);
   
   printf("\n\n --:Array of 01:-- \n"); 
    
     int a[size], b[size], sum[size];
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d", &a[i]);
    }
    printf("\n\n --:Array of 02:-- \n");
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter b[%d]:",i);
        scanf("%d", &b[i]);
    }
    printf("\n\n --:Sum of Array:-- \n");
    for (size_t i = 0; i < size; i++)
    {
        sum[i] = a[i] + b[i];
        printf("Sum [%d] = %d\n", i, sum[i]);
    }

    return 0;
}
