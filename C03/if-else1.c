#include <stdio.h>

int main(void) {

    float num,num1,num2,larg;

	printf("Enter first number: ");
	scanf("%f", &num);
	printf("Enter second number: ");
	scanf("%f", &num1);
	printf("Enter third number: ");
	scanf("%f", &num2);

	if(num>num1 && num>num2)
		larg = num;
		
	else if(num1>num && num1>num2)
		larg = num1;
		
	else if(num2>num && num2>num1)
		larg = num2;
		
	printf("The largest number is %.2f", larg);
		
    return 0;
}
