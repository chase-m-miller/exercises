#include <stdio.h>
#include <stdlib.h>

struct Item
{
	double price;
	int quantity;
};

void get_items(struct Item items[], int num_items)
{
	const int CHAR_LIMIT = 10;
	char price_str[CHAR_LIMIT];
	char quantity_str[CHAR_LIMIT];

	for (int i = 0; i < num_items; ++i)
	{
		printf("Enter the price of item %i: ", i + 1);
		fgets(price_str, CHAR_LIMIT, stdin);
		items[i].price = atof(price_str);

		printf("Enter the quantity of item %i: ", i + 1);
		fgets(quantity_str, CHAR_LIMIT, stdin);
		items[i].quantity = atoi(quantity_str);
	}

	return;
}

int main(void)
{
	const int NUM_ITEMS = 3;
	const double TAX_RATE = .055;

	struct Item items[NUM_ITEMS];
	double subtotal;
	double total;
	double calculated_tax;

	get_items(items, NUM_ITEMS);

	for (int i = 0; i < NUM_ITEMS; i++)
	{
		subtotal = subtotal + (items[i].price * items[i].quantity);
	}

	calculated_tax = subtotal * TAX_RATE;

	printf("Subtotal: $%.2f\n", subtotal);
	printf("Tax: $%.2f\n", calculated_tax);
	printf("Total: $%.2f\n", subtotal + calculated_tax);

	return 0;
}
