#include <stdio.h>

void bigFunc(void funcOnfunc(void));
void Function();

int main() {
	bigFunc(Function);
	return 0;
}

void bigFunc(void funcOnfunc(void)){
	puts("Alhamdu lillah");
	funcOnfunc();
}

void Function(){
	puts("Quit the pghoggham...");
}
