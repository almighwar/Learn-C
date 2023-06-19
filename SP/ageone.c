#include<stdio.h>

int main() {

    int x,y, age;
	char g;

	printf("Female: (f)\nMale: (m)\nAre you female or male: ");
    scanf("%c", &g);
    printf("Enter current year: ");
    scanf("%d", &x);
    printf("Enter the year that you were born: ");
    scanf("%d", &y);

    age = x-y;
    
    switch(g){
    case('f'):
    	printf("Your age is %d\n", age-5);
    	break;
	case('m'):
		printf("Your age is %d\n", age);
		break;
	default:
		printf("Error");
	}
    return 0;
}
