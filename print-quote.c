#include <stdio.h>
#include <string.h>

int main(void)
{
	const int quotelen = 200;
	const int authlen = 50;

	char quote[quotelen];
	char author[authlen];

	printf("What is the quote? ");
	fgets(quote, quotelen, stdin);

	printf("Who is the author? ");
	fgets(author, authlen, stdin);

	quote[strcspn(quote, "\n")] = 0;
	author[strcspn(author, "\n")] = 0;

	printf("%s says, \"%s\"\n", author, quote);

	return 0;
}
