#include<stdio.h>

int main() {

    int x=0;

    while(1){
        printf("Enter a value: 1\n: ");
        scanf("%d", &x);

        if(x==11){
        printf("number %d\nSucced\n", x);
        break;
        }
        x++;
    }

    return 0;
}
