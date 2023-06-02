#include <stdio.h>

int main()
{
	//Basically is struct is the equivalence of 
	//a class in other languages (bcos it defines
	//custom types)
	struct date
	{
		int day;
		int month;
		int year;
	};

	struct date today, tomorrow;

	//today.day = 30;
	//today.month = 05;
	//today.year = 2023;

	//Let's make the program more fancier by asking the 
	//user for a date, and then calculating the date of tomorrow
	printf("Enter today's date (dd mm yy) ");
	scanf("%i%i%i", &today.day, &today.month, &today.year);

	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (today.day != daysPerMonth[today.month - 1]) {
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	} else if (today.month == 12) {
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	} else {
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}

	
	printf("The date of tomorrow is %i/%i/%i \n", tomorrow.day, tomorrow.month, tomorrow.year);
	return 0;
}
