/*Swiper And Ascending {20,22,3,7,0}
Output {0,3,7,20,22}*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Any Number:");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Array Elements:[%d]=", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i] < array[j])
            {
                int swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ,", array[i]);
    }
}