#include <stdio.h>
#include "../libkr.h"

int main(){
	struct date d = { 4, 7, 1776, 186, "Jul" };
	struct person p = {
		"john adams", 
		"2055 Liberty Bell", 
		30043, 
		12345432, 
		200000,
		d,
		d
	};
	printf("the members are day: %d, " 
			"month: %d,  "
			"year: %d, "
			"yearday: %d: "
			"mon_name: %s\n", 
			d.day, d.month, d.year, d.yearday, d.mon_name);
	int leap = (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0;
	if(leap)
		printf("that was a leap year\n");
	else
		printf("that was not a leap year\n");
	printf("and %s has this birthday\n", p.name);
	return(0);
}
	
