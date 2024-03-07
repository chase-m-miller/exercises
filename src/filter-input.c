#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 128

int main(void) {
	char input[MAXLINE];
	int nums[MAXLINE];
	int even_nums[MAXLINE];
	const char delimiter[] = " ";
	char *token;

	printf("Input numbers seperated by spaces: ");
	fgets(input, MAXLINE, stdin);

	token = strtok(input, delimiter);
	for (int i = 0; token; ++i) {
		nums[i] = atoi(token);
		token = strtok(NULL, delimiter);
	}

	int even_index = 0;
	for (int i = 0; nums[i]; ++i) {
		if (nums[i] % 2 == 0) {
			even_nums[even_index++] = nums[i];
		}
	}

	printf("The even numbers are: ");
	for (int i = 0; even_nums[i]; ++i) {
		printf("%i ", even_nums[i]);
	}
	printf("\b.\n");

	return 0;
}
