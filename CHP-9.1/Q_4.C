/*Q.4 Write a Program to convert the given string in Title Case.*/
#include <stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int i;
    printf("Enter Any Name:");
    scanf("%[^\n]",&name);

    if (name[i] >= 97 && name[i] <= 122)
    {
        name[i] = name[i] - 32;
    }
    printf("First Latter Is :\%s\n",name);
    for (int i = 1; name[i] != '\0'; i++)
    {
        if (name[i - 1] == ' ' && (name[i] >= 97 && name[i] <= 122))
        {
            name[i] = name[i] - 32;
        }
        printf("Title Case:%s\n", name);
    }
}
