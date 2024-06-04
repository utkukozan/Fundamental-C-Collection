#include <stdio.h>
#include <stdlib.h> // Include <stdlib.h> for dynamic memory allocation

struct student {
    int number;
    char *answer; // Change answer to a pointer for dynamic memory allocation
};

struct score {
    int number, grade;
};

int main(void) {
    int i, j, numberOfQuestions, scoring;
    char answerKey[10];
    
    // Get the number of questions
    printf("Enter the number of questions: ");
    scanf("%d", &numberOfQuestions);

    // Check if the number of questions is within the allowed range
    if (numberOfQuestions <= 0) {
        printf("Invalid number of questions. Please enter a number greater than 0.\n");
        return 1; // Exit with error code 1
    }

    // Get the answer key
    printf("Enter the answer key: ");
    for (i = 0; i < numberOfQuestions; i++) {
        scanf(" %c", &answerKey[i]);
    }

    struct student *students = malloc(numberOfQuestions * sizeof(struct student)); // Dynamically allocate memory for students
    struct score *studentScores = malloc(numberOfQuestions * sizeof(struct score)); // Dynamically allocate memory for scores

    // Check if memory allocation was successful
    if (students == NULL || studentScores == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with error code 1
    }

    // Get information of students
    for (i = 0; i < numberOfQuestions; i++) {
        printf("Information for student %d:\n", i + 1);
        printf("Number: ");
        scanf("%d", &students[i].number);
        
        // Allocate memory for student's answer
        students[i].answer = malloc(numberOfQuestions * sizeof(char));
        if (students[i].answer == NULL) {
            printf("Memory allocation failed.\n");
            return 1; // Exit with error code 1
        }
        
        printf("Answers: ");
        for (j = 0; j < numberOfQuestions; j++) {
            scanf(" %c", &students[i].answer[j]);
        }
    }

    // Calculate scores for students
    for (i = 0; i < numberOfQuestions; i++) {
        scoring = 0;
        for (j = 0; j < 10; j++) {
            if (answerKey[j] == students[i].answer[j]) {
                scoring += 10;
            }
        }
        studentScores[i].number = students[i].number;
        studentScores[i].grade = scoring;
    }

    // Print student scores
    printf("\nStudent scores:\n");
    for (i = 0; i < numberOfQuestions; i++) {
        printf("Number: %d -> Grade: %d\n", studentScores[i].number, studentScores[i].grade);
        
        // Free memory allocated for each student's answer
        free(students[i].answer);
    }

    // Free memory allocated for arrays
    free(students);
    free(studentScores);

    return 0;
}
