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

	return 0;
}
