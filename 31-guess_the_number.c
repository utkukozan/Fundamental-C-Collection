#include <stdio.h>
#include <stdlib.h>            // For using the rand() function
#include <time.h>              // For using the srand() function

int main(void)
{
    int i = 1, a, guess, counter = 0;
    srand(time(NULL));         // Seed the random number generator with current time
    a = rand() % 1000 + 1;     // Generate a random integer between 1-1000

    while (i != -999)          // Loop to find the correct integer
    {
        printf("Make a guess between 1-1000: ");
        scanf("%d", &guess);
        
        if (abs(guess - a) > 0 && abs(guess - a) <= 10)    // Check if the user's guess is within ±10 proximity of the generated integer
            printf("Very Hot! ---");
        else if (abs(guess - a) > 10 && abs(guess - a) <= 20)  // Check if the user's guess is within ±10 and ±20 proximity of the generated integer
            printf("Hot! ---");
        else if (abs(guess - a) > 20 && abs(guess - a) <= 50)  // Check if the user's guess is within ±20 and ±50 proximity of the generated integer
            printf("Mild! ---");
        else if (abs(guess - a) > 50)                      // Check if the user's guess is above ±50 proximity of the generated integer
            printf("Cold! ---");

        if (guess < a)                                     // Check if the guessed number is less than the generated number
        {
            printf("Your guess is less than my number.\n");
            counter++;                                     // Increment the count of tries
        }
        else if (guess == a)                               // Check if the guessed number is equal to the generated number
        {
            printf("Congratulations! You found the number after %d tries!!\n", counter);
            i = -999;                                      // Stop the loop
        }
        else                                               // Check if the guessed number is greater than the generated number
        {
            printf("Your guess is greater than my number.\n");
            counter++;                                     // Increment the count of tries
        }
    }

    printf("Bye!");
    return 0;
}
