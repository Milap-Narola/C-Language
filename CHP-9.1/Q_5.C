/*Write a Program to convert the given string in camelCase.
input:
hello world
output:
helloWorld
*/
#include <stdio.h>
int main()
{
    char name[20];
    int i, j;
    printf("Enter Name :");
    scanf("%[^\n]", &name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            for (j = i; name[j] != '\0'; j++)
            {
                name[j] = name[j + 1];
            }
            name[i] = name[i] - ('a' - 'A');
        }
    }
    printf("\n%s\n", name);
}