#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXLINE 52

int main(void) {
	int names = 0;
	char **raffle_entries = NULL;

	// while (1) {
	//	if (entry_index + 1 == index) {
	//		index += 5;
	//		raffle_entries = realloc(raffle_entries, index * sizeof(char *));
	//	}
	//	printf("Enter a name: ");
	//	fgets(string, MAXLINE, stdin);
	// }
	
	do {
		raffle_entries = realloc(raffle_entries, ++names * sizeof(*raffle_entries));
		raffle_entries[names - 1] = malloc(sizeof(**raffle_entries) * MAXLINE);
		printf("Enter a name: ");
		fgets(raffle_entries[names - 1], MAXLINE, stdin);
	} while (raffle_entries[names - 1][0] != '\n');

	// free the final newline and correct the 'names' value
	free(raffle_entries[--names]);

	srand(time(NULL));
	int winner = rand() % names;

	printf("The winner is %s!", raffle_entries[winner]);

	return 0;
}
