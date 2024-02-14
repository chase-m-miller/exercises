#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAXLINE 22

double months_til_debt_payed(double apr, double balance, double monthly_payment) {
	double daily_rate = apr / 365.0;
	return (-1.0 / 30.0) * (log(1.0 + (balance / monthly_payment) * (1.0 - pow((1.0 + daily_rate), 30.0))) / (log(1.0 + daily_rate)));
}

int main(void) {
	double apr;
	double balance;
	double monthly_payment;
	char input_buffer[MAXLINE];

	printf("What is your balance? ");
	fgets(input_buffer, MAXLINE, stdin);
	balance = atof(input_buffer);

	printf("What is the APR on the card (as a percent)? ");
	fgets(input_buffer, MAXLINE, stdin);
	apr = atof(input_buffer) / 100.0;

	printf("What is the monthly payment you can make? ");
	fgets(input_buffer, MAXLINE, stdin);
	monthly_payment = atof(input_buffer);

	printf("\nIt will take you %.0f months to pay off this card.\n", ceil(months_til_debt_payed(apr, balance, monthly_payment)));
	return 0;
}
