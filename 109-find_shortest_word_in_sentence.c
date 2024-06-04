#include <stdio.h>
#include <string.h>

struct sentence { // Define structure for a word in a sentence
    char word[99];
    int location;
};

void findShortest(struct sentence[], struct sentence*, int*);

int main(void) {
    int i = 0, k = 0, j = 0, loc = 1, wordcounter = 0; // Initialize wordcounter to 0
    char str[99];
    struct sentence words[10], shortest;

    printf("Input a sentence: ");
    fgets(str, sizeof(str), stdin);

    words[0].location = 0;
    
    // Initializing words and locations in the sentence to the struct 'words'
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') { // Ignore spaces and newlines
            words[k].word[j++] = str[i];
            loc++;
        } else {
            if (j > 0) { // Check if word is not empty
                words[k].word[j] = '\0'; // Terminate the word string
                wordcounter++;
                k++;
                words[k].location = loc;
                loc++;
                j = 0;
            }
        }
        i++;
    }

    findShortest(words, &shortest, &wordcounter); // Find the shortest word

    // Print the shortest word to the user
    printf("The shortest word is \"%s\" at location %d\n", shortest.word, shortest.location);

    return 0;
}

void findShortest(struct sentence words[], struct sentence *shortest, int *wordcounter) {
    if (*wordcounter == 0) // If no words were found, return early
        return;

    // Finding the shortest word
    int i, k = strlen(words[0].word), word = 0; // Initialize k and word
    for (i = 1; i < *wordcounter; i++) {
        if (strlen(words[i].word) < k) {
            k = strlen(words[i].word);
            word = i;
        }
    }

    *shortest = words[word]; // Return via pointer
}