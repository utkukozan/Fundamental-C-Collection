#include <stdio.h>
int main(void)
{
	int a[3][3],i,j,sum=0;
	//This program calculates the sum of the rows of a 2D array and writes the sum to the last column of the array
	printf("Input 4 integer: ");
	
	for (i=0;i<2;i++)
		for (j=0;j<2;j++)
			scanf("%d", &a[i][j]);
			
	for (i=0;i<2;i++)
	{
		sum=0;
		for (j=0;j<2;j++)
		{
			sum = sum + a[i][j];
		}
		a[i][2] = sum;
	}

	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}	
	
	return(0);
}
