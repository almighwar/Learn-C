#include <stdio.h>

int main(void) {
	int *ptr, i;
	i = 30;
	ptr = &i;

	printf("the value that we give to ptr %d\n", *ptr);
	
	*ptr = 100;
	
	printf("now we give it value directly  %d\n", *ptr); // because now it has an adresse is adresse of var 'i'
	
	return 0;
}
