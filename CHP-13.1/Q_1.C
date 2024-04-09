/*Q.1 Write a Program to read content from one file & write it to another file. in c language */
#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("demo.txt","w");
    fprintf(fp,"Hello Programmer...!!");
    fclose(fp);
    return 0;
}