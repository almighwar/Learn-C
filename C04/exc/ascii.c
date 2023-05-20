#include <stdio.h>

int main(void) {
    int x;
    printf("|-------|-------|\n|  NUM  | ASCII |\n|-------|-------|\n");
    for(x = 33;x < 255;x++) {

        if(x>10 && x<100)
            printf("|  %d   |   %c   |\n|-------|-------|\n", x, x);

        else if(x>100 && x<255)
            printf("|  %d  |   %c   |\n|-------|-------|\n", x, x);
    }
    return 0;
}
