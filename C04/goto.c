#include <stdio.h>

int main(void) {

start:
    printf("بداية\n");
    goto middl;

middl:
    printf("وسط\n");
    goto endi;

endi:
    printf("نهاية\n");

    return 0;
}
