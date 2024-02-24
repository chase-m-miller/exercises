#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 32

int main(void) {
	int rows = 0;
	char **strings = NULL;

	// strings = malloc(rows * sizeof(*strings));
	// strings[0] = malloc(sizeof(**strings) * MAXLINE);
	// strings[1] = malloc(sizeof(**strings) * MAXLINE);
	// fgets(strings[0], MAXLINE, stdin);
	// fgets(strings[1], MAXLINE, stdin);

	do {
		strings = realloc(strings, ++rows * sizeof(*strings));
		strings[rows - 1] = malloc(sizeof(**strings) * MAXLINE);
		fgets(strings[rows - 1], MAXLINE, stdin);
	} while (strings[rows - 1][0] != '\n');

	for (int i = 0; i < rows; ++i) {
		printf("%s", strings[i]);
	}

	// free(strings[0]);
	// free(strings[1]);
	
	for (int i = 0; i < rows; ++i) {
		free(strings[i]);
	}
	free(strings);

	return 0;
}
