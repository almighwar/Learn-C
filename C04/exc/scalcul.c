#include <stdio.h>

int main() {

    int num,num2;
	char g;

	printf("-Simple calculator-\n1.(+)\n2.(-)\n3.(*)\n4.(/)\nEnter a number or symbol: ");
    scanf("%c", &g);
    printf("Enter first number: ");
    scanf("%d", &num);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    switch(g){
    case('+'):
    case('1'):
    	printf("%d + %d = %d\n", num,num2,num+num2);
    	break;
	case('-'):
	case('2'):
	    printf("%d - %d = %d\n", num,num2,num-num2);
	    break;
	case('*'):
	case('3'):
	    printf("%d * %d = %d\n", num,num2,num*num2);
	    break;
	case('/'):
	case('4'):
	    printf("%d / %d = %d\n", num,num2,num/num2);
	    break;
	default:
		printf("Error\n");
	}
    return 0;
}
