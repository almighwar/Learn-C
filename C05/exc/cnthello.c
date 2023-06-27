#include <stdio.h>

int main(void) {
	char arrhelo[] = "Hello, World!";
	int x = 0;

	while(arrhelo[x] = "-1"){
			
		x++;
			if(arrhelo[x] == 48 ){
				x++;
			}
			
			if(arrhelo[x] == 32){
				break;	
			}	
	}

	printf("%s = %d\n",arrhelo, x);

	return 0;
}
