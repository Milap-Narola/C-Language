//Q.3 Write C Program to find the third angle of a right triangle if two other angles are given.
#include<stdio.h>
int main()
{
   float h,w,area;

   printf("Enter Height And Width Of Right Angled");
   scanf("%f%f",&h,&w);

   area = h * w /2.0;

   printf("Area Of Right Angled Triangle is %f",area);

    return 0;
}