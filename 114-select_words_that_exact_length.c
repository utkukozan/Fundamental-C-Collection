#include <stdio.h>
#include <string.h>

int main(void) {
    int length, len;
    char word[20];
    FILE *readFile;
    FILE *writeFile;
    
    // Open the file for reading words
    readFile = fopen("word.txt", "r");
    // Open the file for writing word lengths
    writeFile = fopen("length.txt", "w");
    
    // Check if both files are opened successfully
    if (readFile == NULL || writeFile == NULL)
        printf("Files couldn't be opened!\n");
    else {
        // Read words from the input file and write word lengths to the output file
        while (fscanf(readFile, "%s\n", &word) != EOF) {
            fprintf(writeFile, "%s %d\n", word, strlen(word));
        }
    }
    // Close both files after operation
    fclose(readFile);
    fclose(writeFile);

    // Open the file for reading word lengths
    readFile = fopen("length.txt", "r");
    // Prompt user to input a length
    printf("Enter a length: ");
    scanf("%d", &length);

    // Read word lengths from the file and print words longer than the specified length
    while (fscanf(readFile, "%s %d\n", &word, &len) != EOF) {
        if (len > length) {
            printf("%s\n", word);
        }
    }

    // Close the file after operation
    fclose(readFile);
    
    return 0;
}
