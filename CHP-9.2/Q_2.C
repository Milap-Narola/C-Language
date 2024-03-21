/*
Q.2 Write a Program to convert the given string in lowercase without using any string function.
For example,Input:
Enter any string: HELLO WORLD
Output:
Lowercase string: hello world
*/
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter Name :\n");
    scanf("%s", &name);
    int i, len = 0;

    for (i = 0; name[i] != '\0'; i++)
        len++;
    // printf("%s\n", name);
    // printf("%s => %d ",len);
    for (i = 0; i < len; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32;
        }
        printf("\nName: %s\n", name);
    }
}