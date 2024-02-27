// Q.2a menu-driven program for Telecom call service conversation using nested switch case.
#include <stdio.h>
int main()
{
    int n;
    printf("Press 1. For English\n");
    printf("Press 2. For Hindi\n");
    printf("Press 3. For Gujrati\n\n");
    printf("Enter Your Choice :\n\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Press 1. For Internet Recharge\n");
        printf("Press 2. For Top-up Recharge\n");
        printf("Press 3. For Special Recharge\n");
        printf("Enter Your Choice :");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("You Have Successfully Done Internet Recharge\n");
            break;
        case 2:
            printf("You Have Successfully Done Top-up Recharge\n");
            break;
        case 3:
            printf("You Have Successfully Done Top-up Recharge\n");
            break;
        }
        break;
    }
    switch (n)
    {
    case 2:

        printf("Internet Recharge ke liye 1 dabaiye\n");
        printf("Top-up Recharge ke liye 2 dabaiye\n");
        printf("Special Recharge ke liye 3 dabaiye\n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("Aapne safaltapurvak Internet Recharge kar liya he.\n\n");
            break;
        case 2:
            printf("Aapne safaltapurvak Top-up Recharge kar liya he.\n\n");
            break;
        case 3:
            printf("Aapne safaltapurvak Special Recharge kar liya he.\n\n");
            break;
        }
        break;
    }
    switch (n)
    {
    case 3:
        printf("Internet Recharge Mate 1 dabavo\n");
        printf("Top-up Recharge Mate 2 dabavo\n");
        printf("Special Recharge Mate 3 dabavo\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Tame safaltapurvak Internet Recharge karyu Che.\n\n");
            break;
        case 2:
            printf("Tame safaltapurvak Top-up Recharge Karyu Che.\n\n");
            break;
        case 3:
            printf("Tame safaltapurvak Special Recharge Karyu Che.\n\n");
            break;
        }
        break;

    default:
        printf("Invalid Choice");
        break;
    }

    return 0;
}