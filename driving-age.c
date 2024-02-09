#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int STR_MAX = 32;
	char input[STR_MAX];
	int age;

	printf("What is your age? ");
	fgets(input, STR_MAX, stdin);
	age = atoi(input);

	char *answer = (age > 15) ? "You are old enough to drive." : "You are not old enough to drive.";
	printf("%s\n", answer);

	return 0;
}
