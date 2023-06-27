#include <stdio.h>

int main(void) {
	char str[255];

	puts("Your name: ");
	gets(str);

	puts(str);

	return 0;
}
