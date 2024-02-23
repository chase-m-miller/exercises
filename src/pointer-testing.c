#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 32

int main(void) {
	int num_of_strings = 6;
	char **strings = malloc(num_of_strings * sizeof(*strings));
	strings[0] = "Peter";
	strings[1] = "Paul";
	strings[2] = "Joseph";
	strings[3] = "Spongebob";
	strings[4] = "Patrick";

	for (int i = 0; strings[i]; ++i) {
		printf("%s\n", strings[i]);
	}

	return 0;
}
