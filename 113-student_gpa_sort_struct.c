#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This program sorts student records based on their GPA (Grade Point Average) in descending order.
// It uses a structure to represent each student, storing their name and GPA. The program reads
// input for 5 students, sorts them based on GPA using bubble sort, and then displays the sorted list.

struct student {
    char name[20]; // Name of the student
    double note; // GPA of the student
} students[100], storage;

int main(void) {
    int i, j;
    
    // Input information for each student
    for (i = 0; i < 5; i++) {
        printf("Enter name and GPA of student %d: ", i + 1);
        scanf("%s %lf", &students[i].name, &students[i].note);
    }
    
    // Sort the student records based on GPA using bubble sort
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            if (students[j].note < students[j + 1].note) {
                // Swap student records if the GPA of the current student is less than the next one
                storage = students[j];
                students[j] = students[j + 1];
                students[j + 1] = storage;
            }
        }
    }
    
    // Display the sorted student records
    for (i = 0; i < 5; i++) {
        printf("Student name: %s, GPA: %.1f\n", students[i].name, students[i].note);
    }
    
    return 0;
}
