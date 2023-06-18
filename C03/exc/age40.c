#include <stdio.h>

int main(void) {
	int age;

	puts("Enter your age:");
	scanf(" %d", &age);

	if(age < 40)
		printf("your age %d less than 40\n", age);
	else if(age > 40 && age <= 110)
		printf("your age %d greater than 40\n", age);
	else if(age == 40)
		printf("your age is %d\n", age);
	else if(age > 110)
		printf("Why are you lying?\n");
	else
		printf("Error\n");

	return 0;
}
