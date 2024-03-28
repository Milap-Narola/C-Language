/*Q.2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
For example,
Input:
Enter your email: admin@gmail.com
Enter your password: 123456
Output:
Login Successful...
-----------------------------------------
For example,
Input:
Enter your email: xyz@gmail.com
Enter your password: 123456
Output:
Login Failed. Invalid Credentials.*/
#include <stdio.h>
#include <string.h>
int main()
{
	char e[30], p[30], ee[30], pa[30];

	printf("Enter Your Email :");
	gets(e);
	printf("\n");
	printf("Enter Your Password :");
	gets(p);

	printf("Login Successful !!\n");

	printf("RE-Enter Your Email :");
	gets(ee);
	printf("RE-Enter Your Password :");
	gets(pa);

	if ((strcmp(e, ee) == 0) && (strcmp(p, pa) == 0))

		printf("Login Successful.\n");

	else

		printf("Login Failed. Invalid Credentials.\n");
}