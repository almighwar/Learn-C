#include <stdio.h>

int main(void) {
    int x;

    printf("Enter your result: ");
    scanf(" %d", &x);

    if(x >= 80 && x <= 100)
        printf("Pass, Amazing rating");
        
    else if(x >= 70 && x < 80)
        printf("Pass, Great rating");
        
    else if(x < 70 && x >= 50)
        printf("Fall, Try again");
        
    else if(x < 50 && x >= 20)
        printf("Fall, Nice try");
        
    else if(x < 20)
        printf("Bruh, you have to get a book someday");
        
    else
        printf("Error try again");


    return 0;
}
