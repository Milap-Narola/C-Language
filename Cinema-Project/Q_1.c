#include <stdio.h>
int main()
{
    int n, total_ticket;
    float price , gst_rate = 18, total ;
    printf("-_-_-_->>>Welcome To Anna Cinemas<<<-_-_-_-\n\n");
    printf("Press 1. For Book Ticket :\n");
    printf("Press 2. For Order Food :\n");
    printf("Enter Your Choice :\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Press 1. for Hollywood :\n");
        printf("Press 2. for Bollywood :\n");
        printf("Press 3. for Tollywood :\n");
        printf("Enter Your Choice :\n");
        scanf("%d", &n);
 
        switch (n)
        {
        case 1:
            printf("Press 1. For Killers of the Flower Moon .130₹. :\n");
            printf("Press 2. For The Kitchen .150₹.\n");
            printf("Press 3. For The Creator .200₹. :\n");
            printf("Press 4. For Napoleon .220₹.:\n");
            printf("Enter Your Choice :\n");
            scanf("%d", &n);
            printf("Mention Total Tickets:\n");
            scanf("%d", &total_ticket);
            printf("Enter Movie Price AS Mentioned :\n");
            scanf("%f", &price);
            total = price + gst_rate;
            gst_rate * 100;
            total = total * total_ticket;
            printf("your price is %.2f :\n\n", price);
            printf("GST Amount :%.2f \n\n", gst_rate);

            switch (n)
            {
            case 1:
                printf("Total ticket is %d\n\n", total_ticket);
                printf("Total Amount (including GST) :%.2f\n\n", total);
                printf("-:-:-You've Booked Killers of the Flower Moon-:-:-\n");
                printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");
                break;
            case 2:
                printf("Total ticket is %d\n\n", total_ticket);
                printf("Total Amount (including GST) :%.2f\n", total);
                printf("You've Booked The Kitchen Thankyou\n\n");
                printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");
                break;
            case 3:
                printf("Total ticket is %d\n\n", total_ticket);
                printf("Total Amount (including GST) :%.2f\n", total);
                printf("You've Booked The Creator Thankyou\n\n");
                printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");
                break;
            case 4:
                printf("Total ticket is %d\n\n", total_ticket);
                printf("Total Amount (including GST) :%.2f\n", total);
                printf("You've Booked Napoleon Thankyou\n\n");
                printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");
                break;
            break;
            }
        }
        switch (n)
        {
        case 2:
            printf("Press 1. For 12thFail 150₹.:\n");
            printf("Press 2. For Sam Bahadur 160₹. :\n");
            printf("Press 3. For Animal 170₹. :\n");
            printf("Press 4. For Khichdi-2 180₹. :\n");
            printf("Enter Your Choice :\n");
            scanf("%d", &n);
            printf("Mention Total Person:\n");
            scanf("%d", &total_ticket);
            printf("Enter Movie Price AS Mentioned :\n");
            scanf("%f", &price);

            total = price + gst_rate;
            gst_rate * 100;
            total = total * total_ticket;
            printf("your price is %.2f :\n\n", price);
            printf("GST Amount :%.2f \n\n", gst_rate);

            switch (n)
            {
            case 1:
                printf("Total ticket is %d\n\n", total_ticket);
                printf("Total Amount (including GST) :%.2f\n\n", total);
                printf("You've Booked 12thFail\n");
                printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");
                break;

            case 2:
                printf("Total ticket is %d\n\n", total_ticket);
                printf("Total Amount (including GST) :%.2f\n\n", total);
                printf("You've Booked Sam Bhadur\n");
                printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");
                break;
            case 3:
                printf("Total ticket is %d\n\n", total_ticket);
                printf("Total Amount (including GST) :%.2f\n\n", total);
                printf("You've Booked Animal\n");
                printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");
                break;
            case 4:
                printf("Total ticket is %d\n\n", total_ticket);
                printf("Total Amount (including GST) :%.2f\n\n", total);
                printf("You've Booked Khichdi-2\n");
                printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");
                break;
            }
            break;
        }
        switch (n)
        {
        case 3:
            printf("Press 1. For Salaar 120 :\n\n");
            printf("Press 2. For Hi Nanna 120₹. :\n\n");
            printf("Press 3. For Kushi 120₹. :\n\n");
            printf("Press 4. For Custody 120₹. :\n\n");
            printf("Enter Your Choice :\n");
            scanf("%d", &n);
            printf("Mention Total Person:\n");
            scanf("%d", &total_ticket);
            printf("Enter Movie Price AS Mentioned :\n");
            scanf("%f", &price);

            total = price + gst_rate;
            gst_rate * 100;
            total = total * total_ticket;
            printf("your price is %.2f :\n\n", price);
            printf("GST Amount :%.2f \n\n", gst_rate);

            switch (n)
            {
            case 1:
                printf("Total ticket is %d\n\n", total_ticket);
                printf("Total Amount (including GST) :%.2f\n\n", total);
                printf("You've Booked Salaar\n");
                printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");
                break;
            case 2:
                printf("Total ticket is %d\n\n", total_ticket);
                printf("Total Amount (including GST) :%.2f\n\n", total);
                printf("You've Booked Hi Nanna\n");
                printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");
                break;
            case 3:
                printf("Total ticket is %d\n\n", total_ticket);
                printf("Total Amount (including GST) :%.2f\n\n", total);
                printf("You've Booked Kushi\n");
                printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");
                break;
            case 4:
                printf("Total ticket is %d\n\n", total_ticket);
                printf("Total Amount (including GST) :%.2f\n\n", total);
                printf("You've Booked Custody\n");
                printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");
                break;
            }
        }
       break;
    }
    switch (n)
    {
    case 2:
        printf("Press 1. For PEPSI MRP = 50.₹ :\n");
        printf("Press 2. For POPCORN MRP= 100.₹ :\n");
        printf("Press 3. For COMBO = PEPSI with POPCORN MRP= 130.₹ :\n");
        printf("Enter your Choice :\n");
        scanf("%d", &n);
        printf("Mention Total Person's:\n");
        scanf("%d", &total_ticket);
        printf("Enter Price of Snacks & Softdrinks AS Mentioned :\n");
        scanf("%f", &price);

        total = price + gst_rate;
        gst_rate * 100;
        total = total * total_ticket;
        printf("your price is %.2f :\n\n", price);
        printf("GST Amount :%.2f\n\n", gst_rate);

        switch (n)
        {
        case 1:
            printf("Total Snacks & Soft Drink is %d\n\n", total_ticket);
            printf("Total Amount (including GST) :%.2f\n\n", total);
            printf("Your Order Is PEPSI Just 2 Step Away\n");
            printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");

            break;
        case 2:
            printf("Total Snacks & Soft Drink is %d\n\n", total_ticket);
            printf("Total Amount (including GST) :%.2f\n\n", total);
            printf("Your Order Is POPCORN Just 2 Step Away\n");
            printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");

            break;
        case 3:
            printf("Total Snacks & Soft Drink is %d\n\n", total_ticket);
            printf("Total Amount (including GST) :%.2f\n\n", total);
            printf("Your Order Is PEPSI with POPCORN Just 2 Step Away\n");
            printf("-__-__-Thank You For Using Our Digital Time-__-__-\n\n");

            break;
        }
        break;
    default:

        printf("invalid choice");
        break;
    }
    return 0;
}
