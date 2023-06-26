#include <stdio.h>

int main(void) {
	char x;

	do {
		puts("Press 'q' key to exit...");

		x = getchar();   //
		fflush(stdin);  //
		x = getchar(); // This is like while ((x = getchar()) != '\n' && x != EOF); 
		
		
		
	} while(x != 'q');

	puts("Quit-Waiting...");
	
	return 0;
}
