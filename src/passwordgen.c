#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAXLINE 22

void passgen(char *password, int pass_len, int special_chars, int nums);

int main(void) {
	char input_buffer[MAXLINE];
	int pass_len;
	int special_chars;
	int nums;



	printf("How long should the password be? ");
	fgets(input_buffer, MAXLINE, stdin);
	pass_len = atoi(input_buffer);

	printf("How many special characters? ");
	fgets(input_buffer, MAXLINE, stdin);
	special_chars = atoi(input_buffer);

	printf("How many numbers? ");
	fgets(input_buffer, MAXLINE, stdin);
	nums = atoi(input_buffer);

	char *password = malloc(sizeof(*password) * pass_len + 1);
	srand(time(NULL));
	passgen(password, pass_len, special_chars, nums);

	printf("Password: %s\n", password);

	free(password);
	return 0;
}

void passgen(char *password, int pass_len, int special_chars, int nums) {
	char alphabet[26];
	char numbers[10];
	char symbols[] = {'!', '@', '#', '$'};
	int index;

	for (int i = 0; i < 26; ++i) {
		alphabet[i] = i + 'a';
	}
	for (int i = 0; i < 10; ++i) {
		numbers[i] = i + '0';
	}

	for (int i = 0; i < pass_len; ++i) {
		password[i] = alphabet[rand() % 26];
	}
	password[pass_len] = '\0';

	int nums_inserted = 0;
	while (nums_inserted < nums) {
		index = rand() % pass_len;
		if (password[index] < '0' || password[index] > '9') {
			password[index] = alphabet[rand() % 26];
			++nums_inserted;
		}
	}

	int symbols_inserted = 0;
	while (symbols_inserted < special_chars) {
		index = rand() % pass_len;
		if (strchr(symbols, password[index]) == NULL && strchr(numbers, password[index]) == NULL) {
			password[index] = symbols[rand() % 4];
			++symbols_inserted;
		}
	}

	return;
}
