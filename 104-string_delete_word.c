#include <stdio.h>
#include <string.h>

int main(void) {
    char str[99], word[99];
    char *pstr;
    int i, index, len_word;

    printf("Enter a sentence: ");
    fgets(str, 99, stdin); // Read the sentence

    printf("Enter a word: ");
    fgets(word, 99, stdin); // Read the word

    // Remove the newline characters at the end of the strings
    str[strcspn(str, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';

    pstr = strstr(str, word); // Find the word in the sentence

    if (pstr != NULL) {
        index = pstr - str; // Get the index of the word in the sentence
        len_word = strlen(word);

        // Shift characters to the left to remove the word
        for (i = index; str[i + len_word] != '\0'; i++) {
            str[i] = str[i + len_word + 1];
        }
        printf("Modified sentence: %s\n", str); // Output the modified sentence
    } else {
        printf("Word is not found in the sentence!\n"); // Word not found message
    }

    return 0;
}
