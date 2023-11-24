#include<stdio.h>
int main()
{ 
    int a=1,b=10;
    
    
    printf("enter any number");
    scanf("%d",&a);

        while (a<=b)
    {   if(b%2==0)
      printf("%d\n",a);
      a++;
        
    }       
         

       return 0;
}