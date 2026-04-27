#include <stdio.h>
#include "../libkr.h"

int main()
{
	int day = 26;
	int month = 2; //jan is 1, feb is 2;
	int year = 2026;
	struct date d = {day, month, year, -1, ""};
	d.yearday =  kr_dayofyearpd(&d);
	printf("day of year is: %d\n", d.yearday);
	return(0);
}
