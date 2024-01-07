#include <stdio.h>

char *funcA(char *funcB());
char *funcC(char *);

int main(){	

	funcA(funcC);
	
	return 0;
}

char *funcA(char *funcB()){
	fputs("Type somthing: ", stdout);
	funcB();
}

char *funcC(char *a){
	fgets(a, 255, stdin);
	puts(a);

	return a;	
}
