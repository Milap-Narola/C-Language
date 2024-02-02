#include <stdio.h>
 int main()
{
    float unit, bill = 0, scharge = 0;
    printf("Enter Your Unit :");
        scanf("%f", &unit);
    if (unit <= 50)
    {
        bill = unit * 0.5;
    }
    else if (unit <= 150)
    {
        bill = 25 + (unit - 50) * 0.75;
    }
    else if (unit <= 250)
    {
        bill= 100+(unit-150)*1.20;
    }
    else{
        bill=220+(unit-250)*1.5;
    }
    scharge=bill*0.2;
    bill+=scharge;
    printf("your electricity bill is %.2f",bill);
}