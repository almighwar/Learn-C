#include <stdio.h>

int main(void) {
    char x = 'q'; // initialization

    do {
        printf("Enter (q) to exit: ");
        scanf(" %c", &x);

        if (x == 'q') {
            printf("Success\n");
            break;
        }
        x++; // incrementation

    } while (x != 'q'); // condition

    return 0;
}
