/*08. Write a Program to print the 1 to 100 number but divide by only for 3 & 5 using UDF.*/
#include <stdio.h>


void FiBuzz(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
        printf("FiBuzz ");
    else if (num % 3 == 0)
        printf("Fizz ");
    else if (num % 5 == 0)
        printf("Buzz ");
    else
        printf("%d \n", num);
}

int main()
{

    for (int i = 1; i <= 100; i++)
    {
        FiBuzz(i);
    }

    return 0;
}
