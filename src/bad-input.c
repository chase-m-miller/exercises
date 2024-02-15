#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 12

int is_valid_rate_of_return(char rate_of_return[]) {
	for (int i = 0; i < strlen(rate_of_return) - 1; ++i) {
		if (rate_of_return[i] < '0' || rate_of_return[i] > '9') {
			return 1;
		}
	}

	if (atoi(rate_of_return) == 0) {
		return 2;
	}

	return 0;
}

int main(void) {
	char input_buffer[MAXLINE];

	do {
		printf("What is the rate of return? ");
		fgets(input_buffer, MAXLINE, stdin);
		input_buffer[strcspn(input_buffer, "\n")] = 0;
	} while (is_valid_rate_of_return(input_buffer) != 0);

	printf("It will take %i years to double your initial investment.\n", 72 / atoi(input_buffer));

	return 0;
}
