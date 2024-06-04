#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// *****************************************************************************************
// FUNCTION PROTOTYPES
// *****************************************************************************************
int randomIntGenerator();
char randomCharGenerator();
int colorCheck(char, char);
int dicePlay();
int diceRandom();

// *****************************************************************************************
// MAIN FUNCTION
// *****************************************************************************************
int main(void)
{
    int gameChoose, counter = 1, brickCounter = 0, b, b1, point = 0, storagePoint = 0, totalBricks = 0, power = 1, bricksWon = 0, diceWon = 0;
    char a, a1;
    srand(time(NULL)); // Seed for random number generation

    do
    {
        // ******************** MENU SCREEN ********************
        printf("------------------------------------------------------------\n");
        printf("WELCOME to TIPTOP GAME PLATFORM\n");
        printf("------------------------------------------------------------\n");
        printf("1.Play the Brick Game\n");
        printf("2.Play the Dice Game\n");
        printf("3.Exit\n");
        printf("Choose what to do (1, 2, 3): ");
        scanf("%d", &gameChoose);
        // ****************************************************

        switch (gameChoose) // Selection on Menu Screen
        {
        case 1: // For Brick Game

            printf("***** Welcome to Brick Game ******\n\n");

            counter = 1;
            totalBricks = 0;
            storagePoint = 0;
            brickCounter = 0;
            bricksWon = bricksWon + 1;

            while (counter != 0)
            {
                printf("Two bricks are created:\n");
                totalBricks = totalBricks + 1;

                a = randomCharGenerator();
                b = randomIntGenerator();
                a1 = randomCharGenerator();
                b1 = randomIntGenerator();

                printf("Brick1: color: %c point: %d\n", a, b);
                printf("Brick2: color: %c point: %d\n", a1, b1);

                if (colorCheck(a, a1) == 1) // Same Colors Check
                {

                    point = b + b1;
                    printf("You gained %d points\n", point);
                    storagePoint = storagePoint + point;
                    printf("Total score: %d\n", storagePoint);
                }
                else if ((a1 == 'R' && a == 'Y') || (a1 == 'Y' && a == 'R')) // One is red, one is yellow Check
                {
                    point = (b + b1) / 2;
                    printf("You gained %d points\n", point);
                    storagePoint = storagePoint + point;
                    printf("Total score: %d\n", storagePoint);
                }
                else if (((a1 != a) && ((b1 == 2) || (b == 2)))) // Two Bricks are different Check
                {
                    counter = 0;
                    printf("End of the game\n");
                    printf("Total score: %d\n", storagePoint);
                    printf("%d bricks are created Bye!\n", totalBricks);
                }
                else // Different Colors Check
                {
                    printf("No point gained\n");
                    printf("Total score: %d\n", storagePoint);
                }
                
                sleep(2);
            } // While Closer
            break;

        case 2: // For Dice Game
            printf("***** Welcome to Dice Game ******\n");
            printf("Bot throws the dice first\n");
            int botDice = dicePlay();
            printf("Bot's sum of dice: %d\n", botDice);
            printf("User throws the dice\n");
            int userDice = dicePlay();
            printf("Your sum of dice: %d\n", userDice);
            if (userDice > botDice)
            {
                printf("You won the game\n");
                diceWon = diceWon + 1;
            }
            else
                printf("You lost the game\n");
                
            sleep(2);
            break;

        case 3: // For Exit
            printf("You won %d bricks game and %d Dice game !!\n\n", bricksWon, diceWon);
            printf("Bye!\n");
            power = 0;
            break;
        } // Switch Closer
    } while (power != 0); // Quitting...
    return 0;
} // Main Closer

// *****************************************************************************************
// FUNCTION DEFINITIONS
// *****************************************************************************************
int randomIntGenerator() // For Brick Value
{
    return rand() % 10 + 1;
}

char randomCharGenerator() // For Brick Color
{
    char randomChar;
    switch (rand() % 3)
    {
    case 0:
        randomChar = 'B';
        break;
    case 1:
        randomChar = 'R';
        break;
    case 2:
        randomChar = 'Y';
        break;
    }
    return randomChar;
}

int colorCheck(char a, char a1) // For Same Brick Color Checker
{
    return (a == a1);
}

int dicePlay() // For Dice Game ( Like Main Function of Dice )
{
    int d1, d2;
    d1 = diceRandom();
    d2 = diceRandom();

    printf("Dice1: %d\n", d1);
    printf("Dice2: %d\n", d2);
    return d1 + d2;
} // dicePlay Closer

int diceRandom() // For Dice Values
{
    return rand() % 6 + 1;
}

