#include <stdio.h>

int main(void) {
	int x = 4;
	int x = 8; //False, because declaration of two variables with the same name
	
	printf("%d %d\n", x, x);
	return 0;
}

/*
┌──►tayaran©local:-[~/…/main/C02/errors]
└─$ cc -o varerr varerr.c    
varerr.c: In function ‘main’:
varerr.c:5:13: error: redefinition of ‘x’
    5 |         int x = 8;
      |             ^
varerr.c:4:13: note: previous definition of ‘x’ with type ‘int’
    4 |         int x = 4;
      |  
      
*/
