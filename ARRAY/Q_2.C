/*
100 door open if divided by 2 */
#include <stdio.h>
int main()
{
    int n;
    float result;
    printf("Enter size of doors:");
    scanf("%d", &n);

    for (int i = 1; i <= 5; i++)
    {
        result = ((float)n / i);
        {
            printf("%d/%d is %.2f\n", n, i, result);
        }
    }
}