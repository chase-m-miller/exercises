#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 52

int main(void) {
	int entry_index = 0;
	int entry_limit = 5;
	char input_buffer[MAXLINE];
	char **raffle_entries = malloc(entry_limit * sizeof(char *));

	// while (1) {
	//	if (entry_index + 1 == entry_limit) {
	//		entry_limit += 5;
	//		raffle_entries = realloc(raffle_entries, entry_limit * sizeof(char *));
	//	}
	//	printf("Enter a name: ");
	//	fgets(input_buffer, MAXLINE, stdin);
	// }
	
	for (int i = 0; i < entry_limit; ++i) {
		fgets(input_buffer, MAXLINE, stdin);
		raffle_entries[i] = input_buffer;
	}

	for (int i = 0; i < entry_limit; ++i) {
		printf("%s\n", raffle_entries[i]);
	}

	return 0;
}
