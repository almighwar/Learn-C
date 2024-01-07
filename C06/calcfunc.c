#include <stdio.h>

// calculator functions without print result direcltly
int calPlus(int, int);
int calMinus(int, int);
int calMultip(int, int);
int calDived(int, int);

// Functions to print result direcltly
// ( void ), is empty, it's without any capacite, and func doesn't have any value to return to it
void printPlus(int, int);
void printMinus(int, int);
void printMultip(int, int);
void printDived(int, int); 

int main(void){
	int num, num1, cal;
	num = 60, num1 = 20;
	
	// calculator functions without print result direcltly
	puts("Functions 1 to calculator: ");
	cal = calPlus(num, num1);
	printf("%d\n", cal);
	
	cal = calPlus(40, 150);
	printf("%d\n", cal);
	
	cal = calMinus(num, num1);
	printf("%d\n", cal);
	
	cal = calMultip(num, num1);
	printf("%d\n", cal);
	
	cal = calDived(num, num1);
	printf("%d\n", cal);
	
	// Functions print result direcltly
	puts("\nFunctions 2 to calculator: ");
	printPlus(num, num1);
	
	printPlus(40, 150);
	
	printMinus(num, num1);

	printMultip(num, num1);
	
	printDived(num, num1);	
	
}

int calPlus(int x, int y){
	int res;
	res = x + y;
	
	return res;
}

// calculator functions without print result direcltly
int calMinus(int x, int y){
	int res;
	res = x - y;
	
	return res;
}

int calMultip(int x, int y){
	int res;
	res = x * y;
	
	return res;
}

int calDived(int x, int y){
	int res;
	res = x / y;
	
	return res;
}

// Functions print result direcltly
void printPlus(int x, int y){
	printf("%d + %d = %d\n", x, y, x+y);
}

void printMinus(int x, int y){
	printf("%d - %d = %d\n", x, y, x-y);
}

void printMultip(int x, int y){
	printf("%d * %d = %d\n", x, y, x*y);
}

void printDived(int x, int y){
	printf("%d / %d = %d\n", x, y, x/y);
}
