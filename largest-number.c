#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 3
#define MAXLINE 22

unsigned int largest(unsigned int arr[], int len)
{
	unsigned int largest_int = 0;
	for (int i = 0; i < len; ++i)
	{
		if (arr[i] > largest_int)
		{
			largest_int = arr[i];
		}
	}
	return largest_int;
}

int main(void)
{
	unsigned int arr[ARR_LEN];

	for (int i = 0; i < ARR_LEN; ++i)
	{
		char input_buffer[MAXLINE];
		printf("Enter number %i: ", i + 1);
		fgets(input_buffer, MAXLINE, stdin);
		arr[i] = atoi(input_buffer);
	}
	
	printf("The largest number you entered is %i.\n", largest(arr, ARR_LEN));

	return 0;
}
