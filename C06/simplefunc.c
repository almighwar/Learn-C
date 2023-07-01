#include <stdio.h>

void f_print(char str[]);

int main(void) {

	f_print("Hello, World!");
	f_print("Allhamdu Li Allah");
	return 0;
}

void f_print(char str[]) {
	printf("%s\n", str);
}
