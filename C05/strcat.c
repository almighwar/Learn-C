#include <stdio.h>
#include <string.h>

int main(void) {
	char String[20] = "Hello";

	strcat(String, ", World!\n");

	puts(String);

	return 0;
}
