#include <stdio.h>

int main(void) {
    /* *** FILE OPENING *** */

    // Open the file in "r" mode for reading
    FILE *fileRead;
    fileRead = fopen("input.txt","r");

    // Check if the file was opened successfully
    if (fileRead == NULL) {
        printf("Failed to open input.txt\n");
        return 1; // Exit the program with an error code
    }

    /* *** fgetc() Function *** */

    char ch;

    // Read the first character from the file
    ch = fgetc(fileRead);

    // Check if reading was successful
    if (ch == EOF) {
        printf("End of file reached\n");
    } else {
        printf("First character in the file: %c\n", ch);
    }

    /* *** fgets() Function *** */

    char str[30];

    // Read a string from the file
    fgets(str, sizeof(str), fileRead);

    // Check if reading was successful
    if (str[0] == '\0') {
        printf("Failed to read string from file\n");
    } else {
        printf("String read from file: %s", str);
    }

    /* *** fscanf() Function *** */

    int x, y, k;
    double z;

    // Read integer, character, and double from the file
    fscanf(fileRead, "%d %c %d %lf", &x, &ch, &k, &z);

    // Display the values read from the file
    printf("x: %d, ch: %c, k: %d, z: %f\n", x, ch, k, z);

    /* *** FILE CLOSING *** */

    // Close the file
    fclose(fileRead);

    return 0;
}
