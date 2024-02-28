#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alphabet[26];
	char numbers[10];
	char symbols[] = {'!', '@', '#', '$'};

	for (int i = 0; i < 26; ++i) {
		alphabet[i] = i + 'a';
	}

	for (int i = 0; i < 10; ++i) {
		numbers[i] = i + '0';
	}
}
