/*Q.2 Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.For example,
Input:
Enter any number: 15
Output:
The given number is divisible by both 3 & 5.
------------------------------------------
For example,
Input:
Enter any number: 10
Output:
The given number is not divisible by both 3 & 5.*/
#include <stdio.h>
int diviDed(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter Any Number:");
    scanf("%d", &num);
    if (diviDed(num))
    {
        printf("The given number is divisible by both 3 & 5.");
    }
    else
    {
        printf("The given number is  not divisible by both 3 & 5.");
    }
    return 0;
}