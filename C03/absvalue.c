#include<stdio.h>
#include<stdlib.h> // for abs(num)

int main(void) {

    int num, x;

	printf("Enter a number: ");
	scanf("%d", &num);

	x = abs(num);

	printf("Number: %d\nThe absolute value:  %d\n", num ,x);
// ********* if method *************************************
	if(num<0)
        num = -num;
    else
        num = num;

    printf("\n'if' method\nThe abs value: %d\n", num);

    return 0;
}
