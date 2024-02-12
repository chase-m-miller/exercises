#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	const int STR_MAX = 20;

	double principal;
	double rate;
	double years;
	double compounded_per_year;
	double end_value;

	char principal_str[STR_MAX];
	char rate_str[STR_MAX];
	char years_str[STR_MAX];
	char compounded_per_year_str[STR_MAX];

	printf("What is the principal amount? ");
	fgets(principal_str, STR_MAX, stdin);
	principal = atof(principal_str);

	printf("What is the rate? ");
	fgets(rate_str, STR_MAX, stdin);
	rate = atof(rate_str) / 100.0;

	printf("What is the number of years? ");
	fgets(years_str, STR_MAX, stdin);
	years = atof(years_str);

	printf("How many times is the principal compounded per year? ");
	fgets(compounded_per_year_str, STR_MAX, stdin);
	compounded_per_year = atof(compounded_per_year_str);

	end_value = principal * pow((1.0 + (rate / compounded_per_year)), (compounded_per_year * years));

	printf("$%.2f invested at %.1f for %.0f years compounded %.0f times per year is $%.2f.\n", principal, rate * 100.0, years, compounded_per_year, end_value);
}
