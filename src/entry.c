#include <stdio.h>
#include <string.h>
#include "entry.h"

void el_print(const Entry_list *list) {
	for (size_t i = 0; i < list->size; i++) {
		printf("Entry %p:\n  key -> %s\n  val -> %s\n", (void*)&(list->entries[i]), list->entries[i].key, list->entries[i].val);	
	}
}

void el_set(Entry_list *list, const char *key, const char *val) {
	for (size_t i = 0; i < list->size; i++) {
		if (strcmp(list->entries[i].key, key) == 0) {
			list->entries[i].val = val;
			return;
		}
	}

	list->entries[list->size].key = key;
	list->entries[list->size].val = val;
	list->size++;
}

const char* el_get(const Entry_list *list, const char *key) {
	for (size_t i = 0; i < list->size; i++) {
		if (strcmp(list->entries[i].key, key) == 0) {
			return list->entries[i].val;
		}
	}

	return NULL;
}
