#include <stdio.h>
#include "../libkr.h"

int main(){
	int i = 10; //should be 1010
	printf("%d\n", kr_bitcount(i)); //return 2 bc two 1s in 1010 
	return(0);
}
