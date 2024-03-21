/*Q.3 Write a Program to convert the given string in toggle case without using any string function.
For example,Input:
Enter any string: HelLo worLD
Output:
Toggle case string: hELlO WORld*/
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter Name :");
    scanf("%s", &name);
    int i, len = 0;

    for (i = 0; name[i] != '\0'; i++)
        len++;
    printf("%s\n", name);
    // printf("%s => %d", name, len);
    for (i = 0; i < len; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32;
        }
        else if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] = name[i] - 32;
        }
    }

    printf("Name\t: %s\n\n", name);
}