#include <stdio.h>

int main(void) {
    /* fputc() Function */
    // This function allows writing a single character to a file.

    // fputc(character, file_pointer);

    // It returns NULL in case of an error.

    char ch = 'A';
    FILE *fileWrite;
    fileWrite = fopen("students.txt", "w");  // Open the file for writing ("w" mode)

    // Check if the file was opened successfully
    if (fileWrite == NULL) {
        printf("File could not be opened\n");
        return 1; // Return with error code
    }

    fputc(ch, fileWrite);  // Write character 'A' to the file
    fputc('l', fileWrite);  // Write character 'l' to the file
    fputc('i', fileWrite);  // Write character 'i' to the file
    fputc('\n', fileWrite);  // Move to a new line in the file

    // Close the file
    fclose(fileWrite);

    /* fputs() Function */
    // This function allows writing a string to a file.

    // fputs(string, file_pointer);

    // It returns NULL in case of an error.

    FILE *fileWrite2;
    fileWrite2 = fopen("students.txt", "w");  // Open the file for writing ("w" mode)

    // Check if the file was opened successfully
    if (fileWrite2 == NULL) {
        printf("File could not be opened\n");
        return 1; // Return with error code
    }

    fputs("William 82\n", fileWrite2);  // Write "William 82" followed by a new line to the file
    fputs("Johnny 97\n", fileWrite2);  // Write "Johnny 97" followed by a new line to the file

    // Close the file
    fclose(fileWrite2);

    /* fprintf() Function */
    // This function allows writing formatted output to a file.

    // fprintf(file_pointer, format, ...);

    // It returns the number of characters written in case of success, or a negative value in case of an error.

    char readFileName[] = "read_file.txt";
    char writeFileName[] = "write_file.txt";
    char name[30];
    int number;
    FILE *readFile, *writeFile;
    readFile = fopen(readFileName, "r");  // Open the file for reading ("r" mode)

    // Check if the file was opened successfully
    if (readFile == NULL) {
        printf("File could not be opened\n");
        return 1; // Return with error code
    }

    // Read data from the file
    fscanf(readFile, "%s %d", name, &number);

    writeFile = fopen(writeFileName, "w");  // Open the file for writing ("w" mode)

    // Check if the file was opened successfully
    if (writeFile == NULL) {
        printf("File could not be opened\n");
        return 1; // Return with error code
    }

    // Write formatted output to the file
    fprintf(writeFile, "%d %s\n", number, name);

    // Close both files
    fclose(readFile);
    fclose(writeFile);

    return 0;
}
