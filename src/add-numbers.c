#include <stdio.h>
#include <stdlib.h>

#define NUM_COUNT 5
#define MAXLINE  12

int main(void) {
	int total = 0;

	for (int i = 0; i < NUM_COUNT; ++i) {
		char input_buffer[MAXLINE];
		printf("Enter a number: ");
		fgets(input_buffer, MAXLINE, stdin);
		total += atoi(input_buffer);
	}
	printf("The total is %i.\n", total);

	return 0;
}
