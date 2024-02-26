#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define ARR_MAX 256

int main(void) {
	int response_times[ARR_MAX];
	char input_buffer[ARR_MAX];

	for (int i = 0; i < ARR_MAX; ++i) {
		printf("Enter a number: ");
		fgets(input_buffer, ARR_MAX, stdin);
		if (strcasecmp(input_buffer, "done\n") == 0) {
			break;
		}
		else {
			response_times[i] = atoi(input_buffer);
		}
	}
}
