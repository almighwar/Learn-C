#include <stdio.h>

int main(void) {
    char username[20];
    int x = 0;

    printf("Enter your name: ");
    fgets(username, 20, stdin);

    for(;username[x] != '\0'; x++){
    }

    puts(username);
    puts(x);

    return 0;
}
