#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, lineCounter = 0, charCounter = 0, wordCounter = 0, lineRem, lineRep, numLines;
    char line[100], replacedLine[100], appends[100], ch, choice;
    FILE *readFile, *writeFile;
    int counter4 = 0, counter5 = 0;

    // CHARACTER AND WORD COUNTER
    readFile = fopen("test.txt", "r");
    ch = getc(readFile);
    while (ch != EOF) {
        if (ch == ' ' || ch == '\n')
            wordCounter++;
        else
            charCounter++;
        ch = fgetc(readFile);
    }
    fclose(readFile);

    // LINES AND PRINT THAT
    readFile = fopen("test.txt", "r");
    while (fgets(line, sizeof line, readFile)) {
        printf("%s", line);
        lineCounter++;
    }
    printf("The lines in the file test.txt are: %d", lineCounter);
    printf("\nThe characters in the file test.txt are: %d", charCounter);
    printf("\nThe words in the file test.txt are: %d", wordCounter);
    fclose(readFile);

    // DELETE
    readFile = fopen("test.txt", "r");
    writeFile = fopen("output.txt", "w");
    printf("\nInput the line you want to remove: ");
    scanf("%d", &lineRem);
    printf("Do you want to copy the last modified text file into 'output.txt'? (Y or N): ");
    scanf(" %c", &choice);
    while (fgets(line, sizeof line, readFile)) {
        counter4++;
        if (counter4 == lineRem)
            continue;
        else {
            if (choice == 'Y')
                fprintf(writeFile, "%s", line);
            printf("%s", line);
        }
    }
    fclose(readFile);
    fclose(writeFile);

    // REPLACE A SPECIFIC LINE
    readFile = fopen("test.txt", "r");
    writeFile = fopen("output.txt", "w");
    printf("\nInput the line you want to replace: ");
    scanf("%d", &lineRep);
    printf("Input the content of the new line: ");
    getchar(); // Consume the newline character left in the buffer
    fgets(replacedLine, sizeof replacedLine, stdin);
    printf("Do you want to copy the last modified text file into 'output.txt'? (Y or N): ");
    scanf(" %c", &choice);
    while (fgets(line, sizeof line, readFile)) {
        counter5++;
        if (counter5 == lineRep) {
            if (choice == 'Y')
                fprintf(writeFile, "%s\n", replacedLine);
            printf("%s\n", replacedLine);
        } else {
            if (choice == 'Y')
                fprintf(writeFile, "%s", line);
            printf("%s", line);
        }
    }
    fclose(readFile);
    fclose(writeFile);

    // APPEND A SPECIFIC LINE
    readFile = fopen("test.txt", "r+");
    printf("\nInput the number of lines to be written: ");
    scanf("%d", &numLines);
    printf("Input the lines: ");
    for (i = 0; i < numLines; i++) {
        getchar(); // Consume the newline character left in the buffer
        fgets(appends, sizeof appends, stdin);
        fputs(appends, readFile);
    }
    fclose(readFile);

    printf("\n\n");
    readFile = fopen("test.txt", "r"); // To print to the screen, file is opened with reading mode
    while (fgets(line, sizeof line, readFile))
        printf("%s", line);
    fclose(readFile);

    return 0;
}
