#include <stdio.h>

int main (void) {
	int x, arr[11] = {4,7,34,7,87,100,123,244,50};
    arr[9] = 20;
    arr[10] = 25;
    arr[11] = 60;

	for(x = 0; x <= 11; x++)
		printf("%d  ", arr[x]);

	return 0;
}
