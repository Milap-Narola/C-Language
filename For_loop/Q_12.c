#include <stdio.h>
int main()
{
    int i, n ,firstTerm=0,secondTerm=1,nextTerm;
    printf("Enter any nymber:");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i)
    {
        printf("%d",firstTerm);
        nextTerm=firstTerm+secondTerm;
        firstTerm=secondTerm;
        secondTerm=nextTerm;
    }


    return 0;
}