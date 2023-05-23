#include <stdio.h>

int main(void) {
	char usrname[30];
	int x = 0;


	printf("Username: ");
	scanf("%s", &usrname);

	for(;usrname[x] != '\0'; x++){
		printf("%i: %c\n", x+1, usrname[x]);
	}

	printf("%s = %d\n", usrname, x);

	return 0;
}
