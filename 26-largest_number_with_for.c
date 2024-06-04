#include <stdio.h>

int main(void)
{
	int number, max;
	max = 0;
	
	printf("Please enter numbers. Enter '0' when you have entered enough numbers: ");
	for (printf(""), scanf("%d", &number); number > 0; printf("Enter a number: "), scanf("%d", &number))
	{
		if (number > max)
			max = number;
	}
	printf("The largest number is %d", max);
	
	return 0;
}
