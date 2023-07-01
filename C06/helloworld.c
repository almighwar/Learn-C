#include <stdio.h>

void helloWrld(){
	printf("1.Hello, World!\n"); 
	fputs("2.Hello World\t", stdout); // fputs 'stdout' to print "Hello..." without '\n'
}

int main(void) {

	helloWrld();
	
	return 0;
}
