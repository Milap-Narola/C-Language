/*Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
Output:
Even numbers from even_file.txt:
50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70
Odd numbers from odd_file.txt:
51, 53, 55, 57, 59, 61, 63, 65, 67, 69*/
#include<stdio.h>
int main()
{
	FILE*fptr1,*fptr2;
	
	fptr1=fopen("even.txt","w");
	fptr2=fopen("odd.txt","w");
	int i;
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
			fprintf(fptr1,"%d ",i);
		}
		else
		{
			fprintf(fptr2,"%d ",i);
		}
	}
}