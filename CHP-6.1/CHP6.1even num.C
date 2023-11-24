#include<stdio.h>
int main()
{ 
    int a=1,b;
    
    printf("enter any number");
    scanf("%d",&a);

       while (a<=10)
    {  
      if(a%2==0)
      printf("%d\n",a);
      a++;
        
    }       
         
    
       return 0;
}