#include <stdio.h>
#include <string.h>
#include <ctype.h> // Library used to access functions for character operations.

int main(void) {
    char k;
    isalpha(k); // If the value of k is a letter, it returns a value different from zero, meaning true. Otherwise, it returns zero, meaning false. In short, it checks if it's a letter.
    isdigit(k); // If the value of k is a digit, it returns a value different from zero, meaning true. Otherwise, it returns zero, meaning false. In short, it checks if it's a number.
    islower(k); // If the value of k is a lowercase letter, it returns a value different from zero, meaning true. Otherwise, it returns zero, meaning false. In short, it checks if it's a lowercase letter.
    isupper(k); // If the value of k is an uppercase letter, it returns a value different from zero, meaning true. Otherwise, it returns zero, meaning false. In short, it checks if it's an uppercase letter.
    tolower(k); // It returns the lowercase equivalent of the value of k.
    toupper(k); // It returns the uppercase equivalent of the value of k.

    // Example Program: A program that takes a string from the user and prints it in lowercase letters.
    char string1[70];
    int length1, i;
    printf("Enter a string:");
    gets(string1);
    length1 = strlen(string1);
    for (i = 0; i < length1; i++)
        printf("%c", tolower(string1[i]));

    // Example Program: A program that takes a string from the user containing a mix of letters and numbers, and prints only the letters.
    char string2[70];
    int length2;
    printf("\nEnter a string:");
    gets(string2);
    length2 = strlen(string2);
    for (i = 0; i < length2; i++)
        if (isalpha(string2[i])) // If it returns a value different from zero, meaning true, it executes the command below.
            printf("%c", string2[i]);

    return 0;
}
