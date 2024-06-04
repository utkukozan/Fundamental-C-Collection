/*
Write statements to input a sentence in uppercase letters. It will
output the string in lowercase letters.
Sample run:
Enter names and grades: HELLO WORLD
Names: hello world
*/

#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[99];
	int i;
	printf("Input a sentence: ");
	gets(str);
	
	for (i=0; i<=strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i]=str[i]+32;
		}
	}
	
	printf("Modified string is: ");
	puts(str);
	
	return(0);
}
