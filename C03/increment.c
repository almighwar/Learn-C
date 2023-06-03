#include <stdio.h> 

int main(void) {
	int x, y;
	x = 1;
	
	printf("x = %d\n", x);
	
	x++;
	
	printf("x = %d\n", x);
	
	++x;
	
	printf("x = %d\n", x);
	
	x += 1;
	
	printf("x = %d\n", x);
	
	printf("x = %d\n", ++x);
	
	printf("x = %d\n", x++); // the difference between these two increment

	printf("x = %d\n", x += 1);
	
	return 0;
}
