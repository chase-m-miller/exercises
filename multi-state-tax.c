#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <strings.h>

#define STR_MAX 22

int main(void) {
	char order_amount[STR_MAX];
	char state[STR_MAX];
	char wi_county[STR_MAX];

	double subtotal;
	double tax_rate = 0.055;
	double tax;
	double total;

	printf("What is the order amount? $");
	fgets(order_amount, STR_MAX, stdin);
	subtotal = atof(order_amount);

	printf("What is the state abbreviation? ");
	fgets(state, STR_MAX, stdin);

	if (strcasecmp(state, "WI\n") == 0)
	{
		printf("What county do you reside in? ");
		fgets(wi_county, STR_MAX, stdin);

		if (strcasecmp(wi_county, "Eau Claire\n") == 0)
		{
			tax_rate = tax_rate + 0.005;
		}
		else if (strcasecmp(wi_county, "Dunn\n") == 0)
		{
			tax_rate = tax_rate + 0.004;
		}

		printf("The tax is $%.2f.\n", tax = ceil((subtotal * tax_rate) * 100.0) / 100.0);
		printf("The total is $%.2f.\n", subtotal + tax);
	}
	else if (strcasecmp(state, "IL\n") == 0)
	{
		tax_rate = 0.08;
		printf("The tax is $%.2f.\n", tax = ceil((subtotal * tax_rate) * 100.0) / 100.0);
		printf("The total is $%.2f.\n", subtotal + tax);
	}
	else
	{
		printf("The total is $%.2f.\n", subtotal);
	}

	return 0;
}
