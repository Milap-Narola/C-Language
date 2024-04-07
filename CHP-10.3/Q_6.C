/*06. Write a Program to find the large number of 1D array using UDF.*/
#include <stdio.h>

int findLargest(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > largest)
            largest = arr[i];
    return largest;
}

int main()
{
    int arr[] = {10, 5, 7, 3, 20, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The largest number in the array is: %d\n", findLargest(arr, size));
    return 0;
}
