#include <stdio.h>

int main(void) {
    int i = 0;

    printf("Top of top\n");

begin:
    printf("%d", i);
    i++;

    if (i != 21){
        putchar(',');
        goto begin;
    }
    else
        goto fin;

fin:
    printf("\nThe End\n");

    return 0;
}
