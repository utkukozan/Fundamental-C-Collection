#include <stdio.h>

int main(void)
{
    int number;
    printf("Please enter a number. The program will tell you if it's divisible by 7 or not: ");
    scanf("%d", &number);
    if (number % 7 == 0)
        printf("The number is divisible by 7.");
    else
        printf("The number is not divisible by 7.");
    return 0;

    /* NOTE: Here, since there is only one command after the 'if' statement and followed by 'else', curly braces ({}) are not necessary. Otherwise,
    if there were another command after 'if', the 'else' wouldn't be able to find it and the code would produce an error. This is called 'Dangling Else'.
    Example:
    if (number % 7 == 0)
        printf("The number is divisible by 7.\n");
        printf("The quotient is %d.", number / 7);
    else
        printf("The number is not divisible by 7.");
    This code would be incorrect. */
}
