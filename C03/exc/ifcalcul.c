#include<stdio.h>

int main() {

    int num,num2;
	char g;

	printf("-Simple calculator-\n1:(+)\n2:(-)\n3:(*)\n4:(/)\nEnter number or symbol: ");
    scanf("%c", &g);
    printf("Enter first number: ");
    scanf("%d", &num);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    if(g =='+' || g == '1' )
    	printf("%d + %d = %d\n", num,num2,num+num2);
	else if(g =='-' || g == '2' )
	    printf("%d - %d = %d\n", num,num2,num-num2);
	else if(g =='*' || g == '3' )
	    printf("%d * %d = %d\n", num,num2,num*num2);
	else if(g =='/' || g == '4' )
	    printf("%d / %d = %d\n", num,num2,num/num2);
	else
		printf("Error\n");


    return 0;
}
