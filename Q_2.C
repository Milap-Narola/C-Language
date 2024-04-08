/*Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name*/
#include <stdio.h>
#include <string.h>

struct Employee
{
    int emp_id;
    char emp_name[20];
    int emp_age;
    char emp_role[20];
    char emp_city[20];
    int emp_experience;
    char emp_company_name[20];
};

int main()
{
    int n;
    printf("Enter Number Of Employee:");
    scanf("%d", &n);
    struct Employee e1[n];
    printf("\n\n\t Input Emp DATA\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID :");
        scanf("%d", &e1[i].emp_id);
        fflush(stdin);
        printf("NAME :");
        scanf("%[^\n]", &e1[i].emp_name);
        printf("AGE :");
        scanf("%d", &e1[i].emp_age);
        fflush(stdin);
        printf("ROLE :");
        scanf("%[^\n]", &e1[i].emp_role);
        fflush(stdin);
        printf("CITY :");
        scanf("%[^\n]", &e1[i].emp_city);
        printf("EXPERIENCE (in years):");
        scanf("%d", &e1[i].emp_experience);
        fflush(stdin);
        printf("COMPANY_NAME :");
        scanf("%[^\n]", &e1[i].emp_company_name);
    }
    printf("\nEmployee Records:\n");
    printf("ID\tName\tAge\tRole\tCity\tExperience\tCompany Name\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\n", e1[i].emp_id, e1[i].emp_name, e1[i].emp_age,
               e1[i].emp_role, e1[i].emp_city, e1[i].emp_experience, e1[i].emp_company_name);
    }
}