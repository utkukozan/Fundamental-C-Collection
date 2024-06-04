#include <stdio.h>

int main(void)
{
    int counter = 1, numStudents;
    float score, totalScore;
    totalScore = 0.0;

    printf("How many students do you have?\n");
    scanf("%d", &numStudents);
    printf("The number of students has been set to %d.\n", numStudents);
    printf("Please enter the score for each student individually: \n");

    // The loop will run as long as counter is less than or equal to the number of students
    while (counter <= numStudents)
    {
        scanf("%f", &score);
        if (score >= 0 && score <= 100) // Checks that score does not exceed 100
        {
            counter = counter + 1;
            totalScore = score + totalScore;
        }
        else
        {
            printf("The score cannot exceed 100!!!");
        }
    }
    printf("The average score is %5.2f", totalScore / numStudents);

    return 0;
}
