#include <stdio.h>
int main(void)
{
	int i,a[5],min,storage,j;
	printf("Enter 5 integers: ");
	for (i=0;i<5;i++)
		scanf("%d", &a[i]);	// Input 5 integers
		
	for (i=0;i<5;i++)
	{
		min = i;
		for (j=i+1; j<5; j++)
		{
			if (a[j] < a[min])	// Finding the minimum element
				min = j;
		}
			storage = a[i];	// Sorting
			a[i] = a[min];
			a[min] = storage;
	}
	printf("Sorted array is : ");
	for (i=0;i<5;i++)
		printf("%d ",a[i]);	// Output the sorted array
	
	return(0);
}
