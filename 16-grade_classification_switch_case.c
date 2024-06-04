#include <stdio.h>

int main(void)
{
    int grade;
    printf("Which grade is the student in?\n");
    scanf("%d", &grade);

    // Using switch-case to determine the student's grade
    switch (grade)
    {
        case 1:
            printf("The student is in first grade.\n");
            break; // Exiting the switch block
        case 2:
            printf("The student is in second grade.\n");
            break;
        case 3:
            printf("The student is in third grade.\n");
            break;
        case 4:
            printf("The student is in fourth grade.\n");
            break;
        case 5:
            printf("The student is a graduate student.\n");
            break;
        default:
            printf("The grade information is incorrect!\n");
    }

    /* The same logic can be implemented using if-else statements */

    int grade2;
    printf("\nWhich grade is the student in?\n");
    scanf("%d", &grade2);
    if (grade2 == 1)
        printf("The student is in first grade.\n");
    else if (grade2 == 2)
        printf("The student is in second grade.\n");
    else if (grade2 == 3)
        printf("The student is in third grade.\n");
    else if (grade2 == 4)
        printf("The student is in fourth grade.\n");
    else if (grade2 == 5)
        printf("The student is a graduate student.\n");
    else
        printf("The grade information is incorrect!\n");

    /* Now, let's look at another example */

    int a;
    printf("\n\nEnter a value for a: ");
    scanf("%d", &a);
    if (a < 0 || a > 9)
        printf("The value of a is outside the range 0-9.\n");
    else if (a < 5)
        printf("The value of a is within the range 0-4.\n");
    else
        printf("The value of a is within the range 5-9.\n");

    /* The above code can also be written using switch-case */

    int b;
    printf("\n\nEnter a value for b: ");
    scanf("%d", &b);
    switch (b)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            printf("The value of b is within the range 0-4.\n");
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("The value of b is within the range 5-9.\n");
            break;
        default:
            printf("The value of b is outside the range 0-9.\n");
    }

    return 0;
}
