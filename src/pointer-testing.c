#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 32

int main(void) {
	int num_of_strings = 1;
	char input_buffer[MAXLINE]; 
	char **strings;

	fgets(input_buffer, MAXLINE, stdin);
	input_buffer[strcspn(input_buffer, "\n") + 1] = '\0';

	printf("%s", input_buffer);

	*strings = malloc(sizeof(*strings) * strlen(input_buffer));
	printf("Made it here\n");
	strcpy(strings[0], input_buffer);

	printf("%s", strings[0]);

	return 0;
}
