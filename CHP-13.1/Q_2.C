/*Q.2 Write a Program to create a new file and write all numbers that are divisible by both 3 & 5 between 1 to 50 into that file.*/
#include<stdio.h>
int main()
{
    FILE *fp;
    int i;
    
    fp = fopen("demo2.txt","w");
    
    for (i = 1; i <= 50; i++)
    {
        if (i%3==0 && i%5==0)
        {
            fprintf(fp,"%d, ",i);
        }
    }
    
    fclose(fp);
    return 0;
}