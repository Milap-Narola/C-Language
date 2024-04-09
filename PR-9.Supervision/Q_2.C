/*
For example,
Q.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
Input:
Enter details of Student 1:
Roll no => 121
Name => Raj Patel
Chemistry => 95
Mathematics => 90
Physics => 88

Enter details of Student 2:
Roll no => 122
Name => Divya Sharma
Chemistry => 92
Mathematics => 80
Physics => 84

Enter details of Student 3:
Roll no => 123
Name => Piyush Mishra
Chemistry => 72
Mathematics => 87
Physics => 93

Enter details of Student 4:
Roll no => 124
Name => Vatsal Mangukiya
Chemistry => 68
Mathematics => 96
Physics => 85

Enter details of Student 5:
Roll no => 125
Name => Sagar Trivedi
Chemistry => 91
Mathematics => 89
Physics => 77

Output:
Raj Patel (121)
Chemistry => 95
Mathematics => 90
Physics => 88
Total => 273/300
Percent => 91.00%

Divya Sharma (122)
Chemistry => 92
Mathematics => 80
Physics => 84
Total => 256/300
Percent => 85.33%

Piyush Mishra (123)
Chemistry => 72
Mathematics => 87
Physics => 93
Total => 252/300
Percent => 84.00%

Vatsal Mangukiya (124)
Chemistry => 68
Mathematics => 96
Physics => 85
Total => 249/300
Percent => 83.00%

Sagar Trivedi (125)
Chemistry => 91
Mathematics => 89
Physics => 77
Total => 257/300
Percent => 85.66%*/
#include<stdio.h>
# define P printf
struct student
{
	int id;
	char name[40];
	int ch;
	int phy;
	int math;
};

int main()
{
	int i,n,t[10],per[10];
	struct student s1[10];
	printf("Enter No. of Students :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		P("Enter Roll No :");
		scanf("%d",&s1[i].id);
		fflush(stdin);
		P("Enter Your Name :");
		scanf("%s",&s1[i].name);
		fflush(stdin);
		P("Chemistry Marks :");
		scanf("%d",&s1[i].ch);
		P("Physics Marks :");
		scanf("%d",&s1[i].phy);
		P("Maths Marks :");
		scanf("%d",&s1[i].math);
		t[i] = s1[i].ch+s1[i].phy+s1[i].math;
		per[i]=t[i]/3;
		
		P("\n");
	}
	
	for(i=0;i<n;i++)
	{
		P("\n\n");
		P("%d)Name    :%s\n",s1[i].id,s1[i].name);
		P("Chemistry :%d\n",s1[i].ch);
		P("Physics   :%d\n",s1[i].phy);
		P("Math      :%d\n",s1[i].math);
		P("Total     :%d\n",t[i]);
		P("Percentage:%d\n",per[i]);
		P("\n\n\n");
	}
}