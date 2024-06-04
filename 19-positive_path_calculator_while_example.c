#include <stdio.h>

int main(void)
{
    int n;
    printf("Please enter a positive number:\n");
    scanf("%d", &n);

    // If the user enters a negative number, ask again until a positive number is entered.
    while (n < 0)
    {
        printf("Please enter a positive number. The number you entered is negative:\n");
        scanf("%d", &n);
    }
    printf("The positive number you entered is = %d", n);

    // Print a separator
    printf("\n\n\n______________________________________\n\n\n");

    int counter;
    counter = 1;

    // Print numbers from 1 to n
    while (counter <= n)
    {
        printf("%3d", counter);
        counter = counter + 1; // Increment the counter
    }

    // Print another separator
    printf("\n\n\n______________________________________\n\n\n");

    float number, total;
    int i;

    printf("We will ask you for %d numbers.\n", n);
    printf("These numbers will be summed.\nNegative numbers will not be considered.\n");

    i = 1;
    total = 0.0;

    // Collect and sum n positive numbers
    while (i <= n)
    {
        printf("Please enter number %d: ", i);
        scanf("%f", &number);
        if (number > 0)
            total += number;
        i = i + 1;
    }
    printf("The sum of the numbers = %f", total);

    // Steps order:
    // 1 - Initialization step: counter = 1
    // 2 - Condition check step: while (counter <= 10)
    // 3 - Update step: counter = counter + 1

    return 0;
}
