#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "Hello I'm Johnny Bravo";
    char *token; // A pointer is needed for using the strtok function.

    // The strtok function is used to search for tokens (words) in the string until it encounters a space character.
    token = strtok(str, " ");
    printf("%s\n", token); // Prints "Hello".

    // The strtok function continues searching for the next token starting from where it left off.
    token = strtok(NULL, " ");
    printf("%s\n", token); // Prints "I'm".

    return 0;
}
