#include <stdio.h>

int main(void) {
	int x;

	printf("Enter your age: ");
	scanf(" %d", &x);

	if(x > 40)
		printf("Your age great than 40y\n");

	else if(x < 40)
		printf("Your age less than 40y\n");

	else if(x == 40)
		printf("Your age is 40y\n");

	return 0;
}
