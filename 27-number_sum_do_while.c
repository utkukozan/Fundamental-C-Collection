#include <stdio.h>
#include <stdbool.h> // Include the standard library for the bool type

int main(void)
{
	int number;
	int sum = 0;
	char answer, ch;
	bool validInput; // Variable to track the validity of input

	printf("This program will sum up the numbers you enter.\n");
	do
	{
		do
		{
			printf("Enter a number: ");
			validInput = scanf("%d%c", &number, &ch) == 2 && ch == '\n'; // Check if the input is a valid integer followed by a newline
			if (!validInput)
			{
				printf("Invalid input! Please enter a valid number.\n");
				while (getchar() != '\n'); // Clear the input buffer
			}
		} while (!validInput);

		sum += number;

		printf("Do you want to continue? Press 'y' for Yes, 'n' for No: ");
		scanf(" %c", &answer);

		// Validate the user's response
		while (getchar() != '\n'); // Clear the input buffer
		while (answer != 'y' && answer != 'n')
		{
			printf("Invalid input! Please enter 'y' for Yes or 'n' for No: ");
			scanf(" %c", &answer);
			while (getchar() != '\n'); // Clear the input buffer
		}

	} while (answer == 'y');

	printf("The sum of the numbers is %d\n", sum);

	return 0;
}
