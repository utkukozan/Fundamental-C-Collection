#include <stdio.h>
int main(void)
{
	//This program moves all the zero elements to the end of the array
	int i,a[10],temp,j=1,counter=0,size=10;
	printf("Input 10 number: ");
	for (i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	
	// FIRST CHECK
	for (i=0;i<size;i++)
	{
		if (a[i] == 0)
		{
			temp = a[i];
			a[i] = a[size-j];
			a[size-j] = temp;
			size -= 1;	
		}
	}
	// LAST CHECK
	for (i=0;i<size;i++)
	{
		if (a[i] == 0)
		{
			temp = a[i];
			a[i] = a[size-j];
			a[size-j] = temp;
			size -= 1;	
		}
	}
	
	printf("The array is : ");
	
	for (i=0;i<10;i++)
	{
		printf("%d ", a[i]);
	}

}
