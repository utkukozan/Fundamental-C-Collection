#include <stdio.h>

// Function to count the number of each letter in a sentence
void letterCounter(char sentence[], int totalLetters[])
{    
    int i;
    for (i = 0; i < 26; ++i)
        totalLetters[i] = 0;  // Initialize all values to 0
        
    for (i = 0; sentence[i] != '.' ; i++)
    {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z')     // Formula to find the corresponding index: subtract the first letter from the found letter
            totalLetters[(int)sentence[i] - (int)'A']++;  // totalLetters[index of the corresponding letter]
        if (sentence[i] >= 'a' && sentence[i] <= 'z')
            totalLetters[(int)sentence[i] - (int)'a']++;             
    }    
}

int main(void)
{
    int i, totalLetters[26];
    char sentence[100];
    printf("Enter a sentence (End with a period): ");
    
    for (i = 0; sentence[i-1] != '.' ; i++)
        scanf("%c", &sentence[i]);
        
    letterCounter(sentence, totalLetters);
    
    for (i = 0; i < 26; i++)
        printf("Number of '%c'/'%c': %d\n", 'A' + i, 'a' + i, totalLetters[i]); // 'A' + i and 'a' + i print in order A/a, B/b, C/c, etc.

    return(0);
}
