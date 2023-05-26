#include <stdio.h>
#include <string.h>

#define USERSIZE 20
int main(void) {
    char username[USERSIZE];
    int x;

    printf("Enter your name: ");
    
	fgets(username, USERSIZE , stdin);

    for(;username[x] != '\n'; ++x){
    }

    puts(username);
    printf("The number of characters: %d", x);

    return 0;
}
