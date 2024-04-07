/*Write a program to print reverse number using the recursion concept.*/
#include <stdio.h>

// Function to calculate the reverse of a number recursively
int reverse(int num) {
    static int rev_num = 0;
    if (num == 0) 
        return rev_num;
    rev_num = rev_num * 10 + num % 10; 
    return reverse(num / 10); 
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reverse of %d is %d\n", num, reverse(num));

    return 0;
}
