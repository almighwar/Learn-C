#include <stdio.h>

int main(void) {
	int x,y,equal[5];
	x = 20;
	y = 153;
	
	equal[4] = {x+y, x-y, x*y}; //That's not the answer
	float div = x/y;
	
	for(int i=1; x<4; x++){
		printf("%d + %d = %d\n", x , y, equal[i]);
		
		if(i == 3)
			printf("%d + %d = %f\n", x , y, div);
		
	}
	return 0;
}
