#include <stdio.h>

int main(void) {
	int x;

	printf("Enter a value less than 9: ");
	scanf(" %d", &x);

	if(x <= 9)
		printf("The number is %d\n", x);
	else 
		printf("Error\n");
	return 0;
}
