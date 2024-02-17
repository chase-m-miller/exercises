#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXLINE 7

int is_valid_difficulty(int difficulty) {
	if (difficulty < 1 || difficulty > 3) {
		return 1;
	}

	return 0;
}

int generate_answer(int difficulty) {
	int answer;

	switch (difficulty) {
		case 1: {
			answer = (rand() % 10) + 1;
			break;
		}
		case 2: {
			answer = (rand() % 100) + 1;
			break;
		}
		case 3: {
			answer = (rand() % 1000) + 1;
			break;
		}
	}

	return answer;
}

int main(void) {
	char input_buffer[MAXLINE];
	int total_guesses = 0;
	int difficulty;
	int guess;
	int answer;

	printf("Let's play Guess the Number.\n");
	printf("Pick a difficulty level (1, 2, or 3): ");
	do {
		fgets(input_buffer, MAXLINE, stdin);
		difficulty = atoi(input_buffer);
	} while (is_valid_difficulty(difficulty) != 0);

	srand(time(NULL));
	answer = generate_answer(difficulty);

	printf("I have my number. What's your guess? ");
	while (guess != answer) {
		fgets(input_buffer, MAXLINE, stdin);
		guess = atoi(input_buffer);
		++total_guesses;

		if (guess > answer) {
			printf("Too high. Guess again: ");
		}
		else if (guess < answer) {
			printf("Too low. Guess again: ");
		}
	}

	printf("You got it in %i guesses.\n", total_guesses);
	printf("Goodbye!\n");

	return 0;
}
