#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXLINE 22

int main(void) {
	const char *eight_ball[4];
	eight_ball[0] = "Yes";
	eight_ball[1] = "No";
	eight_ball[2] = "Maybe";
	eight_ball[3] = "Ask again later.";
	char input_buffer[MAXLINE];

	printf("What is your question? ");
	fgets(input_buffer, MAXLINE, stdin);
	srand(time(NULL));
	printf("%s\n", eight_ball[rand() % 4]);

	return 0;
}
