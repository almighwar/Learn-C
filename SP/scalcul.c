#include<stdio.h>

int main() {

    int num,num2;
	char g;

	printf("-Simple calculator-\n(+)\n(-)\n(*)\n(/)\nEnter a symbol: ");
    scanf("%c", &g);
    printf("Enter first number: ");
    scanf("%d", &num);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    switch(g){
    case('+'):
    	printf("%d + %d = %d\n", num,num2,num+num2);
    	break;
	case('-'):
	    printf("%d - %d = %d\n", num,num2,num-num2);
	    break;
	case('*'):
	    printf("%d * %d = %d\n", num,num2,num*num2);
	    break;
	case('/'):
	    printf("%d / %d = %d\n", num,num2,num/num2);
	    break;
	default:
		printf("Error\n");
	}
    return 0;
}
