#include <stdio.h>

int main(void) {
	int x, arr[16];

	for(x = 0; x<=16; x++){
		printf("Array %d:  ", x);
		scanf(" %d", &arr[x]);
	}

	printf("||||||||||||||||| OUTPUT ||||||||||||||||||\n");

	for(x = 0; x <= 16; x++)
		printf("Array %d: %d\n", x, arr[x]);

	return 0;
}
