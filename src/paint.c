#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int STR_MAX = 10;
	const int SQFT_PER_GAL = 350;
	char length_str[STR_MAX];
	char width_str[STR_MAX];
	int length;
	int width;
	int area;
	int remaining_area;
	int gallons;
	
	printf("What is the length of the wall? ");
	fgets(length_str, STR_MAX, stdin);
	length = atoi(length_str);

	printf("What is the width of the wall? ");
	fgets(width_str, STR_MAX, stdin);
	width = atoi(width_str);

	area = length * width;
	remaining_area = area;

	for (gallons = 0; remaining_area > SQFT_PER_GAL; ++gallons)
	{
		remaining_area = remaining_area - SQFT_PER_GAL;
	}

	if (remaining_area > 0)
	{
		++gallons;
	}

	printf("You will need %i gallons of paint to cover %i square feet.\n", gallons, area);

	return 0;
}
