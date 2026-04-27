#include <stdio.h>
#include "../libkr.h"

int main(){
	char* s = " -2.1"; //a negative number won't work here, returns 0
	float i = kr_atof(s); //however the stdlib atoi does work with neg nums
	printf("float is: %f\n", i);
	return(0);
}
