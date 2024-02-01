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
		if (count >= STRING_MAX)
		{
			printf("Your string exceeds the maximum character limit of %i.\n", STRING_MAX - 1);
			return 0;
		}
		user_string[count] = c;
	}
	user_string[count] = '\0';

	printf("The string %s is %i characters long.\n", user_string, count);
	return 0;
}
