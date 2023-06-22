#include <stdio.h>
#include <conio.h> // Just in Windows and DOS OS Compilers //

int main(void) {
	char ph; 
	
	ph = getch();
	
	putch(ph);
	putch('\n');
	
	puts("Press any key to close");
	getch(); // To pause program

}
