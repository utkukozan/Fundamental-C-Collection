#include <stdio.h>

int length(char*);

int main(void) {
    // Write a program to find the longest surname among the given four surnames.
    char *names[5] = {"James", "Kozan", "Taylor", "Williams"};
    char *longestName;
    int i, maxLength = 0, size;

    for (i = 0; i < 4; i++) {
        size = length(names[i]);
        printf("Length %d\n", size);
        if (size > maxLength) {
            maxLength = size;
            longestName = names[i];
        }
    }

    printf("Longest name = %s, size = %d", longestName, maxLength);
}

int length(char *s) {
    int n = 0;
    for (; *s != '\0'; s++)
        n++;
    return n;
}
