#include <stdio.h>
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter Array Size :");
    scanf("%d", &size);
    printf("\n\n --:Array of 01:-- \n");

    int a[size], b[size], marge[size];
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter a[%d]:", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n --:Array of 02:-- \n");
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter b[%d]:", i);
        scanf("%d", &b[i]);
    }
    printf("\n\n --:Marge of Array:-- \n");
    for (size_t i = 0; i < size; i++)
    {
        marge[] = a[i] + b[i];
        printf("Marge [%d] =%d\n", i, marge[i],a,b);
    }

    return 0;
}
