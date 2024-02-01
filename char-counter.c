#include <stdio.h>

#define STRING_MAX 256

int main(void)
{
	int count;
	char c;
	char user_string[STRING_MAX];

	printf("What is the input string? ");
	for (count = 0; (c = getchar()) != '\n'; ++count)
	{
		if (count > STRING_MAX)
		{
			printf("Your string exceeds the maximum character limit of %i.\n", STRING_MAX);
			return 0;
		}
		user_string[count] = c;
	}

	printf("Your input was %i characters long.\n", count);
	return 0;
}
