/*Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
For example,
Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice: 0*/
#include <stdio.h>
void addtion(int n1, int n2)
{
    printf("Enter Number  1:");
    scanf("%d", &n1);
    printf("Enter  Number 2:");
    scanf("%d", &n2);

    printf("Ans :%d", n1 + n2);
}

void subtract(int n1, int n2)
{
    printf("Enter Number  1:");
    scanf("%d", &n1);
    printf("Enter  Number 2:");
    scanf("%d", &n2);
    printf("Ans :%d", n1 - n2);
}

void multiply(int n1, int n2)
{
    printf("Enter Number  1:");
    scanf("%d", &n1);
    printf("Enter  Number 2:");
    scanf("%d", &n2);
    printf("Ans :%d", n1 * n2);
}
void division(int n1, int n2)
{
    printf("Enter Number  1:");
    scanf("%d", &n1);
    printf("Enter  Number 2:");
    scanf("%d", &n2);
    printf("Ans :%d", n1 / n2);
}
void Percentage(int n1, int n2)
{
    printf("Enter Number  1:");
    scanf("%d", &n1);
    printf("Enter  Number 2:");
    scanf("%d", &n2);
    printf("Ans :%d", (n1 * n2) / 100);
}
int main()
{
    int n1, n2;
    int c;
    for (int i = 0; c != 6; i++)
    {

        {

            printf("\n\nPress 1) For Addtion (+)\n");
            printf("Press 2) For Subtract(-)\n");
            printf("Press 3) For Multiply(*)\n");
            printf("Press 4) For Division(/)\n");
            printf("Press 5) For Percent (%%)\n");
            printf("Press 6) For Exit !! (#)\n\n");
            printf("Enter Your Choice !!!!! \n");

            scanf("%d", &c);

            switch (c)
            {
            case 1:
                addtion(n1, n2);
                break;
            case 2:
                subtract(n1, n2);
                break;
            case 3:
                multiply(n1, n2);
                break;
            case 4:
                division(n1, n2);
                break;
            case 5:
                Percentage(n1, n2);
                break;
            case 6:
                printf(" You Are Now Exit The loop!!");
                break;
            }
        }
    }
    return 0;
}