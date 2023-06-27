#include <stdio.h>

int main(void) {
    int a, b;
	b = 65; // initialization to the second `for`
	
    for(a = 0;         a < 10;         a++){
 //       ^              ^              ^
 //initialization,   condition,    incrementation       
        printf("%d ", a);
    }

	puts("");
	
    for(;;){

    		if(b>90) // condition
    			break;
            
		printf("%c ", b);
        b++; // incrementation 
    }

    puts("");

    return 0;
}
