#include <stdio.h>
#include <string.h>

int main(void) {
	char Test2[20] = "Your name is";

	strncat(Test2, " Flan", 6);

    puts(Test2);
	return 0;
}
