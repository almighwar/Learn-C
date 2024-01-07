#include <stdio.h>

main() {

	puts("Rename hello to hello-world...");
	system("sleep 3s");
	rename("hello","hello-world");
	puts("Operation termined");
	system("sleep 5s");
	puts("\nRemove any file that name 'Jaban' or 'hello-world'");
	system("sleep 3s");
	remove("Jaban");
	remove("hello-world");
	
}
