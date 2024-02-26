#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

#define ARR_MAX 256

double calculate_mean(double response_times[], int num_entries) {
	double total = 0;

	for (int i = 0; i < num_entries; ++i) {
		total += response_times[i];
	}

	return total / num_entries;
}

double calculate_std_dev(double response_times[], int num_entries) {
	double mean = calculate_mean(response_times, num_entries);
	double diffs_from_mean_squared[num_entries];

	for (int i = 0; i < num_entries; ++i) {
		diffs_from_mean_squared[i] = (response_times[i] - mean) * (response_times[i] - mean);
	}

	return sqrt(calculate_mean(diffs_from_mean_squared, num_entries));
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
