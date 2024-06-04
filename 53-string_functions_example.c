#include <stdio.h>
#include <string.h>

int main(void) {
    // Write a program that reads a string entered by the user and finds its reverse. For example, if the input is "book", it should return "koob".
    char inputString[30], reversedString[30];
    int i, length;

    printf("Enter a string: ");
    gets(inputString);
    length = strlen(inputString);

    for (i = 0; i < length; i++)
        strncpy(&reversedString[i], &inputString[length - i - 1], 1);

    printf("%s", reversedString);

    return 0;
}
