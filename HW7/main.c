#include <stdio.h>
#include "find.h"

char title[10] = "NowQuiz";
int count_service = 0;

int main(){
	int service;

	do{
		printf("\n <<<1. ID Search 2. PW search 3. Exit >>>\n");
		printf("Please enter your service number (1-3)> ");
		scanf("%d", &service);

		switch (service){
			case 1:
				find_ID();
				break;
			case 2:
				find_PW();
				break;
			}
		} while (service != 3);
		
		return 0;
}
