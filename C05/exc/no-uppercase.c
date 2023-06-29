#include <stdio.h>
#include <string.h>

int main(void) {
	char x[255];
	int i=0;
	
	fputs("Enter a name with uppercase and lowcase: ", stdout);
	gets(x);
	
	while(x[i] != 'n'){
	
		if(x[i] >= 65 && x[i]<= 90){
			x[i] = '*';
		}
		
		i++;
	}
	
	puts(x);
	return 0;
}
