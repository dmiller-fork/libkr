#include <stdio.h>
#include "../libkr.h"

int main()
{
	int m = 1; //january
	int n = 13; //error

	printf("month 1 is %s\n", kr_monthname(m));
	printf("month 13 is %s\n", kr_monthname(n)); 
	return(0);
}
