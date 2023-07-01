// This like exercice i see it in book without looking to solution and the result the semi-same 

#include <stdio.h>

// calculator functions without print result direcltly
int calcuTor(int, char, int);

int main(void){
	int num, num1;
	char sign = '+';
	
	num = 60, num1 = 20;
	
	
	calcuTor(num, '+', num1);
	
	calcuTor(40, sign, 150);
	
	calcuTor(num, '-', num1);
	
	calcuTor(num, '*', num1);
	
	calcuTor(num, '/', num1);
	
	return 0;
}

int calcuTor(int x, char symb, int y){
	
	switch(symb){
		case '+':
			printf("%d %c %d = %d\n", x, symb, y, x+y);
			break;
		case '-':
			printf("%d %c %d = %d\n", x, symb, y, x-y);
			break;
		case '*':
			printf("%d %c %d = %d\n", x, symb, y, x*y);
			break;
		case '/':
			printf("%d %c %d = %d\n", x, symb, y, x/y);
			break;
		default:
			puts("Error");
	}


}
