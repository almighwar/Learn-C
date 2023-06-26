#include <stdio.h>

int main(void) {
    int x;

    printf("If your number is 8 then you are going to `goto` the end: ");
    x = (getchar() - '0');

begin:
    printf("%d", x);
	
    if (x != 8){
        putchar(',');
        goto begin;
    }
    else
        goto end;

end:
    printf("\nThe End\n");

    return 0;
}
