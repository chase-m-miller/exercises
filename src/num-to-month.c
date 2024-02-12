#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 12

int main(void)
{
	char input_num[MAXLINE];
	char month[MAXLINE];
	int month_num;

	printf("Enter a number (1 through 12): ");
	fgets(input_num, MAXLINE, stdin);
	month_num = atoi(input_num);

	switch (month_num)
	{
		case 1:
			strcpy(month, "January");
			break;
		case 2:
			strcpy(month, "February");
			break;
		case 3:
			strcpy(month, "March");
			break;
		case 4:
			strcpy(month, "April");
			break;
		case 5:
			strcpy(month, "May");
			break;
		case 6:
			strcpy(month, "June");
			break;
		case 7:
			strcpy(month, "July");
			break;
		case 8:
			strcpy(month, "August");
			break;
		case 9:
			strcpy(month, "September");
			break;
		case 10:
			strcpy(month, "October");
			break;
		case 11:
			strcpy(month, "November");
			break;
		case 12:
			strcpy(month, "December");
			break;
		default:
			printf("Improper input.\n");
			return 0;
		
	}

	printf("The name of the month is %s.\n", month);

	return 0;
}
