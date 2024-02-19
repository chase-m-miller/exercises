#include <stdio.h>
#include <string.h>

#define MAXLINE 32

int main(void) {
	const int num_employees = 5;
	char *employees[num_employees];
	char input_buffer[MAXLINE];

	employees[0] = "John Smith";
	employees[1] = "Jackie Jackson";
	employees[2] = "Chris Jones";
	employees[3] = "Amanda Cullen";
	employees[4] = "Jeremy Goodwin";

	printf("There are %i employees.\n", num_employees);
	for (int i = 0; i < num_employees; ++i) {
		printf("%s\n", employees[i]);
	}

	printf("Enter an employee name to remove: ");
	fgets(input_buffer, MAXLINE, stdin);
	input_buffer[strcspn(input_buffer, "\n")] = 0;

	for (int i = 0; i < num_employees; ++i) {
		if (strcasecmp(input_buffer, employees[i]) == 0) {
			employees[i] = 0;
		}
	}

	printf("There are %i employees.\n", num_employees - 1);
	for (int i = 0; i < num_employees; ++i) {
		if (employees[i]) {
			printf("%s\n", employees[i]);
		}
	}

	return 0;
}
