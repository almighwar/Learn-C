#include <stdio.h>

int main(void) {
	int num;

	puts("Enter number equal or less than 9:");
	scanf(" %d", &num);
	
	if(num <= 9)
		printf("Correct, The number is %d\n", num);
	else if(num > 9)
		printf("Incorrect, The number %d great than 9\n", num);
	else
		puts("Error\n");

			
	return 0;
}
