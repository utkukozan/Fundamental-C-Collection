#include <stdio.h>
int main(void)
{
	int a[5],b[5],i,j,k,n=0,counter=0,flag;
	
	// INPUT
	printf("Input array : ");
	for (i = 0 ; i < 5 ; i ++)
	{
		scanf("%d", &a[i]);
	}
	
	// Initialize all the elements of b is zero
	for (i=0;i<5;i++)
		b[i] = 0;
		
	// START
	for (i=0;i<5;i++)
	{
		counter=1;
		for (k=0;k<5;k++)
		{	
			if (b[k] == a[i])				
			{
				flag=0;
				break;
			}
			else
				flag=1;
		}
		if (flag==1)
		{
			for (j=i+1;j<5;j++)
			{
				if (a[i] == a[j])
				{
					counter++;
					b[n++] = a[i];	
				}
			}
			printf("%d is repated %d times\n",a[i], counter);
	    }
	}
}
