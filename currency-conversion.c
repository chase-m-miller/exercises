#include <stdio.h>
#include <math.h>

int main(void)
{
	double value = 2.234;
	printf("%f\n", value);
	value = ceil(value * 100.0) / 100.0;
	printf("%f\n", value);

	return 0;
}
