#include <stdio.h>

int main(void) {
    int midterm1, midterm2, final, semesterGrade;
    char name[30];
    FILE *fileRead;
    FILE *fileWrite;

    fileRead = fopen("students.txt", "r"); // Open the file for reading ("r" mode)
    if (fileRead == NULL) { // Check if the file opening was successful
        printf("Failed to open the file.\n");
        return 1; // Exit with error code
    }

    fileWrite = fopen("grades.txt", "w"); // Open the file for writing ("w" mode)
    if (fileWrite == NULL) { // Check if the file opening was successful
        printf("Failed to open the file.\n");
        fclose(fileRead); // Close the previously opened file
        return 1; // Exit with error code
    }

    // Read data from the input file and write calculated grades to the output file
    while (fscanf(fileRead, "%s %d %d %d", name, &midterm1, &midterm2, &final) == 4) {
        semesterGrade = (midterm1 * 0.25) + (midterm2 * 0.25) + (final * 0.5);
        fprintf(fileWrite, "%s: %d\n", name, semesterGrade);
    }

    // Close both files
    fclose(fileRead);
    fclose(fileWrite);

    return 0; // Exit the program successfully
}
