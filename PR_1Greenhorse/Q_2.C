//Q.2 Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
#include<stdio.h>
int main()
{
  long float bs,hra,da,gs;

  printf("Enter Basic Salary");
  scanf("%ld",bs);


  hra = bs * (20.00/100.00);
  da = bs * (40.00/100.00);

  gs = bs + hra + da;

  printf("Gross Salary = %ld",gs);   
    return 0;
}
