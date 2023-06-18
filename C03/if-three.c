#include <stdio.h>

int main(void) {
	int num;

	puts("Enter a number:");
	scanf(" %d", &num);
	
	// IF One
	if(num > 50){
		printf("1. %d is greater than 50\n", num);
	}
	if(num < 50){
		printf("1. %d is less than 50\n", num);
	}
	
	// IF Two
	if(num > 150)
		printf("2. %d is greater than 150\n", num);
	if(num < 150)
		printf("2. %d is less than 150\n", num);
		
	// IF Three
	if(num > 100)
		printf("3. %d is greater than 100\n", num);
	else if(num == 100)
		printf("3. %d are equal 100\n", num);
	else
		printf("3. %d is less than 100\n", num);
	
	return 0;
}
