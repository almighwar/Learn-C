#include <stdio.h>

int main(void) {
    int arr[2];

    for(int x=0; x<=1; x++){
        *(arr+x) = x;
        printf("Array %d\n", *(arr+x));
    }
    ‫// also this arr[1+1] or arr[2/2] or arr[2*2] or arr[0-0]
    return 0;
}
