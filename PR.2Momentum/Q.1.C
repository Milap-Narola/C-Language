#include <stdio.h>
int main()
{
    char a;
    printf("Enter Any Character :");
    scanf("%c", &a);
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'b'))
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
