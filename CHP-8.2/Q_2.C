/*
Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
For example,
Enter the first number: 2020
Enter the second number: 2040
Output:
The array is: 2020, 2024, 2028, 2032, 2036, 2040*/
#include <stdio.h>
int main()
{
    int y1, y2, i;
    printf("Enter A First Leep Year:");
    scanf("%d", &y1);
    printf("Enter A Last Leep Year:");
    scanf("%d", &y2);
    i = y1;
    while (i <= y2)
    {
        if (i % 4 == 0)
            printf(" %d", i);
        i++;
    }
}