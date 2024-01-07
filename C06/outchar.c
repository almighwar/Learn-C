/*  Back to programming after long time, 30 days or more
	I'll study the last lessons  						*/

#include <stdio.h>

char *introdu(char *); // func that print text in the begin
char printScan(char str[]); // the fonction that input a string and print it
char *endd(char *strend){ // the function that print text in the end
		puts(strend);
		return strend;
}

int main(void) {
	char ch[255];

	introdu("");
	
	printScan(ch);

	endd("Operation termined...");
	
	return 0;
}

char *introdu(char *str1){
	str1 = "Write something here to print it below: ";
	fputs(str1, stdout);	
}

char printScan(char str[]){
	fgets(str, 255, stdin);
	printf("%s\n", str);
	return *str;
}
