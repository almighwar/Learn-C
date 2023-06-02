#include <stdio.h>
#include <stdbool.h>

//The reason why the struct was now defined out of the main function 
//was for it to be know through out the whole program
struct date
{
	int day;
	int month;
	int year;
};

//This function is use to update the number
//of days if it's a leap year
int numberOfDays (struct date d)
{
	int days;
	bool isLeapYear (struct date d);
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (isLeapYear(d) == true && d.month == 2) days = 29;
	else days = daysPerMonth[d.month - 1];

	return days;
}

//Self descriptive func that does what it says
bool isLeapYear (struct date d)
{
	bool leapYearFlag;
	
	if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 ) leapYearFlag = true;
	else leapYearFlag = false;

	return leapYearFlag;
}

//Updates tomorrow's date and returns a full struct that consists of it
struct date dateUpdate(struct date tday)
{
	struct date tomorrow;

	if (tday.day != numberOfDays(tday) ) {
		tomorrow.day = tday.day + 1;
		tomorrow.month = tday.month;
		tomorrow.year = tday.year;
	} else if (tday.month == 12) {
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = tday.year + 1;
	} else {
		tomorrow.day = 1;
		tomorrow.month = tday.month + 1;
		tomorrow.year = tday.year;
	}

	return tomorrow; 
}

//The most important function of the program
int main()
{
	struct date today, tomorrowDate;
	int numberOfDays (struct date d);
	struct date dateUpdate(struct date tday);

	printf("Enter today's date (dd mm yy) ");
	scanf("%i%i%i", &today.day, &today.month, &today.year);

	tomorrowDate = dateUpdate(today);
	printf("The date of tomorrow is %i/%i/%i \n", tomorrowDate.day, tomorrowDate.month, tomorrowDate.year);

	return 0;
}
