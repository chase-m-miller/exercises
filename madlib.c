#include <stdio.h>
#include <string.h>

int main(void)
{
	const int STR_MAX = 50;

	char noun[STR_MAX];
	char verb[STR_MAX];
	char adjective[STR_MAX];
	char adverb[STR_MAX];

	printf("Enter a noun: ");
	fgets(noun, STR_MAX, stdin);
	noun[strcspn(noun, "\n")] = 0;

	printf("Enter a verb: ");
	fgets(verb, STR_MAX, stdin);
	verb[strcspn(verb, "\n")] = 0;

	printf("Enter an adjective: ");
	fgets(adjective, STR_MAX, stdin);
	adjective[strcspn(adjective, "\n")] = 0;

	printf("Enter an adverb: ");
	fgets(adverb, STR_MAX, stdin);
	adverb[strcspn(adverb, "\n")] = 0;

	printf("Do you always %s your %s %s so %s? That's... interesting...\n", verb, adjective, noun, adverb);

	return 0;
}
