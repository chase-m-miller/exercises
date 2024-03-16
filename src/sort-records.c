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

	sqlite3_open("file:/home/Projects/exercises/src/employees.db", &db);

	if (db == NULL) {
		printf("Failed to open DB\n");
		return 1;
	}

	printf("Performing query...\n");
	sqlite3_prepare_v2(db, "select * from people;", -1, &stmt, NULL);

	printf("Got results:\n");
	while (sqlite3_step(stmt) != SQLITE_DONE) {
		int i;
		int num_cols = sqlite3_column_count(stmt);

		for (i = 0; i < num_cols; ++i) {
			switch (sqlite3_column_type(stmt, i)) {
				case (SQLITE3_TEXT):
					printf("%s, ", sqlite3_column_text(stmt, i));
					break;
				case (SQLITE_INTEGER):
					printf("%d, ", sqlite3_column_int(stmt, i));
					break;
				case (SQLITE_FLOAT):
					printf("%g, ", sqlite3_column_double(stmt, i));
					break;
				default:
					break;
			}
		}
		printf("\n");
	}

	sqlite3_finalize(stmt);

	sqlite3_close(db);

	return 0;
}
