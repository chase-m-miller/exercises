#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 52

int main(void) {
	int index = 0;
	int size = 5;
	char *string = NULL;
	char **raffle_entries = NULL;

	// while (1) {
	//	if (entry_index + 1 == index) {
	//		index += 5;
	//		raffle_entries = realloc(raffle_entries, index * sizeof(char *));
	//	}
	//	printf("Enter a name: ");
	//	fgets(string, MAXLINE, stdin);
	// }
	
	for (int index = 0; index < size; ++index) {
		fgets(string, MAXLINE, stdin);
		raffle_entries = realloc(raffle_entries, strlen(string) + 2);
		strcpy(raffle_entries[index], string);
	}

	for (int index = 0; index < size; ++index) {
		printf("%s\n", raffle_entries[index]);
	}

	return 0;
}
