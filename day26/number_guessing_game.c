#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number, guess, attempts = 0;
     int max_attempts = 10; // Maximum number of attempts allowed

    // Generate a random number between 1 and 100
    srand(time(NULL));
    number = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n", max_attempts);

    while (attempts < max_attempts) {

        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number in %d attempts.\n", attempts);
            break;
        }
    }

    if (attempts == max_attempts && guess != number) {
        printf("Sorry, you've used all your attempts. The number was %d.\n", number);
    }

    return 0;
}
