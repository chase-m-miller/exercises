#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isnum(char num_str[])
{
	for (int i = 0; i < strlen(num_str) - 1; ++i)
	{
		if (num_str[i] < 48 || num_str[i] > 57)
		{
			return(1);
		}
	}

	return 0;
}

int main(void)
{
	const int MAX_DIGITS = 50;

	char a_str[MAX_DIGITS];
	char b_str[MAX_DIGITS];

	printf("What is the first number? ");
	fgets(a_str, MAX_DIGITS, stdin);
	if (isnum(a_str) != 0)
	{
		printf("Please enter numbers only.\n");
		return 1;
	}

	printf("What is the second number? ");
	fgets(b_str, MAX_DIGITS, stdin);
	if (isnum(b_str) != 0)
	{
		printf("Please enter numbers only.\n");
		return 1;
	}

	int a = atoi(a_str);
	int b = atoi(b_str);

	printf("%i + %i = %i\n", a, b, (a + b));
	printf("%i - %i = %i\n", a, b, (a - b));
	printf("%i * %i = %i\n", a, b, (a * b));
	printf("%i / %i = %.2f\n", a, b, ((double) a / (double) b));

	return 0;
}
