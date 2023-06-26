#include <stdio.h>

int main(void) {
	char x;

	puts("press 'q' key to exit");

	x = getchar();
	
	while(x != 'q'){
		puts("The wrong key!\npress 'q' to exit");

		while ((x = getchar()) != '\n' && x != EOF ); // is not necessary 
		x = getchar();
	}

	puts("Quit the program...");	
	return 0;
}
