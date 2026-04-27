#include <stdio.h>
#include "../libkr.h"

int main()
{
	int day = 26;
	int month = 2; //jan is 1, feb is 2;
	int year = 2026;
	int day_of_year =  kr_dayofyear(year, month, day);
	printf("day of year is: %d\n", day_of_year);
	struct date d = {-1, -1, year, day_of_year, ""};
	struct date *pd = &d;
	kr_monthdaypd(pd);
	printf("date is: %d %d %d\n", pd->year, pd->month, pd->day);
	return(0);
}
