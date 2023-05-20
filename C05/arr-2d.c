#include <stdio.h>

int main(void) {
    int x, y,arr[4][2] = {{2,4},{6,5},{8,7},{9,10}};
    arr[4][0] = 11;
    arr[4][1] = 12;

    for(x=0;x<=4;x++){
        for(y=0;y<=1;y++)
            printf("Array[%d][%d] = %d\n", x,y,arr[x][y]);
    }

    return 0;
}
