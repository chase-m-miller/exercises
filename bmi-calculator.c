#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 12

int main(void)
{
	char weight_str[MAXLINE];
	char height_str[MAXLINE];
	int weight;
	int height;
	double bmi;

	printf("How many pounds do you weigh? ");
	fgets(weight_str, MAXLINE, stdin);
	weight = atoi(weight_str);

	printf("How tall are you in inches? ");
	fgets(height_str, MAXLINE, stdin);
	height = atoi(height_str);

	bmi = ((double) weight / (double) (height * height)) * 703.0;

	if (bmi >= 18.5 && bmi <= 25) {
		printf("You are within the ideal weight range.\n");
	} else if (bmi > 25) {
		printf("You are overweight. You should see your doctor.\n");
	} else if (bmi < 18.5) {
		printf("You are underweight. You should see your doctor.\n");
	}

	return 0;
}
