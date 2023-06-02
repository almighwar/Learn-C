#include <stdio.h>

int main(void) {
	int x = 8764935674;
	
	printf("x = %d\n",x);
	
	return 0;
}

/* Compiler

┌──►tayaran©local:-[~/…/main/C02/errors]
└─$ cc -o intval intvalue.c
intvalue.c: In function ‘main’:
intvalue.c:4:17: warning: overflow in conversion from ‘long int’ to ‘int’ changes value from ‘8764935674’ to ‘175001082’ [-Woverflow]
    4 |         int x = 8764935674;
      |                 ^~~~~~~~~~

*/
/* Output 

┌──►tayaran©local:-[~/…/main/C02/errors]
└─$ ./intval               
x = 175001082

*/
