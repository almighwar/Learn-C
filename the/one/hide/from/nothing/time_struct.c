#include <stdio.h>
//Before you move on to read the codes, know I wrote it by myself without looking at the book 

struct time {
	int hour;
	int minutes;
	int seconds;
};

int main() 
{
	struct time now, later;

	printf("Enter a value for the time HH:MM:SS ");
	scanf("%i:%i:%i", &now.hour, &now.minutes, &now.seconds);

	if ( now.seconds == 59 ){
		//first I will want to check if I can update only the minute, then I'll check if I can do that for both the minute and the hour
		later.seconds = 0;
		later.minutes = now.minutes + 1;
		later.hour = now.hour;
	} else if( now.seconds == 59 && now.minutes == 59 ){
		later.seconds = 0;
		later.minutes = 0;
		later.hour = now.hour + 1;
	} else if(  now.seconds == 59 && now.minutes == 59 && now.hour == 23){
		later.seconds = 0;
		later.minutes = 0;
		later.hour = 0;
	}else {
		later.seconds = now.seconds + 1;
		later.minutes = now.minutes;
		later.hour = now.hour;
	}

	printf("The next time will be %i:%i:%i \n", later.hour, later.minutes, later.seconds);
	return 0;
}
