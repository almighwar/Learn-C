#include <stdio.h>

int main(void) {
	int x, y, z;
	int arr[3][3][2];
	
    for(x = 0;x <= 2;x++) {
		for(y = 0;y <= 2;y++) {
			for(z = 0; z <= 1; z++){
				printf("Array[%d][%d][%d]: ", x, y, z);
				scanf(" %d", &arr[x][y][z]);
            }
		}
	}
	/////////////// OUTPUT /////////////////
	for(x = 0;x <= 2;x++) {
		for(y = 0;y <= 2;y++) {
			for(z = 0; z <= 1; z++){
				printf("Array[%d][%d][%d] = %d\n", x, y, z, arr[x][y][z]);
            }
		}
	}

	return 0;
}
