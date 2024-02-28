#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 22

int main(void) {
	char alphabet[26];
	char numbers[10];
	char symbols[] = {'!', '@', '#', '$'};
	char input_buffer[MAXLINE];
	int pass_len;
	int special_chars;
	int nums;

	for (int i = 0; i < 26; ++i) {
		alphabet[i] = i + 'a';
	}

	for (int i = 0; i < 10; ++i) {
		numbers[i] = i + '0';
	}
}
