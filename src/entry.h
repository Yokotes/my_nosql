#include <stdio.h>

#define CAPACITY 100

typedef struct {
	const char *key;
	const char *val;
} Entry;

typedef struct {
	Entry entries[CAPACITY];
	size_t size;
} EntryList;

void el_print();

void el_set(const char* key, const char* val);

const char* el_get(const char* key); 
