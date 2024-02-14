#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_TOO_SHORT 10
#define        NO_NAME 20
#define        MAXLINE 22

int validate_name(char name[]) {
	if (name[0] == 0 || name[0] == '\n') {
		return NO_NAME;
	}
	if (strlen(name) <= 2) {
		return NAME_TOO_SHORT;
	}
	return 0;
}

int validate_id(char id[]) {
	for (int i = 0; i < 2; ++i) {
		if (id[i] < 'A' || id[i] > 'Z') {
			return 1;
		}
	}
	if (id[2] != '-') {
		return 1;
	}
	for (int i = 3; i < 7; ++i) {
		if (id[i] < '0' || id[0] > '9') {
			return 1;
		}
	}
	if (id[7] != '\n' && id[7] != 0) {
		return 1;
	}
	return 0;
}

int validate_zip_code(char zip_code[]) {
	for (int i = 0; i < strlen(zip_code) - 1; ++i) {
		if ((zip_code[i] < '0' || zip_code[i] > '0') && zip_code[i] != '\n' && zip_code[i] != 0) {
			return 1;
		}
	}
	return 0;
}

int main(void) {
	char  first_name[MAXLINE];
	char   last_name[MAXLINE];
	char    zip_code[MAXLINE];
	char employee_id[MAXLINE];
	int   errors_returned = 0;

	printf("Enter the first name: ");
	fgets(first_name, MAXLINE, stdin);
	first_name[strcspn(first_name, "\n")] = 0;

	printf("Enter the last name: ");
	fgets(last_name, MAXLINE, stdin);
	last_name[strcspn(last_name, "\n")] = 0;

	printf("Enter the zip code: ");
	fgets(zip_code, MAXLINE, stdin);
	zip_code[strcspn(zip_code, "\n")] = 0;

	printf("Enter an employee ID: ");
	fgets(employee_id, MAXLINE, stdin);
	employee_id[strcspn(employee_id, "\n")] = 0;

	if (validate_name(first_name) == NO_NAME) {
		printf("The first name must be filled in.\n");
		++errors_returned;
	}
	else if (validate_name(first_name) == NAME_TOO_SHORT) {
		printf("%s is not a valid name. It is too short.\n", first_name);
		++errors_returned;
	}

	if (validate_name(last_name) == NO_NAME) {
		printf("The last name must be filled in.\n");
		++errors_returned;
	}
	else if (validate_name(last_name) == NAME_TOO_SHORT) {
		printf("%s is not a valid name. It is too short.\n", last_name);
		++errors_returned;
	}

	if (validate_zip_code(zip_code) != 0) {
		printf("The ZIP code must be numeric.\n");
		++errors_returned;
	}

	if (validate_id(employee_id) != 0) {
		printf("%s is not a valid ID.\n", employee_id);
		++errors_returned;
	}

	if (errors_returned == 0) {
		printf("There were no errors found.\n");
	}
	return 0;
}
