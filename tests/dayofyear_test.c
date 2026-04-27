#include <stdio.h>
#include "../libkr.h"

int main()
{
	int day = 26;
	int month = 2; //jan is 1, feb is 2;
	int year = 2026;
	int day_of_year =  kr_dayofyear(year, month, day);
	printf("day of year is: %d\n", day_of_year);
	return(0);
}
