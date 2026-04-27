#include <stdio.h>
#include "../libkr.h"

int main()
{
	int i;
	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, kr_power(2,i), kr_power(-3,i));
	return(0);
}
