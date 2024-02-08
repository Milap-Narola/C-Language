#include <stdio.h>
int main()
{
    int choice;
    printf("press 1 for english\n");
    printf("press 2 for hindi\n");
    printf("press 3 for gujarati\n");
 scanf("%d", &choice);
    switch (choice)
    { 
        case 1:
           printf("press 1 for internet recharge \n");
           printf("press 2 for top-up recharge \n");
           printf("press 3 for special recharge \n");
        scanf("%d", &choice);
    switch (choice)
       { case 1:
            printf("Internet  recharge successfully\n");
        break;
        case 2:
            printf("top-up recharge successfully\n");
        break;
        case 3:
            printf("special recharge successfully\n\n");
        break;
        default:
              printf("invalid choice ");
       }
       
case 2:
            printf("internet recharge ke liye 1 dabaiye\n");
            printf("top-up recharge ke liye 2 dabaiye\n");
            printf("special rechargec ke liye 3 dabaiye\n");
        scanf("%d",&choice);
   switch (choice)
   {
   case 1:
   printf("Aapne safaltapuravak internet recharge kar liya he\n");
   break;
   case 2:
   printf("Aapne safaltapuravak top-up kar liya hai\n");
   break;
   case 3:
   printf("Aapne safalatapravak special recharge kar liya hai\n\n"); 
   break;
   default:
              printf("invalid choice ");
   }      
     
case 3:
         printf("internet recharge mate 1 dabavo\n");
         printf("top-up recharge mate 2 dabavo\n");
         printf("special recharge mate 3 dabavo\n");
      
         scanf("%d",&choice);
    switch (choice)
{
    case 1:
    printf("tame safaltapuravak internet recharge karyu che\n");
    break;
    printf("tame safaltapuravak top-up recharge karyu che\n");
    break;
    printf("tame safaltapuravak special recharge karyu che\n");
    break;
    }     
     default:
  printf("invalid choice");
   
    }
 

    return 0;
}