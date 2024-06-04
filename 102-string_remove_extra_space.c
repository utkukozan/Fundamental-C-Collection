/* Write a program that inputs a sentence from user. It will update the string by removing the extra blank
characters between the words. */
 
#include <stdio.h>
int main(void)
{
	char str[99], str2[99];
	int i=0,k=0;
	printf("Input a sentence: ");
	gets(str);  // Read string
	
	while (str[i] != '\0')	// Loop along the end of string.
	{
		if (str[i] != ' ' || str[i+1] != ' ')  // Check extra space
			str[k++] = str[i];	// Modify
			
		i++;
	}
	str[k] = '\0';	//This is important for to determine the end.
	printf("Modified sentence: ");	
	puts(str);	// Output modified string
	
	return(0);	
}
