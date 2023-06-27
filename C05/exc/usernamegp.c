#include <stdio.h>
#include <string.h>

#define USERSIZE 20
int main(void) {
    char username[USERSIZE];
    int x;

    printf("Enter your name: ");
    
	gets(username); // it work now

    for(;username[x] != '\0'; x++){
    }

    puts(username);
    printf("The number of characters: %d\n", x);

    return 0;
}

/*

******:~/Learn-C/C05/exc$ cc -o usernamegp usernamegp.c 
   11 |         gets(username); // it work now
      |         ^~~~
      |         fgets
		/tmp/ccgUVUnF.o: in function `main':
usernamegp.c:(.text+0x3c): warning: the `gets' function is dangerous and should not be used. <--- 

******: ~/Learn-C/C05/exc$ ./usernamegp
Enter your name: Almighwar
Almighwar
The number of characters: 9

*/
