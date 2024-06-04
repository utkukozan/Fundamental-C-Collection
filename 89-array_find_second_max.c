#include <stdio.h>
int main (void)
{
	int a[5],i,j,max=0,index,secondmax=0;
	printf("Input array: ");
	for (i=0;i<5;i++)
		scanf("%d", &a[i]);
		
	for (i=0;i<5;i++)
	{	
		if (a[i] > max)
		{
			max = a[i];
			index = i;
	   	}
	}
	printf("Max is %d on %d element", max, index);
	
	for (i=0;i<5;i++)
	{	
		if (i == index)
			i++;
		else
		{
			if (a[i] > secondmax)
			{
				secondmax = a[i];
		   	}
		}
	}
	printf("\nSecond max is %d", secondmax);
	
	return(0);
}
