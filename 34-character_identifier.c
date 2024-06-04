#include <stdio.h>

int identifyCharacter(char);

int main(void)
{
    int n, i, category;
    char character;

    do
    {
        printf("Enter a character (to exit, type q): ");
        scanf(" %c", &character);
        category = identifyCharacter(character);

        switch (category)
        {
        case 1:
            printf("%c is a numeric character.\n", character);
            break;
        case 2:
            printf("%c is an alphabetic character.\n", character);
            break;
        case 3:
            printf("%c is a special character.\n", character);
            break;
        }
    } while (character != 'q' && character != 'Q');
    
    return 0;
}

int identifyCharacter(char ch)
{
    if ('0' <= ch && ch <= '9')
        return 1; // Numeric character
    else if (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z'))
        return 2; // Alphabetic character
    else
        return 3; // Special character
}
