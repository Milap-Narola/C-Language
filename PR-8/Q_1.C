/*Q.1 Write a Program to find the length of a string using a Pointer.
For example,
Input:
Enter any string: hello world
Output:
The length of a string is: 11*/
#include <stdio.h>
#include<string.h>
int stringLength(char *str) {
    int length = 0;
    while (*str++) length++;
    return length;
}

int main() {
    char str[100];
    printf("Enter any string: ");
    scanf("%[^\n]", str);
    printf("The length of the string is: %d\n", stringLength(str));
    return 0;

    
}

