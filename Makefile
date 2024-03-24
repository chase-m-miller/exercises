filter-records : ./src/filter-records.c /usr/include/sqlite3.h
	gcc -o bin/filter-records src/filter-records.c -lsqlite3
