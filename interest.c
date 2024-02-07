#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	const int STR_MAX = 20;

	char principal_str[STR_MAX];
	char years_str[STR_MAX];
	char roi_str[STR_MAX];

	int principal;
	int years;
	double roi;
	double end_worth;

	printf("Enter the principal: ");
	fgets(principal_str, STR_MAX, stdin);
	principal = atoi(principal_str);

	printf("Enter the rate of interest: ");
	fgets(roi_str, STR_MAX, stdin);
	roi = (atof(roi_str)) / 100;

	printf("Enter the number of years: ");
	fgets(years_str, STR_MAX, stdin);
	years = atoi(years_str);

	end_worth = (double) principal * (1.0 + ((double) roi * (double) years));
	end_worth = (ceil(end_worth * 100.0)) / 100.0;

	printf("After %i years at %.1f\%, the investment will be worth $%.2f.", years, roi, end_worth);

	return 0;
}
