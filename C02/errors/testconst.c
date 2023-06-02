#include <stdio.h>

int main(void) {
	const int x = 7;

	printf("%d\n", x);

	x = 7;
	
	printf("%d\n", x);
	return 0;
}

/*
 
┌──►tayaran©local:-[~/…/main/C02]
└─$ cc -o testcon testconst.c    
testconst.c: In function ‘main’:
testconst.c:8:11: error: assignment of read-only variable ‘x’
    8 |         x = 7;
      |           ^

*/
