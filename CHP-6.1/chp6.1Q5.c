#include<stdio.h>
main()
{
        int year1=2000,year2=2040,leepyear;
        printf("enter the first number:\n");
        scanf("%d",&year1);
        printf("enter the second  number:\n");
        scanf("%d",&year2);
          while(year1<=2040)
        { 
            if (year1%4==0)
          
          printf("%d\n",year1);
          year1++;
        }
        printf("the loop year is:%d",year1,year2,leepyear);
        return 0;

}