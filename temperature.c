#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define MAXLINE 12

double c_to_f(double c)
{
	return (c * 9.0/5.0) + 32.0;
}

double f_to_c(double f)
{
	return (f - 32.0) * 5.0/9.0;
}

int main(void)
{
	char choice[MAXLINE];
	char input_unit[MAXLINE];
	char output_unit[MAXLINE];
	char temp_from_str[MAXLINE];

	double temp_from;
	double temp_to;

	printf("Enter C to convert from Fahrenheit to Celsius.\n");
	printf("Enter F to convert from Celsius to Fahrenheit.\n");
	printf("Your choice: ");
	fgets(choice, MAXLINE, stdin);

	if (strcasecmp(choice, "C\n") == 0)
	{
		strcpy(input_unit, "Fahrenheit");
		strcpy(output_unit, "Celsius");
	}
	else if (strcasecmp(choice, "F\n") == 0)
	{
		strcpy(input_unit, "Celsius");
		strcpy(output_unit, "Fahrenheit");
	}
	else
	{
		printf("Invalid input.\n");
		return 0;
	}


	printf("Please enter the temperature in %s: ", input_unit);
	fgets(temp_from_str, MAXLINE, stdin);
	temp_from = atof(temp_from_str);

	if (strcasecmp(choice, "C\n") == 0)
	{
		temp_to = f_to_c(temp_from);
	}
	else if (strcasecmp(choice, "F\n") == 0)
	{
		temp_to = c_to_f(temp_from);
	}

	printf("The temperature in %s is %.1f.\n", output_unit, temp_to);

	return 0;
}
