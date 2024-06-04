#include <stdio.h>

// This program calculates the scores of participants in a figure skating competition and determines the winner.
// It records the name, surname, and scores from three judges for each skater. Then, it calculates the average score
// for each skater and finds the highest average to determine the winner.

struct skater {
    char name[99], surname[99]; // Name and surname of the skater
    int scores[3]; // Scores obtained from three judges
    int average; // Average score of the skater
};

// Calculates the average score of a skater based on their scores from three judges
int calculateScore(struct skater);

int main(void) {
    int count, i, j, max = 0, index;
    struct skater skaters[100];
    printf("How many skaters are participating in the competition? ");
    scanf("%d", &count);
    
    // Input details for each skater
    for (i = 0; i < count; i++) {
        printf("Enter details for skater %d:\nName: ", i + 1);
        scanf("%s", &skaters[i].name);
        printf("Surname: ");
        scanf("%s", &skaters[i].surname);
        printf("Scores from 3 judges: ");
        for (j = 0; j < 3; j++) {
            scanf("%d", &skaters[i].scores[j]);
        }
    }

    // Calculate average score for each skater
    for (i = 0; i < count; i++) {
        skaters[i].average = calculateScore(skaters[i]);
    }
    
    // Display scores of all skaters
    printf("Scores of the skaters:\n");
    for (i = 0; i < count; i++) {
        printf("%s %s -> %d\n", skaters[i].name, skaters[i].surname, skaters[i].average);
    }
    
    // Find the winner based on the highest average score
    printf("The winner of the competition: ");
    for (i = 0; i < count; i++) {
        if (skaters[i].average > max) {
            max = skaters[i].average;
            index = i;
        }
    }
    printf("%s %s -> %d", skaters[index].name, skaters[index].surname, skaters[index].average);
}

// Calculates the average score of a skater based on their scores from three judges
int calculateScore(struct skater skater) {
    int max = 0, min = skater.scores[0], result = 0, i;
    for (i = 0; i < 3; i++) {
        if (skater.scores[i] > max) {
            max = skater.scores[i];
        }
        if (skater.scores[i] < min) {
            min = skater.scores[i];
        }
        result += skater.scores[i];
    }
    result = (result - max - min) / 1; // Calculate average by excluding the highest and lowest scores
    return result;
}
