#include <stdio.h>
#include "../libkr.h"

int main(){
	char* s = " -21"; //a negative number won't work here, returns 0
	int i = kr_atoi(s); //however the stdlib atoi does work with neg nums
	printf("integer is: %d\n", i);
	return(0);
}
