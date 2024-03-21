/*Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
Input:
Enter any string: development
Output:
Length is: 11*/
#include <stdio.h>

int strLen(char str[])
{
    int len = 0;

    for (int i = 0;str [len] != '\0'; i++)
        len++;
    return len;
}

int main()
{
    char str[100];

    printf("Enter any string: ");
    scanf("%s", str);

    int len = strLen(str);

    printf("Length is: %d\n", len);

    return 0;
}
