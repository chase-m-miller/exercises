#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int ARR_MAX = 5;
	const int CURRENT_YEAR = atoi(__DATE__+7);
	char current_age_str[ARR_MAX];
	char retirement_age_str[ARR_MAX];
	int current_age;
	int retirement_age;

	printf("How many years old are you? ");
	fgets(current_age_str, ARR_MAX, stdin);
	current_age = atoi(current_age_str);

	printf("At what age would you like to retire? ");
	fgets(retirement_age_str, ARR_MAX, stdin);
	retirement_age = atoi(retirement_age_str);

	printf("You have %i years until you can retire.\n", retirement_age - current_age);
	printf("It's %i, so you can retire in %i.\n", CURRENT_YEAR, CURRENT_YEAR + (retirement_age - current_age));

	return 0;
}
