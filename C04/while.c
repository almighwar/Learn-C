#include <stdio.h>

int main(void) {
    int x = 1;

    while(1) {

        if(x > 20) {
            break;
        }
        printf("%d ", x);
        ++x;
    }

    return 0;
}
