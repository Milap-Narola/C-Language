#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num1, num2;
    char oprator;
    printf("Enter Any operator(+,-,*,/):");
    scanf("%c", &oprator);
    printf("Enter Two Number:");
    scanf("%f %f", &num1, &num2);

    switch (oprator)
    {
        exit    ('x');
    case '+':
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0)
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        else
        {
            printf("Error Division By Zero\n");
        }
        break;

    default:
        printf("Error ! Invalid oprator\n");
    }

    return 0;
}