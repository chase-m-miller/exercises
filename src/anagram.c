#include <stdio.h>
#include <string.h>
#define  MAXLINE  22
#define     TRUE   1
#define    FALSE   0

int is_anagram(char first[], char second[]) {
	int word_len, first_total, second_total;
	first_total = second_total = 0;
	if ((word_len = strlen(first)) != strlen(second)) {
		return FALSE;
	}
	for (int i = 0; i < word_len; ++i) {
		first_total = first_total + first[i];
	}
	for (int i = 0; i < word_len; ++i) {
		second_total = second_total + second[i];
	}
	if (first_total == second_total) {
		return TRUE;
	} else {
		return FALSE;
	}
}

int main(void) {
	char first[MAXLINE];
	char second[MAXLINE];

	printf("Enter the first word: ");
	fgets(first, MAXLINE, stdin);
	first[strcspn(first, "\n")] = 0;

	printf("Enter the second word: ");
	fgets(second, MAXLINE, stdin);
	second[strcspn(second, "\n")] = 0;

	if (is_anagram(first, second) == TRUE) {
		printf("%s and %s are anagrams.\n", first, second);
	} else {
		printf("%s and %s are not anagrams.\n", first, second);
	}
	return 0;
}
