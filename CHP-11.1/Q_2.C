/*Q.2 Write a Program to swap two variables using Pointers.
For example,Input:
Enter the value of x: 5
Enter the value of y: 3
Output:
Before swapping:
x: 5
y: 3
After swapping:
x: 3
y: 5*/
#include <stdio.h>
int main()
{
    int x, y;
    int *ptr1, *ptr2;
    printf("Enter The Value Of x:");
    scanf("%d", &x);
    printf("Enter The Value Of y:");
    scanf("%d", &y);
    ptr1 = &x;
    ptr2 = &y;

    printf("Before swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

    printf("After swapping:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);
}
