#include <stdio.h>
#include "../libkr.h"

int main()
{
	int x = 1;
	int y = 2;
	kr_swap(&x, &y);
	printf("x is now: %d, and y is: %d\n", x, y);
	return(0);
}
