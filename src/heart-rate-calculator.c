#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 5

int calculate_heart_rate(int age, int resting_hr, double intensity) {
	return (((220 - age) - resting_hr) * intensity) + resting_hr;
}

int main(void) {
	char input_buffer[MAXLINE];
	int age;
	int resting_hr;

	printf("What is your age? ");
	fgets(input_buffer, MAXLINE, stdin);
	age = atoi(input_buffer);

	printf("What is your resting heart rate? ");
	fgets(input_buffer, MAXLINE, stdin);
	resting_hr = atoi(input_buffer);

	printf("Resting pulse: %i\tAge: %i\n", resting_hr, age);
	printf("Intensity   | Heart Rate\n");
	printf("------------|-----------\n");
	for (double intensity = .55; intensity < .96; intensity += .05) {
		printf("%.0f\%\t    |%7i bpm\n", intensity * 100.0, calculate_heart_rate(age, resting_hr, intensity));
	}

	return 0;
}
