#include <stdio.h>

int main(void) {
    int x, y = 1;

    printf("Choose a number: ");
    scanf(" %d", &x);

    do {
        printf("%d + 1 ", x);
        x++;
        printf("= %d\n", x);
        y++;

    } while (y != 10);

    return 0;
}
