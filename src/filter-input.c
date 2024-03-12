#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 128

void init_int_array(int array[], int size, int value) {
	for (int i = 0; i < size; ++i) {
		array[i] = value;
	}
	return;
}

int main(void) {
	char input[MAXLINE];
	int nums[MAXLINE];
	int even_nums[MAXLINE];
	const char delimiter[] = ",";
	char *token;

	init_int_array(nums, MAXLINE, 0);
	init_int_array(even_nums, MAXLINE, 0);

	printf("Input numbers seperated by commas: ");
	fgets(input, MAXLINE, stdin);

	token = strtok(input, delimiter);
	int int_count;
	for (int_count = 0; token != NULL; ++int_count) {
		nums[int_count] = atoi(token);
		printf("Iteration %i: %s\n", int_count + 1, token);
		token = strtok(NULL, delimiter);
	}

	int even_count = 0;
	for (int i = 0; i < int_count; ++i) {
		if (nums[i] % 2 == 0) {
			even_nums[even_count++] = nums[i];
		}
	}

	printf("The even numbers are: ");
	for (int i = 0; i < even_count; ++i) {
		printf("%i ", even_nums[i]);
	}
	printf("\b.\n");

	return 0;
}
