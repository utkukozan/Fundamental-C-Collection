#include <stdio.h>
// FUNCTION DEFINITIONS
void take_initialvalues(int *,int *,int *);
void update(int *,int *);

// MAIN FUNCTION
int main(void)
{
	int sharks,guppies,days,i;
	take_initialvalues(&sharks,&guppies,&days);
	
	for (i=0;i<=days;i++)
	{
		printf("Start of day %d:  Sharks = %d    Guppies = %d\n",i,sharks,guppies);
		guppies = guppies - sharks * 5;
		printf("End of day   %d:  Sharks = %d    Guppies = %d\n\n",i,sharks,guppies);
		update(&sharks,&guppies);
		if (guppies <=0 || sharks <=0)   // For populations of sharks and guppies dies 
			break;
		
		if (i==days)
			printf("DONE!");
	}
	return(0);
}

// TAKING VALUES
void take_initialvalues(int *sharks,int *guppies,int *days)
{
	printf("Please enter number of sharks: ");
	scanf("%d",sharks);
	printf("Please enter number of guppies: ");
	scanf("%d",guppies);	
	printf("Number of days to observe: ");
	scanf("%d",days);
}

// UPDATE
void update(int *sharks,int *guppies)
{
	if (*sharks *50 <= *guppies)
		*sharks = *sharks +  (( *guppies * 5 ) / 100);
	else
		*sharks = *sharks/2;
		
	if (*sharks < (( *guppies * 20 ) / 100))
		*guppies = *guppies +  (( *guppies * 80 ) / 100);		
}
