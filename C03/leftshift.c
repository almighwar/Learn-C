#include <stdio.h>

int main(void) {
	printf("from this %d to %d\n", 1, 1<<3);// OUTPUT from 1 to 8
	   //because shift from 00000001 binary = 1 decimal to 00001000 binary = 8 decimal
	printf("from this %d to %d\n", 1, 1<<7);// OUTPUT from 1 to 128
	   //because shift from 00000001 binary = 1 decimal to 10000000 binary = 128 decimal

	return 0;
}
