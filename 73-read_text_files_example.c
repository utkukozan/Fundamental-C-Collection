#include <stdio.h>

int main(void) {
    int mt1, mt2, final, semesterGrade;
    char name[30];
    FILE *fileRead;
    fileRead = fopen("students.txt", "r");  // Open the file for reading ("r" mode)

    // Check if the file was opened successfully
    if (fileRead == NULL) {
        printf("File could not be opened\n");
        return 1; // Return with error code
    }

    // Read student data until end of file
    while (fscanf(fileRead, "%29s %d %d %d\n", name, &mt1, &mt2, &final) != EOF) {
        // Calculate semester grade
        semesterGrade = (mt1 * 0.25) + (mt2 * 0.25) + (final * 0.5);

        // Print student's name and semester grade
        printf("%s Semester Grade: %d\n", name, semesterGrade);
    }

    // Close the file
    fclose(fileRead);
    return 0;
}
