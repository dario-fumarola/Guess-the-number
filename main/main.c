// Author: Dario Fumarola
// Generates a random number and allows the user to guess it

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    /* Intializes random number generator */
    srand((unsigned)time(NULL));

    int number = rand() % 100 + 1;

    int counter = 1; 
    
    /* Start main loop for trials */

    while (true) {

	printf("Hi, I'm thinking of a number. Type your guess (1-100): ");

    /* Count guesses */
    
	int guess = 0;

	scanf("%d", &guess);
	
    /* Conditions for hints and correct answer */

	if (guess > number) {
	    printf("Too high!\n");
	}
	else if (guess < number) {
	    printf("Too low!\n");
	}


	else {
	    printf("You guessed the number in %d tries!\n", counter);
	    break;
	}

	counter++;

    }

    return 0;
}
