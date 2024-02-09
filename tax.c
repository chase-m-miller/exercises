// Only charge tax to Wisconsin residents

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	const int STR_MAX = 20;
	char order_amount[STR_MAX];
	char state[STR_MAX];

	double subtotal;
	double tax_rate = 0.055;
	double tax;
	double total;

	printf("What is the order amount? $");
	fgets(order_amount, STR_MAX, stdin);
	subtotal = atof(order_amount);

	printf("What is the state abbreviation? ");
	fgets(state, STR_MAX, stdin);

	if (strcmp(state, "WI\n") != 0)
	{
		printf("The total is $%.2f\n", subtotal);
		return 0;
	}

	tax = ceil((subtotal * tax_rate) * 100.0) / 100.0;
	total = ceil((subtotal + tax) * 100.0) / 100.0;

	printf("The subtotal is $%.2f.\n", subtotal);
	printf("The tax is $%.2f.\n", tax);
	printf("The total is $%.2f.\n", total);

	return 0;
}
