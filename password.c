#include <stdio.h>
#include <string.h>

int main(void)
{
	const int STR_MAX = 52; // 50 chars excluding \n and null terminator
	char input[STR_MAX];
	char password[] = "testpass";

	printf("What is the password? ");
	fgets(input, STR_MAX, stdin);
	input[strcspn(input, "\n")] = 0;

	if (strcmp(input, password) == 0)
	{
		printf("Welcome!\n");
	}
	else
	{
		printf("Wrong password.\n");
	}

	return 0;
}
