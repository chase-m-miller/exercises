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

	if (special_chars + nums > pass_len) {
		printf("Cannot fit this many symbols and numbers in a password of specified length.\n");
		return 1;
	}

	char password[pass_len];
	srand(time(NULL));
	passgen(password, pass_len, special_chars, nums);

	printf("Password: %s\n", password);

	return 0;
}

void passgen(char *password, int pass_len, int special_chars, int nums) {
	char alphabet[26];
	char numbers[10];
	const char symbols[] = "!@#$";
	int index;

	for (int i = 0; i < 26; ++i) {
		alphabet[i] = i + 'a';
	}
	for (int i = 0; i < 10; ++i) {
		numbers[i] = i + '0';
	}

	for (int i = 0; i < pass_len; ++i) {
		password[i] = alphabet[rand() % (sizeof(alphabet) / sizeof(alphabet[0]))];
	}
	password[pass_len] = '\0';

	int nums_inserted = 0;
	while (nums_inserted < nums) {
		index = rand() % pass_len;
		if (password[index] < '0' || password[index] > '9') {
			password[index] = numbers[rand() % (sizeof(numbers) / sizeof(numbers[0]))];
			++nums_inserted;
		}
	}

	int symbols_inserted = 0;
	while (symbols_inserted < special_chars) {
		index = rand() % pass_len;
		if ((password[index] < '0' || password[index] > '9') && strchr(symbols, password[index]) == NULL) {
			password[index] = symbols[rand() % (sizeof(symbols) / sizeof(symbols[0]) - 1)];
			++symbols_inserted;
		}
	}

	return;
}
