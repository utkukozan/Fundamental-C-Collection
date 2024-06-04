#include <stdio.h>
#include <string.h>
//This code reads lines from a file, encrypts each line by shifting the alphabetic characters by one
//position in the alphabet (wrapping around from 'Z' to 'A' and 'z' to 'a'),
//and writes the encrypted lines to another file.
void encrypt(char []);

int main(void)
{
    char line[999];
    FILE *readFile, *writeFile;
    readFile = fopen("text.txt","r");
    writeFile = fopen("encrypted.txt","w");
    
    // Read lines from input file, encrypt them, and write to output file
    while (!feof(readFile))
    {
        fgets(line, 80, readFile);
        encrypt(line);
        fprintf(writeFile, "%s", line);
    }
    
    fclose(readFile);
    fclose(writeFile);
    
    return 0;
}

// Function to encrypt a line of text
void encrypt(char line[])
{
    int i, length;
    length = strlen(line);
    for (i = 0; i < length; i++)
    {
        if ('A' <= line[i] && line[i] < 'Z' || 'a' <= line[i] && line[i] < 'z')
        {
            // Shift uppercase and lowercase letters by 1 in ASCII
            line[i] += 1;
        }
        else if (line[i] == 'Z')
        {
            // Wrap 'Z' around to 'A'
            line[i] = 'A';
        }
        else if (line[i] == 'z')
        {
            // Wrap 'z' around to 'a'
            line[i] = 'a';
        }
    }
}
