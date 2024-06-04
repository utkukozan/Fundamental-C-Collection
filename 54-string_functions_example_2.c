#include <stdio.h>
#include <string.h>

int main(void) {
    // Write a program that reads a string from the user and checks if it is a palindrome. For example, the word 'kayak' is a palindrome.
    // Note: To check if a string is a palindrome, compare the first element with the last, then the second element with the second last, and so on.
    char string1[20];
    int flag = 1, i, length;

    printf("Enter a string: ");
    gets(string1);
    length = strlen(string1);

    for (i = 0; i < length / 2 && flag == 1; i++) {
        if (string1[i] != string1[length - 1 - i]) {
            flag = 0;
        }
    }

    if (flag == 1)
        printf("%s is a palindrome.", string1);
    else
        printf("%s is not a palindrome.", string1);

    return 0;
}
