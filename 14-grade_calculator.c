#include <stdio.h>

int main(void)
{
    int grade;
    printf("Hello, welcome to the Grade Calculator.\n");
    printf("Please enter the grade:\n");

    while (1) {
        scanf("%d", &grade);
        if (grade >= 90 && grade <= 100)
            printf("The equivalent letter grade for the student's score is AA.");
        else if (grade < 90 && grade >= 80)
            printf("The equivalent letter grade for the student's score is BA.");
        else if (grade < 80 && grade >= 70)
            printf("The equivalent letter grade for the student's score is BB.");
        else if (grade < 70)
            printf("The equivalent letter grade for the student's score is F.");
        else
            printf("Grades above 100 cannot be calculated!");
    }

    return 0;
}
