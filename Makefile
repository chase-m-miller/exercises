filter-records : filter-records.c sqlite3.h
	gcc -o bin/filter-records src/filter-records.c -lsqlite3
