#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int MAX_DIGITS = 50;

	char a_str[MAX_DIGITS];
	char b_str[MAX_DIGITS];

	printf("What is the first number? ");
	fgets(a_str, MAX_DIGITS, stdin);

	printf("What is the second number? ");
	fgets(b_str, MAX_DIGITS, stdin);

	int a = atoi(a_str);
	int b = atoi(b_str);

	printf("%i + %i = %i\n", a, b, (a + b));
	printf("%i - %i = %i\n", a, b, (a - b));
	printf("%i * %i = %i\n", a, b, (a * b));
	printf("%i / %i = %i\n", a, b, (a / b));

	return 0;
}
