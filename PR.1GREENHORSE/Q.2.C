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
