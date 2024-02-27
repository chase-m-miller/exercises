#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

#define ARR_MAX 256

double calculate_mean(double array[], int len) {
	double total = 0;

	for (int i = 0; i < len; ++i) {
		total += array[i];
	}

	return total / len;
}

double calculate_std_dev(double array[], int len) {
	double mean = calculate_mean(array, len);
	double diffs_from_mean_squared[len];

	for (int i = 0; i < len; ++i) {
		diffs_from_mean_squared[i] = (array[i] - mean) * (array[i] - mean);
	}

	return sqrt(calculate_mean(diffs_from_mean_squared, len));
}

double return_lowest(double array[], int len) {
	double lowest = array[0];

	for (int i = 0; i < len; ++i) {
		if (lowest > array[i]) {
			lowest = array[i];
		}
	}

	return lowest;
}


int main(void) {
	int response_times[ARR_MAX];
	char input_buffer[ARR_MAX];
	int num_entries;

	for (num_entries = 0; num_entries < ARR_MAX; ++num_entries) {
		printf("Enter a number: ");
		fgets(input_buffer, ARR_MAX, stdin);
		if (strcasecmp(input_buffer, "done\n") == 0) {
			break;
		}
		else {
			response_times[num_entries] = atoi(input_buffer);
		}
	}


}
