#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	const int CHAR_MAX = 30;
	char euros_str[CHAR_MAX];
	char conversion_rate_str[CHAR_MAX];
	double euros;
	double usd;
	double conversion_rate_from;
	double conversion_rate_to;

	printf("How many euros are you exchanging? ");
	fgets(euros_str, CHAR_MAX, stdin);
	euros = atof(euros_str);

	printf("What is the exchange rate? ");
	fgets(conversion_rate_str, CHAR_MAX, stdin);
	conversion_rate_from = atof(conversion_rate_str);

	conversion_rate_to = 1 / conversion_rate_from;

	printf("%.2f euros at an exchange rate of %f is\n", euros, conversion_rate_from);
	printf("%.2f US Dollars.\n", ceil( ((euros * conversion_rate_from) / conversion_rate_to) * 100.0) / 100.0);

	return 0;
}
