/* Some Compliers don't accept this way at all, 
   but some display to you that there's small error in function
   but still complied the file */

#include <stdio.h>

int main(void) {

	helloWrld();
	
	return 0;
}

void helloWrld(){
	printf("1.Hello, World!\n"); 
	fputs("2.Hello World\t", stdout); // fputs 'stdout' to print "Hello..." without '\n'
}


/* ********** GCC Complier OUTPUT ************

***@*************:~/Learn-C/C06/errors$ cc -o hello orderfunc.c 
orderfunc.c: In function ‘main’:
orderfunc.c:7:9: warning: implicit declaration of function ‘helloWrld’ [-Wimplicit-function-declaration]
    7 |         helloWrld();
      |         ^~~~~~~~~
orderfunc.c: At top level:
orderfunc.c:12:6: warning: conflicting types for ‘helloWrld’; have ‘void()’
   12 | void helloWrld(){
      |      ^~~~~~~~~
orderfunc.c:7:9: note: previous implicit declaration of ‘helloWrld’ with type ‘void()’
    7 |         helloWrld();
      |         ^~~~~~~~~
*/
