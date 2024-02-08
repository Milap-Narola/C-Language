// Q.5 Write a Program to find the Perimeter of the circle.
#include <stdio.h>

main()
{
    const float am = 3.14;
    float r, total;

    printf("enter the radius : ");
    scanf("%f", &r);
    total = r * r;
    printf("total : %.2f", total);

    return 0;
}