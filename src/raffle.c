#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 52

int main(void) {
	int strings = 0;
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
		raffle_entries = realloc(raffle_entries, ++strings * sizeof(*raffle_entries));
		raffle_entries[strings - 1] = malloc(sizeof(**raffle_entries) * MAXLINE);
		printf("Enter a name: ");
		fgets(raffle_entries[strings - 1], MAXLINE, stdin);
	} while (raffle_entries[strings - 1][0] != '\n');

	// free the final newline and correct the 'strings' value
	free(raffle_entries[--strings]);

	for (int i = 0; i < strings; ++i) {
		printf("%s", raffle_entries[i]);
	}

	return 0;
}
