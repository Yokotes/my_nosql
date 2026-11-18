#include <stdio.h>

#define CAPACITY 100

typedef struct {
	const char *key;
	const char *val;
} Entry;

typedef struct {
	Entry entries[CAPACITY];
	size_t size;
} Entry_list;

void el_print(const Entry_list *list);

void el_set(Entry_list *list, const char* key, const char* val);

const char* el_get(const Entry_list *list, const char* key); 
