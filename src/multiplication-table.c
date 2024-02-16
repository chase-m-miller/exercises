#include <stdio.h>

int main(void) {
	for (int i = 0; i <= 12; ++i) {
		for (int j = 0; j <= 12; ++j) {
			printf("%i x %i = %i\n", i, j, i * j);
		}
	}

	return 0;
}
