#include <stdio.h>
int main()
{
    char a;
    printf("A For Sunday.\n");
    printf("B For Monday.\n");
    printf("C For Tuesday.\n");
    printf("D For Wednesday.\n");
    printf("E For Thursday.\n");
    printf("F For Friday.\n");
    printf("G For Saturday.\n");
    printf("Enter Your Choice. :");
    scanf("%c", &a);
    switch (a)
    {
    case 'A':
        printf("Day Sunday\n");
        break;
    case 'B':
        printf("Day Monday\n");
        break;
    case 'C':
        printf("Day Tuesday\n");
        break;
    case 'D':
        printf("Day Wednesday\n");
        break;
    case 'E':
        printf("Day Thursday\n");
        break;
    case 'F':
        printf("Day Friday\n");
        break;
    case 'G':
        printf("Day Saturday\n");
        break;
    default:
    printf("Invalid Input");
        break;
    }
}