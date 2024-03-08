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

struct Employee_Table {
	struct Employee** employees;
	unsigned int size;
	unsigned int count;
};

int main(void) {
	struct Employee test;
	test.first_name = "Chase";
	test.last_name = "Miller";
	test.position = "Software Developer";
	test.seperation_date = NULL;

	test.key = hash_function(test.last_name);

	printf("%i\n", test.key);

	return 0;
}
