#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 32

int main(void) {
	int num_of_strings = 1;
	char input_buffer[MAXLINE];
	char **strings = malloc(num_of_strings * sizeof(*strings));

	do {
		strings = realloc(strings, ++num_of_strings * sizeof(*strings));
		fgets(input_buffer, MAXLINE, stdin);
		strcpy(strings[num_of_strings - 2], input_buffer);
	} while (strings[num_of_strings - 2][0] != 0);

	return 0;
}
