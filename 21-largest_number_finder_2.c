#include <stdio.h>

int main(void)
{
    int number, max = 0;
    int count = 1;

    printf("You will be asked to enter 5 positive numbers, and the largest one will be determined.\n");
    printf("Please enter the first positive number:\n");
    scanf("%d", &number);
    max = number;  // Assume first number is the max to start comparison

    while (count < 5)
    {
        if (number > 0)
        {
            printf("Enter the next number:\n");
            scanf("%d", &number);
            count += 1;  // Increment count by 1
        }
        if (number < 0)
        {
            printf("Please enter a positive number:\n");
            scanf("%d", &number);
        }
        if (number > max)
            max = number;  // Update max if current number is greater
    }
    printf("The largest positive number is: %d", max);

    return 0;
}
