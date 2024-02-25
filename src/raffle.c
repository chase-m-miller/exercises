#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXLINE 52

int main(void) {
	int names = 0;
	char **raffle = NULL;

	do {
		raffle = realloc(raffle, ++names * sizeof(*raffle));
		raffle[names - 1] = malloc(sizeof(**raffle) * MAXLINE);
		printf("Enter a name: ");
		fgets(raffle[names - 1], MAXLINE, stdin);
	} while (raffle[names - 1][0] != '\n');

	for (int i = 0; i < names; ++i) {
		raffle[i][strcspn(raffle[i], "\n")] = '\0';
	}

	// free the final newline and correct the 'names' value
	free(raffle[--names]);

	srand(time(NULL));
	int winner = rand() % names;

	printf("The winner is %s!\n", raffle[winner]);

	free(raffle);
	for (int i = 0; i < names; ++i) {
		free(raffle[i]);
	}

	return 0;
}
