/* Assume that you have some text files which contain some number of integers.
Write a program which asks the user to enter a filename. 
Then, open and read all integers in the file. 
Create a new file called "output.txt" and write all non-negative integers to the output file.

For example, if the user enters:

data.txt

Then, you should work on "data.txt" file and read all integers in 
the "data.txt" file and then write all non-negative integers to "output.txt" file.

You can test your program with data.txt file provided in the course page. 

-84    24    -30    43    -2
-22    -95    -28    51    45
26    53    -50    -55    -64
80    46    -24    -53    28
28    -48    -12    -18    100
-49    55    97    42    -82
39    -50    -6    5    -81
-55    77    32    -59    -66
94    23    -45    -92    63
-23    -48    31    100    -65  */

#include <stdio.h>
int main(void)
{
	char filename[99];
	int num=0;
	FILE *readFile,*writeFile;
	
	
	printf("Enter a filename :");
	scanf("%s", filename);
	
	readFile = fopen(filename,"r");  // For reading, using "r"
	writeFile = fopen("out.txt","w");
	
	if (readFile == NULL || writeFile == NULL)
	{
		printf("Error");
	}
	else
	{
	  	while (num != EOF)  
	    {	
			fscanf(readFile,"%d",&num);	 
			if (num > 0)
		   		fprintf(writeFile,"%d ",num);
	   	}
	}
	
	fclose (readFile);
	fclose (writeFile);
	
	return(0);
}

