#include <stdio.h>

int main(void) {
	char arrhelo[] = "Hello, World! 1 is = 2/2 but 2/2 != 0/2";
	int x=0, cnt=0, cntalpha=0, numWlett;

		for(;arrhelo[x] != '\0'; x++){
			cnt++; // here count all characters in string
		}
			
		for(x=0;arrhelo[x] != '\0'; x++){
			printf("%d\n", x);
			if(arrhelo[x] > 64 || arrhelo[x] >= 90)
				cntalpha++;
			else if(arrhelo[x] > 96 || arrhelo[x] >= 122)
				cntalpha++;
		}
		
	printf("Count all characters %d\ncount only alphabet %d\nx %d\n", cnt, cntalpha, x);
	
	puts("Dec and Char:");
	
	for(x = 0;arrhelo[x] != '\0'; x++){
		printf("%d, ", arrhelo[x]);
	}
	
	puts("");
	
	numWlett = cnt - cntalpha;

	printf("'%s' = %d\n",arrhelo, numWlett);

	return 0;
} // IT's WORK 
