/* write statements to input a sentence and a Word and finds the location
of the Word within the sentence.
S1 ? This is a sunny day
S2? sunny
Sunny is located at index 11 */

#include <stdio.h>
#include <string.h>
int main(void)
{
	int index;
	char str[99],word[99];
	char *pstr[99];
	printf("Input string: ");
	gets(str);
	printf("Input word: ");
	gets(word);
	
	*pstr = strstr(str,word);
	if (*pstr == '\0')
	{
		printf("Word is not found in this string.");
		return(0);
	}
	else
	{
		index = *pstr - str;
		printf("%s is located at index %d",word ,index);
	}
	
	return(0);
}
