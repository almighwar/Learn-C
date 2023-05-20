#include <stdio.h>

int main(void) {
    int x = 0;

    do {
        printf("%d ", x);
        x++;
        x++;

        if(x > 100)
            break;
    }while(x <= 100);

    return 0;
}
