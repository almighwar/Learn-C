#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int x, input, counter;
	counter = 0;
	
	srand(time(0));
	x = rand() % 100;
	
	system("clear");
	
	puts("\033[1;7;32mGuess the random number Game \033[0m");
	puts("\033[1;4;33mYou have 6 attempts\033[0m \f");
	
	while(1){
		
		fputs("\nguess the number: ", stdout);
		scanf(" %d", &input);
		counter++;
		
		if(x == input){
			puts("\033[1;36mBengo \033[0m You win");
			break;
		} else if(x < input){
			puts("random number is higher");
		} else if(x > input){
			puts("random number is smaller");
		} else if(counter == 6){
			puts("You lose");
			break;
		}
	}

	return 0;
}
