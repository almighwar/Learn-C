#include <stdio.h>

int main(void) {
	// bitwize OR is |
	int x = 5; // 5 decimal = 00000101 binary
	           //                  ^
	x = x|1;   // 1 decimal = 00000001 binary, | means OR if one true is means comparing true 
		 	   //                  ^
 			   //           = 00000101 binary
	printf("x = %d\n", x); //OUTPUT  x = 5 

	// bitwize AND is &
	int y = 5; // 5 decimal = 00000101 binary
	           //                  ^
	y = y&1;   // 1 decimal = 00000001 binary, & means AND if one false is means comparing false
		 	   //                  ^
 			   //           = 00000001 binary
	printf("y = %d\n", y); //OUTPUT  y = 1 

	// bitwize XOR like NOT is ^
	int z = 5; // 5 decimal = 00000101 binary
	           //                    ^
	z = z^1;   // 1 decimal = 00000001 binary, & means AND if comparing two bits true is means equal false
		 	   //                    ^
 			   //           = 00000100 binary
	printf("z = %d\n", z); //OUTPUT  z = 4
	
	// bitwize NOT AND is & ~
	int a = 5; // 5 decimal = 00000101 binary
	           //                    ^
	a = a& ~1; // 1 decimal = 00000001 binary, & means AND if comparing two bits true is means equal false
		 	   //                    ^
 			   //           = 00000100 binary
	printf("a = %d\n", a); //OUTPUT  a = 4
	           // This oprator is like ^ 
	

	return 0;
}
