#include <stdio.h>
#include <string.h>

#define STRING_MAX 256

int main(void)
{
	int i;
	char c;
	char user_string[STRING_MAX];

	printf("What is the input string? ");
	for (i = 0; (c = getchar()) != '\n'; ++i)
	{
		if (i >= STRING_MAX)
		{
			printf("Your string exceeds the maximum character limit of %i.\n", STRING_MAX - 1);
			return 0;
		}
		user_string[i] = c;
	}
	user_string[i] = '\0';

	printf("The string %s is %i characters long.\n", user_string, (int) strlen(user_string));
	return 0;
}
