#include <stdio.h>
#include <string.h>

#define NAME_TOO_SHORT 10
#define        NO_NAME 20

int validate_name(char name[]) {
	if (name[0] == 0 || name[0] == '\n') {
		return NO_NAME;
	}
	if (strlen(name) <= 2) {
		return NAME_TOO_SHORT;
	}
	return 0;
}

int validate_id(char id[]) {
	for (int i = 0; i < 2; ++i) {
		if (id[i] < 'A' || id[i] > 'Z') {
			return 1;
		}
	}
	if (id[2] != '-') {
		return 1;
	}
	for (int i = 3; i < 7; ++i) {
		if (id[i] < '0' || id[0] > '9') {
			return 1;
		}
	}
	if (id[7] != '\n' && id[7] != 0) {
		return 1;
	}
	return 0;
}

int validate_zipcode(char zipcode[]) {
	for (int i = 0; i < strlen(zipcode) - 1; ++i) {
		if ((zipcode[i] < '0' || zipcode[i] > '0') && zipcode[i] != '\n' && zipcode[i] != 0) {
			return 1;
		}
	}
	return 0;
}
