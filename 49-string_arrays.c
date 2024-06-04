#include <stdio.h>

int main(void) {
    // Strings are arrays of characters, and each character represents a letter. The value of a string is the address of its first character.
    // To allocate enough memory in the main memory for a string that can contain the desired text, we create an array of sufficient size. For example,

    char text1[20];

    // This command creates a 20-character array. Each element is a variable representing a letter. To assign a value to this variable, we can write

    char text[] = "Hello, C."; // is sufficient. This assignment is actually equivalent to:

    text[0] = 'H';
    text[1] = 'e';
    text[2] = 'l';
    text[3] = 'l';
    text[4] = 'o';
    text[5] = ',';
    text[6] = ' ';
    text[7] = 'C';
    text[8] = '.';
    text[9] = '\0';

    // The '\0' character is the NULL character, which indicates the end of the string. We can also perform this operation more succinctly:

    char text2[] = "Hello, C.\n"; // In this case, the value is assigned to the array 'text' during declaration.

    // The same operation can be done in a more complex way as well:
    
    char text3[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'C', '.', '\0'};

    // This loop counts the number of characters in the string 'sentence'. It stops when it reaches the '\0' character, which is automatically added to the end of strings.
    char sentence[] = "Hello World";
    int count = 0;
    int i;
    for (i = 0; sentence[i] != '\0'; i++) {
        count++;
    }
    printf("%s contains %d characters.", sentence, count);

    return 0;
}
