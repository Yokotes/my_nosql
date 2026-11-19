#include "entry.h"

int main(void) {
	el_set("1", "some val");
	el_set("2", "another val");
	el_set("3", "yet another val");
	
	el_print();	

	return 0;
}
