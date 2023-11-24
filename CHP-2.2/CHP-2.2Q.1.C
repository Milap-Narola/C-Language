#include<stdio.h>
main()
{

 const float pi= 3.14;
 float r,total;
 clrscr();
 printf("enter the radius : ");
 scanf("%f",&r);
 total=pi*r*r;
  printf("total : %.2f",total);

 getch();

}