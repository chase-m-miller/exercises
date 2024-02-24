#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 32

int main(void) {
	int num_of_strings = 1;
	char input_buffer[MAXLINE]; 
	char **strings = NULL;

	strings = malloc(MAXLINE * sizeof(char) + 2);
	printf("HERE\n");
	fgets(strings[0], MAXLINE, stdin);
	*strings[strcspn(strings[0], "\n") + 1] = '\0';

	printf("OVER HERE\n");

	printf("%s", strings[0]);

	printf("Made it here\n");
	strcpy(*strings, input_buffer);
	printf("And here\n");

	printf("%s", *strings);

	return 0;
}
