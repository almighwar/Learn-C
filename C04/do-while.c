#include <stdio.h>

int main() {
    char x = 'q';

    do {
        printf("Enter (q) to exit: ");
        scanf(" %c", &x);

        if (x == 'q') {
            printf("Success\n");
            break;
        }
        x++;

    } while (x != 'q');

    return 0;
}
