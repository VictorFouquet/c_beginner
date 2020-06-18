#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    const int MAX = 100, MIN = 1;
    int mysterious, guess, attempts, newGame;

    // Instruction that initialize the random number generator
    // This must be done only once in the program, but must be done
    srand(time(NULL));

    // Assign a random integer value to mysterious number variable
    mysterious = (rand() % (MAX - MIN + 1)) + MIN;

    // Initialize the number of attempts to be 0
    attempts = 0;

    // Initialize a boolean value to true
    newGame = 1;

    printf("\nWelcome to more or less mini game !\n\nGuess what's the mysterious number to win!\n>>> ");

    // As we know that there will be at least one attempt, we can use a do...while loop
    // Loop will break when the guess is equal to the mysterious number

    do 
    {
        // Increment the number of attempts
        attempts ++;

        scanf("%d", &guess);

        // We indicate the user wether the mysterious number is greater or lower than its guess
        if (guess > mysterious)
            printf("\nIt's less than %d !\n>>> ", guess);

        else if (guess < mysterious)
            printf("\nIt's more than %d !\n>>> ", guess);
        
        else
        {
            printf("\n*** You win, mysterious number was %d ! ***\n", guess);
            printf("(Number of attempts : %d)\n\n", attempts);

            // Ask the player if he wants to continue playing
            printf("Do you want to start a new game ?\n0. No\n1. Yes\n>>> ");
            scanf("%d", &newGame);

            if (newGame)
            {
                // If player wants to start a new game, generate a new mysterious number
                mysterious = (rand() % (MAX - MIN + 1)) + MIN;

                // And reset the number of attemps to zero
                attempts = 0;
                printf("\n\nGuess what's the mysterious number to win!\n>>> ");
            }
        }

    } while(newGame);
    
    printf("\n\n*** Bye bye !! ***\n\n");

    return 0;
}