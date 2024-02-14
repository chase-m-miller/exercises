#include <stdio.h>
#include <string.h>

#define   VERY_WEAK   1
#define        WEAK   2
#define      STRONG   3
#define VERY_STRONG   4

#define     MAXLINE  22

int password_validator(char password[], int password_len) {
	int password_strength = 0;
	int has_numbers = 0;
	int has_chars = 0;
	int is_alpha_numeric = 0;
	int has_symbols = 0;

	for (int i = 0; i < password_len; ++i) {
		if (password[i] >= '0' && password[i] <= '9') {
			has_numbers = 1;
		}
		else if (password[i] >= 'A' && password[i] <= 'Z' || password[i] >= 'a' && password[i] <= 'z') {
			has_chars = 1;
		}
		else if (password[i] != '\n' && password[i] != 0) {
			has_symbols = 1;
		}
	}
	if (has_numbers && has_chars) {
		is_alpha_numeric = 1;
	}

	if (!is_alpha_numeric && !has_symbols && has_numbers) {
		password_strength = VERY_WEAK;
	}
	else if (!is_alpha_numeric && !has_symbols && has_chars) {
		password_strength = WEAK;
	}
	else if (is_alpha_numeric && !has_symbols) {
		password_strength = STRONG;
	}
	else if (is_alpha_numeric && has_symbols) {
		password_strength = VERY_STRONG;
	}
	return password_strength;
}

int main(void) {
	char password_input[MAXLINE];
	int password_strength;

	printf("Enter a password: ");
	fgets(password_input, MAXLINE, stdin);
	password_input[strcspn(password_input, "\n")] = 0;

	password_strength = password_validator(password_input, strlen(password_input));
	if (password_strength == VERY_WEAK) {
		printf("Your password is very weak.\n");
	}
	else if (password_strength == WEAK) {
		printf("Your password is weak.\n");
	}
	else if (password_strength == STRONG) {
		printf("Your password is strong.\n");
	}
	else if (password_strength == VERY_STRONG) {
		printf("Your password is very strong.\n");
	}
	return 0;
}
