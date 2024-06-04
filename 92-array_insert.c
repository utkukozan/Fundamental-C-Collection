#include <stdio.h>
int main(void)
{
	int a[6],num,i,j,index,storage,storagex;
	
	printf("Input array in ascending order: ");
	for (i=0;i<5;i++)
		scanf("%d", &a[i]);
		
	printf("Input value to be inserted: ");
		scanf("%d", &num);
	
	// Finding index which be inserted this value
	for (i=0;i<5;i++)
	{
		if (a[i] > num)
		{
			index = i;  
			break;
		}	
	}
	
	for (i=5;i<=index;i--)
	{
		a[i] = a[i-1];
	}
	a[index] = num;
	
	// Output
	
	printf("Modified array is : ");
	for (i=0;i<5;i++)
	{
		printf("%d ", a[i]);
	}
	
	return(0);
}
