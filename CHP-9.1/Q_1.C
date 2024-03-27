/*Q.1 Write a Program to convert the given string in uppercase without using any string function.
For example,Input:
Enter any string: hello world
Output:
Uppercase string: HELLO WORLD*/
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter Name :");
    scanf("%[^\n]", &name);
    int i, len = 0;

    // for (i = 0; name[i] != '\0'; i++)
    //     len++;
    // printf("%s\n", name);
    // printf("%s => %d",len);
    for (i = 0; i <= name[i]!='\0'; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] = name[i] - 32;
        }
        printf("\nName: %s\n",name);
    }
}