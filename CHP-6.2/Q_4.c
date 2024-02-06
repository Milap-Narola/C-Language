#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,n,f=0,s=1,next;
    printf("Enter Any Number :");
    scanf("%d",&a);
  for ( a = 1; a < n; a++)
  {
   printf("%d",f);
   next=f+s;
   f=s;
   s=n; 
  }
  printf("\n");
    return 0;
}