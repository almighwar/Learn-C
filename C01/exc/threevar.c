#include <stdio.h>

int main(void) {
	int x,y, resu;
	x = 100;
	y = 20;
	
	resu = x+y;
	printf("%d + %d = %d\n", x , y, resu);
	
	resu = x-y;
	printf("%d - %d = %d\n", x , y, resu);
	
	resu = x*y;
	printf("%d * %d = %d\n", x , y, resu);
	
	resu = x/y;
	printf("%d / %d = %d\n", x , y, resu);
		
	return 0;
}
