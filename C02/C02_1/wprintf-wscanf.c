#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, num;
	
	wprintf(L"Put any number:");
	wscanf(L" %d", &num);
	
	x = abs(num);
	
	wprintf(L"The absolute of |%d| is %d\n", num, x);

	return 0;
}

/* Compile

*****@******:~/Learn-C/C02/C02_1$ cc -o wide wprintf-wscanf.c 

wprintf-wscanf.c: In function ‘main’:
wprintf-wscanf.c:7:9: warning: implicit declaration of function ‘wprintf’; did you mean ‘dprintf’? [-Wimplicit-function-declaration]
    7 |         wprintf(L"Put any number:");
      |         ^~~~~~~
      |         dprintf
wprintf-wscanf.c:8:9: warning: implicit declaration of function ‘wscanf’; did you mean ‘vscanf’? [-Wimplicit-function-declaration]
    8 |         wscanf(L" %d", &num);
      |         ^~~~~~
      |         vscanf

*****@******:~/Learn-C/C02/C02_1$ ./wide

Put any number:-34
The absolute of |-34| is 34

*/

