#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 32

int main(void) {
	int rows = 2;
	char **strings = NULL;

	strings = malloc(rows * sizeof(*strings));
	strings[0] = malloc(sizeof(**strings) * MAXLINE);
	strings[1] = malloc(sizeof(**strings) * MAXLINE);
	fgets(strings[0], MAXLINE, stdin);
	fgets(strings[1], MAXLINE, stdin);

	printf("%s", strings[0]);
	printf("%s", strings[1]);

	free(strings[0]);
	free(strings[1]);
	free(strings);

	return 0;
}
