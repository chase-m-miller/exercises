#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int main(void)
{
	const double STD_DRINK = 0.6; // Ounces of pure alcohol
	const int STR_MAX = 12;

	char sex[STR_MAX];
	char weight_input[STR_MAX];
	char drinks_input[STR_MAX];
	char time_since_input[STR_MAX];
	char abv_input[STR_MAX];
	char volume_input[STR_MAX];

	double weight_lbs;
	double num_drinks;
	double time_since_last;
	double abv_of_drinks;
	double volume_of_drink;
	double alcohol_distribution_ratio;
	double total_alcohol;
	double bac;

	printf("What is your sex? ");
	fgets(sex, STR_MAX, stdin);
	sex[strcspn(sex, "\n")] = 0;

	printf("How many pounds do you weigh? ");
	fgets(weight_input, STR_MAX, stdin);
	weight_lbs = atof(weight_input);

	printf("How many drinks have you had? ");
	fgets(drinks_input, STR_MAX, stdin);
	num_drinks = atof(drinks_input);

	printf("What ABV were the drinks? ");
	fgets(abv_input, STR_MAX, stdin);
	abv_of_drinks = atof(abv_input) / 100.0;

	printf("What was the volume of each drink? ");
	fgets(volume_input, STR_MAX, stdin);
	volume_of_drink = atof(volume_input);

	printf("How long has it been since your last drink? ");
	fgets(time_since_input, STR_MAX, stdin);
	time_since_last = atof(time_since_input);


	if (strcasecmp(sex, "male") == 0)
	{
		alcohol_distribution_ratio = 0.73;
	}
	else if (strcasecmp(sex, "female") == 0)
	{
		alcohol_distribution_ratio = 0.66;
	}

	total_alcohol = num_drinks * abv_of_drinks * volume_of_drink;

	bac = ((total_alcohol * 5.14) / (weight_lbs * alcohol_distribution_ratio)) - (0.015 * time_since_last);

	char *output = (bac > 0.08) ? "It is not legal for you to drive." : "It is legal for you to drive.";
	printf("Your BAC is %.2f. %s\n", bac, output);

	return 0;
}
// BAC = (A × 5.14 / W × r) − .015 × H
