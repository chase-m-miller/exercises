#include <stdio.h>
#include <string.h>

void get_word(char prompt[], char word[], int wordlen)
{
	printf("%s", prompt);
	fgets(word, wordlen, stdin);
	word[strcspn(word, "\n")] = 0;

	return;
}

int main(void)
{
	const int STR_MAX = 50;

	char noun[STR_MAX];
	char verb[STR_MAX];
	char adjective[STR_MAX];
	char adverb[STR_MAX];

	get_word("Enter a noun: ", noun, STR_MAX);
	get_word("Enter a verb: ", verb, STR_MAX);
	get_word("Enter an adjective: ", adjective, STR_MAX);
	get_word("Enter an adverb: ", adverb, STR_MAX);

	printf("Do you always %s your %s %s so %s? That's... interesting...\n", verb, adjective, noun, adverb);

	return 0;
}
