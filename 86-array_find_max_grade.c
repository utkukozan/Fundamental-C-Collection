#include <stdio.h>
void findMax(int [], int [],int);
int main (void)
{
	int size, num[100],marks[100],i;
	printf("Input how many students in your student: ");
	scanf("%d", &size);
	
	for (i=0;i<size;i++)
	{	
		printf("Input student number and him/his mark : ");
		scanf("%d %d", &num[i], &marks[i]);
	}
	
	findMax(num, marks,size);
	
	
	return(0);
}
void findMax(int studentNo[], int a[],int size)
{
	int i,storage,max,maxindex;
	max = a[0];
	for (i=0;i<size;i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			maxindex = i;
		}
	}
	printf("First student of class informations: \nStudent number : %d and marks %d", studentNo[maxindex], a[maxindex]);
	
}
