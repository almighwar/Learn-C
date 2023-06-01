#include <stdio.h>

int main() {
	char x = 'A';
	int i,y,z;
	i = 1;
	y = 3;
	i = i + y;
	z = i / 2;

	printf("%d %d %d\n", i, y, z);	
	putchar(x);
	
	puts("\n");
	
	x = 'C';
	
	putchar(x);

	return 0;
}
