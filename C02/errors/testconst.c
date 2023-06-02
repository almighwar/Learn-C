#include <stdio.h>

int y; //False, it's not possible to decla the var out of the main function
      // But const u can with #define

int main(void) {
	const int x = 7;

	printf("%d\n", x);

	x = 7; //False, because the value of x is constant
	
	printf("%d\n", x);
	return 0;
}

/*
 
┌──►tayaran©local:-[~/…/main/C02/errors]
└─$ cc -o testcon testconst.c    
testconst.c: In function ‘main’:
testconst.c:8:11: error: assignment of read-only variable ‘x’
    8 |         x = 7;
      |           ^

*/
