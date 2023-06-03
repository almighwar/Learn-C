#include <stdio.h> 

int main(void) {
	// && means AND
	printf("%d\n", 8<4 && 8>4);
	printf("%d\n", 8>4 && 8<4);
	printf("%d\n", 8==4 && 8!=4);
	// || means OR
	printf("%d\n", 8<4 || 8>4);
	printf("%d\n", 8>4 || 8<4);
	printf("%d\n", 8==4 || 8!=4);
	// !() means not or doesn't [my english go brrrr]
	printf("%d\n", !(8<4));
	printf("%d\n", !(8>4));
	printf("%d\n", !(8==4));
	
	return 0;
}

// 1 means TRUE and 0 means FALSE
/* OUTPUT 

0 : there is a wrong relational 8<4
0 : there is a wrong relational 8<4 
0 : there is a wrong relational 8==4 

1 : there is a wrong relational 8<4
1 : there is a wrong relational 8<4
1 : there is a wrong relational 8!=4

1 : because is not less than 4
0 : because 8 is greater than 4 
1 : because 8 doesn't equal 4

*/
