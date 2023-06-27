#include <stdio.h>

int main(void) {
    int x = 1; // initialization

    while(1) // condition, but here we put 1 it mean true, loop without end 
    { // 1 here mean TRUE

        if(x > 20) // so here we put the condition to break the loop
        { 
            break;
        }
        printf("%d ", x);
        ++x; // incrementation
    }

    return 0;
}
