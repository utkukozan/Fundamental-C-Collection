/* Ex: write statements to input a sentence and find and output how many 
1-letter, 2-letter, 3-letter and 4-letter words exist in a sentence
S1 = This is a long day
1-letter: 1
2-letter: 1
3-letter: 1
4-letter: 2
Count words and characters in each word */

#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[99];
	int i=0,counter=0,counter1=0,counter2=0,counter3=0,counter4=0;
	printf("Input string : ");
	gets(str);
	
	for (int i = 0; i<=strlen(str); ++i) 
	{
		if (str[i] != ' ' && str[i] != '\0')
			counter++;
		else 
		{
			switch(counter)
			{
				case 1:
					counter1++;
				break;
				case 2:
					counter2++;
				break;
				case 3:
					counter3++;
				break;
				case 4:
					counter4++;
				break;
			}
			counter=0;
		}
	}
	printf("Letter 1: %d\n", counter1);
	printf("Letter 2: %d\n", counter2);
	printf("Letter 3: %d\n", counter3);
	printf("Letter 4: %d\n", counter4);
	
	return(0);
}
