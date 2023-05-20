#include <stdio.h>

int main(void) {
    int x =100;

    while(1) {

        if(x < 0)
            break;

        printf("%d  ", x);
        x--;
    }

    return 0;
}
