#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

#define ARR_MAX 256

struct Employee {
	char *first_name;
	char *last_name;
	char *position;
	char *seperation_date;
};

int main(void) {
	sqlite3 *db;
	sqlite3_stmt *stmt;
	int ret;

	struct Employee employees[ARR_MAX];

	ret = sqlite3_open("/home/chasemiller/Projects/exercises/db/employees.db", &db);

	if (ret != SQLITE_OK) {
		printf("Failed to open DB, Error code: %i\n", ret);
		return 1;
	}

	printf("Performing query...\n");
	ret = sqlite3_prepare_v2(db, "SELECT * FROM people;", -1, &stmt, 0);
	if (ret != SQLITE_OK) {
		printf("sqlite3_prepare_v2 failed, returned %i\n", ret);
		sqlite3_close(db);
		return 2;
	}

	printf("Got results:\n");
	while (sqlite3_step(stmt) != SQLITE_DONE) {
		int i;
		int num_rows = 0;
		int num_cols = sqlite3_column_count(stmt);

		for (i = 0; i < num_cols; ++i) {
			switch (sqlite3_column_type(stmt, i)) {
			case (SQLITE3_TEXT):
				printf("%s, ", sqlite3_column_text(stmt, i));
				break;
			default:
				break;
			}
		}
		printf("\n");
		++num_rows;
	}

	sqlite3_finalize(stmt);

	sqlite3_close(db);

	return 0;
}
