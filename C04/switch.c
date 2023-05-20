#include <stdio.h>

int main(void) {
    char l;

    printf("Press key 'q' and Enter: ");
    scanf(" %c", &l);

    switch(l) {
    case('q'):
        printf("You press the right key\n");
        break;
    default:
        printf("Error you press the wrong key\n");
        break;
    }

    return 0;
}

