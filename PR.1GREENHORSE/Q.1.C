#include<stdio.h>
int main()
{
    float c,fh;

    printf("Enter Temperature in centigrade");
    scanf("%f",&c);

    fh = (c * 1.8) + 32;

    printf("Tempreture In Fahrenheat is %.2f",fh);
    return 0;
}

