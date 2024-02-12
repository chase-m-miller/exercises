#include <stdio.h>

void does_car_have_fuel_injection(void);
void does_engine_start_then_die(void);
void does_car_crank(void);
void is_car_clicking(void);
void is_battery_corroded(void);
void is_car_silent(void);

char prompt(char prompt_str[]) {
	char c, answer;
	printf("%s ", prompt_str);
	while ((c = getchar()) != '\n') {
		answer = c;
	}
	return answer;
}

void is_car_silent(void) {
	char prompt_str[] = "Is the car silent when you turn the key?";
	char answer = prompt(prompt_str);
	if (answer == 'y') {
		is_battery_corroded();
		return;
	} else {
		is_car_clicking();
		return;
	}
}

void is_battery_corroded(void) {
	char prompt_str[] = "Are the battery terminals corroded?";
	char answer = prompt(prompt_str);
	if (answer == 'y') {
		printf("Clean the terminals and try starting again.\n");
		return;
	} else {
		printf("Replace cables and try again.\n");
		return;
	}
}

void is_car_clicking(void) {
	char prompt_str[] = "Does the car make a clicking noise?";
	char answer = prompt(prompt_str);
	if (answer == 'y') {
		printf("Replace the battery.\n");
		return;
	} else {
		does_car_crank();
		return;
	}
}

void does_car_crank(void) {
	char prompt_str[] = "Does the car crank up but fail to start?";
	char answer = prompt(prompt_str);
	if (answer == 'y') {
		printf("Check the spark plug connections.\n");
		return;
	} else {
		does_engine_start_then_die();
		return;
	}
}

void does_engine_start_then_die(void) {
	char prompt_str[] = "Does the engine start and then die?";
	char answer = prompt(prompt_str);
	if (answer == 'y') {
		does_car_have_fuel_injection();
		return;
	} else {
		printf("Ummmmmmmm... well... uhhhhhhhh...\n");
		return;
	}
}

void does_car_have_fuel_injection(void) {
	char prompt_str[] = "Does your car have fuel injection?";
	char answer = prompt(prompt_str);
	if (answer == 'y') {
		printf("Get it in for service.\n");
		return;
	} else {
		printf("Check to ensure the choke is opening and closing.\n");
		return;
	}
}

int main(void) {
	is_car_silent();
	return 0;
}
