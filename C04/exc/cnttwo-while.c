#include <stdio.h>

int main(void) {
    int x = 0;

    while(1) {
        printf("%d ", x);
        x++;
        x++;

        if(x > 100)
            break;
    }

    return 0;
}
