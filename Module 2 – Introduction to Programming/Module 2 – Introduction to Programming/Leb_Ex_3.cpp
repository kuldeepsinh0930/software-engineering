//Write a C program that implements a simple number guessing game. The program should 
//generate a random number between 1 and 100, and the user should guess the number 
//within a limited number of attempts. 
//? Challenge: Provide hints to the user if the guessed number is too high or too low

#include <stdio.h>

int main() {
    int secret = 42; // Fixed secret number (since rand is not allowed)
    int guess, attempts = 5;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between 1 and 100. You have %d attempts.\n\n", attempts);

    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == secret) {
            printf("?? Congratulations! You guessed the number in %d attempts.\n", i);
            return 0;
        } else if (guess < secret) {
            printf("Too low!\n\n");
        } else {
            printf("Too high!\n\n");
        }
    }

    printf("? You've used all attempts. The correct number was: %d\n", secret);

    return 0;
}

