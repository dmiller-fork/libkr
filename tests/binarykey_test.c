#include <stdio.h>
#include "../libkr.h"

int main(){
	struct key keytab[] = {
    	{"break", 0},
    	{"case", 0},
    	{"char", 0},
    	{"continue", 0},
    	{"default", 0},
    	{"unsigned", 0},
    	{"while", 0}
	};
	printf("position of break: %d\n", kr_binarykey("break", keytab, 7));
	return(0);
}
