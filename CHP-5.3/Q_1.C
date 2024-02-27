//Q.1the minimum number from the given 3 numbers using the ternary operator.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Any Number\n");
    scanf("%d", &a);
    printf("Enter Any Number\n");
    scanf("%d", &b);
    printf("Enter Any Number\n");
    scanf("%d", &c);

    (a < b)   ? (a < c) ? printf("a is minimum")
                        : printf("c is minimum")
      : (b < c)         ? printf("b is minimum")
                        : printf("c is minimum");
    return 0;
}