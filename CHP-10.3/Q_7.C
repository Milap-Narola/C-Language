/*07. Write a Program to check the number is magic or not magic using the recursion concept.*/
#include <stdio.h>

int Magic(int n)
{
    if (n < 10)
        return (n == 1);
    return Magic(n % 10 + Magic(n / 10));
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (Magic(num))
        printf("%d is a magic number.\n", num);
    else
        printf("%d is not a magic number.\n", num);

    return 0;
}
