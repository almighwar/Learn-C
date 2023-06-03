#include <stdio.h>

int main() {
	char x;
	int y;
	
 	puts("Enter a littre and number: ");
 	scanf(" %c %d", &x, &y); // function scanf responsible for input
 							// we have here two variable 
 	
 	printf("The Input : %d, %c", y, x);
 	
	return 0;
}
