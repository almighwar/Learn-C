#include <stdio.h>
#include <time.h>

int main(void) {
	time_t lwagt;
	time(&lwagt);
	
	printf("Time is %s", ctime(&lwagt));

	return 0;
}
