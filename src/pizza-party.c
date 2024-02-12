#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int ARR_MAX = 10;
	char people_str[ARR_MAX];
	char pizzas_str[ARR_MAX];
	char slices_per_pizza_str[ARR_MAX];
	int people;
	int pizzas;
	int slices_per_pizza;

	printf("How many people? ");
	fgets(people_str, ARR_MAX, stdin);
	people = atoi(people_str);

	printf("How many pizzas? ");
	fgets(pizzas_str, ARR_MAX, stdin);
	pizzas = atoi(pizzas_str);

	printf("How many slices per pizza? ");
	fgets(slices_per_pizza_str, ARR_MAX, stdin);
	slices_per_pizza = atoi(slices_per_pizza_str);

	printf("%i people with %i pizzas.\n", people, pizzas);
	printf("Each person gets %i pieces of pizza.\n", (pizzas * slices_per_pizza) / people);
	printf("There are %i slices left over.\n", (pizzas * slices_per_pizza) % people);

	return 0;
}
