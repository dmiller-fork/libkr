#include <stdio.h>
#include "../libkr.h"

int main(){
	int n = -34;
	char s[10];
	kr_itoa(n, s);
	printf("number is a character string %s\n", s);
	return(0);
}
