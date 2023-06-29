#include <stdio.h>

int main(void) {
	int *ptr, i;
	i = 30;
	ptr = &i;

	printf("i = %d\n", i);
	printf("*ptr = %d\n", *ptr);
	printf("&i = %p\n", &i); // the adresse in memory and it change every time u run the program
	printf("ptr = %p\n", ptr); // same here, notice that the %p key it mean pointer

	return 0;
}
