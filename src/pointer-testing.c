#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 32

int main(void) {
	char **strings = NULL;

	strings = malloc(sizeof(*strings));
	strings[0] = malloc(sizeof(**strings) * MAXLINE);
	fgets(strings[0], MAXLINE, stdin);

	printf("%s", strings[0]);

	return 0;
}
