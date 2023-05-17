#include <stdio.h>
#include "find.h"

static int count_ID = 0;
static int count_PW = 0;

void find_ID(){
	count_service++;
	count_ID++;
	printf("\nYou are visiting the %s game.\n", title);
	printf("\n Total number of requests: %d, the number of requests for ID_search: %d.\n", count_service, count_ID);
}

void find_PW(){
	count_service++;
	count_PW++;
	printf("\nYou are visiting the %s game.\n", title);
	printf("\nTotal number of requests: %d, the number of requests for PW_search: %d.\n", count_service, count_PW);
}
