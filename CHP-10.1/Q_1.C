/*Q.1 Write a Program to find the cube of a given number using UDF.
For example,
Input:
Enter any number: 5
Output:
Cube is: 125
*/
#include <stdio.h>
int cuBe(int num)
{
    return num * num * num;
}
int main()
{
    int n;
    printf("Enter Any Number:");
    scanf("%d", &n);
    int result = cuBe(n);
    printf("Cubed is : %d\n", result);
    return 0;
}