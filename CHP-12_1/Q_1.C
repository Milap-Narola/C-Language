/*Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school*/
#include <stdio.h>
#include <string.h>
struct student
{
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_city[20];
    int stu_standard;
    char stu_school[20];
};

int main()
{
    
    struct student s1[3];
    for (int i = 0; i < 3; ++i)
    {
        printf("Enter details for student %d:\n\n", i + 1);
        printf("ID: ");
        scanf("%d", &s1[i].stu_id);
        fflush(stdin);
        printf("Name: ");
        scanf("%s", s1[i].stu_name);
        printf("Age: ");
        scanf("%d", &s1[i].stu_age);
        fflush(stdin);
        printf("Course: ");
        scanf("%s", s1[i].stu_course);
        fflush(stdin);
        printf("City: ");
        scanf("%s", s1[i].stu_city);
        printf("Standard: ");
        scanf("%d", &s1[i].stu_standard);
        fflush(stdin);
        printf("School: ");
        scanf("%s", s1[i].stu_school);
        printf("\n");
    }

    printf("\nStudent Records:\n");
    printf("ID\tName\tAge\tCourse\tCity\tStandard\tSchool\n");
    for (int i = 0; i < 3; ++i)
    {
        printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\n", s1[i].stu_id, s1[i].stu_name, s1[i].stu_age,
               s1[i].stu_course, s1[i].stu_city, s1[i].stu_standard, s1[i].stu_school);
    }
}