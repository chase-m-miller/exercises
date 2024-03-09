#include <stdio.h>
#include <stdlib.h>

#define ARR_MAX 256

struct Employee {
	char *first_name;
	char *last_name;
	char *position;
	char *seperation_date;
};

int main(void) {
	struct Employee employee_list[ARR_MAX];

	employee_list[0].first_name = "John";
	employee_list[0].last_name = "Johnson";
	employee_list[0].position = "Manager";
	employee_list[0].seperation_date = "2016-12-31";

	employee_list[1].first_name = "Tou";
	employee_list[1].last_name = "Xiong";
	employee_list[1].position = "Software Engineer";
	employee_list[1].seperation_date = "2016-10-05";

	employee_list[2].first_name = "Michael";
	employee_list[2].last_name = "Michaelson";
	employee_list[2].position = "District Manager";
	employee_list[2].seperation_date = "2015-12-19";

	employee_list[3].first_name = "Jake";
	employee_list[3].last_name = "Jacobson";
	employee_list[3].position = "Programmer";
	employee_list[3].seperation_date = NULL;

	employee_list[4].first_name = "Jacquelyn";
	employee_list[4].last_name = "Jackson";
	employee_list[4].position = "DBA";
	employee_list[4].seperation_date = NULL;

	employee_list[5].first_name = "Sally";
	employee_list[5].last_name = "Weber";
	employee_list[5].position = "Web Developer";
	employee_list[5].seperation_date = "2015-12-18";
}
