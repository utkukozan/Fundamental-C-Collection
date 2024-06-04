#include <stdio.h>

void calculateAverage(int studentCount, int examCount, int scores[][3], double average[]);

int main(void) {
    // This program will take the scores of 5 students for 3 exams each and display the class average for each student.
    // The calculateAverage() function will take a 2D array as input where each row represents a student's scores,
    // and it will calculate the average of each row and store it in a 1D array.

    int test_scores[5][3];
    int i, j;
    double student_averages[5];

    for (i = 0; i < 5; i++) {
        printf("Enter scores for student %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &test_scores[i][j]);
        }
    }

    calculateAverage(5, 3, test_scores, student_averages);

    for (i = 0; i < 5; ++i) {
        printf("Average score for student %d: %.2f\n", i + 1, student_averages[i]);
    }

    return 0;
}

void calculateAverage(int studentCount, int examCount, int scores[][3], double average[]) {
    int i, j;
    double total;
    for (i = 0; i < studentCount; i++) {
        total = 0;
        for (j = 0; j < examCount; j++) {
            total += scores[i][j];
        }
        average[i] = total / examCount;
    }
}
