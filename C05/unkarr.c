#include <stdio.h>
#define repeat 2

int main(void) {
    int arr[] = {20, 30 , 40, 50, 60};
    int arr2[][2] = {{15, 16}, {17, 18}, {19, 21}, {22, 23}};
    // the same thing in 3d arrays

    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);

    for(int x = 0;x<=repeat;x++){
        for(int y=0;y<=repeat;y++){
            printf("%d\n", arr2[x][y]);
        }
    }
    return 0;
}
