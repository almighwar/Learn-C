#include <stdio.h>

int main(void) {
	printf("from this %d to %d\n", 8, 8>>3);// OUTPUT from 8 to 1
		   //because shift from 00001000 binary = 8 decimal to 00000001 binary = 1 decimal
	printf("from this %d to %d\n", 128, 128>>7);// OUTPUT from 128 to 1
		  //because shift from 10000000 binary = 128 decimal to 00000001 binary = 1 decimal
			   
	return 0;
}
