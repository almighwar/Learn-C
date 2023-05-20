#include <stdio.h>

int main(void) {
    int a;
    a = 0;

    for(;;) {

        printf("%d ", a);
        a++;

        if(a > 20)
            break;
    }

    return 0;
}
