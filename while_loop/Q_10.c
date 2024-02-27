#include <stdio.h>
int main()
{
    int n, a=1;
    printf("Enter firse year:");
    scanf("%d", &a);
    printf("Enter Last year:");
    scanf("%d", &n);
    while (a <= n)
    {
        if (a % 4 == 0)
            printf("Leep year is: %d \n", a);
        a++;
     
    }
   
    return 0;
}
