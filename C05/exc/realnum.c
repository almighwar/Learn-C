#include <stdio.h>

int main(void) {
	int x,y;
	
	printf("How many number do you wanna input: ");
	scanf(" %d", &y);

	y -= 1;
	int num[y];
	
	printf("Enter the numbers: \n");
	for(x=0;x<=y; x++){
		printf("[%d]: ", x+1);
		scanf(" %d", &num[x]);
	}
	puts("The numbers:");
	for(x=0;x<=y; x++){
		printf("%d\n", num[x]);
	}

   	return 0; 
}
