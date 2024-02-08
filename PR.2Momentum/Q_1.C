//Q.1 Write C program to input any character and check whether it is the alphabet , digit or special character.
#include <stdio.h>
int main()
{
    char a;
    printf("Enter Any Character :");
    scanf("%c", &a);
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
    {
        printf("Character is Alfabet", a);
    }
   else if (a >= '0' && a <= '9')
    {
        printf("Character is digit");
    }
    else
    {
        printf("Character is special", a);
    }
    return 0;
}
