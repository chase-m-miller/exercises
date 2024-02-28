#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 22

int main(void) {
	char alphabet[26];
	char numbers[10];
	char symbols[] = {'!', '@', '#', '$'};
	char input_buffer[MAXLINE];
	int pass_len;
	int special_chars;
	int nums;

	for (int i = 0; i < 26; ++i) {
		alphabet[i] = i + 'a';
	}

	for (int i = 0; i < 10; ++i) {
		numbers[i] = i + '0';
	}

	printf("How long should the password be? ");
	fgets(input_buffer, MAXLINE, stdin);
	pass_len = atoi(input_buffer);

	printf("How many special characters? ");
	fgets(input_buffer, MAXLINE, stdin);
	special_chars = atoi(input_buffer);

	printf("How many numbers? ");
	fgets(input_buffer, MAXLINE, stdin);
	nums = atoi(input_buffer);
}
