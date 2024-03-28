/*Q.1 Write a Program to check if a given password is strong or not by satisfying the below criteria:
- Password must contain at least one letter, one digit & one special symbol.
- Password must be at least 6 characters.For example,
Input:
Create your password: Admin@123
Output:
Your password is Strong.
-----------------------------------------
For example,
Input:
Create your password: hello#89
Output:
Your password is not Strong.*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,A=0,a=0,d=0;
	char n[20];
	

	printf("Password Must be More Than 6 word\n");

	printf("Create Your Password :");
	gets(n);
	
	if(strlen(n)>=6)
	{
		for(i=0;i<=strlen(n);i++)
		{
			if(n[i]>=65 && n[i]<=90)

				A=1;

			else if(n[i]>=97 && n[i]<=122)

				a=1;

			  
			else if(n[i]>=48 && n[i]<=57)

				d=1;

		}
			if(A==1 && a==1 && d==1)


				printf("Your password is Strong.\n");


			else if(A==1)

				

				printf("Your password is Weak.\n");


			
			else if(a==1)

				

				printf("Your password is Very Weak.\n");


			
			else if(d==1)

				

				printf("Take Suggestion from Your Elders.\n");


			else 


			    printf("Your password not Strong.\n");	


	}
		
}