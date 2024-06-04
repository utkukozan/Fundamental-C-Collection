#include <stdio.h>
struct city{  // Define structure for cities
	char city_name [99];
	int lowest_temp;
	int highest_temp;
};
void input(struct city[]); 
struct city difference(struct city[]);
int main(void)
{
	struct city arr[4],largdif;
	int i,max;
	
	input(arr);  // Function that will input city information into a structure.
	
	// Finding the highest temperature //
	max = 0;
	for (i=0;i<4;i++)
		if (arr[i].highest_temp > arr[max].highest_temp)
			max = i;
	
	printf("The highest temperature is %d in %s\n", arr[max].highest_temp, arr[max].city_name);
	
	largdif = difference(arr); // Finding the largest difference 
	
	printf("The city with the largest temperature difference is %s.\n", largdif.city_name);
	printf("Highest temperature: %d\n", largdif.highest_temp);
	printf("Lowest temperature: %d\n", largdif.lowest_temp);
	
	return(0);
}
void input(struct city arr[])
{
	int i;
	// Input city informations //
	for (i=0;i<4;i++)
	{
		printf("Input %d. city name, lowest temp and highest temp: ",i+1);
		scanf("%s %d %d", &arr[i].city_name, &arr[i].lowest_temp, &arr[i].highest_temp);
	}
}
struct city difference(struct city arr[])
{
	// Finding city which has the largest difference //
	int i,difference=0,loc;
	for (i=0;i<4;i++)
	{
		if (arr[i].highest_temp - arr[i].lowest_temp > difference)
		{
			difference = arr[i].highest_temp - arr[i].lowest_temp;
			loc = i; // Store the location of city
		}
	}
	return(arr[loc]); 
}
