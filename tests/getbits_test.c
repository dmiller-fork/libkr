#include <stdio.h>
#include "../libkr.h"

int main(){
	int x = 10; // is 1010 in binary
	int p = 3;  // 3 is the highest bit starting from 0
	int n = 3; // top 3 bits are 101, which is 5

	printf("bits are: %u\n", kr_getbits(x,p,n));
	return(0);
}
