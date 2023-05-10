#include <stdio.h>

int main() {
    int x = 0;
    
    while (1) {
        printf("Enter a value: ");
        scanf("%d", &x);

        if (x == 11) {
            printf("Number %d\nSuccess\n", x);
            break;
        }
        x++;
    }

    return 0;
}
