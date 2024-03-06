#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 50000 // Size of the hash table

unsigned int hash_function(char* str) {
	unsigned int hash_value = 0;

	for (int i = 0; str[i]; ++i) {
		hash_value += str[i];
	}

	return hash_value % CAPACITY;
}

struct Employee {
	unsigned int key;
	char* first_name;
	char* last_name;
	char* position;
	char* seperation_date;
};
