/*03. Write a Program to print leap years using the recursion concept.*/
#include <stdio.h>

void LeapYears(int startYear, int endYear)
{
    if (startYear > endYear)
        return ;
    if ((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0))
    {
        printf("%d ", startYear);
    }
    LeapYears(startYear + 1, endYear);
}

int main()
{
    int startYear, endYear;

    printf("Enter start year: ");
    scanf("%d", &startYear);
    printf("Enter end year: ");
    scanf("%d", &endYear);

    printf("Leap years between %d and %d are: \n\n", startYear, endYear);
    LeapYears(startYear, endYear);
    printf("\n");

    return 0;
}
