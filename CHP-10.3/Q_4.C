/*04. Write a Program to print all Alphabets using the recursion concept.*/
#include <stdio.h>

void printAlphabets(char ch)
{
    if (ch > 'z')
    {
        return;
    }
    printf("%c\t", ch);
    printAlphabets(ch + 1);
}

int main()
{
    char startChar = 'a';
    printf("Alphabets from 'a' to 'z' are:\n");
    printAlphabets(startChar);
    printf("\n");
    return 0;
}
