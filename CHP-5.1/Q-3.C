#include<stdio.h>
int  main()
{
  char  ch;

    printf("Enter Character :");
    scanf("%c",&ch);
     
     if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
     {
        printf("THE CHARACTER IS VOWEL\n");
     }
     else if(ch>='0' && ch<='9')
     {
        printf("THE CHARACTER IS DIGIT\n");
     }
     else
     {
        printf("THE CHARACTER IS CONSONTAL\n");
     }
    return 0;
}