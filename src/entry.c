#include <stdio.h>
#include <string.h>
#include "entry.h"

EntryList elist = {0};

void el_print() {
	for (size_t i = 0; i < elist.size; i++) {
		printf("Entry %p:\n  key -> %s\n  val -> %s\n", (void*)&(elist.entries[i]), elist.entries[i].key, elist.entries[i].val);	
	}
}

void el_set(const char *key, const char *val) {
	for (size_t i = 0; i < elist.size; i++) {
		if (strcmp(elist.entries[i].key, key) == 0) {
			elist.entries[i].val = val;
			return;
		}
	}

	elist.entries[elist.size].key = key;
	elist.entries[elist.size].val = val;
	elist.size++;
}

const char* el_get(const char *key) {
	for (size_t i = 0; i < elist.size; i++) {
		if (strcmp(elist.entries[i].key, key) == 0) {
			return elist.entries[i].val;
		}
	}

	return NULL;
}
