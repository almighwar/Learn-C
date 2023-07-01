/* 

 In this program we have to create a function that make the new lines '\n' below the condition of numbers 
 
 Second method
 
*/

#include <stdio.h>

// This method when u don't need to make another file such as library to ur main function
void lineSkip(int n){
	int x = 1;
	
	while(x<=n){
		puts("");
		x++;
	}
}

int main(void){
	int num, num1;
	num = 12, num1 = 23;
	
	puts("without new line function:");
	printf("%d\n\n\n\n\n\n\n%d\n", num, num1); // 7 new line
	
	puts("with new line function:");
	printf("%d", num);
	lineSkip(7); 
	printf("%d\n", num1);	
	return 0;
}
