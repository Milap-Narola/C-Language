/*Q.4 Write a Program to convert the given string in Title Case.
input:
hello world
output:
Hello World */
#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int i;
    printf("Enter Any Name:");
    scanf("%[^\n]", &name);
    for (i = 0; name[i]; i++)
    {
        if (name[i] >= 65 && name[i] <= 97)
            name[i] = name[i] + 32;
    }
    // printf("%s", name);
    name[0] = name[0] - 32;
    for (i = 1; name[i]; i++)
    {
        if (name[i] == ' ')
            name[i + 1] -= 32;
    }
    printf("\n%s\n", name);
}
