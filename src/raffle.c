#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXLINE 52

int main(void) {
	int names = 0;
	char **raffle_entries = NULL;

	do {
		raffle_entries = realloc(raffle_entries, ++names * sizeof(*raffle_entries));
		raffle_entries[names - 1] = malloc(sizeof(**raffle_entries) * MAXLINE);
		printf("Enter a name: ");
		fgets(raffle_entries[names - 1], MAXLINE, stdin);
	} while (raffle_entries[names - 1][0] != '\n');

	for (int i = 0; i < names; ++i) {
		raffle_entries[i][strcspn(raffle_entries[i], "\n")] = '\0';
	}

	// free the final newline and correct the 'names' value
	free(raffle_entries[--names]);

	srand(time(NULL));
	int winner = rand() % names;

	printf("The winner is %s!\n", raffle_entries[winner]);

	free(raffle_entries);
	for (int i = 0; i < names; ++i) {
		free(raffle_entries[i]);
	}

	return 0;
}
