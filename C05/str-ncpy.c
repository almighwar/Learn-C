#include <stdio.h>
#include <string.h>

int main(void) {
    char String[] = "Nothing!";
	char Empty_One[20], Empty_Two[20];

    strcpy(Empty_One, String);
    strncpy(Empty_Two, String, 5);

    printf("Empty One = %s\nEmpty Two = %s\n", Empty_One, Empty_Two);

	return 0;
}
