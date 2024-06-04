#include <stdio.h>
int main (void)
{
    int sum1, sum2, total;
    printf("Welcome to the calculator. Currently, I can only perform addition.");
    printf(" \nPlease enter the first number you want to add: "); /* \n means Newline. It moves the line down */
    scanf("%d", &sum1); /* scanf reads the value */
    printf("Please enter the second number you want to add: ");
    scanf("%d", &sum2);
    total = sum1 + sum2;
    printf("Your total = %d", total);
    return(0);
}
