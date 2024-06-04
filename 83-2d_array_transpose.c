#include <stdio.h>
void transpose(int arr2[4][4]);
int main(void)
{
	int arr1[4][4],i,j;
	
	printf("Enter the array: ");
	for(i=0;i<4;i++)
		for (j=0;j<4;j++)
			scanf("%d", &arr1[i][j]);
	
	printf("The array is: \n");
	for(i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
			printf("%d  ", arr1[i][j]);
	    printf("\n");
	}
	
	transpose(arr1);
	
	printf("\nTranspose of array : \n");
	for(i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
			printf("%d  ", arr1[i][j]);
	    printf("\n");
	}
	
	return(0);
}
void transpose(int arr1[][4])
{
	int i,j,temp;
	
	for (i=0;i<4;i++)
	{
		for (j=0;j<i;j++)
		{
			temp = arr1[i][j];
			arr1[i][j] = arr1[j][i];
			arr1[j][i] = temp;
		}
	}
}	
