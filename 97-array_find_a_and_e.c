#include <stdio.h>

void letterCounter(char sentence[], int *acount, int *ecount) {
    int i;
    for (i = 0; sentence[i - 1] != '.'; i++) {
        if (sentence[i] == 'A' || sentence[i] == 'a')
            (*acount)++; // Parentheses are important here!!!
        if (sentence[i] == 'E' || sentence[i] == 'e')
            (*ecount)++; // Parentheses are important here!!!
    }
}

int main(void) {
    int i, acount = 0, ecount = 0;
    char sentence[100];
    printf("Enter a sentence (End with a period): ");

    for (i = 0; sentence[i - 1] != '.'; i++)
        scanf("%c", &sentence[i]);

    letterCounter(sentence, &acount, &ecount);

    printf("Count of A/a characters: %d", acount);
    printf("\nCount of E/e characters: %d", ecount);

    return 0;
}
