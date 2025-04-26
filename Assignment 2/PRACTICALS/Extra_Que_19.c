//NUMBER GUESSING GAME:
// Write a C program that implements a simple number guessing game.
// The program should generate a random number between 1 and 100,and
// the user should guess the number within a limited number of attempts.
//Challenge: Provide hints to the user if the guessed number is too high or too low. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    int maxAttempts = 10;  // Limit of attempts

    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have generated a number between 1 and 100. Try to guess it.\n");
    printf("You have %d attempts.\n", maxAttempts);

    // Main game loop
    while(attempts < maxAttempts) {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess > number) {
            printf("Too high! Try again.\n");
        } else if(guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
            break;  // Exit the loop if guessed correctly
        }

        printf("You have %d attempts left.\n", maxAttempts - attempts);
    }

    // If the user exhausts all attempts
    if(guess != number) {
        printf("\nSorry, you've run out of attempts. The correct number was %d.\n", number);
    }

    return 0;
}

