#include <stdio.h>

int main(void)
{
	int num, a;
	float total_point = 0.0, point;
	printf("Please enter the number of students: ");
	scanf("%d", &num);
	for (a = 1; a <= num; a++) // a++ --> a=a+1
	{
		printf("\nPlease enter the grade of student %d: ", a);
		scanf("%f", &point);
		total_point = point + total_point;
	}
	printf("Average of student grades: %f", total_point / num);
	
	return 0;
}
