#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char string[] = "1 2 3 4 5 6 7 8 9";
	const char delimiter[] = " ";
	char *token;

	token = strtok(string, delimiter);
	while (token) {
		printf("%c\n", *token);
		token = strtok(NULL, delimiter);
	}

	return 0;
}
