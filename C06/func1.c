#include <stdio.h>

// declaration
int max(int, int); // Parameter names are not important in function declaration, only their type is required

// main function
int main(void) {
	int num, num1, res;
	// input the values of variables
	printf("Enter 2 numbers: ");
	scanf(" %d%d", &num, &num1);

	// calling the func to compare the values of var and get the max (greater) number
	res = max(num, num1);
	
	printf("The greater number is %d\n", res);

	return 0;
}

// the func returning the max
int max(int x, int y){
	int result;
	// methode to get the max number
	if(x<y){
		result = y;
	} else {
		result = x;
	}

	return result;
}
