#include "entry.h"

int main(void) {
	Entry_list elist = {0};

	el_set(&elist, "1", "some val");
	el_set(&elist, "2", "another val");
	el_set(&elist, "3", "yet another val");
	
	el_print(&elist);	

	return 0;
}
