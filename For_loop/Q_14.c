#include <stdio.h>
int main()
{
    int i, start, end, digit, sum, temp;
    printf("Enter start range:");
    scanf("%d", &start);
    printf("Enter start range:");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        temp = i;
        sum = 0;
        for (;temp!=0;temp/=10)
        {
            digit=temp%10;
            sum+=(digit,3);
        }

        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    printf("Armstrong Number Between %d and %d are:\n", start, end);

    return 0;
}