/* Write a program that will read a sentence and search for dangerous words “BOMB” “GUN” (either all
upper case or all lower case) that can be separated by one of the delimiters: ,.!?"; It will output the
number of those words exist in the sentence. */

#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[99];
	int i=0, k=0, counter=0;
	printf("Enter a sentence: ");  
	gets(str);	// Read the string
	
	// Search forbidden words in string
	if (strstr (str,"BOMB") != NULL)  
		counter++;
	if (strstr (str,"bomb") != NULL)
		counter++;
	if (strstr (str,"GUN") != NULL)
		counter++;
	if (strstr (str,"gun") != NULL)
		counter++;
		
	printf("Count : %d", counter);
	
	return(0);
}
