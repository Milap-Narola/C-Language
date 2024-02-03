#include <stdio.h>
main()
{
    int n, a;
    printf("Enter The First Number:");
    scanf("%d", &n);
    printf("Enter The second Number :");
    scanf("%d", &a);

    while (n <= a)
    {
        if (n % 4 == 0)
            printf("%d\n", n);
        n++; 
    }
}
