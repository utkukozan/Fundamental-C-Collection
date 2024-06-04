#include <stdio.h>

int main(void)
{
	int count, number = 1, input, counter;
	int positive = 0, negative = 0, zero = 0;
	printf("This program will ask you to enter integers and will determine how many of them are positive, negative, or zero.\n");
	printf("Please enter the number of integers you want to input: ");
	scanf("%d", &count);
	counter = 0;
	for (; counter < count; counter = counter + 1)  
	{
		printf("Please enter the %d%s integer: ", number, (number == 1) ? "st" : (number == 2) ? "nd" : (number == 3) ? "rd" : "th");
		scanf("%d", &input);
		number = number + 1;
		if (input < 0)
			negative++;
		else if (input > 0)
			positive++;
		else
			zero++;
	}
	printf("Number of positive integers: %d, number of negative integers: %d, number of zeros: %d.", positive, negative, zero);
	
	return 0;
}
