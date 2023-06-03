#include <stdio.h> 

int main(void) {
	
	printf("%d\n", 8<4);
	
	printf("%d\n", 8>4);

	printf("%d\n", 8==4); // in C when we compare two value, we put two equal not one like that "=='
	
	printf("%d\n", 8!=4); // is not equal or contrary to this or not or doesn't in general
	
	return 0;
}

// 1 means TRUE and 0 means FALSE

/* OUTPUT 

0 : because 4 is less than 8
1 : because 8 is greater than 4 
0 : because 8 doesn't equal 4
1 : because 8 doesn't equal 4

*/
