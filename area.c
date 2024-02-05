#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	const int ARR_MAX = 10;
	char length_in[ARR_MAX];
	char width_in[ARR_MAX];
	float length;
	float width;

	printf("What is the length of the room in feet? ");
	fgets(length_in, ARR_MAX, stdin);
	length = atof(length_in);

	printf("What is the width of the room in feet? ");
	fgets(width_in, ARR_MAX, stdin);
	width = atof(width_in);

	printf("You entered dimensions of %.0f feet by %.0f feet.\n", length, width);
	printf("The area is\n");
	printf("%.0f square feet\n", length * width);
	printf("%.3f square meters\n", (length * width) * 0.09290304);

	return 0;
}
