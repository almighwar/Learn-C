#include <stdio.h>
// still not completed
int main(void) {
	int x,y,z;
	int arr[3][3][2] = {{{2, 4},{5, 6}, {10, 20}}, {{8, 10}, {11, 12}, {30, 40}}, {{14, 16}, {17, 18}, {50, 60}}};

	for(x=0;x<=2;x++) {
		for(y = 0;y <= 2;y++) {
			for(z = 0; z <= 1; z++){
				printf("Array[%d][%d][%d] = %d\n", x,y,z, arr[x][y][z]);
            }
		}
	}

	return 0;
}
