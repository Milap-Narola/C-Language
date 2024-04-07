/*02. Write a Program to convert any number to binary number using UDF.  */
#include <stdio.h>

void decimalToBinary(int decimal)
{

    int binary[32];

    int i = 0;
    while (decimal > 0)
    {

        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary representation:");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("\n%d\n", binary[j]);
    }
}

int main()
{
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}
