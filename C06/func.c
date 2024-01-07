#include <stdio.h>

int sum(int, int);
// Function Prototype or Declaration

int main(){
	int a,b,ans;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	ans = sum(a,b);

	// Function Call
	printf("sum is %d\n", ans);

}

int sum( int x, int y){	//Function Definition or Process
	int z;
	z = x + y;
	
	return(z);
}
