#include <stdio.h>
#define tbaa(str) printf(#str "\n") // like you make your own function print from printf

int main(void) {
	tbaa(Hello World!);	

	return 0;
}
